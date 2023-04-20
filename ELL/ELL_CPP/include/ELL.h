#ifndef INCLUDED_ELL
#define INCLUDED_ELL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ELL)



class HXCPP_CLASS_ATTRIBUTES ELL_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ELL_obj OBJ_;
		ELL_obj();

	public:
		enum { _hx_ClassId = 0x7ed8e299 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ELL")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"ELL"); }

		inline static ::hx::ObjectPtr< ELL_obj > __new() {
			::hx::ObjectPtr< ELL_obj > __this = new ELL_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ELL_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ELL_obj *__this = (ELL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ELL_obj), false, "ELL"));
			*(void **)__this = ELL_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ELL_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ELL",05,9e,34,00); }

		static void main();
		static ::Dynamic main_dyn();

};


#endif /* INCLUDED_ELL */ 
