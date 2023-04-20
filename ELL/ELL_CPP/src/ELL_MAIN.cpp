#include <hxcpp.h>

#ifndef INCLUDED_ELL_MAIN
#include <ELL_MAIN.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a9bd868b7d02932_10_new,"ELL_MAIN","new",0x537ba265,"ELL_MAIN.new","ELL.hx",10,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_44_removeItemAll,"ELL_MAIN","removeItemAll",0x1a5ee02f,"ELL_MAIN.removeItemAll","ELL.hx",44,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_55__Lex,"ELL_MAIN","_Lex",0xaeb53b1b,"ELL_MAIN._Lex","ELL.hx",55,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_67__Array_Parse,"ELL_MAIN","_Array_Parse",0xb71bf8e9,"ELL_MAIN._Array_Parse","ELL.hx",67,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_76__Array_Parse_Set,"ELL_MAIN","_Array_Parse_Set",0xa7dfb9ec,"ELL_MAIN._Array_Parse_Set","ELL.hx",76,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_85__Array_Parse_Push,"ELL_MAIN","_Array_Parse_Push",0x39f37450,"ELL_MAIN._Array_Parse_Push","ELL.hx",85,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_98__Parse,"ELL_MAIN","_Parse",0xfdbfc66f,"ELL_MAIN._Parse","ELL.hx",98,0x8b7375d9)
HX_LOCAL_STACK_FRAME(_hx_pos_8a9bd868b7d02932_246__Compile,"ELL_MAIN","_Compile",0x5b8062af,"ELL_MAIN._Compile","ELL.hx",246,0x8b7375d9)
static const ::String _hx_array_data_0c3f8bf3_22[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_23[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_24[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_25[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_26[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_27[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_0c3f8bf3_28[] = {
	HX_(",",2c,00,00,00),HX_("or",23,61,00,00),HX_("and",d7,fa,49,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_("<>",82,34,00,00),HX_("=",3d,00,00,00),HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};

void ELL_MAIN_obj::__construct(::String __o__fname){
            		::String _fname = __o__fname;
            		if (::hx::IsNull(__o__fname)) _fname = HX_("main.ell",70,1b,5e,8c);
            	HX_GC_STACKFRAME(&_hx_pos_8a9bd868b7d02932_10_new)
HXLINE(  25)		this->_Func_Calls = ::Array_obj< ::Dynamic>::__new();
HXLINE(  24)		this->_Functions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  23)		this->_Pt = 0;
HXLINE(  22)		this->_hx___Stamps =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  21)		this->_Stamps = ::Array_obj< int >::__new();
HXLINE(  20)		this->_If_Value = false;
HXLINE(  19)		this->_hx___Script = ::Array_obj< ::Dynamic>::__new();
HXLINE(  18)		this->_Script = ::Array_obj< ::String >::__new();
HXLINE(  13)		this->_Variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->_hx___Array = ::Array_obj< ::Dynamic>::__new();
HXLINE(  11)		this->_Arrays = ::Array_obj< ::Dynamic>::__new();
HXLINE(  27)		{
HXLINE(  27)			 ::Dynamic v =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            				->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            				->setFixed(2,HX_("_Bool",29,cc,05,df),false));
HXDLIN(  27)			this->_Variables->set(HX_("@break",7f,3c,c3,4f),v);
            		}
HXLINE(  28)		this->_Arrays->push(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("_Array",ba,24,a4,b4),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            				->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            				->setFixed(2,HX_("_Bool",29,cc,05,df),false))))));
HXLINE(  29)		this->_Read_Script = ::sys::io::File_obj::getContent(_fname);
HXLINE(  30)		this->_Script = this->_Read_Script.split(HX_("\r\n",5d,0b,00,00))->join(HX_(" ",20,00,00,00)).split(HX_(";",3b,00,00,00))->join(HX_(" ",20,00,00,00)).split(HX_("\n",0a,00,00,00))->join(HX_(" ",20,00,00,00)).split(HX_(" ",20,00,00,00));
HXLINE(  31)		this->_Script = this->removeItemAll(this->_Script,HX_("",00,00,00,00));
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::String > _g1 = this->_Script;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				::String _s = _g1->__get(_g);
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  33)				if ((_s == HX_("~{",3d,6e,00,00))) {
HXLINE(  34)					this->_hx___Script->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            						->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("{",7b,00,00,00))
            						->setFixed(2,HX_("_Bool",29,cc,05,df),false)));
HXLINE(  35)					this->_hx___Script->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            						->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("a",61,00,00,00))
            						->setFixed(2,HX_("_Bool",29,cc,05,df),false)));
HXLINE(  36)					this->_hx___Script->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            						->setFixed(1,HX_("_String",90,ae,3b,b4),HX_(",",2c,00,00,00))
            						->setFixed(2,HX_("_Bool",29,cc,05,df),false)));
            				}
            				else {
HXLINE(  38)					this->_hx___Script->push( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            						->setFixed(1,HX_("_String",90,ae,3b,b4),_s)
            						->setFixed(2,HX_("_Bool",29,cc,05,df),false)));
            				}
            			}
            		}
HXLINE(  41)		this->_hx___Script->push( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            			->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            			->setFixed(2,HX_("_Bool",29,cc,05,df),false)));
HXLINE(  42)		this->_Script = ::Array_obj< ::String >::__new(0);
            	}

Dynamic ELL_MAIN_obj::__CreateEmpty() { return new ELL_MAIN_obj; }

void *ELL_MAIN_obj::_hx_vtable = 0;

Dynamic ELL_MAIN_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ELL_MAIN_obj > _hx_result = new ELL_MAIN_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ELL_MAIN_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67d07eb3;
}

::Array< ::String > ELL_MAIN_obj::removeItemAll(::Array< ::String > _Arr,::String _Value){
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_44_removeItemAll)
HXLINE(  45)		int _I = 0;
HXLINE(  46)		while((_I < _Arr->length)){
HXLINE(  47)			if ((_Arr->__get(_I) == _Value)) {
HXLINE(  48)				_Arr->removeRange(_I,1);
            			}
            			else {
HXLINE(  50)				_I = (_I + 1);
            			}
            		}
