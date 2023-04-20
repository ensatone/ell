#include <hxcpp.h>

#ifndef INCLUDED_ELL
#include <ELL.h>
#endif
#ifndef INCLUDED_ELL_MAIN
#include <ELL_MAIN.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f645a0af2d0fdb36_352_main,"ELL","main",0xeadc5742,"ELL.main","ELL.hx",352,0x8b7375d9)

void ELL_obj::__construct() { }

Dynamic ELL_obj::__CreateEmpty() { return new ELL_obj; }

void *ELL_obj::_hx_vtable = 0;

Dynamic ELL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ELL_obj > _hx_result = new ELL_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ELL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ed8e299;
}

void ELL_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_f645a0af2d0fdb36_352_main)
HXLINE( 354)		 ::ELL_MAIN _ELL =  ::ELL_MAIN_obj::__alloc( HX_CTX ,null());
HXLINE( 355)		_ELL->_Lex();
HXLINE( 356)		_ELL->_Compile(0,_ELL->_hx___Script->length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ELL_obj,main,(void))


ELL_obj::ELL_obj()
{
}

bool ELL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ELL_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ELL_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ELL_obj::__mClass;

static ::String ELL_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	::String(null())
};

void ELL_obj::__register()
{
	ELL_obj _hx_dummy;
	ELL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ELL",05,9e,34,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ELL_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ELL_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ELL_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ELL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ELL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

