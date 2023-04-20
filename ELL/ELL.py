import sys

import math as python_lib_Math
import math as Math
import builtins as python_lib_Builtins


class _hx_AnonObject:
    _hx_disable_getattr = False
    def __init__(self, fields):
        self.__dict__ = fields
    def __repr__(self):
        return repr(self.__dict__)
    def __contains__(self, item):
        return item in self.__dict__
    def __getitem__(self, item):
        return self.__dict__[item]
    def __getattr__(self, name):
        if (self._hx_disable_getattr):
            raise AttributeError('field does not exist')
        else:
            return None
    def _hx_hasattr(self,field):
        self._hx_disable_getattr = True
        try:
            getattr(self, field)
            self._hx_disable_getattr = False
            return True
        except AttributeError:
            self._hx_disable_getattr = False
            return False



class Enum:
    _hx_class_name = "Enum"
    __slots__ = ("tag", "index", "params")
    _hx_fields = ["tag", "index", "params"]
    _hx_methods = ["__str__"]

    def __init__(self,tag,index,params):
        self.tag = tag
        self.index = index
        self.params = params

    def __str__(self):
        if (self.params is None):
            return self.tag
        else:
            return self.tag + '(' + (', '.join(str(v) for v in self.params)) + ')'



class ELL_MAIN:
    _hx_class_name = "ELL_MAIN"
    __slots__ = ("_Arrays", "_hx___Array", "_Variables", "_val", "_Lvar", "_Read_Script", "_Vname", "_Script", "_hx___Script", "_If_Value", "_Stamps", "_hx___Stamps", "_Pt", "_Functions", "_Func_Calls")
    _hx_fields = ["_Arrays", "__Array", "_Variables", "_val", "_Lvar", "_Read_Script", "_Vname", "_Script", "__Script", "_If_Value", "_Stamps", "__Stamps", "_Pt", "_Functions", "_Func_Calls"]
    _hx_methods = ["removeItemAll", "_Lex", "_Array_Parse", "_Array_Parse_Set", "_Array_Parse_Push", "_Parse", "_Compile"]

    def __init__(self,_fname = None):
        if (_fname is None):
            _fname = "main.ell"
        self._Vname = None
        self._Read_Script = None
        self._Lvar = None
        self._val = None
        self._Func_Calls = list()
        self._Functions = haxe_ds_StringMap()
        self._Pt = 0
        self._hx___Stamps = haxe_ds_IntMap()
        self._Stamps = list()
        self._If_Value = False
        self._hx___Script = list()
        self._Script = list()
        self._Variables = haxe_ds_StringMap()
        self._hx___Array = list()
        self._Arrays = list()
        v = _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False})
        self._Variables.h["@break"] = v
        _this = self._Arrays
        _this.append([_hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False}), '_Array': []})])
        self._Read_Script = sys_io_File.getContent(_fname)
        _this = self._Read_Script
        _this1 = _this.split("\r\n")
        _this = " ".join([python_Boot.toString1(x1,'') for x1 in _this1])
        _this1 = _this.split(";")
        _this = " ".join([python_Boot.toString1(x1,'') for x1 in _this1])
        _this1 = _this.split("\n")
        _this = " ".join([python_Boot.toString1(x1,'') for x1 in _this1])
        self._Script = _this.split(" ")
        self._Script = self.removeItemAll(self._Script,"")
        _g = 0
        _g1 = self._Script
        while (_g < len(_g1)):
            _s = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
            _g = (_g + 1)
            if (_s == "~{"):
                _this = self._hx___Script
                _this.append(_hx_AnonObject({'_Float': 0.0, '_String': "{", '_Bool': False}))
                _this1 = self._hx___Script
                _this1.append(_hx_AnonObject({'_Float': 0.0, '_String': "a", '_Bool': False}))
                _this2 = self._hx___Script
                _this2.append(_hx_AnonObject({'_Float': 0.0, '_String': ",", '_Bool': False}))
            else:
                _this3 = self._hx___Script
                _this3.append(_hx_AnonObject({'_Float': 0.0, '_String': _s, '_Bool': False}))
        _this = self._hx___Script
        _this.append(_hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False}))
        self._Script = []

    def removeItemAll(self,_Arr,_Value):
        _I = 0
        while (_I < len(_Arr)):
            if ((_Arr[_I] if _I >= 0 and _I < len(_Arr) else None) == _Value):
                pos = _I
                if (pos < 0):
                    pos = (len(_Arr) + pos)
                if (pos < 0):
                    pos = 0
                res = _Arr[pos:(pos + 1)]
                del _Arr[pos:(pos + 1)]
            else:
                _I = (_I + 1)
        return _Arr

    def _Lex(self):
        _l = -1
        while (_l < ((len(self._hx___Script) - 1))):
            _l = (_l + 1)
            if ((((((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "if") or (((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "while"))) or (((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "elseif"))) or (((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "else"))) or (((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "fun"))):
                _this = self._Stamps
                _this.append(_l)
            elif ((self._hx___Script[_l] if _l >= 0 and _l < len(self._hx___Script) else None)._String == "end"):
                self._hx___Stamps.set(python_internal_ArrayImpl._get(self._Stamps, (len(self._Stamps) - 1)),_l)
                _this1 = self._Stamps
                if (len(_this1) != 0):
                    _this1.pop()

    def _Array_Parse(self,_a,_hx___para,_s = None):
        if (_s is None):
            _s = 1
        _hx___result = _hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False}), '_Array': []})
        if (_s < ((len(_hx___para) - 1))):
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            _a1 = None
            try:
                _a1 = int(x)
            except BaseException as _g:
                _a1 = None
            _hx___result = self._Array_Parse((_a[_a1] if _a1 >= 0 and _a1 < len(_a) else None)._Array,_hx___para,(_s + 1))
        else:
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            _hx___result1 = None
            try:
                _hx___result1 = int(x)
            except BaseException as _g:
                _hx___result1 = None
            _hx___result = (_a[_hx___result1] if _hx___result1 >= 0 and _hx___result1 < len(_a) else None)
        return _hx___result

    def _Array_Parse_Set(self,_a,_hx___para,_s = None):
        if (_s is None):
            _s = 1
        _hx___result = _hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False}), '_Array': _a})
        if (_s < ((len(_hx___para) - 2))):
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            _a1 = None
            try:
                _a1 = int(x)
            except BaseException as _g:
                _a1 = None
            _hx___result = self._Array_Parse_Set((_a[_a1] if _a1 >= 0 and _a1 < len(_a) else None)._Array,_hx___para,(_s + 1))
        else:
            _hx___result1 = _hx___result._Array
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            tmp = None
            try:
                tmp = int(x)
            except BaseException as _g:
                tmp = None
            python_internal_ArrayImpl._set(_hx___result1, tmp, python_internal_ArrayImpl._get(_hx___para, (_s + 1)))
        return _hx___result

    def _Array_Parse_Push(self,_a,_hx___para,_s = None):
        if (_s is None):
            _s = 1
        _hx___result = _hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False}), '_Array': _a})
        if (_s < ((len(_hx___para) - 2))):
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            _a1 = None
            try:
                _a1 = int(x)
            except BaseException as _g:
                _a1 = None
            _hx___result = self._Array_Parse_Push((_a[_a1] if _a1 >= 0 and _a1 < len(_a) else None)._Array,_hx___para,(_s + 1))
        elif (len(_hx___para) == 2):
            _a.append((_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None))
            _hx___result._Array = _a
        else:
            x = (_hx___para[_s] if _s >= 0 and _s < len(_hx___para) else None)._Value._Float
            _this = None
            try:
                _this = int(x)
            except BaseException as _g:
                _this = None
            _this1 = (_a[_this] if _this >= 0 and _this < len(_a) else None)._Array
            _this1.append(python_internal_ArrayImpl._get(_hx___para, (_s + 1)))
            _hx___result._Array = _a
        return _hx___result

    def _Parse(self,_b,_c):
        _r = _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False})
        _r2 = _hx_AnonObject({'_Float': 0.0, '_String': "", '_Bool': False})
        self._hx___Array = []
        if (_b < ((len(_c) - 1))):
            _r = self._Parse((_b + 1),_c)
        elif (_b < ((len(_c) + 1))):
            if (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String == "("):
                _hx_local_0 = self
                _hx_local_1 = _hx_local_0._Pt
                _hx_local_0._Pt = (_hx_local_1 + 1)
                _hx_local_1
                _r = self._Parse(0,_c)
                _hx_local_2 = self
                _hx_local_3 = _hx_local_2._Pt
                _hx_local_2._Pt = (_hx_local_3 + 1)
                _hx_local_3
            elif (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String == "["):
                self._Lvar = []
                _g = 0
                _this = python_internal_ArrayImpl._get(self._hx___Script, (self._Pt + 1))._String
                _g1 = _this.split("->")
                while (_g < len(_g1)):
                    _l = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
                    _g = (_g + 1)
                    if ((("" if ((1 >= len(_l))) else _l[1])) == "&"):
                        _this = self._Lvar
                        this1 = self._Variables
                        key = ("@" + HxOverrides.stringOrNull(HxString.substr(_l,2,len(_l))))
                        x = this1.h.get(key,None)._String
                        _this.append(x)
                    else:
                        _this1 = self._Lvar
                        _this1.append(_l)
                _this = self._Lvar
                self._Vname = ".".join([python_Boot.toString1(x1,'') for x1 in _this])
                _this = self._Func_Calls
                x = [_hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': self._Vname, '_Bool': False}), '_Array': []})]
                _this.append(x)
                _hx_local_5 = self
                _hx_local_6 = _hx_local_5._Pt
                _hx_local_5._Pt = (_hx_local_6 + 1)
                _hx_local_6
                python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String = ""
                _r = self._Parse(0,_c)
                _hx_local_7 = self
                _hx_local_8 = _hx_local_7._Pt
                _hx_local_7._Pt = (_hx_local_8 + 1)
                _hx_local_8
                _r2._Float = self._Pt
                _g = 1
                _g1 = len(python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1)))
                while (_g < _g1):
                    _i = _g
                    _g = (_g + 1)
                    v = python_internal_ArrayImpl._get(python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1)), _i)._Value
                    self._Variables.h[("@__" + str(((_i - 1))))] = v
                tmp = (self._Functions.h.get(python_internal_ArrayImpl._get(python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1)), 0)._Value._String,None) + 1)
                this1 = self._hx___Stamps
                key = self._Functions.h.get(python_internal_ArrayImpl._get(python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1)), 0)._Value._String,None)
                self._Compile(tmp,this1.h.get(key,None))
                _r = self._Variables.h.get("@return",None)
                x = _r2._Float
                tmp = None
                try:
                    tmp = int(x)
                except BaseException as _g:
                    tmp = None
                self._Pt = tmp
                _this = self._Func_Calls
                if (len(_this) != 0):
                    _this.pop()
            elif (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String == "{"):
                _this = self._Func_Calls
                x = [_hx_AnonObject({'_Value': _hx_AnonObject({'_Float': 0.0, '_String': python_internal_ArrayImpl._get(self._hx___Script, (self._Pt + 1))._String, '_Bool': False}), '_Array': []})]
                _this.append(x)
                _hx_local_9 = self
                _hx_local_10 = _hx_local_9._Pt
                _hx_local_9._Pt = (_hx_local_10 + 1)
                _hx_local_10
                _r = self._Parse(0,_c)
                _hx_local_11 = self
                _hx_local_12 = _hx_local_11._Pt
                _hx_local_11._Pt = (_hx_local_12 + 1)
                _hx_local_12
                self._hx___Array = python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1))
                _g = (self._hx___Array[0] if 0 < len(self._hx___Array) else None)._Value._String
                _hx_local_13 = len(_g)
                if (_hx_local_13 == 1):
                    if (_g == "a"):
                        _this = self._hx___Array
                        if (len(_this) != 0):
                            _this.pop(0)
                        if (len(self._Func_Calls) == 1):
                            _this = self._Arrays
                            x = (self._Func_Calls[0] if 0 < len(self._Func_Calls) else None)
                            _this.append(x)
                            _r._String = "#arr"
                            _r._Float = (len(self._Arrays) - 1)
                elif (_hx_local_13 == 2):
                    if (_g == "ag"):
                        _this = self._hx___Array
                        if (len(_this) != 0):
                            _this.pop(0)
                        _r1 = self._Arrays
                        x = (self._hx___Array[0] if 0 < len(self._hx___Array) else None)._Value._Float
                        _r3 = None
                        try:
                            _r3 = int(x)
                        except BaseException as _g:
                            _r3 = None
                        _r = self._Array_Parse((_r1[_r3] if _r3 >= 0 and _r3 < len(_r1) else None),self._hx___Array)._Value
                    elif (_g == "ap"):
                        _this = self._hx___Array
                        if (len(_this) != 0):
                            _this.pop(0)
                        _r1 = self._Arrays
                        x = (self._hx___Array[0] if 0 < len(self._hx___Array) else None)._Value._Float
                        _r3 = None
                        try:
                            _r3 = int(x)
                        except BaseException as _g:
                            _r3 = None
                        _r = self._Array_Parse_Push((_r1[_r3] if _r3 >= 0 and _r3 < len(_r1) else None),self._hx___Array)._Value
                    elif (_g == "as"):
                        _this = self._hx___Array
                        if (len(_this) != 0):
                            _this.pop(0)
                        _r1 = self._Arrays
                        x = (self._hx___Array[0] if 0 < len(self._hx___Array) else None)._Value._Float
                        _r3 = None
                        try:
                            _r3 = int(x)
                        except BaseException as _g:
                            _r3 = None
                        _r = self._Array_Parse_Set((_r1[_r3] if _r3 >= 0 and _r3 < len(_r1) else None),self._hx___Array)._Value
                else:
                    pass
                _this = self._Func_Calls
                if (len(_this) != 0):
                    _this.pop()
            else:
                _this = python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String
                if ((("" if ((0 >= len(_this))) else _this[0])) == "@"):
                    self._Lvar = []
                    _g = 0
                    _this = python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String
                    _g1 = _this.split("->")
                    while (_g < len(_g1)):
                        _l = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
                        _g = (_g + 1)
                        if ((("" if ((1 >= len(_l))) else _l[1])) == "&"):
                            _this = self._Lvar
                            this1 = self._Variables
                            key = ("@" + HxOverrides.stringOrNull(HxString.substr(_l,2,len(_l))))
                            x = this1.h.get(key,None)._String
                            _this.append(x)
                        else:
                            _this1 = self._Lvar
                            _this1.append(_l)
                    _this = self._Lvar
                    self._Vname = ".".join([python_Boot.toString1(x1,'') for x1 in _this])
                    _r._Float = self._Variables.h.get(self._Vname,None)._Float
                    _r._String = self._Variables.h.get(self._Vname,None)._String
                    _r._Bool = self._Variables.h.get(self._Vname,None)._Bool
                elif (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String == "Object"):
                    _r._String = "#obj"
                else:
                    _this = python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String
                    if ((("" if ((0 >= len(_this))) else _this[0])) == "_"):
                        _this = python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String
                        _this1 = _this.split("\\s")
                        _this = " ".join([python_Boot.toString1(x1,'') for x1 in _this1])
                        _this1 = _this.split("\\n")
                        _r._String = "\n".join([python_Boot.toString1(x1,'') for x1 in _this1])
                    elif (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._Bool == True):
                        _r._Float = python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._Float
                    else:
                        _r._Float = Std.parseFloat(python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String)
                        python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._Float = _r._Float
                        python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._Bool = True
                _hx_local_15 = self
                _hx_local_16 = _hx_local_15._Pt
                _hx_local_15._Pt = (_hx_local_16 + 1)
                _hx_local_16
        while (python_internal_ArrayImpl._get(self._hx___Script, self._Pt)._String == (_c[_b] if _b >= 0 and _b < len(_c) else None)):
            _g = (_c[_b] if _b >= 0 and _b < len(_c) else None)
            _hx_local_17 = len(_g)
            if (_hx_local_17 == 1):
                if (_g == "*"):
                    _hx_local_18 = self
                    _hx_local_19 = _hx_local_18._Pt
                    _hx_local_18._Pt = (_hx_local_19 + 1)
                    _hx_local_19
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Float = (_r._Float * _r2._Float)
                elif (_g == "+"):
                    _hx_local_21 = self
                    _hx_local_22 = _hx_local_21._Pt
                    _hx_local_21._Pt = (_hx_local_22 + 1)
                    _hx_local_22
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Float = (_r._Float + _r2._Float)
                elif (_g == ","):
                    _hx_local_24 = self
                    _hx_local_25 = _hx_local_24._Pt
                    _hx_local_24._Pt = (_hx_local_25 + 1)
                    _hx_local_25
                    _r2 = self._Parse((_b + 1),_c)
                    _this = python_internal_ArrayImpl._get(self._Func_Calls, (len(self._Func_Calls) - 1))
                    x = _hx_AnonObject({'_Value': _r2, '_Array': self._hx___Array})
                    _this.append(x)
                elif (_g == "-"):
                    _hx_local_26 = self
                    _hx_local_27 = _hx_local_26._Pt
                    _hx_local_26._Pt = (_hx_local_27 + 1)
                    _hx_local_27
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Float = (_r._Float - _r2._Float)
                elif (_g == "/"):
                    _hx_local_29 = self
                    _hx_local_30 = _hx_local_29._Pt
                    _hx_local_29._Pt = (_hx_local_30 + 1)
                    _hx_local_30
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Float = (_r._Float / _r2._Float)
                elif (_g == "<"):
                    _hx_local_32 = self
                    _hx_local_33 = _hx_local_32._Pt
                    _hx_local_32._Pt = (_hx_local_33 + 1)
                    _hx_local_33
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Float < _r2._Float)
                elif (_g == "="):
                    _hx_local_34 = self
                    _hx_local_35 = _hx_local_34._Pt
                    _hx_local_34._Pt = (_hx_local_35 + 1)
                    _hx_local_35
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = ((_r._Float == _r2._Float) and ((_r._String == _r2._String)))
                elif (_g == ">"):
                    _hx_local_36 = self
                    _hx_local_37 = _hx_local_36._Pt
                    _hx_local_36._Pt = (_hx_local_37 + 1)
                    _hx_local_37
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Float > _r2._Float)
            elif (_hx_local_17 == 3):
                if (_g == "and"):
                    _hx_local_38 = self
                    _hx_local_39 = _hx_local_38._Pt
                    _hx_local_38._Pt = (_hx_local_39 + 1)
                    _hx_local_39
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Bool and _r2._Bool)
            elif (_hx_local_17 == 2):
                if (_g == "<="):
                    _hx_local_40 = self
                    _hx_local_41 = _hx_local_40._Pt
                    _hx_local_40._Pt = (_hx_local_41 + 1)
                    _hx_local_41
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Float <= _r2._Float)
                elif (_g == "<>"):
                    _hx_local_42 = self
                    _hx_local_43 = _hx_local_42._Pt
                    _hx_local_42._Pt = (_hx_local_43 + 1)
                    _hx_local_43
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = ((_r._Float != _r2._Float) or ((_r._String != _r2._String)))
                elif (_g == ">="):
                    _hx_local_44 = self
                    _hx_local_45 = _hx_local_44._Pt
                    _hx_local_44._Pt = (_hx_local_45 + 1)
                    _hx_local_45
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Float >= _r2._Float)
                elif (_g == "or"):
                    _hx_local_46 = self
                    _hx_local_47 = _hx_local_46._Pt
                    _hx_local_46._Pt = (_hx_local_47 + 1)
                    _hx_local_47
                    _r2 = self._Parse((_b + 1),_c)
                    _r._Bool = (_r._Bool or _r2._Bool)
            else:
                pass
        return _r

    def _Compile(self,_hx___s,_hx___f):
        _hx___Continue = False
        _C = (_hx___s - 1)
        while (_C < ((_hx___f - 1))):
            _C = (_C + 1)
            _g = (self._hx___Script[_C] if _C >= 0 and _C < len(self._hx___Script) else None)._String
            _hx_local_1 = len(_g)
            if (_hx_local_1 == 1):
                if (_g == "$"):
                    self._Pt = (_C + 1)
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
            elif (_hx_local_1 == 5):
                if (_g == "break"):
                    self._Variables.h.get("@break",None)._Bool = True
                    _hx___Continue = True
                elif (_g == "print"):
                    self._Pt = (_C + 1)
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                    print(str(self._val))
                elif (_g == "while"):
                    while (self._Variables.h.get("@break",None)._Bool == False):
                        self._Pt = (_C + 1)
                        self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                        if (self._val._Bool == True):
                            self._Compile(self._Pt,self._hx___Stamps.h.get(_C,None))
                        else:
                            _C = self._hx___Stamps.h.get(_C,None)
                            break
                    if (self._Variables.h.get("@break",None)._Bool == True):
                        _C = self._hx___Stamps.h.get(_C,None)
                        self._Variables.h.get("@break",None)._Bool = False
            elif (_hx_local_1 == 4):
                if (_g == "else"):
                    if (self._If_Value == True):
                        _C = self._hx___Stamps.h.get(_C,None)
            elif (_hx_local_1 == 3):
                if (_g == "fun"):
                    self._Lvar = []
                    _g1 = 0
                    _this = python_internal_ArrayImpl._get(self._hx___Script, (_C + 1))._String
                    _g2 = _this.split("->")
                    while (_g1 < len(_g2)):
                        _l = (_g2[_g1] if _g1 >= 0 and _g1 < len(_g2) else None)
                        _g1 = (_g1 + 1)
                        if ((("" if ((1 >= len(_l))) else _l[1])) == "&"):
                            _this1 = self._Lvar
                            this1 = self._Variables
                            key = ("@" + HxOverrides.stringOrNull(HxString.substr(_l,2,len(_l))))
                            x = this1.h.get(key,None)._String
                            _this1.append(x)
                        else:
                            _this2 = self._Lvar
                            _this2.append(_l)
                    _this3 = self._Lvar
                    self._Vname = ".".join([python_Boot.toString1(x1,'') for x1 in _this3])
                    self._Functions.h[self._Vname] = _C
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                    _C = self._hx___Stamps.h.get(_C,None)
            elif (_hx_local_1 == 8):
                if (_g == "continue"):
                    _hx___Continue = True
            elif (_hx_local_1 == 6):
                if (_g == "elseif"):
                    self._Pt = (_C + 1)
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                    if ((self._If_Value == True) or (not self._val._Bool)):
                        _C = self._hx___Stamps.h.get(_C,None)
                    else:
                        self._If_Value = True
                        _C = (self._Pt - 1)
            elif (_hx_local_1 == 2):
                if (_g == "if"):
                    self._Pt = (_C + 1)
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                    self._If_Value = self._val._Bool
                    if (not self._val._Bool):
                        _C = self._hx___Stamps.h.get(_C,None)
                    else:
                        self._If_Value = True
                        _C = (self._Pt - 1)
                elif (_g == "is"):
                    self._Pt = (_C + 1)
                    self._val = self._Parse(0,[",", "or", "and", ">=", "<=", ">", "<", "<>", "=", "+", "-", "*", "/"])
                    self._Lvar = []
                    _g3 = 0
                    _this4 = python_internal_ArrayImpl._get(self._hx___Script, (_C - 1))._String
                    _g4 = _this4.split("->")
                    while (_g3 < len(_g4)):
                        _l1 = (_g4[_g3] if _g3 >= 0 and _g3 < len(_g4) else None)
                        _g3 = (_g3 + 1)
                        if ((("" if ((1 >= len(_l1))) else _l1[1])) == "&"):
                            _this5 = self._Lvar
                            this2 = self._Variables
                            key1 = ("@" + HxOverrides.stringOrNull(HxString.substr(_l1,2,len(_l1))))
                            x1 = this2.h.get(key1,None)._String
                            _this5.append(x1)
                        else:
                            _this6 = self._Lvar
                            _this6.append(_l1)
                    _this7 = self._Lvar
                    self._Vname = ".".join([python_Boot.toString1(x1,'') for x1 in _this7])
                    if (self._val._String == "#arr"):
                        if (self._Variables.h.get(self._Vname,None) is None):
                            self._Variables.h[self._Vname] = self._val
                        elif (self._Variables.h.get(self._Vname,None)._Float > 0):
                            tmp = self._Arrays
                            x2 = self._Variables.h.get(self._Vname,None)._Float
                            tmp1 = None
                            try:
                                tmp1 = int(x2)
                            except BaseException as _g5:
                                tmp1 = None
                            tmp2 = self._Arrays
                            x3 = self._val._Float
                            tmp3 = None
                            try:
                                tmp3 = int(x3)
                            except BaseException as _g6:
                                tmp3 = None
                            python_internal_ArrayImpl._set(tmp, tmp1, (tmp2[tmp3] if tmp3 >= 0 and tmp3 < len(tmp2) else None))
                            _this8 = self._Arrays
                            x4 = self._val._Float
                            pos = None
                            try:
                                pos = int(x4)
                            except BaseException as _g7:
                                pos = None
                            pos1 = pos
                            if (pos1 < 0):
                                pos1 = (len(_this8) + pos1)
                            if (pos1 < 0):
                                pos1 = 0
                            res = _this8[pos1:(pos1 + 1)]
                            del _this8[pos1:(pos1 + 1)]
                            tmp4 = self._Variables.h.get(self._Vname,None)
                            self._val._Float = tmp4._Float
                            self._Variables.h[self._Vname] = self._val
                        else:
                            self._Variables.h[self._Vname] = self._val
                    elif (self._val._String == "#obj"):
                        self._Variables.h[self._Vname] = python_internal_ArrayImpl._get(self._hx___Script, (_C - 1))
                    else:
                        self._Variables.h[self._Vname] = self._val
                    _C = (self._Pt - 1)
            else:
                pass
            if _hx___Continue:
                break



