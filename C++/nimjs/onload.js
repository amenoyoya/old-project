/* Generated by the Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */

var framePtr = null;
var excHandler = null;
var lastJSError = null;
var NTI2838 = {size: 0, kind: 17, base: null, node: null, finalizer: null};
var NTI104 = {size: 0,kind: 31,base: null,node: null,finalizer: null};
var NTI8502 = {size: 0, kind: 18, base: null, node: null, finalizer: null};
var NTI2808 = {size: 0, kind: 17, base: null, node: null, finalizer: null};
var NTI138 = {size: 0,kind: 28,base: null,node: null,finalizer: null};
var NTI140 = {size: 0,kind: 29,base: null,node: null,finalizer: null};
var NTI2885 = {size: 0,kind: 22,base: null,node: null,finalizer: null};
var NTI2824 = {size: 0, kind: 17, base: null, node: null, finalizer: null};
var NTI2836 = {size: 0, kind: 17, base: null, node: null, finalizer: null};
var NTI2840 = {size: 0, kind: 17, base: null, node: null, finalizer: null};
var NNI2840 = {kind: 2, len: 0, offset: 0, typ: null, name: null, sons: []};
NTI2840.node = NNI2840;
var NNI2836 = {kind: 2, len: 0, offset: 0, typ: null, name: null, sons: []};
NTI2836.node = NNI2836;
NTI2885.base = NTI2824;
var NNI2824 = {kind: 2, len: 4, offset: 0, typ: null, name: null, sons: [{kind: 1, offset: "parent", len: 0, typ: NTI2885, name: "parent", sons: null}, 
{kind: 1, offset: "name", len: 0, typ: NTI140, name: "name", sons: null}, 
{kind: 1, offset: "message", len: 0, typ: NTI138, name: "msg", sons: null}, 
{kind: 1, offset: "trace", len: 0, typ: NTI138, name: "trace", sons: null}]};
NTI2824.node = NNI2824;
var NNI2808 = {kind: 2, len: 0, offset: 0, typ: null, name: null, sons: []};
NTI2808.node = NNI2808;
NTI2824.base = NTI2808;
NTI2836.base = NTI2824;
NTI2840.base = NTI2836;
var NNI8502 = {kind: 2, len: 2, offset: 0, typ: null, name: null, sons: [{kind: 1, offset: "Field0", len: 0, typ: NTI140, name: "Field0", sons: null}, 
{kind: 1, offset: "Field1", len: 0, typ: NTI104, name: "Field1", sons: null}]};
NTI8502.node = NNI8502;
var NNI2838 = {kind: 2, len: 0, offset: 0, typ: null, name: null, sons: []};
NTI2838.node = NNI2838;
NTI2838.base = NTI2836;
var nim_program_result = [0];
var globalraisehook_7213 = [null];
var localraisehook_7218 = [null];
var outofmemhook_7221 = [null];
function cstrToNimstr(c_8963) {
    var result = [];
    for (var i = 0; i < c_8963.length; ++i) {
      result[i] = c_8963.charCodeAt(i);
    }
    result[result.length] = 0; // terminating zero
    return result;
  }
function arrayConstr(len_9681, value_9682, typ_9683) {
    var result = new Array(len_9681);
    for (var i = 0; i < len_9681; ++i) result[i] = nimCopy(value_9682, typ_9683);
    return result;
  }
function SetConstr() {
    var result = {};
    for (var i = 0; i < arguments.length; ++i) {
      var x = arguments[i];
      if (typeof(x) == "object") {
        for (var j = x[0]; j <= x[1]; ++j) {
          result[j] = true;
        }
      } else {
        result[x] = true;
      }
    }
    return result;
  }
