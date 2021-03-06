/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.algorithm.LRUMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_DECL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Long; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { namespace Map_ { class Entry; } } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace algorithm { namespace LRUMap_ { class OnClearListener; } } } } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace algorithm { namespace LRUMap_ { class PreRemoveCallback; } } } } } }


#include <com/tencent/mm/algorithm/LRUMap.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace algorithm {

	class LRUMap;
	namespace LRUMap_ {

		class 1;
		class 1
			: public object<1>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit 1(jobject jobj)
			: object<1>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::Comparator>() const;


			jint compare(local_ref< java::util::Map_::Entry >  const&, local_ref< java::util::Map_::Entry >  const&);
			jint compare(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);

		}; //class 1

		class OnClearListener;
		class OnClearListener
			: public object<OnClearListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnClearListener(jobject jobj)
			: object<OnClearListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onClear(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		}; //class OnClearListener

		class PreRemoveCallback;
		class PreRemoveCallback
			: public object<PreRemoveCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit PreRemoveCallback(jobject jobj)
			: object<PreRemoveCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void preRemoveCallback(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		}; //class PreRemoveCallback

		class TimeVal;
		class TimeVal
			: public object<TimeVal>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit TimeVal(jobject jobj)
			: object<TimeVal>(jobj)
			, obj(jobj)
			, t(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			TimeVal(local_ref< com::tencent::mm::algorithm::LRUMap > const&, local_ref< java::lang::Object > const&);
			void UpTime();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > obj;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Long > > t;
		}; //class TimeVal

	} //namespace LRUMap_

	class LRUMap
		: public object<LRUMap>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef LRUMap_::1 1;
		typedef LRUMap_::OnClearListener OnClearListener;
		typedef LRUMap_::PreRemoveCallback PreRemoveCallback;
		typedef LRUMap_::TimeVal TimeVal;

		explicit LRUMap(jobject jobj)
		: object<LRUMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		LRUMap(jint);
		LRUMap(jint, local_ref< com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback > const&);
		jint size();
		void setMaxSize(jint);
		void setPerDeleteSize(jint);
		jboolean check(local_ref< java::lang::Object >  const&);
		jboolean checkAndUpTime(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getAndUptime(local_ref< java::lang::Object >  const&);
		void remove(local_ref< java::lang::Object >  const&);
		void clear();
		void clear(local_ref< com::tencent::mm::algorithm::LRUMap_::OnClearListener >  const&);
		void update(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);

	}; //class LRUMap

} //namespace algorithm
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_IMPL

namespace j2cpp {




com::tencent::mm::algorithm::LRUMap_::1::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::algorithm::LRUMap_::1::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}


jint com::tencent::mm::algorithm::LRUMap_::1::compare(local_ref< java::util::Map_::Entry > const &a0, local_ref< java::util::Map_::Entry > const &a1)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_METHOD_NAME(1),
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject(), a0, a1);
}

jint com::tencent::mm::algorithm::LRUMap_::1::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_METHOD_NAME(2),
		com::tencent::mm::algorithm::LRUMap_::1::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::LRUMap_::1,"com/tencent/mm/algorithm/LRUMap$1")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::1,0,"<init>","(Lcom/tencent/mm/algorithm/LRUMap;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::1,1,"compare","(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::1,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap_::1,0,"g","Lcom/tencent/mm/algorithm/LRUMap;")


com::tencent::mm::algorithm::LRUMap_::OnClearListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void com::tencent::mm::algorithm::LRUMap_::OnClearListener::onClear(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap_::OnClearListener::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::OnClearListener::J2CPP_METHOD_NAME(0),
		com::tencent::mm::algorithm::LRUMap_::OnClearListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::LRUMap_::OnClearListener,"com/tencent/mm/algorithm/LRUMap$OnClearListener")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::OnClearListener,0,"onClear","(Ljava/lang/Object;Ljava/lang/Object;)V")


com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback::preRemoveCallback(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback::J2CPP_METHOD_NAME(0),
		com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback,"com/tencent/mm/algorithm/LRUMap$PreRemoveCallback")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback,0,"preRemoveCallback","(Ljava/lang/Object;Ljava/lang/Object;)V")


com::tencent::mm::algorithm::LRUMap_::TimeVal::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::algorithm::LRUMap_::TimeVal::TimeVal(local_ref< com::tencent::mm::algorithm::LRUMap > const &a0, local_ref< java::lang::Object > const &a1)
: object<com::tencent::mm::algorithm::LRUMap_::TimeVal>(
	call_new_object<
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_METHOD_NAME(0),
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, obj(get_jobject())
, t(get_jobject())
{
}


void com::tencent::mm::algorithm::LRUMap_::TimeVal::UpTime()
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_METHOD_NAME(1),
		com::tencent::mm::algorithm::LRUMap_::TimeVal::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::LRUMap_::TimeVal,"com/tencent/mm/algorithm/LRUMap$TimeVal")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::TimeVal,0,"<init>","(Lcom/tencent/mm/algorithm/LRUMap;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap_::TimeVal,1,"UpTime","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap_::TimeVal,0,"obj","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap_::TimeVal,1,"t","Ljava/lang/Long;")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap_::TimeVal,2,"g","Lcom/tencent/mm/algorithm/LRUMap;")



com::tencent::mm::algorithm::LRUMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::algorithm::LRUMap::LRUMap(jint a0)
: object<com::tencent::mm::algorithm::LRUMap>(
	call_new_object<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(0),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



com::tencent::mm::algorithm::LRUMap::LRUMap(jint a0, local_ref< com::tencent::mm::algorithm::LRUMap_::PreRemoveCallback > const &a1)
: object<com::tencent::mm::algorithm::LRUMap>(
	call_new_object<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(1),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jint com::tencent::mm::algorithm::LRUMap::size()
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(2),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void com::tencent::mm::algorithm::LRUMap::setMaxSize(jint a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(3),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::algorithm::LRUMap::setPerDeleteSize(jint a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(4),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean com::tencent::mm::algorithm::LRUMap::check(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(5),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean com::tencent::mm::algorithm::LRUMap::checkAndUpTime(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(6),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > com::tencent::mm::algorithm::LRUMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(7),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > com::tencent::mm::algorithm::LRUMap::getAndUptime(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(8),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void com::tencent::mm::algorithm::LRUMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(9),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::algorithm::LRUMap::clear()
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(10),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}

void com::tencent::mm::algorithm::LRUMap::clear(local_ref< com::tencent::mm::algorithm::LRUMap_::OnClearListener > const &a0)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(11),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::algorithm::LRUMap::update(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		com::tencent::mm::algorithm::LRUMap::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_NAME(12),
		com::tencent::mm::algorithm::LRUMap::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::LRUMap,"com/tencent/mm/algorithm/LRUMap")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,1,"<init>","(ILcom/tencent/mm/algorithm/LRUMap$PreRemoveCallback;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,2,"size","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,3,"setMaxSize","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,4,"setPerDeleteSize","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,5,"check","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,6,"checkAndUpTime","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,8,"getAndUptime","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,9,"remove","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,10,"clear","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,11,"clear","(Lcom/tencent/mm/algorithm/LRUMap$OnClearListener;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::LRUMap,12,"update","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap,0,"c","Ljava/util/Map;")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap,1,"d","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap,2,"e","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::algorithm::LRUMap,3,"f","Lcom/tencent/mm/algorithm/LRUMap$PreRemoveCallback;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_LRUMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