class ELL:
    _hx_class_name = "ELL"
    __slots__ = ()
    _hx_statics = ["main"]

    @staticmethod
    def main():
        _ELL = ELL_MAIN()
        _ELL._Lex()
        _ELL._Compile(0,len(_ELL._hx___Script))


class Std:
    _hx_class_name = "Std"
    __slots__ = ()
    _hx_statics = ["shortenPossibleNumber", "parseFloat"]

    @staticmethod
    def shortenPossibleNumber(x):
        r = ""
        _g = 0
        _g1 = len(x)
        while (_g < _g1):
            i = _g
            _g = (_g + 1)
            c = ("" if (((i < 0) or ((i >= len(x))))) else x[i])
            _g2 = HxString.charCodeAt(c,0)
            if (_g2 is None):
                break
            else:
                _g3 = _g2
                if (((((((((((_g3 == 57) or ((_g3 == 56))) or ((_g3 == 55))) or ((_g3 == 54))) or ((_g3 == 53))) or ((_g3 == 52))) or ((_g3 == 51))) or ((_g3 == 50))) or ((_g3 == 49))) or ((_g3 == 48))) or ((_g3 == 46))):
                    r = (("null" if r is None else r) + ("null" if c is None else c))
                else:
                    break
        return r

    @staticmethod
    def parseFloat(x):
        try:
            return float(x)
        except BaseException as _g:
            if (x is not None):
                r1 = Std.shortenPossibleNumber(x)
                if (r1 != x):
                    return Std.parseFloat(r1)
            return Math.NaN