HXLINE(  53)		return _Arr;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ELL_MAIN_obj,removeItemAll,return )

void ELL_MAIN_obj::_Lex(){
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_55__Lex)
HXLINE(  56)		int _l = -1;
HXLINE(  57)		while((_l < (this->_hx___Script->length - 1))){
HXLINE(  58)			_l = (_l + 1);
HXLINE(  59)			bool _hx_tmp;
HXDLIN(  59)			bool _hx_tmp1;
HXDLIN(  59)			bool _hx_tmp2;
HXDLIN(  59)			bool _hx_tmp3;
HXDLIN(  59)			if (::hx::IsNotEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("if",dd,5b,00,00) )) {
HXLINE(  59)				_hx_tmp3 = ::hx::IsEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("while",b1,43,bd,c9) );
            			}
            			else {
HXLINE(  59)				_hx_tmp3 = true;
            			}
HXDLIN(  59)			if (!(_hx_tmp3)) {
HXLINE(  59)				_hx_tmp2 = ::hx::IsEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("elseif",d6,a0,a2,dd) );
            			}
            			else {
HXLINE(  59)				_hx_tmp2 = true;
            			}
HXDLIN(  59)			if (!(_hx_tmp2)) {
HXLINE(  59)				_hx_tmp1 = ::hx::IsEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("else",b9,e4,14,43) );
            			}
            			else {
HXLINE(  59)				_hx_tmp1 = true;
            			}
HXDLIN(  59)			if (!(_hx_tmp1)) {
HXLINE(  59)				_hx_tmp = ::hx::IsEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("fun",3f,cc,4d,00) );
            			}
            			else {
HXLINE(  59)				_hx_tmp = true;
            			}
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  60)				this->_Stamps->push(_l);
            			}
            			else {
HXLINE(  61)				if (::hx::IsEq( this->_hx___Script->__get(_l)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("end",db,03,4d,00) )) {
HXLINE(  62)					this->_hx___Stamps->set(this->_Stamps->__get((this->_Stamps->length - 1)),_l);
HXLINE(  63)					this->_Stamps->pop();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ELL_MAIN_obj,_Lex,(void))

 ::Dynamic ELL_MAIN_obj::_Array_Parse(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  __o__s){
            		int _s = __o__s.Default(1);
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_67__Array_Parse)
HXLINE(  68)		 ::Dynamic _hx___result =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("_Array",ba,24,a4,b4),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            				->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            				->setFixed(2,HX_("_Bool",29,cc,05,df),false))));
HXLINE(  69)		if ((_s < (_hx___para->length - 1))) {
HXLINE(  70)			_hx___result = this->_Array_Parse(( (::Array< ::Dynamic>)(_a->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )))->__Field(HX_("_Array",ba,24,a4,b4),::hx::paccDynamic)) ),_hx___para,(_s + 1));
            		}
            		else {
HXLINE(  72)			_hx___result = _a->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )));
            		}
HXLINE(  74)		return _hx___result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ELL_MAIN_obj,_Array_Parse,return )

 ::Dynamic ELL_MAIN_obj::_Array_Parse_Set(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  __o__s){
            		int _s = __o__s.Default(1);
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_76__Array_Parse_Set)
HXLINE(  77)		 ::Dynamic _hx___result =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("_Array",ba,24,a4,b4),_a)
            			->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            				->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            				->setFixed(2,HX_("_Bool",29,cc,05,df),false))));
HXLINE(  78)		if ((_s < (_hx___para->length - 2))) {
HXLINE(  79)			_hx___result = this->_Array_Parse_Set(( (::Array< ::Dynamic>)(_a->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )))->__Field(HX_("_Array",ba,24,a4,b4),::hx::paccDynamic)) ),_hx___para,(_s + 1));
            		}
            		else {
HXLINE(  81)			 ::Dynamic(_hx___result->__Field(HX_("_Array",ba,24,a4,b4),::hx::paccDynamic))->__SetItem(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )),_hx___para->__get((_s + 1)));
            		}
HXLINE(  83)		return _hx___result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ELL_MAIN_obj,_Array_Parse_Set,return )

 ::Dynamic ELL_MAIN_obj::_Array_Parse_Push(::Array< ::Dynamic> _a,::Array< ::Dynamic> _hx___para,::hx::Null< int >  __o__s){
            		int _s = __o__s.Default(1);
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_85__Array_Parse_Push)
HXLINE(  86)		 ::Dynamic _hx___result =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("_Array",ba,24,a4,b4),_a)
            			->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            				->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            				->setFixed(2,HX_("_Bool",29,cc,05,df),false))));
HXLINE(  87)		if ((_s < (_hx___para->length - 2))) {
HXLINE(  88)			_hx___result = this->_Array_Parse_Push(( (::Array< ::Dynamic>)(_a->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )))->__Field(HX_("_Array",ba,24,a4,b4),::hx::paccDynamic)) ),_hx___para,(_s + 1));
            		}
            		else {
HXLINE(  89)			if ((_hx___para->length == 2)) {
HXLINE(  90)				_a->push(_hx___para->__get(_s));
HXLINE(  91)				_hx___result->__SetField(HX_("_Array",ba,24,a4,b4),_a,::hx::paccDynamic);
            			}
            			else {
HXLINE(  93)				::Array< ::Dynamic> _a1 = ( (::Array< ::Dynamic>)(_a->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(_hx___para->__get(_s)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )))->__Field(HX_("_Array",ba,24,a4,b4),::hx::paccDynamic)) );
HXDLIN(  93)				_a1->push(_hx___para->__get((_s + 1)));
HXLINE(  94)				_hx___result->__SetField(HX_("_Array",ba,24,a4,b4),_a,::hx::paccDynamic);
            			}
            		}
