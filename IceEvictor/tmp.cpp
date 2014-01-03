// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `tmp.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <tmp.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __Demo__Printer__printString_name = "printString";

const ::std::string __Demo__Printer2__printString2_name = "printString2";

const ::std::string __Demo__Printer3__printString3_name = "printString3";

const ::std::string __Demo__Printf__vison_name = "vison";

}
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(::IceProxy::Demo::Printer* p) { return p; }

void
::IceProxy::Demo::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Printer>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Printer;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Demo::Printer::printString(const ::std::string& s, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Demo__Printer__printString_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::Printer* __del = dynamic_cast< ::IceDelegate::Demo::Printer*>(__delBase.get());
            __del->printString(s, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Demo::Printer::begin_printString(const ::std::string& s, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Demo__Printer__printString_name, __del, __cookie);
    try
    {
        __result->__prepare(__Demo__Printer__printString_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Demo::Printer::end_printString(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Demo__Printer__printString_name);
}

const ::std::string&
IceProxy::Demo::Printer::ice_staticId()
{
    return ::Demo::Printer::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::Printer::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::Printer);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::Printer::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::Printer);
}

::IceProxy::Ice::Object*
IceProxy::Demo::Printer::__newInstance() const
{
    return new Printer;
}
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(::IceProxy::Demo::Printer2* p) { return p; }

void
::IceProxy::Demo::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Printer2>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Printer2;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Demo::Printer2::printString2(const ::std::string& s, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Demo__Printer2__printString2_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::Printer2* __del = dynamic_cast< ::IceDelegate::Demo::Printer2*>(__delBase.get());
            __del->printString2(s, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Demo::Printer2::begin_printString2(const ::std::string& s, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Demo__Printer2__printString2_name, __del, __cookie);
    try
    {
        __result->__prepare(__Demo__Printer2__printString2_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Demo::Printer2::end_printString2(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Demo__Printer2__printString2_name);
}

const ::std::string&
IceProxy::Demo::Printer2::ice_staticId()
{
    return ::Demo::Printer2::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::Printer2::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::Printer2);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::Printer2::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::Printer2);
}

::IceProxy::Ice::Object*
IceProxy::Demo::Printer2::__newInstance() const
{
    return new Printer2;
}
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(::IceProxy::Demo::Printer3* p) { return p; }

void
::IceProxy::Demo::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Printer3>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Printer3;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Demo::Printer3::printString3(const ::std::string& s, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Demo__Printer3__printString3_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::Printer3* __del = dynamic_cast< ::IceDelegate::Demo::Printer3*>(__delBase.get());
            __del->printString3(s, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Demo::Printer3::begin_printString3(const ::std::string& s, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Demo__Printer3__printString3_name, __del, __cookie);
    try
    {
        __result->__prepare(__Demo__Printer3__printString3_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Demo::Printer3::end_printString3(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Demo__Printer3__printString3_name);
}

const ::std::string&
IceProxy::Demo::Printer3::ice_staticId()
{
    return ::Demo::Printer3::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::Printer3::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::Printer3);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::Printer3::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::Printer3);
}

::IceProxy::Ice::Object*
IceProxy::Demo::Printer3::__newInstance() const
{
    return new Printer3;
}
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(::IceProxy::Demo::Printf* p) { return p; }

void
::IceProxy::Demo::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Printf>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Printf;
        v->__copyFrom(proxy);
    }
}

::std::string
IceProxy::Demo::Printf::vison(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Demo__Printf__vison_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Demo__Printf__vison_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Demo::Printf* __del = dynamic_cast< ::IceDelegate::Demo::Printf*>(__delBase.get());
            return __del->vison(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Demo::Printf::begin_vison(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Demo__Printf__vison_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Demo__Printf__vison_name, __del, __cookie);
    try
    {
        __result->__prepare(__Demo__Printf__vison_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::std::string
IceProxy::Demo::Printf::end_vison(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Demo__Printf__vison_name);
    ::std::string __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::Demo::Printf::ice_staticId()
{
    return ::Demo::Printf::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::Printf::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::Printf);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::Printf::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::Printf);
}

::IceProxy::Ice::Object*
IceProxy::Demo::Printf::__newInstance() const
{
    return new Printf;
}

void
IceDelegateM::Demo::Printer::printString(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__Printer__printString_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::Demo::Printer2::printString2(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__Printer2__printString2_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::Demo::Printer3::printString3(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__Printer3__printString3_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(s);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::std::string
IceDelegateM::Demo::Printf::vison(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Demo__Printf__vison_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::std::string __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateD::Demo::Printer::printString(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_s, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_s(__p_s)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::Printer* servant = dynamic_cast< ::Demo::Printer*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->printString(_m_s, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_s;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__Printer__printString_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(s, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Demo::Printer2::printString2(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_s, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_s(__p_s)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::Printer2* servant = dynamic_cast< ::Demo::Printer2*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->printString2(_m_s, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_s;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__Printer2__printString2_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(s, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Demo::Printer3::printString3(const ::std::string& s, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_s, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_s(__p_s)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::Printer3* servant = dynamic_cast< ::Demo::Printer3*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->printString3(_m_s, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_s;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__Printer3__printString3_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(s, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::std::string
IceDelegateD::Demo::Printf::vison(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Demo::Printf* servant = dynamic_cast< ::Demo::Printf*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->vison(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Demo__Printf__vison_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* Demo::upCast(::Demo::Printer* p) { return p; }

namespace
{
const ::std::string __Demo__Printer_ids[2] =
{
    "::Demo::Printer",
    "::Ice::Object"
};

}

bool
Demo::Printer::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Printer_ids, __Demo__Printer_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Printer::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Printer_ids[0], &__Demo__Printer_ids[2]);
}

const ::std::string&
Demo::Printer::ice_id(const ::Ice::Current&) const
{
    return __Demo__Printer_ids[0];
}

const ::std::string&
Demo::Printer::ice_staticId()
{
    return __Demo__Printer_ids[0];
}

::Ice::DispatchStatus
Demo::Printer::___printString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string s;
    __is->read(s);
    __inS.endReadParams();
    printString(s, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Demo__Printer_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString"
};

}

::Ice::DispatchStatus
Demo::Printer::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Demo__Printer_all, __Demo__Printer_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Printer_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___printString(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::Printer::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Demo::Printer::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Demo::__patch(PrinterPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Demo::PrinterPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Demo::Printer::ice_staticId(), v);
    }
}

::Ice::Object* Demo::upCast(::Demo::Printer2* p) { return p; }

namespace
{
const ::std::string __Demo__Printer2_ids[2] =
{
    "::Demo::Printer2",
    "::Ice::Object"
};

}

bool
Demo::Printer2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Printer2_ids, __Demo__Printer2_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Printer2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Printer2_ids[0], &__Demo__Printer2_ids[2]);
}

const ::std::string&
Demo::Printer2::ice_id(const ::Ice::Current&) const
{
    return __Demo__Printer2_ids[0];
}

const ::std::string&
Demo::Printer2::ice_staticId()
{
    return __Demo__Printer2_ids[0];
}

::Ice::DispatchStatus
Demo::Printer2::___printString2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string s;
    __is->read(s);
    __inS.endReadParams();
    printString2(s, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Demo__Printer2_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString2"
};

}

::Ice::DispatchStatus
Demo::Printer2::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Demo__Printer2_all, __Demo__Printer2_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Printer2_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___printString2(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::Printer2::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Demo::Printer2::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Demo::__patch(Printer2Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Demo::Printer2Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Demo::Printer2::ice_staticId(), v);
    }
}

::Ice::Object* Demo::upCast(::Demo::Printer3* p) { return p; }

namespace
{
const ::std::string __Demo__Printer3_ids[4] =
{
    "::Demo::Printer",
    "::Demo::Printer2",
    "::Demo::Printer3",
    "::Ice::Object"
};

}

bool
Demo::Printer3::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Printer3_ids, __Demo__Printer3_ids + 4, _s);
}

::std::vector< ::std::string>
Demo::Printer3::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Printer3_ids[0], &__Demo__Printer3_ids[4]);
}

const ::std::string&
Demo::Printer3::ice_id(const ::Ice::Current&) const
{
    return __Demo__Printer3_ids[2];
}

const ::std::string&
Demo::Printer3::ice_staticId()
{
    return __Demo__Printer3_ids[2];
}

::Ice::DispatchStatus
Demo::Printer3::___printString3(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string s;
    __is->read(s);
    __inS.endReadParams();
    printString3(s, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Demo__Printer3_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString",
    "printString2",
    "printString3"
};

}

::Ice::DispatchStatus
Demo::Printer3::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Demo__Printer3_all, __Demo__Printer3_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Printer3_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___printString(in, current);
        }
        case 5:
        {
            return ___printString2(in, current);
        }
        case 6:
        {
            return ___printString3(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::Printer3::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Demo::Printer3::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Demo::__patch(Printer3Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Demo::Printer3Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Demo::Printer3::ice_staticId(), v);
    }
}

::Ice::Object* Demo::upCast(::Demo::Printf* p) { return p; }
::Ice::ObjectPtr
Demo::Printf::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

namespace
{
const ::std::string __Demo__Printf_ids[2] =
{
    "::Demo::Printf",
    "::Ice::Object"
};

}

bool
Demo::Printf::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Printf_ids, __Demo__Printf_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Printf::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Printf_ids[0], &__Demo__Printf_ids[2]);
}

const ::std::string&
Demo::Printf::ice_id(const ::Ice::Current&) const
{
    return __Demo__Printf_ids[0];
}

const ::std::string&
Demo::Printf::ice_staticId()
{
    return __Demo__Printf_ids[0];
}

void
Demo::Printf::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
Demo::Printf::__usesGC()
{
    return true;
}

void
Demo::Printf::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(prt1)
    {
        ::Demo::upCast(prt1.get())->__addObject(_c);
    }
    if(ptr2)
    {
        ::Demo::upCast(ptr2.get())->__addObject(_c);
    }
}

void
Demo::Printf::__gcClear()
{
    if(prt1)
    {
        if(::Demo::upCast(prt1.get())->__usesGC())
        {
            ::Demo::upCast(prt1.get())->__decRefUnsafe();
            prt1.__clearHandleUnsafe();
        }
        else
        {
            prt1 = 0;
        }
    }
    if(ptr2)
    {
        if(::Demo::upCast(ptr2.get())->__usesGC())
        {
            ::Demo::upCast(ptr2.get())->__decRefUnsafe();
            ptr2.__clearHandleUnsafe();
        }
        else
        {
            ptr2 = 0;
        }
    }
}

::Ice::DispatchStatus
Demo::Printf::___vison(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::std::string __ret = vison(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Demo__Printf_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "vison"
};

}

::Ice::DispatchStatus
Demo::Printf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Demo__Printf_all, __Demo__Printf_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Demo__Printf_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___vison(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Demo::Printf::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(prt1);
    __os->write(ptr2);
    __os->endWriteSlice();
}

void
Demo::Printf::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(prt1);
    __is->read(ptr2);
    __is->endReadSlice();
}

void 
Demo::__patch(PrintfPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Demo::PrintfPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Demo::Printf::ice_staticId(), v);
    }
}
