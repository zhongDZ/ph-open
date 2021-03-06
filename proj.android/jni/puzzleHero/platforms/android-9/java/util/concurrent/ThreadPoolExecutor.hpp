/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ThreadPoolExecutor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Executor; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ThreadFactory; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class AbstractExecutorService; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ExecutorService; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class RejectedExecutionHandler; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/List.hpp>
#include <java/util/concurrent/AbstractExecutorService.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/Executor.hpp>
#include <java/util/concurrent/ExecutorService.hpp>
#include <java/util/concurrent/RejectedExecutionHandler.hpp>
#include <java/util/concurrent/ThreadFactory.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ThreadPoolExecutor;
	namespace ThreadPoolExecutor_ {

		class AbortPolicy;
		class AbortPolicy
			: public object<AbortPolicy>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit AbortPolicy(jobject jobj)
			: object<AbortPolicy>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const;


			AbortPolicy();
			void rejectedExecution(local_ref< java::lang::Runnable >  const&, local_ref< java::util::concurrent::ThreadPoolExecutor >  const&);
		}; //class AbortPolicy

		class CallerRunsPolicy;
		class CallerRunsPolicy
			: public object<CallerRunsPolicy>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit CallerRunsPolicy(jobject jobj)
			: object<CallerRunsPolicy>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const;


			CallerRunsPolicy();
			void rejectedExecution(local_ref< java::lang::Runnable >  const&, local_ref< java::util::concurrent::ThreadPoolExecutor >  const&);
		}; //class CallerRunsPolicy

		class DiscardOldestPolicy;
		class DiscardOldestPolicy
			: public object<DiscardOldestPolicy>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit DiscardOldestPolicy(jobject jobj)
			: object<DiscardOldestPolicy>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const;


			DiscardOldestPolicy();
			void rejectedExecution(local_ref< java::lang::Runnable >  const&, local_ref< java::util::concurrent::ThreadPoolExecutor >  const&);
		}; //class DiscardOldestPolicy

		class DiscardPolicy;
		class DiscardPolicy
			: public object<DiscardPolicy>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit DiscardPolicy(jobject jobj)
			: object<DiscardPolicy>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const;


			DiscardPolicy();
			void rejectedExecution(local_ref< java::lang::Runnable >  const&, local_ref< java::util::concurrent::ThreadPoolExecutor >  const&);
		}; //class DiscardPolicy

	} //namespace ThreadPoolExecutor_

	class ThreadPoolExecutor
		: public object<ThreadPoolExecutor>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)

		typedef ThreadPoolExecutor_::AbortPolicy AbortPolicy;
		typedef ThreadPoolExecutor_::CallerRunsPolicy CallerRunsPolicy;
		typedef ThreadPoolExecutor_::DiscardOldestPolicy DiscardOldestPolicy;
		typedef ThreadPoolExecutor_::DiscardPolicy DiscardPolicy;

		explicit ThreadPoolExecutor(jobject jobj)
		: object<ThreadPoolExecutor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::concurrent::Executor>() const;
		operator local_ref<java::util::concurrent::AbstractExecutorService>() const;
		operator local_ref<java::util::concurrent::ExecutorService>() const;


		ThreadPoolExecutor(jint, jint, jlong, local_ref< java::util::concurrent::TimeUnit > const&, local_ref< java::util::concurrent::BlockingQueue > const&);
		ThreadPoolExecutor(jint, jint, jlong, local_ref< java::util::concurrent::TimeUnit > const&, local_ref< java::util::concurrent::BlockingQueue > const&, local_ref< java::util::concurrent::ThreadFactory > const&);
		ThreadPoolExecutor(jint, jint, jlong, local_ref< java::util::concurrent::TimeUnit > const&, local_ref< java::util::concurrent::BlockingQueue > const&, local_ref< java::util::concurrent::RejectedExecutionHandler > const&);
		ThreadPoolExecutor(jint, jint, jlong, local_ref< java::util::concurrent::TimeUnit > const&, local_ref< java::util::concurrent::BlockingQueue > const&, local_ref< java::util::concurrent::ThreadFactory > const&, local_ref< java::util::concurrent::RejectedExecutionHandler > const&);
		void execute(local_ref< java::lang::Runnable >  const&);
		void shutdown();
		local_ref< java::util::List > shutdownNow();
		jboolean isShutdown();
		jboolean isTerminating();
		jboolean isTerminated();
		jboolean awaitTermination(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void setThreadFactory(local_ref< java::util::concurrent::ThreadFactory >  const&);
		local_ref< java::util::concurrent::ThreadFactory > getThreadFactory();
		void setRejectedExecutionHandler(local_ref< java::util::concurrent::RejectedExecutionHandler >  const&);
		local_ref< java::util::concurrent::RejectedExecutionHandler > getRejectedExecutionHandler();
		void setCorePoolSize(jint);
		jint getCorePoolSize();
		jboolean prestartCoreThread();
		jint prestartAllCoreThreads();
		jboolean allowsCoreThreadTimeOut();
		void allowCoreThreadTimeOut(jboolean);
		void setMaximumPoolSize(jint);
		jint getMaximumPoolSize();
		void setKeepAliveTime(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jlong getKeepAliveTime(local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::BlockingQueue > getQueue();
		jboolean remove(local_ref< java::lang::Runnable >  const&);
		void purge();
		jint getPoolSize();
		jint getActiveCount();
		jint getLargestPoolSize();
		jlong getTaskCount();
		jlong getCompletedTaskCount();
	}; //class ThreadPoolExecutor

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_IMPL

namespace j2cpp {




java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const
{
	return local_ref<java::util::concurrent::RejectedExecutionHandler>(get_jobject());
}


java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::AbortPolicy()
: object<java::util::concurrent::ThreadPoolExecutor_::AbortPolicy>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ThreadPoolExecutor_::AbortPolicy::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadPoolExecutor_::AbortPolicy,"java/util/concurrent/ThreadPoolExecutor$AbortPolicy")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::AbortPolicy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::AbortPolicy,1,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")


java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const
{
	return local_ref<java::util::concurrent::RejectedExecutionHandler>(get_jobject());
}


java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::CallerRunsPolicy()
: object<java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy,"java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::CallerRunsPolicy,1,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")


java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const
{
	return local_ref<java::util::concurrent::RejectedExecutionHandler>(get_jobject());
}


java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::DiscardOldestPolicy()
: object<java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy,"java/util/concurrent/ThreadPoolExecutor$DiscardOldestPolicy")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::DiscardOldestPolicy,1,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")