HXLINE(  96)		return _hx___result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ELL_MAIN_obj,_Array_Parse_Push,return )

 ::Dynamic ELL_MAIN_obj::_Parse(int _b,::Array< ::String > _c){
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_98__Parse)
HXLINE(  99)		 ::Dynamic _r =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            			->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            			->setFixed(2,HX_("_Bool",29,cc,05,df),false));
HXLINE( 100)		 ::Dynamic _r2 =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            			->setFixed(1,HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00))
            			->setFixed(2,HX_("_Bool",29,cc,05,df),false));
HXLINE( 101)		this->_hx___Array = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 102)		if ((_b < (_c->length - 1))) {
HXLINE( 103)			_r = this->_Parse((_b + 1),_c);
            		}
            		else {
HXLINE( 104)			if ((_b < (_c->length + 1))) {
HXLINE( 105)				if (::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("(",28,00,00,00) )) {
HXLINE( 106)					this->_Pt++;
HXLINE( 107)					_r = this->_Parse(0,_c);
HXLINE( 108)					this->_Pt++;
            				}
            				else {
HXLINE( 109)					if (::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("[",5b,00,00,00) )) {
HXLINE( 110)						this->_Lvar = ::Array_obj< ::String >::__new(0);
HXLINE( 111)						{
HXLINE( 111)							int _g = 0;
HXDLIN( 111)							::Array< ::String > _g1 = ( (::String)(this->_hx___Script->__get((this->_Pt + 1))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).split(HX_("->",71,27,00,00));
HXDLIN( 111)							while((_g < _g1->length)){
HXLINE( 111)								::String _l = _g1->__get(_g);
HXDLIN( 111)								_g = (_g + 1);
HXLINE( 112)								if ((_l.charAt(1) == HX_("&",26,00,00,00))) {
HXLINE( 113)									::Array< ::String > _hx_tmp = this->_Lvar;
HXDLIN( 113)									::Dynamic this1 = this->_Variables;
HXDLIN( 113)									_hx_tmp->push( ::Dynamic(( ( ::haxe::ds::StringMap)(this1) )->get((HX_("@",40,00,00,00) + _l.substr(2,_l.length)))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)));
            								}
            								else {
HXLINE( 115)									this->_Lvar->push(_l);
            								}
            							}
            						}
HXLINE( 118)						this->_Vname = this->_Lvar->join(HX_(".",2e,00,00,00));
HXLINE( 119)						this->_Func_Calls->push(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("_Array",ba,24,a4,b4),::Array_obj< ::Dynamic>::__new(0))
            							->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            								->setFixed(1,HX_("_String",90,ae,3b,b4),this->_Vname)
            								->setFixed(2,HX_("_Bool",29,cc,05,df),false))))));
HXLINE( 120)						this->_Pt++;
HXLINE( 121)						this->_hx___Script->__get(this->_Pt)->__SetField(HX_("_String",90,ae,3b,b4),HX_("",00,00,00,00),::hx::paccDynamic);
HXLINE( 122)						_r = this->_Parse(0,_c);
HXLINE( 123)						this->_Pt++;
HXLINE( 124)						_r2->__SetField(HX_("_Float",bd,7c,ab,91),this->_Pt,::hx::paccDynamic);
HXLINE( 125)						{
HXLINE( 125)							int _g2 = 1;
HXDLIN( 125)							int _g3 = this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >()->length;
HXDLIN( 125)							while((_g2 < _g3)){
HXLINE( 125)								_g2 = (_g2 + 1);
HXDLIN( 125)								int _i = (_g2 - 1);
HXLINE( 126)								{
HXLINE( 126)									 ::Dynamic v = this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >()->__get(_i)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic);
HXDLIN( 126)									this->_Variables->set((HX_("@__",60,e3,30,00) + (_i - 1)),v);
            								}
            							}
            						}
HXLINE( 128)						int _hx_tmp = (this->_Functions->get( ::Dynamic( ::Dynamic(this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >()->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic))) + 1);
HXDLIN( 128)						::Dynamic this1 = this->_hx___Stamps;
HXDLIN( 128)						this->_Compile(_hx_tmp,( ( ::haxe::ds::IntMap)(this1) )->get_int(this->_Functions->get_int( ::Dynamic( ::Dynamic(this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >()->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)))));
HXLINE( 129)						_r = this->_Variables->get(HX_("@return",f0,54,8b,6e));
HXLINE( 130)						this->_Pt = ::Std_obj::_hx_int(( (Float)(_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ));
HXLINE( 131)						this->_Func_Calls->pop();
            					}
            					else {
HXLINE( 132)						if (::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("{",7b,00,00,00) )) {
HXLINE( 133)							this->_Func_Calls->push(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("_Array",ba,24,a4,b4),::Array_obj< ::Dynamic>::__new(0))
            								->setFixed(1,HX_("_Value",92,36,cd,c0), ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("_Float",bd,7c,ab,91),((Float)0.0))
            									->setFixed(1,HX_("_String",90,ae,3b,b4), ::Dynamic(this->_hx___Script->__get((this->_Pt + 1))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)))
            									->setFixed(2,HX_("_Bool",29,cc,05,df),false))))));
