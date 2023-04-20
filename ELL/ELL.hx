typedef ELL_DYNAMIC = {
 var _Float: Float;
 var _String: String;
 var _Bool: Bool;
}
typedef ELL_ARRAY = {
 var _Value: ELL_DYNAMIC;
 var _Array: Array<ELL_ARRAY>;
}
class ELL_MAIN {
 public var _Arrays:Array<Array<ELL_ARRAY>> = new Array<Array<ELL_ARRAY>>();
 public var __Array:Array<ELL_ARRAY> = new Array<ELL_ARRAY>();
 public var _Variables:Map<String, ELL_DYNAMIC> = new Map<String, ELL_DYNAMIC>();
 public var _val:ELL_DYNAMIC;
 public var _Lvar:Array<String>;
 public var _Read_Script:String;
 public var _Vname:String;
 public var _Script:Array<String> = new Array<String>();
 public var __Script:Array<ELL_DYNAMIC> = new Array<ELL_DYNAMIC>();
 public var _If_Value:Bool = false;
 public var _Stamps:Array<Int> = new Array<Int>();
 public var __Stamps:Map<Int, Int> = new Map<Int, Int>();
 public var _Pt = 0;
 public var _Functions:Map<String, Int> = new Map<String, Int>();
 public var _Func_Calls:Array<Array<ELL_ARRAY>> = new Array<Array<ELL_ARRAY>>();
 public function new(_fname:String = 'main.ell') {
  this._Variables["@break"] = {_Float: 0.0, _String: "", _Bool:false};
  this._Arrays.push([{_Value: {_Float: 0.0, _String: "", _Bool:false}, _Array:[]}]);
  this._Read_Script = sys.io.File.getContent(_fname);
  this._Script = this._Read_Script.split("\r\n").join(" ").split(";").join(" ").split("\n").join(" ").split(" ");
  this._Script = this.removeItemAll(this._Script,"");
  for (_s in this._Script){
   if (_s == "~{") {
    this.__Script.push({_Float: 0.0, _String: "{", _Bool:false});
    this.__Script.push({_Float: 0.0, _String: "a", _Bool:false});
    this.__Script.push({_Float: 0.0, _String: ",", _Bool:false});
   } else {
    this.__Script.push({_Float: 0.0, _String: _s, _Bool:false});
   }
  }
  this.__Script.push({_Float: 0.0, _String: "", _Bool:false});
  this._Script = [];
 }
 public function removeItemAll(_Arr:Array<String>, _Value:String){
  var _I:Int = 0;
  while (_I < _Arr.length){
   if (_Arr[_I] == _Value){
    _Arr.splice(_I,1);
   } else {
    ++_I;
   }
  }
  return _Arr;
 }
 public function _Lex():Void {
  var _l:Int = -1;
  while (_l < this.__Script.length - 1){
   _l = _l + 1;
   if (this.__Script[_l]._String == "if" || this.__Script[_l]._String == "while" || this.__Script[_l]._String == "elseif" || this.__Script[_l]._String == "else" || this.__Script[_l]._String == "fun"){
    this._Stamps.push(_l);
   } else if (this.__Script[_l]._String == "end"){
    this.__Stamps.set(this._Stamps[this._Stamps.length - 1] , _l);
    this._Stamps.pop();
   }
  }
 }
 public function _Array_Parse(_a, __para, _s = 1):ELL_ARRAY {
  var __result:ELL_ARRAY = {_Value: {_Float: 0.0, _String: "", _Bool:false}, _Array:[]};
  if (_s < __para.length - 1){
   __result = _Array_Parse(_a[Std.int(__para[_s]._Value._Float)]._Array, __para, _s + 1);
  } else {
   __result = (_a[Std.int(__para[_s]._Value._Float)]);
  }
  return __result;
 }
 public function _Array_Parse_Set(_a, __para:Array<ELL_ARRAY>, _s = 1):ELL_ARRAY {
  var __result:ELL_ARRAY = {_Value: {_Float: 0.0, _String: "", _Bool:false}, _Array:_a};
  if (_s < __para.length - 2){
   __result = _Array_Parse_Set(_a[Std.int(__para[_s]._Value._Float)]._Array, __para, _s + 1);
  } else {
  __result._Array[Std.int(__para[_s]._Value._Float)] = __para[_s + 1];
  }
  return __result;
 }
 public function _Array_Parse_Push(_a, __para:Array<ELL_ARRAY>, _s = 1):ELL_ARRAY {
  var __result:ELL_ARRAY = {_Value: {_Float: 0.0, _String: "", _Bool:false}, _Array:_a};
  if (_s < __para.length - 2){
   __result = _Array_Parse_Push(_a[Std.int(__para[_s]._Value._Float)]._Array, __para, _s + 1);
  } else if (__para.length == 2) {
   _a.push(__para[_s]);
   __result._Array = _a;
  } else {
   _a[Std.int(__para[_s]._Value._Float)]._Array.push(__para[_s + 1]);
   __result._Array = _a;
  }
  return __result;
 }
 public function _Parse(_b, _c):ELL_DYNAMIC {
  var _r:ELL_DYNAMIC = {_Float: 0.0, _String: "", _Bool:false};
  var _r2:ELL_DYNAMIC = {_Float: 0.0, _String: "", _Bool:false};
  this.__Array = [];
  if (_b < _c.length - 1){
   _r = this._Parse(_b + 1, _c);
  } else if (_b < _c.length + 1){
   if (this.__Script[this._Pt]._String == "("){
    this._Pt++;
    _r = this._Parse(0, _c);
    this._Pt++;
   } else if (this.__Script[this._Pt]._String == "["){
    this._Lvar = [];
    for (_l in this.__Script[this._Pt + 1]._String.split("->")){
     if (_l.charAt(1) == "&"){
      this._Lvar.push(this._Variables["@"+_l.substr(2,_l.length)]._String);
     } else {
      this._Lvar.push(_l);
     }
    }
    this._Vname = this._Lvar.join(".");
    this._Func_Calls.push([{_Value:{_Float: 0.0, _String: this._Vname, _Bool:false}, _Array:[]}]);
    this._Pt++;
    this.__Script[this._Pt]._String = "";
    _r = this._Parse(0, _c);
    this._Pt++;
    _r2._Float = this._Pt;
    for (_i in 1...this._Func_Calls[this._Func_Calls.length - 1].length){
     this._Variables["@__" + (_i - 1)] = this._Func_Calls[this._Func_Calls.length - 1][_i]._Value;
    }
    this._Compile(this._Functions[this._Func_Calls[this._Func_Calls.length - 1][0]._Value._String] + 1, this.__Stamps[this._Functions[this._Func_Calls[this._Func_Calls.length - 1][0]._Value._String]]);
    _r = this._Variables["@return"];
    this._Pt = Std.int(_r2._Float);
    this._Func_Calls.pop();
   } else if (this.__Script[this._Pt]._String == "{"){
    this._Func_Calls.push([{_Value:{_Float: 0.0, _String: this.__Script[this._Pt + 1]._String, _Bool:false}, _Array:[]}]);
    this._Pt++;
    _r = this._Parse(0, _c);
    this._Pt++;
    this.__Array = this._Func_Calls[this._Func_Calls.length - 1];
    switch(this.__Array[0]._Value._String){
     case "a":
      this.__Array.shift();
      if (this._Func_Calls.length == 1){
       this._Arrays.push(this._Func_Calls[0]);
       _r._String = "#arr";
       _r._Float = this._Arrays.length - 1;
      }
     case "ag":
      this.__Array.shift();
      _r = this._Array_Parse(this._Arrays[Std.int(this.__Array[0]._Value._Float)], this.__Array)._Value;
     case "as":
      this.__Array.shift();
      _r = this._Array_Parse_Set(this._Arrays[Std.int(this.__Array[0]._Value._Float)], this.__Array)._Value;
     case "ap":
      this.__Array.shift();
      _r = this._Array_Parse_Push(this._Arrays[Std.int(this.__Array[0]._Value._Float)], this.__Array)._Value;
    }
    this._Func_Calls.pop();
   } else {
    if (this.__Script[this._Pt]._String.charAt(0) == "@"){
     this._Lvar = [];
     for (_l in this.__Script[this._Pt]._String.split("->")){
      if (_l.charAt(1) == "&"){
       this._Lvar.push(this._Variables["@"+_l.substr(2,_l.length)]._String);
      } else {
       this._Lvar.push(_l);
      }
     }
     this._Vname = this._Lvar.join(".");
     _r._Float = this._Variables[this._Vname]._Float;
     _r._String = this._Variables[this._Vname]._String;
     _r._Bool = this._Variables[this._Vname]._Bool;
    } else if (this.__Script[this._Pt]._String == "Object"){
     _r._String = "#obj";
    } else if (this.__Script[this._Pt]._String.charAt(0) == "_"){
     _r._String = this.__Script[this._Pt]._String.split("\\s").join(" ").split("\\n").join("\n");
    } else {
     if (this.__Script[this._Pt]._Bool == true){
      _r._Float = this.__Script[this._Pt]._Float;
     } else {
      _r._Float = Std.parseFloat(this.__Script[this._Pt]._String);
      this.__Script[this._Pt]._Float = _r._Float;
      this.__Script[this._Pt]._Bool = true;
     }
    }
    this._Pt++;
   }
  }
  while (this.__Script[this._Pt]._String == _c[_b]){
   switch(_c[_b]){
    case "+":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Float = _r._Float + _r2._Float;
    case "-":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Float = _r._Float - _r2._Float;
    case "*":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Float = _r._Float * _r2._Float;
    case "/":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Float = _r._Float / _r2._Float;
    case "=":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = (_r._Float == _r2._Float) && (_r._String == _r2._String);
    case "<>":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = (_r._Float != _r2._Float) || (_r._String != _r2._String);
    case "<":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Float < _r2._Float;
    case ">":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Float > _r2._Float;
    case "<=":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Float <= _r2._Float;
    case ">=":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Float >= _r2._Float;
    case "and":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Bool && _r2._Bool;
    case "or":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     _r._Bool = _r._Bool || _r2._Bool;
    case ",":
     this._Pt++;
     _r2 = this._Parse(_b + 1, _c);
     this._Func_Calls[this._Func_Calls.length - 1].push({_Value:_r2, _Array:this.__Array});
   }
  }
  return _r;
 }
 public function _Compile(__s, __f):Void {
  var __Continue:Bool = false;
  var _C:Int = __s - 1;
  while (_C < __f - 1){
   _C++;
   switch (this.__Script[_C]._String){
    case "is":
     this._Pt = _C + 1;
     this._val = this._Parse(0, [",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
     this._Lvar = [];
     for (_l in this.__Script[_C - 1]._String.split("->")){
      if (_l.charAt(1) == "&"){
       this._Lvar.push(this._Variables["@"+_l.substr(2,_l.length)]._String);
      } else {
       this._Lvar.push(_l);
      }
     }
     this._Vname = this._Lvar.join(".");
     if (this._val._String == "#arr") {
      if (this._Variables[this._Vname] == null){
       this._Variables.set(this._Vname, this._val);
      } else if (this._Variables[this._Vname]._Float > 0){
       this._Arrays[Std.int(this._Variables[this._Vname]._Float)] = this._Arrays[Std.int(this._val._Float)];
       this._Arrays.splice(Std.int(this._val._Float), 1);
       this._val._Float = this._Variables[this._Vname]._Float;
       this._Variables.set(this._Vname, this._val);
      } else {
       this._Variables.set(this._Vname, this._val);
      }
     } else if (this._val._String == "#obj"){
      this._Variables.set(this._Vname, this.__Script[_C - 1]);
     } else {
      this._Variables.set(this._Vname, this._val);
     }
     _C = this._Pt - 1;
    case "if":
     this._Pt = _C + 1;
     this._val = this._Parse(0, [",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
     this._If_Value = this._val._Bool;
     if (!this._val._Bool){
      _C = this.__Stamps[_C];
     } else {
      this._If_Value = true;
      _C = this._Pt - 1;
     }
    case "elseif":
     this._Pt = _C + 1;
     this._val = this._Parse(0, [",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
     if (this._If_Value == true || !this._val._Bool){
      _C = this.__Stamps[_C];
     } else {
      this._If_Value = true;
      _C = this._Pt - 1;
     }
    case "else":
     if (this._If_Value == true){
      _C = this.__Stamps[_C];
     }
    case "break":
     this._Variables["@break"]._Bool = true;
     __Continue = true;
    case "continue":
     __Continue = true;
    case "while":
     while(this._Variables["@break"]._Bool == false){
      this._Pt = _C + 1;
      this._val = this._Parse(0, [",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
      if (this._val._Bool == true){
       this._Compile(this._Pt, this.__Stamps[_C]);
      } else {
       _C = this.__Stamps[_C];
       break;
      }
     }
     if (this._Variables["@break"]._Bool == true){ 
      _C = this.__Stamps[_C];
      this._Variables["@break"]._Bool = false;
     }
    case "fun":
     this._Lvar = [];
     for (_l in this.__Script[_C + 1]._String.split("->")){
      if (_l.charAt(1) == "&"){
       this._Lvar.push(this._Variables["@"+_l.substr(2,_l.length)]._String);
      } else {
       this._Lvar.push(_l);
      }
     }
     this._Vname = this._Lvar.join(".");
     this._Functions[this._Vname] = _C;
     this._val = this._Parse(0,[",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
     _C = this.__Stamps[_C];
    case "$":
      this._Pt = _C + 1;
      this._val = this._Parse(0,[",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
    case "print":
      this._Pt = _C + 1;
      this._val = this._Parse(0,[",","or","and",">=","<=",">","<","<>","=","+","-","*","/"]);
      trace(this._val);
   }
   if (__Continue){
    break;
   }
  }
 }
}
class ELL {
 static public function main():Void {
  var _ELL = new ELL_MAIN();
  _ELL._Lex();
  _ELL._Compile(0, _ELL.__Script.length);
 }
}
