
#include "store/CCStore.h"

#import "platform/ios/CCStore_objc.h"

#if CC_LUA_ENGINE_ENABLED > 0
extern "C" {
#include "lua.h"
#include "tolua_fix.h"
}
#endif

NS_CC_EXT_BEGIN

CCStore* CCStore::s_sharedStore = NULL;

CCStore* CCStore::sharedStore(void)
{
    if (!s_sharedStore)
    {
        s_sharedStore = new CCStore();
        s_sharedStore->init();
    }
    return s_sharedStore;
}

CCStore::~CCStore(void)
{
#if CC_LUA_ENGINE_ENABLED > 0
    if (m_listener)
    {
        CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_listener);
    }
#endif
    for (CCStorePaymentTransactionsIterator it = m_transactions.begin(); it != m_transactions.end(); ++it)
    {
        it->second->release();
    }
}

bool CCStore::init(void)
{
    return true;
}

void CCStore::purgeSharedStore(void)
{
    [CCStore_objc purgeSharedStore];
    if (s_sharedStore)
    {
        delete s_sharedStore;
        s_sharedStore = NULL;
    }
}

void CCStore::postInitWithTransactionObserver(CCStoreTransactionObserver* observer)
{
    m_observer = observer;
    [[CCStore_objc sharedStore] postInitWithTransactionObserver:this];
}

#if CC_LUA_ENGINE_ENABLED > 0
void CCStore::postInitWithTransactionListenerLua(LUA_FUNCTION listener)
{
    if (m_listener)
    {
        CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_listener);
    }
    m_listener = listener;
    [[CCStore_objc sharedStore] postInitWithTransactionObserver:this];
}
#endif

bool CCStore::canMakePurchases(void)
{
    return [[CCStore_objc sharedStore] canMakePurchases];
}

void CCStore::loadProducts(CCArray* productsId, CCStoreProductsRequestDelegate* delegate)
{
    NSMutableSet* set = [NSMutableSet set];
    for (int i = 0; i < productsId->count(); ++i)
    {
        CCString* productId = static_cast<CCString*>(productsId->objectAtIndex(i));
        [set addObject:[NSString stringWithUTF8String: productId->m_sString.c_str()]];
    }
    [[CCStore_objc sharedStore] requestProductData:set andDelegate:delegate];
}

#if CC_LUA_ENGINE_ENABLED > 0
void CCStore::loadProductsLua(LUA_TABLE __LUA_TABLE__, LUA_FUNCTION callback)
{
    CC_UNUSED_PARAM(__LUA_TABLE__);
    if (m_isLoadProductsLuaNotCompleted) return;
    
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    lua_State* L = engine->getLuaState();
    if (!lua_isfunction(L, -1) || !lua_istable(L, -2)) return;
    
    NSMutableSet* set = [NSMutableSet set];
    
    /* L: this table function */
    
    lua_pushnil(L);                             /* L: this table function query_key */
    /* lua_next() remove 'query_key', push 'next_key' */
    while (lua_next(L, -3) != 0)                /* L: this table function next_key value */
    {
        if (lua_isstring(L, -1))
        {
            const char* productId = lua_tostring(L, -1);
            if (productId)
            {
                [set addObject:[NSString stringWithUTF8String:productId]];
            }
        }
        /* removes 'value'; keeps 'key' for next iteration */
        lua_pop(L, 1);                          /* this table function next_key */
    }
    
    lua_pop(L, 1);                              /* this table function */
    
    m_isLoadProductsLuaNotCompleted = true;
    m_loadProductsCallback = callback;
    [[CCStore_objc sharedStore] requestProductData:set andDelegate:this];
}
#endif

void CCStore::cancelLoadProducts(void)
{
    [[CCStore_objc sharedStore] cancelRequestProductData];
}

bool CCStore::isProductLoaded(const char* productId)
{
    if (!productId) return false;
    return [[CCStore_objc sharedStore] isProductLoaded:[NSString stringWithUTF8String:productId]];
}

bool CCStore::purchase(const char* productId)
{
    if (!productId) return false;
    SKProduct *product = [[CCStore_objc sharedStore] getProduct:[NSString stringWithUTF8String:productId]];
    if (product)
    {
        [[CCStore_objc sharedStore] purchase:product];
        return true;
    }
    return false;
}

void CCStore::finishTransaction(CCStorePaymentTransaction *transaction)
{
    CCStorePaymentTransactionWrapper* wrapper = transaction->getTransactionWrapper();
    [[CCStore_objc sharedStore] finishTransaction:(SKPaymentTransaction *)wrapper->getTransactionObj()];
    CCStorePaymentTransactionsIterator it = m_transactions.find(transaction->getTransactionIdentifier());
    if (it != m_transactions.end())
    {
        it->second->release();
        m_transactions.erase(it);
    }
}

#if CC_LUA_ENGINE_ENABLED > 0
void CCStore::finishTransactionLua(const char* transactionIdentifier)
{
    for (CCStorePaymentTransactionsIterator it = m_transactions.begin(); it != m_transactions.end(); ++it)
    {
        CCLOG("[CCStore] finishTransactionLua() exists tid: %s", it->first.c_str());
    }
    
    CCStorePaymentTransactionsIterator it = m_transactions.find(transactionIdentifier);
    if (it != m_transactions.end())
    {
        finishTransaction(it->second);
    }
    else
    {
        CCLOG("[CCStore] ERR, finishTransactionLua() invalid tid: %s", transactionIdentifier);
    }
}
#endif