HXLINE( 134)							this->_Pt++;
HXLINE( 135)							_r = this->_Parse(0,_c);
HXLINE( 136)							this->_Pt++;
HXLINE( 137)							this->_hx___Array = this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 138)							::String _hx_switch_0 = ( (::String)( ::Dynamic(this->_hx___Array->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("a",61,00,00,00)) ){
HXLINE( 140)								this->_hx___Array->shift();
HXLINE( 141)								if ((this->_Func_Calls->length == 1)) {
HXLINE( 142)									this->_Arrays->push(this->_Func_Calls->__get(0).StaticCast< ::Array< ::Dynamic> >());
HXLINE( 143)									_r->__SetField(HX_("_String",90,ae,3b,b4),HX_("#arr",1e,76,6c,17),::hx::paccDynamic);
HXLINE( 144)									_r->__SetField(HX_("_Float",bd,7c,ab,91),(this->_Arrays->length - 1),::hx::paccDynamic);
            								}
HXLINE( 139)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("ag",e6,54,00,00)) ){
HXLINE( 147)								this->_hx___Array->shift();
HXLINE( 148)								::Array< ::Dynamic> _r1 = this->_Arrays->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(this->_hx___Array->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ))).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 148)								_r = this->_Array_Parse(_r1,this->_hx___Array,null())->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic);
HXLINE( 146)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("ap",ef,54,00,00)) ){
HXLINE( 153)								this->_hx___Array->shift();
HXLINE( 154)								::Array< ::Dynamic> _r1 = this->_Arrays->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(this->_hx___Array->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ))).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 154)								_r = this->_Array_Parse_Push(_r1,this->_hx___Array,null())->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic);
HXLINE( 152)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("as",f2,54,00,00)) ){
HXLINE( 150)								this->_hx___Array->shift();
HXLINE( 151)								::Array< ::Dynamic> _r1 = this->_Arrays->__get(::Std_obj::_hx_int(( (Float)( ::Dynamic(this->_hx___Array->__get(0)->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic))->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ))).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 151)								_r = this->_Array_Parse_Set(_r1,this->_hx___Array,null())->__Field(HX_("_Value",92,36,cd,c0),::hx::paccDynamic);
HXLINE( 149)								goto _hx_goto_11;
            							}
            							_hx_goto_11:;
HXLINE( 156)							this->_Func_Calls->pop();
            						}
            						else {
HXLINE( 158)							if ((( (::String)(this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).charAt(0) == HX_("@",40,00,00,00))) {
HXLINE( 160)								this->_Lvar = ::Array_obj< ::String >::__new(0);
HXLINE( 161)								{
HXLINE( 161)									int _g = 0;
HXDLIN( 161)									::Array< ::String > _g1 = ( (::String)(this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).split(HX_("->",71,27,00,00));
HXDLIN( 161)									while((_g < _g1->length)){
HXLINE( 161)										::String _l = _g1->__get(_g);
HXDLIN( 161)										_g = (_g + 1);
HXLINE( 162)										if ((_l.charAt(1) == HX_("&",26,00,00,00))) {
HXLINE( 163)											::Array< ::String > _hx_tmp = this->_Lvar;
HXDLIN( 163)											::Dynamic this1 = this->_Variables;
HXDLIN( 163)											_hx_tmp->push( ::Dynamic(( ( ::haxe::ds::StringMap)(this1) )->get((HX_("@",40,00,00,00) + _l.substr(2,_l.length)))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)));
            										}
            										else {
HXLINE( 165)											this->_Lvar->push(_l);
            										}
            									}
            								}
HXLINE( 168)								this->_Vname = this->_Lvar->join(HX_(".",2e,00,00,00));
HXLINE( 169)								_r->__SetField(HX_("_Float",bd,7c,ab,91),this->_Variables->get(this->_Vname)->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 170)								_r->__SetField(HX_("_String",90,ae,3b,b4),this->_Variables->get(this->_Vname)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 171)								_r->__SetField(HX_("_Bool",29,cc,05,df),this->_Variables->get(this->_Vname)->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic),::hx::paccDynamic);
            							}
            							else {
HXLINE( 172)								if (::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("Object",df,f2,d3,49) )) {
HXLINE( 173)									_r->__SetField(HX_("_String",90,ae,3b,b4),HX_("#obj",b4,07,77,17),::hx::paccDynamic);
            								}
            								else {
HXLINE( 174)									if ((( (::String)(this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).charAt(0) == HX_("_",5f,00,00,00))) {
HXLINE( 175)										_r->__SetField(HX_("_String",90,ae,3b,b4),( (::String)(this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).split(HX_("\\s",97,50,00,00))->join(HX_(" ",20,00,00,00)).split(HX_("\\n",92,50,00,00))->join(HX_("\n",0a,00,00,00)),::hx::paccDynamic);
            									}
            									else {
HXLINE( 177)										if (::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic),true )) {
HXLINE( 178)											_r->__SetField(HX_("_Float",bd,7c,ab,91),this->_hx___Script->__get(this->_Pt)->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),::hx::paccDynamic);
            										}
            										else {
HXLINE( 180)											_r->__SetField(HX_("_Float",bd,7c,ab,91),::Std_obj::parseFloat(( (::String)(this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 181)											this->_hx___Script->__get(this->_Pt)->__SetField(HX_("_Float",bd,7c,ab,91),_r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 182)											this->_hx___Script->__get(this->_Pt)->__SetField(HX_("_Bool",29,cc,05,df),true,::hx::paccDynamic);
            										}
            									}
            								}
            							}
HXLINE( 185)							this->_Pt++;
            						}
            					}
            				}
            			}
            		}
HXLINE( 188)		while(::hx::IsEq( this->_hx___Script->__get(this->_Pt)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),_c->__get(_b) )){
HXLINE( 189)			::String _hx_switch_1 = _c->__get(_b);
            			if (  (_hx_switch_1==HX_("*",2a,00,00,00)) ){
HXLINE( 199)				this->_Pt++;
HXLINE( 200)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 201)				_r->__SetField(HX_("_Float",bd,7c,ab,91),(( (Float)(_r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ) * ( (Float)(_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 198)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("+",2b,00,00,00)) ){
HXLINE( 191)				this->_Pt++;
HXLINE( 192)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 193)				_r->__SetField(HX_("_Float",bd,7c,ab,91),(_r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) + _r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)),::hx::paccDynamic);
HXLINE( 190)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_(",",2c,00,00,00)) ){
HXLINE( 239)				this->_Pt++;
HXLINE( 240)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 241)				this->_Func_Calls->__get((this->_Func_Calls->length - 1)).StaticCast< ::Array< ::Dynamic> >()->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("_Array",ba,24,a4,b4),this->_hx___Array)
            					->setFixed(1,HX_("_Value",92,36,cd,c0),_r2)));