java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::operator local_ref<java::util::concurrent::RejectedExecutionHandler>() const
{
	return local_ref<java::util::concurrent::RejectedExecutionHandler>(get_jobject());
}


java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::DiscardPolicy()
: object<java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy,"java/util/concurrent/ThreadPoolExecutor$DiscardPolicy")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor_::DiscardPolicy,1,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")



java::util::concurrent::ThreadPoolExecutor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor::operator local_ref<java::util::concurrent::Executor>() const
{
	return local_ref<java::util::concurrent::Executor>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor::operator local_ref<java::util::concurrent::AbstractExecutorService>() const
{
	return local_ref<java::util::concurrent::AbstractExecutorService>(get_jobject());
}

java::util::concurrent::ThreadPoolExecutor::operator local_ref<java::util::concurrent::ExecutorService>() const
{
	return local_ref<java::util::concurrent::ExecutorService>(get_jobject());
}


java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(jint a0, jint a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3, local_ref< java::util::concurrent::BlockingQueue > const &a4)
: object<java::util::concurrent::ThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4)
)
{
}



java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(jint a0, jint a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3, local_ref< java::util::concurrent::BlockingQueue > const &a4, local_ref< java::util::concurrent::ThreadFactory > const &a5)
: object<java::util::concurrent::ThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4, a5)
)
{
}



java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(jint a0, jint a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3, local_ref< java::util::concurrent::BlockingQueue > const &a4, local_ref< java::util::concurrent::RejectedExecutionHandler > const &a5)
: object<java::util::concurrent::ThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2, a3, a4, a5)
)
{
}



java::util::concurrent::ThreadPoolExecutor::ThreadPoolExecutor(jint a0, jint a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3, local_ref< java::util::concurrent::BlockingQueue > const &a4, local_ref< java::util::concurrent::ThreadFactory > const &a5, local_ref< java::util::concurrent::RejectedExecutionHandler > const &a6)
: object<java::util::concurrent::ThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2, a3, a4, a5, a6)
)
{
}


void java::util::concurrent::ThreadPoolExecutor::execute(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(4),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void java::util::concurrent::ThreadPoolExecutor::shutdown()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(5),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< java::util::List > java::util::concurrent::ThreadPoolExecutor::shutdownNow()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::List >
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::isShutdown()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::isTerminating()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::isTerminated()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::awaitTermination(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(10),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1);
}