class haxe_IMap:
    _hx_class_name = "haxe.IMap"
    __slots__ = ()


class haxe_ds_IntMap:
    _hx_class_name = "haxe.ds.IntMap"
    __slots__ = ("h",)
    _hx_fields = ["h"]
    _hx_methods = ["set"]

    def __init__(self):
        self.h = dict()

    def set(self,key,value):
        self.h[key] = value



class haxe_ds_StringMap:
    _hx_class_name = "haxe.ds.StringMap"
    __slots__ = ("h",)
    _hx_fields = ["h"]

    def __init__(self):
        self.h = dict()



class haxe_iterators_ArrayIterator:
    _hx_class_name = "haxe.iterators.ArrayIterator"
    __slots__ = ("array", "current")
    _hx_fields = ["array", "current"]
    _hx_methods = ["hasNext", "next"]

    def __init__(self,array):
        self.current = 0
        self.array = array

    def hasNext(self):
        return (self.current < len(self.array))

    def next(self):
        def _hx_local_3():
            def _hx_local_2():
                _hx_local_0 = self
                _hx_local_1 = _hx_local_0.current
                _hx_local_0.current = (_hx_local_1 + 1)
                return _hx_local_1
            return python_internal_ArrayImpl._get(self.array, _hx_local_2())
        return _hx_local_3()