HXLINE( 238)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("-",2d,00,00,00)) ){
HXLINE( 195)				this->_Pt++;
HXLINE( 196)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 197)				_r->__SetField(HX_("_Float",bd,7c,ab,91),(( (Float)(_r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ) - ( (Float)(_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 194)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("/",2f,00,00,00)) ){
HXLINE( 203)				this->_Pt++;
HXLINE( 204)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 205)				_r->__SetField(HX_("_Float",bd,7c,ab,91),(( (Float)(_r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ) / ( (Float)(_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 202)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("<",3c,00,00,00)) ){
HXLINE( 215)				this->_Pt++;
HXLINE( 216)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 217)				_r->__SetField(HX_("_Bool",29,cc,05,df),::hx::IsLess( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) ),::hx::paccDynamic);
HXLINE( 214)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("<=",81,34,00,00)) ){
HXLINE( 223)				this->_Pt++;
HXLINE( 224)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 225)				_r->__SetField(HX_("_Bool",29,cc,05,df),::hx::IsLessEq( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) ),::hx::paccDynamic);
HXLINE( 222)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("<>",82,34,00,00)) ){
HXLINE( 211)				this->_Pt++;
HXLINE( 212)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 213)				bool _hx_tmp;
HXDLIN( 213)				if (::hx::IsEq( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) )) {
HXLINE( 213)					_hx_tmp = ::hx::IsNotEq( _r->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),_r2->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 213)					_hx_tmp = true;
            				}
HXDLIN( 213)				_r->__SetField(HX_("_Bool",29,cc,05,df),_hx_tmp,::hx::paccDynamic);
HXLINE( 210)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("=",3d,00,00,00)) ){
HXLINE( 207)				this->_Pt++;
HXLINE( 208)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 209)				bool _hx_tmp;
HXDLIN( 209)				if (::hx::IsEq( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) )) {
HXLINE( 209)					_hx_tmp = ::hx::IsEq( _r->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),_r2->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 209)					_hx_tmp = false;
            				}
HXDLIN( 209)				_r->__SetField(HX_("_Bool",29,cc,05,df),_hx_tmp,::hx::paccDynamic);
HXLINE( 206)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_(">",3e,00,00,00)) ){
HXLINE( 219)				this->_Pt++;
HXLINE( 220)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 221)				_r->__SetField(HX_("_Bool",29,cc,05,df),::hx::IsGreater( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) ),::hx::paccDynamic);
HXLINE( 218)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_(">=",3f,36,00,00)) ){
HXLINE( 227)				this->_Pt++;
HXLINE( 228)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 229)				_r->__SetField(HX_("_Bool",29,cc,05,df),::hx::IsGreaterEq( _r->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),_r2->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic) ),::hx::paccDynamic);
HXLINE( 226)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("and",d7,fa,49,00)) ){
HXLINE( 231)				this->_Pt++;
HXLINE( 232)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 233)				bool _hx_tmp;
HXDLIN( 233)				if (( (bool)(_r->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) )) {
HXLINE( 233)					_hx_tmp = ( (bool)(_r2->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 233)					_hx_tmp = false;
            				}
HXDLIN( 233)				_r->__SetField(HX_("_Bool",29,cc,05,df),_hx_tmp,::hx::paccDynamic);
HXLINE( 230)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_1==HX_("or",23,61,00,00)) ){
HXLINE( 235)				this->_Pt++;
HXLINE( 236)				_r2 = this->_Parse((_b + 1),_c);
HXLINE( 237)				bool _hx_tmp;
HXDLIN( 237)				if (!(( (bool)(_r->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) ))) {
HXLINE( 237)					_hx_tmp = ( (bool)(_r2->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 237)					_hx_tmp = true;
            				}
HXDLIN( 237)				_r->__SetField(HX_("_Bool",29,cc,05,df),_hx_tmp,::hx::paccDynamic);
HXLINE( 234)				goto _hx_goto_14;
            			}
            			_hx_goto_14:;
            		}
HXLINE( 244)		return _r;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ELL_MAIN_obj,_Parse,return )

void ELL_MAIN_obj::_Compile(int __s,int _hx___f){
            	HX_STACKFRAME(&_hx_pos_8a9bd868b7d02932_246__Compile)
HXLINE( 247)		bool _hx___Continue = false;
HXLINE( 248)		int _C = (__s - 1);
HXLINE( 249)		while((_C < (_hx___f - 1))){
HXLINE( 250)			_C = (_C + 1);
HXLINE( 251)			::String _hx_switch_0 = ( (::String)(this->_hx___Script->__get(_C)->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) );
            			if (  (_hx_switch_0==HX_("$",24,00,00,00)) ){
HXLINE( 338)				this->_Pt = (_C + 1);
HXLINE( 339)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_22,13));
HXLINE( 337)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 305)				this->_Variables->get(HX_("@break",7f,3c,c3,4f))->__SetField(HX_("_Bool",29,cc,05,df),true,::hx::paccDynamic);
HXLINE( 306)				_hx___Continue = true;
HXLINE( 304)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 308)				_hx___Continue = true;
HXDLIN( 308)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 301)				if ((this->_If_Value == true)) {
HXLINE( 302)					_C = this->_hx___Stamps->get_int(_C);
            				}
HXLINE( 301)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("elseif",d6,a0,a2,dd)) ){
HXLINE( 292)				this->_Pt = (_C + 1);
HXLINE( 293)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_23,13));
HXLINE( 294)				bool _hx_tmp;
HXDLIN( 294)				if ((this->_If_Value != true)) {
HXLINE( 294)					_hx_tmp = !(( (bool)(this->_val->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) ));
            				}
            				else {
HXLINE( 294)					_hx_tmp = true;
            				}