#if 0

CCStoreReceiptVerifyMode CCStore::getReceiptVerifyMode(void)
{
    return [CCStore_objc sharedStore].receiptVerifyMode;
}

void CCStore::setReceiptVerifyMode(CCStoreReceiptVerifyMode mode, CCStoreIsSandbox isSandbox)
{
    [CCStore_objc sharedStore].receiptVerifyMode = mode;
    [CCStore_objc sharedStore].isSandbox = isSandbox;
}

const char* CCStore::getReceiptVerifyServerUrl(void)
{
    return [[CCStore_objc sharedStore].receiptVerifyServerUrl cStringUsingEncoding:NSUTF8StringEncoding];
}

void CCStore::setReceiptVerifyServerUrl(const char* url)
{
    [CCStore_objc sharedStore].receiptVerifyServerUrl = [NSString stringWithUTF8String:url];
}

#endif

#pragma mark -
#pragma mark delegates

void CCStore::transactionCompleted(CCStorePaymentTransaction* transaction)
{
    m_transactions[transaction->getTransactionIdentifier()] = transaction;
    transaction->retain();
    
    if (m_observer)
    {
        m_observer->transactionCompleted(transaction);
    }
#if CC_LUA_ENGINE_ENABLED > 0
    if (m_listener)
    {
        passCCStorePaymentTransactionToLuaListener(transaction);
    }
#endif
}

void CCStore::transactionFailed(CCStorePaymentTransaction* transaction)
{
    m_transactions[transaction->getTransactionIdentifier()] = transaction;
    transaction->retain();
    
    if (m_observer)
    {
        m_observer->transactionFailed(transaction);
    }
#if CC_LUA_ENGINE_ENABLED > 0
    if (m_listener)
    {
        passCCStorePaymentTransactionToLuaListener(transaction);
    }
#endif
}

void CCStore::transactionRestored(CCStorePaymentTransaction* transaction)
{
    m_transactions[transaction->getTransactionIdentifier()] = transaction;
    transaction->retain();
    
    if (m_observer)
    {
        m_observer->transactionRestored(transaction);
    }
#if CC_LUA_ENGINE_ENABLED > 0
    if (m_listener)
    {
        passCCStorePaymentTransactionToLuaListener(transaction);
    }
#endif
}

#if CC_LUA_ENGINE_ENABLED > 0
void CCStore::requestProductsCompleted(CCArray* products, CCArray* invalidProductsId)
{
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    
    CCLuaValueDict event;
    CCLuaValueArray products_;
    
    for (int i = 0; i < products->count(); ++i)
    {
        CCStoreProduct* product = static_cast<CCStoreProduct*>(products->objectAtIndex(i));
        CCLuaValueDict product_;
        product_["productIdentifier"]    = CCLuaValue::stringValue(product->getProductIdentifier());
        product_["localizedTitle"]       = CCLuaValue::stringValue(product->getLocalizedTitle());
        product_["localizedDescription"] = CCLuaValue::stringValue(product->getLocalizedDescription());
        product_["priceLocale"]          = CCLuaValue::stringValue(product->getPriceLocale());
        product_["price"]                = CCLuaValue::floatValue(product->getPrice());
        products_.push_back(CCLuaValue::dictValue(product_));
    }
    event["products"] = CCLuaValue::arrayValue(products_);
    
    if (invalidProductsId)
    {
        CCLuaValueArray invalidProductsId_;
        for (int i = 0; i < invalidProductsId->count(); ++i)
        {
            CCString* ccid = static_cast<CCString*>(invalidProductsId->objectAtIndex(i));
            invalidProductsId_.push_back(CCLuaValue::stringValue(ccid->getCString()));
        }            
        event["invalidProductsId"] = CCLuaValue::arrayValue(invalidProductsId_);
    }
    
    engine->pushCCLuaValueDict(event);
    engine->executeFunctionByHandler(m_loadProductsCallback, 1);
    
    m_loadProductsCallback = 0;
    m_isLoadProductsLuaNotCompleted = false;
}

void CCStore::requestProductsFailed(int errorCode, const char* errorString)
{
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    
    CCLuaValueDict event;
    event["errorCode"] = CCLuaValue::intValue(errorCode);
    event["errorString"] = CCLuaValue::stringValue(errorString);
    
    engine->pushCCLuaValueDict(event);
    engine->executeFunctionByHandler(m_loadProductsCallback, 1);
    
    m_loadProductsCallback = 0;
    m_isLoadProductsLuaNotCompleted = false;
}
#endif

#pragma mark -
#pragma mark helper

#if CC_LUA_ENGINE_ENABLED > 0
void CCStore::passCCStorePaymentTransactionToLuaListener(CCStorePaymentTransaction* transaction)
{
    CCLuaEngine* engine = CCLuaEngine::defaultEngine();
    
    CCLuaValueDict event;
    event["transaction"] = CCLuaValue::dictValue(transaction->convertToLuaTable());
    
    engine->pushCCLuaValueDict(event);
    engine->executeFunctionByHandler(m_listener, 1);
}
#endif

NS_CC_EXT_END