class python_Boot:
    _hx_class_name = "python.Boot"
    __slots__ = ()
    _hx_statics = ["keywords", "toString1", "fields", "simpleField", "getInstanceFields", "getSuperClass", "getClassFields", "prefixLength", "unhandleKeywords"]

    @staticmethod
    def toString1(o,s):
        if (o is None):
            return "null"
        if isinstance(o,str):
            return o
        if (s is None):
            s = ""
        if (len(s) >= 5):
            return "<...>"
        if isinstance(o,bool):
            if o:
                return "true"
            else:
                return "false"
        if (isinstance(o,int) and (not isinstance(o,bool))):
            return str(o)
        if isinstance(o,float):
            try:
                if (o == int(o)):
                    return str(Math.floor((o + 0.5)))
                else:
                    return str(o)
            except BaseException as _g:
                return str(o)
        if isinstance(o,list):
            o1 = o
            l = len(o1)
            st = "["
            s = (("null" if s is None else s) + "\t")
            _g = 0
            _g1 = l
            while (_g < _g1):
                i = _g
                _g = (_g + 1)
                prefix = ""
                if (i > 0):
                    prefix = ","
                st = (("null" if st is None else st) + HxOverrides.stringOrNull(((("null" if prefix is None else prefix) + HxOverrides.stringOrNull(python_Boot.toString1((o1[i] if i >= 0 and i < len(o1) else None),s))))))
            st = (("null" if st is None else st) + "]")
            return st
        try:
            if hasattr(o,"toString"):
                return o.toString()
        except BaseException as _g:
            pass
        if hasattr(o,"__class__"):
            if isinstance(o,_hx_AnonObject):
                toStr = None
                try:
                    fields = python_Boot.fields(o)
                    _g = []
                    _g1 = 0
                    while (_g1 < len(fields)):
                        f = (fields[_g1] if _g1 >= 0 and _g1 < len(fields) else None)
                        _g1 = (_g1 + 1)
                        x = ((("" + ("null" if f is None else f)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f),(("null" if s is None else s) + "\t"))))
                        _g.append(x)
                    fieldsStr = _g
                    toStr = (("{ " + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr]))) + " }")
                except BaseException as _g:
                    return "{ ... }"
                if (toStr is None):
                    return "{ ... }"
                else:
                    return toStr
            if isinstance(o,Enum):
                o1 = o
                l = len(o1.params)
                hasParams = (l > 0)
                if hasParams:
                    paramsStr = ""
                    _g = 0
                    _g1 = l
                    while (_g < _g1):
                        i = _g
                        _g = (_g + 1)
                        prefix = ""
                        if (i > 0):
                            prefix = ","
                        paramsStr = (("null" if paramsStr is None else paramsStr) + HxOverrides.stringOrNull(((("null" if prefix is None else prefix) + HxOverrides.stringOrNull(python_Boot.toString1(o1.params[i],s))))))
                    return (((HxOverrides.stringOrNull(o1.tag) + "(") + ("null" if paramsStr is None else paramsStr)) + ")")
                else:
                    return o1.tag
            if hasattr(o,"_hx_class_name"):
                if (o.__class__.__name__ != "type"):
                    fields = python_Boot.getInstanceFields(o)
                    _g = []
                    _g1 = 0
                    while (_g1 < len(fields)):
                        f = (fields[_g1] if _g1 >= 0 and _g1 < len(fields) else None)
                        _g1 = (_g1 + 1)
                        x = ((("" + ("null" if f is None else f)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f),(("null" if s is None else s) + "\t"))))
                        _g.append(x)
                    fieldsStr = _g
                    toStr = (((HxOverrides.stringOrNull(o._hx_class_name) + "( ") + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr]))) + " )")
                    return toStr
                else:
                    fields = python_Boot.getClassFields(o)
                    _g = []
                    _g1 = 0
                    while (_g1 < len(fields)):
                        f = (fields[_g1] if _g1 >= 0 and _g1 < len(fields) else None)
                        _g1 = (_g1 + 1)
                        x = ((("" + ("null" if f is None else f)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f),(("null" if s is None else s) + "\t"))))
                        _g.append(x)
                    fieldsStr = _g
                    toStr = (((("#" + HxOverrides.stringOrNull(o._hx_class_name)) + "( ") + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr]))) + " )")
                    return toStr
            if ((type(o) == type) and (o == str)):
                return "#String"
            if ((type(o) == type) and (o == list)):
                return "#Array"
            if callable(o):
                return "function"
            try:
                if hasattr(o,"__repr__"):
                    return o.__repr__()
            except BaseException as _g:
                pass
            if hasattr(o,"__str__"):
                return o.__str__([])
            if hasattr(o,"__name__"):
                return o.__name__
            return "???"
        else:
            return str(o)

    @staticmethod
    def fields(o):
        a = []
        if (o is not None):
            if hasattr(o,"_hx_fields"):
                fields = o._hx_fields
                if (fields is not None):
                    return list(fields)
            if isinstance(o,_hx_AnonObject):
                d = o.__dict__
                keys = d.keys()
                handler = python_Boot.unhandleKeywords
                for k in keys:
                    if (k != '_hx_disable_getattr'):
                        a.append(handler(k))
            elif hasattr(o,"__dict__"):
                d = o.__dict__
                keys1 = d.keys()
                for k in keys1:
                    a.append(k)
        return a

    @staticmethod
    def simpleField(o,field):
        if (field is None):
            return None
        field1 = (("_hx_" + field) if ((field in python_Boot.keywords)) else (("_hx_" + field) if (((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95)))) else field))
        if hasattr(o,field1):
            return getattr(o,field1)
        else:
            return None

    @staticmethod
    def getInstanceFields(c):
        f = (list(c._hx_fields) if (hasattr(c,"_hx_fields")) else [])
        if hasattr(c,"_hx_methods"):
            f = (f + c._hx_methods)
        sc = python_Boot.getSuperClass(c)
        if (sc is None):
            return f
        else:
            scArr = python_Boot.getInstanceFields(sc)
            scMap = set(scArr)
            _g = 0
            while (_g < len(f)):
                f1 = (f[_g] if _g >= 0 and _g < len(f) else None)
                _g = (_g + 1)
                if (not (f1 in scMap)):
                    scArr.append(f1)
            return scArr

    @staticmethod
    def getSuperClass(c):
        if (c is None):
            return None
        try:
            if hasattr(c,"_hx_super"):
                return c._hx_super
            return None
        except BaseException as _g:
            pass
        return None

    @staticmethod
    def getClassFields(c):
        if hasattr(c,"_hx_statics"):
            x = c._hx_statics
            return list(x)
        else:
            return []

    @staticmethod
    def unhandleKeywords(name):
        if (HxString.substr(name,0,python_Boot.prefixLength) == "_hx_"):
            real = HxString.substr(name,python_Boot.prefixLength,None)
            if (real in python_Boot.keywords):
                return real
        return name