HXDLIN( 294)				if (_hx_tmp) {
HXLINE( 295)					_C = this->_hx___Stamps->get_int(_C);
            				}
            				else {
HXLINE( 297)					this->_If_Value = true;
HXLINE( 298)					_C = (this->_Pt - 1);
            				}
HXLINE( 291)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("fun",3f,cc,4d,00)) ){
HXLINE( 325)				this->_Lvar = ::Array_obj< ::String >::__new(0);
HXLINE( 326)				{
HXLINE( 326)					int _g = 0;
HXDLIN( 326)					::Array< ::String > _g1 = ( (::String)(this->_hx___Script->__get((_C + 1))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).split(HX_("->",71,27,00,00));
HXDLIN( 326)					while((_g < _g1->length)){
HXLINE( 326)						::String _l = _g1->__get(_g);
HXDLIN( 326)						_g = (_g + 1);
HXLINE( 327)						if ((_l.charAt(1) == HX_("&",26,00,00,00))) {
HXLINE( 328)							::Array< ::String > _hx_tmp = this->_Lvar;
HXDLIN( 328)							::Dynamic this1 = this->_Variables;
HXDLIN( 328)							_hx_tmp->push( ::Dynamic(( ( ::haxe::ds::StringMap)(this1) )->get((HX_("@",40,00,00,00) + _l.substr(2,_l.length)))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)));
            						}
            						else {
HXLINE( 330)							this->_Lvar->push(_l);
            						}
            					}
            				}
HXLINE( 333)				this->_Vname = this->_Lvar->join(HX_(".",2e,00,00,00));
HXLINE( 334)				this->_Functions->set(this->_Vname,_C);
HXLINE( 335)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_24,13));
HXLINE( 336)				_C = this->_hx___Stamps->get_int(_C);
HXLINE( 324)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 282)				this->_Pt = (_C + 1);
HXLINE( 283)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_25,13));
HXLINE( 284)				this->_If_Value = ( (bool)(this->_val->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) );
HXLINE( 285)				if (!(( (bool)(this->_val->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic)) ))) {
HXLINE( 286)					_C = this->_hx___Stamps->get_int(_C);
            				}
            				else {
HXLINE( 288)					this->_If_Value = true;
HXLINE( 289)					_C = (this->_Pt - 1);
            				}
HXLINE( 281)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("is",ea,5b,00,00)) ){
HXLINE( 253)				this->_Pt = (_C + 1);
HXLINE( 254)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_26,13));
HXLINE( 255)				this->_Lvar = ::Array_obj< ::String >::__new(0);
HXLINE( 256)				{
HXLINE( 256)					int _g = 0;
HXDLIN( 256)					::Array< ::String > _g1 = ( (::String)(this->_hx___Script->__get((_C - 1))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)) ).split(HX_("->",71,27,00,00));
HXDLIN( 256)					while((_g < _g1->length)){
HXLINE( 256)						::String _l = _g1->__get(_g);
HXDLIN( 256)						_g = (_g + 1);
HXLINE( 257)						if ((_l.charAt(1) == HX_("&",26,00,00,00))) {
HXLINE( 258)							::Array< ::String > _hx_tmp = this->_Lvar;
HXDLIN( 258)							::Dynamic this1 = this->_Variables;
HXDLIN( 258)							_hx_tmp->push( ::Dynamic(( ( ::haxe::ds::StringMap)(this1) )->get((HX_("@",40,00,00,00) + _l.substr(2,_l.length)))->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic)));
            						}
            						else {
HXLINE( 260)							this->_Lvar->push(_l);
            						}
            					}
            				}
HXLINE( 263)				this->_Vname = this->_Lvar->join(HX_(".",2e,00,00,00));
HXLINE( 264)				if (::hx::IsEq( this->_val->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("#arr",1e,76,6c,17) )) {
HXLINE( 265)					if (::hx::IsNull( this->_Variables->get(this->_Vname) )) {
HXLINE( 266)						this->_Variables->set(this->_Vname,this->_val);
            					}
            					else {
HXLINE( 267)						if (::hx::IsGreater( this->_Variables->get(this->_Vname)->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),0 )) {
HXLINE( 268)							this->_Arrays[::Std_obj::_hx_int(( (Float)(this->_Variables->get(this->_Vname)->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ))] = this->_Arrays->__get(::Std_obj::_hx_int(( (Float)(this->_val->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) ))).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 269)							::Array< ::Dynamic> _hx_tmp = this->_Arrays;
HXDLIN( 269)							_hx_tmp->removeRange(::Std_obj::_hx_int(( (Float)(this->_val->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic)) )),1);
HXLINE( 270)							 ::Dynamic _hx_tmp1 = this->_Variables->get(this->_Vname);
HXDLIN( 270)							this->_val->__SetField(HX_("_Float",bd,7c,ab,91),_hx_tmp1->__Field(HX_("_Float",bd,7c,ab,91),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 271)							this->_Variables->set(this->_Vname,this->_val);
            						}
            						else {
HXLINE( 273)							this->_Variables->set(this->_Vname,this->_val);
            						}
            					}
            				}
            				else {
HXLINE( 275)					if (::hx::IsEq( this->_val->__Field(HX_("_String",90,ae,3b,b4),::hx::paccDynamic),HX_("#obj",b4,07,77,17) )) {
HXLINE( 276)						this->_Variables->set(this->_Vname,this->_hx___Script->__get((_C - 1)));
            					}
            					else {
HXLINE( 278)						this->_Variables->set(this->_Vname,this->_val);
            					}
            				}