function isfatpointer_9497(ti_9499) {
var result_9500 = false;
BeforeRet: do {
result_9500 = !((SetConstr(17, 16, 4, 18, 27, 19, 23, 22, 21)[ti_9499.base.kind] != undefined));
break BeforeRet;
} while (false); 
return result_9500;
}
function nimCopyAux(dest_9521, src_9522, n_9524) {
switch (n_9524.kind) {
case 0: 
break;
case 1: dest_9521[n_9524.offset] = nimCopy(src_9522[n_9524.offset], n_9524.typ);
break;
case 2: L1: do {
var i_9627 = 0;
var HEX3Atmp_9629 = 0;
HEX3Atmp_9629 = (n_9524.len - 1);
var res_9632 = 0;
L2: do {
L3: while (true) {
if (!(res_9632 <= HEX3Atmp_9629)) break L3;
i_9627 = res_9632;
nimCopyAux(dest_9521, src_9522, n_9524.sons[i_9627]);
res_9632 += 1;
}
} while(false);
} while(false);

break;
case 3:       dest_9521[n_9524.offset] = nimCopy(src_9522[n_9524.offset], n_9524.typ);
      for (var i = 0; i < n_9524.sons.length; ++i) {
        nimCopyAux(dest_9521, src_9522, n_9524.sons[i][1]);
      }
    
break;
}
}
function nimCopy(x_9517, ti_9518) {
var result_9638 = null;
switch (ti_9518.kind) {
case 21: case 22: case 23: case 5: if (!(isfatpointer_9497(ti_9518))) {
result_9638 = x_9517;
}
else {
        result_9638 = [null, 0];
        result_9638[0] = x_9517[0];
        result_9638[1] = x_9517[1];
      }


break;
case 19:       result_9638 = {};
      for (var key in x_9517) { result_9638[key] = x_9517[key]; }
    
break;
case 18: case 17: if (!((ti_9518.base == null))) {
result_9638 = nimCopy(x_9517, ti_9518.base);
}
else {
if ((ti_9518.kind == 17)) {
result_9638 = {m_type: ti_9518};}
else {
result_9638 = {};}
}
nimCopyAux(result_9638, x_9517, ti_9518.node);

break;
case 24: case 4: case 27: case 16:       result_9638 = new Array(x_9517.length);
      for (var i = 0; i < x_9517.length; ++i) {
        result_9638[i] = nimCopy(x_9517[i], ti_9518.base);
      }
    
break;
case 28: result_9638 = x_9517.slice(0);
break;
default: 
result_9638 = x_9517;
break;
}
return result_9638;
}
function add_7236(x_7239, x_7239_Idx, y_7240) {
var F={procname:"system.add",prev:framePtr,filename:"c:\\app\\native-toolchain\\nim-0.10.2\\lib\\system.nim",line:0};
framePtr = F;
      var len = x_7239[0].length-1;
      for (var i = 0; i < y_7240.length; ++i) {
        x_7239[0][len] = y_7240.charCodeAt(i);
        ++len;
      }
      x_7239[0][len] = 0
    framePtr = framePtr.prev;
}
function auxwritestacktrace_8497(f_8499) {
var result_8500 = [null];
var it_8505 = f_8499;
var i_8506 = 0;
var total_8507 = 0;
var tempframes_8511 = arrayConstr(64, {Field0: null, Field1: 0}, NTI8502);
L1: do {
L2: while (true) {
if (!(!((it_8505 == null)) && (i_8506 <= 63))) break L2;
tempframes_8511[i_8506].Field0 = it_8505.procname;
tempframes_8511[i_8506].Field1 = it_8505.line;
i_8506 += 1;
total_8507 += 1;
it_8505 = it_8505.prev;
}
} while(false);
L3: do {
L4: while (true) {
if (!!((it_8505 == null))) break L4;
total_8507 += 1;
it_8505 = it_8505.prev;
}
} while(false);
result_8500[0] = cstrToNimstr("");
if (!((total_8507 == i_8506))) {
result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr("("));
result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr(((total_8507 - i_8506))+""));
result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr(" calls omitted) ...\x0A"));
}

L5: do {
var j_8607 = 0;
var HEX3Atmp_8614 = 0;
HEX3Atmp_8614 = (i_8506 - 1);
var res_8617 = HEX3Atmp_8614;
L6: do {
L7: while (true) {
if (!(0 <= res_8617)) break L7;
j_8607 = res_8617;
add_7236(result_8500, 0, tempframes_8511[j_8607].Field0);
if ((0 < tempframes_8511[j_8607].Field1)) {
result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr(", line: "));
result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr((tempframes_8511[j_8607].Field1)+""));
}

result_8500[0] = (result_8500[0].slice(0, -1)).concat(cstrToNimstr("\x0A"));
res_8617 -= 1;
}
} while(false);
} while(false);
return result_8500[0];
}
function rawwritestacktrace_8618() {
var result_8620 = null;
if (!((framePtr == null))) {
result_8620 = (cstrToNimstr("Traceback (most recent call last)\x0A").slice(0,-1)).concat(auxwritestacktrace_8497(framePtr));
framePtr = null;
}
else {
if (!((lastJSError == null))) {
result_8620 = cstrToNimstr(lastJSError.stack);
}
else {
result_8620 = cstrToNimstr("No stack traceback available\x0A");
}
}
return result_8620;
}
function eqStrings(a_9019, b_9020) {
    if (a_9019 == b_9020) return true;
    if ((!a_9019) || (!b_9020)) return false;
    var alen = a_9019.length;
    if (alen != b_9020.length) return false;
    for (var i = 0; i < alen; ++i)
      if (a_9019[i] != b_9020[i]) return false;
    return true;
  }
function toJSStr(s_8967) {
    var len = s_8967.length-1;
    var result = new Array(len);
    var fcc = String.fromCharCode;
    for (var i = 0; i < len; ++i) {
      result[i] = fcc(s_8967[i]);
    }
    return result.join("");
  }
function raiseException(e_8658, ename_8659) {
var Tmp1;
e_8658.name = ename_8659;
if (!((excHandler == null))) {
excHandler.exc = e_8658;
}
else {
var buf_8801 = [rawwritestacktrace_8618()];
if (!!(eqStrings(e_8658.message, null))) Tmp1 = false; else {Tmp1 = !((e_8658.message[0] == 0)); }if (Tmp1) {
buf_8801[0] = (buf_8801[0].slice(0, -1)).concat(cstrToNimstr("Error: unhandled exception: "));
buf_8801[0] = (buf_8801[0].slice(0, -1)).concat(e_8658.message);
}
else {
buf_8801[0] = (buf_8801[0].slice(0, -1)).concat(cstrToNimstr("Error: unhandled exception"));
}

buf_8801[0] = (buf_8801[0].slice(0, -1)).concat(cstrToNimstr(" ["));
add_7236(buf_8801, 0, ename_8659);
buf_8801[0] = (buf_8801[0].slice(0, -1)).concat(cstrToNimstr("]\x0A"));
console.log(toJSStr(buf_8801[0]));
}

throw e_8658;}
function raiseOverflow() {
var e_8847 = null;
e_8847 = {m_type: NTI2840, parent: null, name: null, message: null, trace: null};
e_8847.message = cstrToNimstr("over- or underflow");
raiseException(e_8847, "OverflowError");
}
function raiseDivByZero() {
var e_8870 = null;
e_8870 = {m_type: NTI2838, parent: null, name: null, message: null, trace: null};
e_8870.message = cstrToNimstr("divison by zero");
raiseException(e_8870, "DivByZeroError");
}
changeBG("green");