class python_internal_ArrayImpl:
    _hx_class_name = "python.internal.ArrayImpl"
    __slots__ = ()
    _hx_statics = ["_get", "_set"]

    @staticmethod
    def _get(x,idx):
        if ((idx > -1) and ((idx < len(x)))):
            return x[idx]
        else:
            return None

    @staticmethod
    def _set(x,idx,v):
        l = len(x)
        while (l < idx):
            x.append(None)
            l = (l + 1)
        if (l == idx):
            x.append(v)
        else:
            x[idx] = v
        return v


class HxOverrides:
    _hx_class_name = "HxOverrides"
    __slots__ = ()
    _hx_statics = ["eq", "stringOrNull"]

    @staticmethod
    def eq(a,b):
        if (isinstance(a,list) or isinstance(b,list)):
            return a is b
        return (a == b)

    @staticmethod
    def stringOrNull(s):
        if (s is None):
            return "null"
        else:
            return s


class python_internal_MethodClosure:
    _hx_class_name = "python.internal.MethodClosure"
    __slots__ = ("obj", "func")
    _hx_fields = ["obj", "func"]
    _hx_methods = ["__call__"]

    def __init__(self,obj,func):
        self.obj = obj
        self.func = func

    def __call__(self,*args):
        return self.func(self.obj,*args)