HXLINE( 280)				_C = (this->_Pt - 1);
HXLINE( 252)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("print",2d,58,8b,c8)) ){
HXLINE( 341)				this->_Pt = (_C + 1);
HXLINE( 342)				this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_27,13));
HXLINE( 343)				::haxe::Log_obj::trace(this->_val,::hx::SourceInfo(HX_("ELL.hx",d9,75,73,8b),343,HX_("ELL_MAIN",f3,8b,3f,0c),HX_("_Compile",d4,a6,78,8a)));
HXLINE( 340)				goto _hx_goto_17;
            			}
            			if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 310)				while(::hx::IsEq( this->_Variables->get(HX_("@break",7f,3c,c3,4f))->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic),false )){
HXLINE( 311)					this->_Pt = (_C + 1);
HXLINE( 312)					this->_val = this->_Parse(0,::Array_obj< ::String >::fromData( _hx_array_data_0c3f8bf3_28,13));
HXLINE( 313)					if (::hx::IsEq( this->_val->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic),true )) {
HXLINE( 314)						int _hx_tmp = this->_Pt;
HXDLIN( 314)						this->_Compile(_hx_tmp,this->_hx___Stamps->get_int(_C));
            					}
            					else {
HXLINE( 316)						_C = this->_hx___Stamps->get_int(_C);
HXLINE( 317)						goto _hx_goto_20;
            					}
            				}
            				_hx_goto_20:;
HXLINE( 320)				if (::hx::IsEq( this->_Variables->get(HX_("@break",7f,3c,c3,4f))->__Field(HX_("_Bool",29,cc,05,df),::hx::paccDynamic),true )) {
HXLINE( 321)					_C = this->_hx___Stamps->get_int(_C);
HXLINE( 322)					this->_Variables->get(HX_("@break",7f,3c,c3,4f))->__SetField(HX_("_Bool",29,cc,05,df),false,::hx::paccDynamic);
            				}
HXLINE( 309)				goto _hx_goto_17;
            			}
            			_hx_goto_17:;
HXLINE( 345)			if (_hx___Continue) {
HXLINE( 346)				goto _hx_goto_16;
            			}
            		}
            		_hx_goto_16:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ELL_MAIN_obj,_Compile,(void))


::hx::ObjectPtr< ELL_MAIN_obj > ELL_MAIN_obj::__new(::String __o__fname) {
	::hx::ObjectPtr< ELL_MAIN_obj > __this = new ELL_MAIN_obj();
	__this->__construct(__o__fname);
	return __this;
}

::hx::ObjectPtr< ELL_MAIN_obj > ELL_MAIN_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__fname) {
	ELL_MAIN_obj *__this = (ELL_MAIN_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ELL_MAIN_obj), true, "ELL_MAIN"));
	*(void **)__this = ELL_MAIN_obj::_hx_vtable;
	__this->__construct(__o__fname);
	return __this;
}

ELL_MAIN_obj::ELL_MAIN_obj()
{
}

void ELL_MAIN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ELL_MAIN);
	HX_MARK_MEMBER_NAME(_Arrays,"_Arrays");
	HX_MARK_MEMBER_NAME(_hx___Array,"__Array");
	HX_MARK_MEMBER_NAME(_Variables,"_Variables");
	HX_MARK_MEMBER_NAME(_val,"_val");
	HX_MARK_MEMBER_NAME(_Lvar,"_Lvar");
	HX_MARK_MEMBER_NAME(_Read_Script,"_Read_Script");
	HX_MARK_MEMBER_NAME(_Vname,"_Vname");
	HX_MARK_MEMBER_NAME(_Script,"_Script");
	HX_MARK_MEMBER_NAME(_hx___Script,"__Script");
	HX_MARK_MEMBER_NAME(_If_Value,"_If_Value");
	HX_MARK_MEMBER_NAME(_Stamps,"_Stamps");
	HX_MARK_MEMBER_NAME(_hx___Stamps,"__Stamps");
	HX_MARK_MEMBER_NAME(_Pt,"_Pt");
	HX_MARK_MEMBER_NAME(_Functions,"_Functions");
	HX_MARK_MEMBER_NAME(_Func_Calls,"_Func_Calls");
	HX_MARK_END_CLASS();
}

void ELL_MAIN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_Arrays,"_Arrays");
	HX_VISIT_MEMBER_NAME(_hx___Array,"__Array");
	HX_VISIT_MEMBER_NAME(_Variables,"_Variables");
	HX_VISIT_MEMBER_NAME(_val,"_val");
	HX_VISIT_MEMBER_NAME(_Lvar,"_Lvar");
	HX_VISIT_MEMBER_NAME(_Read_Script,"_Read_Script");
	HX_VISIT_MEMBER_NAME(_Vname,"_Vname");
	HX_VISIT_MEMBER_NAME(_Script,"_Script");
	HX_VISIT_MEMBER_NAME(_hx___Script,"__Script");
	HX_VISIT_MEMBER_NAME(_If_Value,"_If_Value");
	HX_VISIT_MEMBER_NAME(_Stamps,"_Stamps");
	HX_VISIT_MEMBER_NAME(_hx___Stamps,"__Stamps");
	HX_VISIT_MEMBER_NAME(_Pt,"_Pt");
	HX_VISIT_MEMBER_NAME(_Functions,"_Functions");
	HX_VISIT_MEMBER_NAME(_Func_Calls,"_Func_Calls");
}

