#ifndef INCLUDED_ELL_MAIN
#define INCLUDED_ELL_MAIN

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ELL_MAIN)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES ELL_MAIN_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ELL_MAIN_obj OBJ_;
		ELL_MAIN_obj();

	public:
		enum { _hx_ClassId = 0x67d07eb3 };

		void __construct(::String __o__fname);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ELL_MAIN")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ELL_MAIN"); }
		static ::hx::ObjectPtr< ELL_MAIN_obj > __new(::String __o__fname);
		static ::hx::ObjectPtr< ELL_MAIN_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o__fname);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ELL_MAIN_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ELL_MAIN",f3,8b,3f,0c); }

		::Array< ::Dynamic> _Arrays;
		::Array< ::Dynamic> _hx___Array;
		 ::haxe::ds::StringMap _Variables;
		 ::Dynamic _val;
		::Array< ::String > _Lvar;
		::String _Read_Script;
		::String _Vname;
		::Array< ::String > _Script;
		::Array< ::Dynamic> _hx___Script;
		bool _If_Value;
		::Array< int > _Stamps;
		 ::haxe::ds::IntMap _hx___Stamps;
		int _Pt;
		 ::haxe::ds::StringMap _Functions;
		::Array< ::Dynamic> _Func_Calls;
		::Array< ::String > removeItemAll(::Array< ::String > _Arr,::String _Value);
		::Dynamic removeItemAll_dyn();

		void _Lex();
		::Dynamic _Lex_dyn();

		 ::Dynamic _Array_Parse(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  _s);
		::Dynamic _Array_Parse_dyn();

		 ::Dynamic _Array_Parse_Set(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  _s);
		::Dynamic _Array_Parse_Set_dyn();

		 ::Dynamic _Array_Parse_Push(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  _s);
		::Dynamic _Array_Parse_Push_dyn();

		 ::Dynamic _Parse(int _b,::Array< ::String > _c);
		::Dynamic _Parse_dyn();

		void _Compile(int __s,int _hx___f);
		::Dynamic _Compile_dyn();

};


#endif /* INCLUDED_ELL_MAIN */ 