class HxString:
    _hx_class_name = "HxString"
    __slots__ = ()
    _hx_statics = ["charCodeAt", "substr"]

    @staticmethod
    def charCodeAt(s,index):
        if ((((s is None) or ((len(s) == 0))) or ((index < 0))) or ((index >= len(s)))):
            return None
        else:
            return ord(s[index])

    @staticmethod
    def substr(s,startIndex,_hx_len = None):
        if (_hx_len is None):
            return s[startIndex:]
        else:
            if (_hx_len == 0):
                return ""
            if (startIndex < 0):
                startIndex = (len(s) + startIndex)
                if (startIndex < 0):
                    startIndex = 0
            return s[startIndex:(startIndex + _hx_len)]


class sys_io_File:
    _hx_class_name = "sys.io.File"
    __slots__ = ()
    _hx_statics = ["getContent"]

    @staticmethod
    def getContent(path):
        f = python_lib_Builtins.open(path,"r",-1,"utf-8",None,"")
        content = f.read(-1)
        f.close()
        return content

Math.NEGATIVE_INFINITY = float("-inf")
Math.POSITIVE_INFINITY = float("inf")
Math.NaN = float("nan")
Math.PI = python_lib_Math.pi

python_Boot.keywords = set(["and", "del", "from", "not", "with", "as", "elif", "global", "or", "yield", "assert", "else", "if", "pass", "None", "break", "except", "import", "raise", "True", "class", "exec", "in", "return", "False", "continue", "finally", "is", "try", "def", "for", "lambda", "while"])
python_Boot.prefixLength = len("_hx_")

ELL.main()