::hx::Val ELL_MAIN_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_Pt") ) { return ::hx::Val( _Pt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { return ::hx::Val( _val ); }
		if (HX_FIELD_EQ(inName,"_Lex") ) { return ::hx::Val( _Lex_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_Lvar") ) { return ::hx::Val( _Lvar ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_Vname") ) { return ::hx::Val( _Vname ); }
		if (HX_FIELD_EQ(inName,"_Parse") ) { return ::hx::Val( _Parse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_Arrays") ) { return ::hx::Val( _Arrays ); }
		if (HX_FIELD_EQ(inName,"__Array") ) { return ::hx::Val( _hx___Array ); }
		if (HX_FIELD_EQ(inName,"_Script") ) { return ::hx::Val( _Script ); }
		if (HX_FIELD_EQ(inName,"_Stamps") ) { return ::hx::Val( _Stamps ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__Script") ) { return ::hx::Val( _hx___Script ); }
		if (HX_FIELD_EQ(inName,"__Stamps") ) { return ::hx::Val( _hx___Stamps ); }
		if (HX_FIELD_EQ(inName,"_Compile") ) { return ::hx::Val( _Compile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_If_Value") ) { return ::hx::Val( _If_Value ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Variables") ) { return ::hx::Val( _Variables ); }
		if (HX_FIELD_EQ(inName,"_Functions") ) { return ::hx::Val( _Functions ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_Func_Calls") ) { return ::hx::Val( _Func_Calls ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_Read_Script") ) { return ::hx::Val( _Read_Script ); }
		if (HX_FIELD_EQ(inName,"_Array_Parse") ) { return ::hx::Val( _Array_Parse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeItemAll") ) { return ::hx::Val( removeItemAll_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_Array_Parse_Set") ) { return ::hx::Val( _Array_Parse_Set_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_Array_Parse_Push") ) { return ::hx::Val( _Array_Parse_Push_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ELL_MAIN_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_Pt") ) { _Pt=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_val") ) { _val=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_Lvar") ) { _Lvar=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_Vname") ) { _Vname=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_Arrays") ) { _Arrays=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__Array") ) { _hx___Array=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Script") ) { _Script=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Stamps") ) { _Stamps=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__Script") ) { _hx___Script=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__Stamps") ) { _hx___Stamps=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_If_Value") ) { _If_Value=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Variables") ) { _Variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Functions") ) { _Functions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_Func_Calls") ) { _Func_Calls=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_Read_Script") ) { _Read_Script=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ELL_MAIN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_Arrays",79,fe,fb,5a));
	outFields->push(HX_("__Array",59,36,1b,23));
	outFields->push(HX_("_Variables",58,3e,d8,7f));
	outFields->push(HX_("_val",e2,23,25,3f));
	outFields->push(HX_("_Lvar",fa,31,a7,e5));
	outFields->push(HX_("_Read_Script",15,85,42,ba));
	outFields->push(HX_("_Vname",e2,9c,5c,c9));
	outFields->push(HX_("_Script",ca,d3,6b,ea));
	outFields->push(HX_("__Script",4b,2d,24,24));
	outFields->push(HX_("_If_Value",ae,09,53,e9));
	outFields->push(HX_("_Stamps",cf,18,02,a9));
	outFields->push(HX_("__Stamps",50,72,ba,e2));
	outFields->push(HX_("_Pt",43,5c,48,00));
	outFields->push(HX_("_Functions",fc,65,78,b1));
	outFields->push(HX_("_Func_Calls",b9,b0,e5,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ELL_MAIN_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ELL_MAIN_obj,_Arrays),HX_("_Arrays",79,fe,fb,5a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ELL_MAIN_obj,_hx___Array),HX_("__Array",59,36,1b,23)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ELL_MAIN_obj,_Variables),HX_("_Variables",58,3e,d8,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ELL_MAIN_obj,_val),HX_("_val",e2,23,25,3f)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ELL_MAIN_obj,_Lvar),HX_("_Lvar",fa,31,a7,e5)},
	{::hx::fsString,(int)offsetof(ELL_MAIN_obj,_Read_Script),HX_("_Read_Script",15,85,42,ba)},
	{::hx::fsString,(int)offsetof(ELL_MAIN_obj,_Vname),HX_("_Vname",e2,9c,5c,c9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ELL_MAIN_obj,_Script),HX_("_Script",ca,d3,6b,ea)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ELL_MAIN_obj,_hx___Script),HX_("__Script",4b,2d,24,24)},
	{::hx::fsBool,(int)offsetof(ELL_MAIN_obj,_If_Value),HX_("_If_Value",ae,09,53,e9)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ELL_MAIN_obj,_Stamps),HX_("_Stamps",cf,18,02,a9)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(ELL_MAIN_obj,_hx___Stamps),HX_("__Stamps",50,72,ba,e2)},
	{::hx::fsInt,(int)offsetof(ELL_MAIN_obj,_Pt),HX_("_Pt",43,5c,48,00)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ELL_MAIN_obj,_Functions),HX_("_Functions",fc,65,78,b1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ELL_MAIN_obj,_Func_Calls),HX_("_Func_Calls",b9,b0,e5,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ELL_MAIN_obj_sStaticStorageInfo = 0;
#endif

static ::String ELL_MAIN_obj_sMemberFields[] = {
	HX_("_Arrays",79,fe,fb,5a),
	HX_("__Array",59,36,1b,23),
	HX_("_Variables",58,3e,d8,7f),
	HX_("_val",e2,23,25,3f),
	HX_("_Lvar",fa,31,a7,e5),
	HX_("_Read_Script",15,85,42,ba),
	HX_("_Vname",e2,9c,5c,c9),
	HX_("_Script",ca,d3,6b,ea),
	HX_("__Script",4b,2d,24,24),
	HX_("_If_Value",ae,09,53,e9),
	HX_("_Stamps",cf,18,02,a9),
	HX_("__Stamps",50,72,ba,e2),
	HX_("_Pt",43,5c,48,00),
	HX_("_Functions",fc,65,78,b1),
	HX_("_Func_Calls",b9,b0,e5,47),
	HX_("removeItemAll",ea,75,24,b8),
	HX_("_Lex",c0,48,05,3f),
	HX_("_Array_Parse",8e,b3,59,4f),
	HX_("_Array_Parse_Set",11,2b,a0,2b),
	HX_("_Array_Parse_Push",8b,03,96,fe),
	HX_("_Parse",54,47,6a,4c),
	HX_("_Compile",d4,a6,78,8a),
	::String(null()) };

::hx::Class ELL_MAIN_obj::__mClass;

void ELL_MAIN_obj::__register()
{
	ELL_MAIN_obj _hx_dummy;
	ELL_MAIN_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ELL_MAIN",f3,8b,3f,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ELL_MAIN_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ELL_MAIN_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ELL_MAIN_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ELL_MAIN_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