void java::util::concurrent::ThreadPoolExecutor::setThreadFactory(local_ref< java::util::concurrent::ThreadFactory > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(12),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::ThreadFactory > java::util::concurrent::ThreadPoolExecutor::getThreadFactory()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(13),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::concurrent::ThreadFactory >
	>(get_jobject());
}

void java::util::concurrent::ThreadPoolExecutor::setRejectedExecutionHandler(local_ref< java::util::concurrent::RejectedExecutionHandler > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(14),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::RejectedExecutionHandler > java::util::concurrent::ThreadPoolExecutor::getRejectedExecutionHandler()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(15),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::util::concurrent::RejectedExecutionHandler >
	>(get_jobject());
}

void java::util::concurrent::ThreadPoolExecutor::setCorePoolSize(jint a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(16),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

jint java::util::concurrent::ThreadPoolExecutor::getCorePoolSize()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(17),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::prestartCoreThread()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(18),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject());
}

jint java::util::concurrent::ThreadPoolExecutor::prestartAllCoreThreads()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(19),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::allowsCoreThreadTimeOut()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(20),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject());
}

void java::util::concurrent::ThreadPoolExecutor::allowCoreThreadTimeOut(jboolean a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(21),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

void java::util::concurrent::ThreadPoolExecutor::setMaximumPoolSize(jint a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(22),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

jint java::util::concurrent::ThreadPoolExecutor::getMaximumPoolSize()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(23),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject());
}

void java::util::concurrent::ThreadPoolExecutor::setKeepAliveTime(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(24),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1);
}

jlong java::util::concurrent::ThreadPoolExecutor::getKeepAliveTime(local_ref< java::util::concurrent::TimeUnit > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(25),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(25), 
		jlong
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::BlockingQueue > java::util::concurrent::ThreadPoolExecutor::getQueue()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(26),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::util::concurrent::BlockingQueue >
	>(get_jobject());
}

jboolean java::util::concurrent::ThreadPoolExecutor::remove(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(27),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::concurrent::ThreadPoolExecutor::purge()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(28),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject());
}

jint java::util::concurrent::ThreadPoolExecutor::getPoolSize()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(29),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject());
}

jint java::util::concurrent::ThreadPoolExecutor::getActiveCount()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(30),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject());
}

jint java::util::concurrent::ThreadPoolExecutor::getLargestPoolSize()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(31),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(31), 
		jint
	>(get_jobject());
}

jlong java::util::concurrent::ThreadPoolExecutor::getTaskCount()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(32),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(32), 
		jlong
	>(get_jobject());
}

jlong java::util::concurrent::ThreadPoolExecutor::getCompletedTaskCount()
{
	return call_method<
		java::util::concurrent::ThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_NAME(33),
		java::util::concurrent::ThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(33), 
		jlong
	>(get_jobject());
}





J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadPoolExecutor,"java/util/concurrent/ThreadPoolExecutor")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,0,"<init>","(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,1,"<init>","(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,2,"<init>","(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,3,"<init>","(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,4,"execute","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,5,"shutdown","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,6,"shutdownNow","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,7,"isShutdown","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,8,"isTerminating","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,9,"isTerminated","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,10,"awaitTermination","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,11,"finalize","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,12,"setThreadFactory","(Ljava/util/concurrent/ThreadFactory;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,13,"getThreadFactory","()Ljava/util/concurrent/ThreadFactory;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,14,"setRejectedExecutionHandler","(Ljava/util/concurrent/RejectedExecutionHandler;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,15,"getRejectedExecutionHandler","()Ljava/util/concurrent/RejectedExecutionHandler;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,16,"setCorePoolSize","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,17,"getCorePoolSize","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,18,"prestartCoreThread","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,19,"prestartAllCoreThreads","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,20,"allowsCoreThreadTimeOut","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,21,"allowCoreThreadTimeOut","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,22,"setMaximumPoolSize","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,23,"getMaximumPoolSize","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,24,"setKeepAliveTime","(JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,25,"getKeepAliveTime","(Ljava/util/concurrent/TimeUnit;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,26,"getQueue","()Ljava/util/concurrent/BlockingQueue;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,27,"remove","(Ljava/lang/Runnable;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,28,"purge","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,29,"getPoolSize","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,30,"getActiveCount","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,31,"getLargestPoolSize","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,32,"getTaskCount","()J")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,33,"getCompletedTaskCount","()J")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,34,"beforeExecute","(Ljava/lang/Thread;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,35,"afterExecute","(Ljava/lang/Runnable;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadPoolExecutor,36,"terminated","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
