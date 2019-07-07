/*
** Lua binding: libwin32
** Generated automatically by tolua++-1.0.92 on 05/22/14 23:24:14.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_libwin32_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_s3__win32__Registry (lua_State* tolua_S)
{
 s3::win32::Registry* self = (s3::win32::Registry*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_s3__win32__Process (lua_State* tolua_S)
{
 s3::win32::Process* self = (s3::win32::Process*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_s3__win32__ShellLink (lua_State* tolua_S)
{
 s3::win32::ShellLink* self = (s3::win32::ShellLink*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_s3__win32__DirectInput (lua_State* tolua_S)
{
 s3::win32::DirectInput* self = (s3::win32::DirectInput*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"s3::win32::Registry");
 tolua_usertype(tolua_S,"s3::win32::Process");
 tolua_usertype(tolua_S,"s3::win32::ShellLink");
 tolua_usertype(tolua_S,"s3::win32::DirectInput");
}

/* function: s3::win32::com_Init */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_com_Init00
static int tolua_libwin32_s3_win32_com_Init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  s3::win32::com_Init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'com_Init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getCurrentProcessId */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getCurrentProcessId00
static int tolua_libwin32_s3_win32_getCurrentProcessId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  s3::win32::getCurrentProcessId();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentProcessId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getConsHandle */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getConsHandle00
static int tolua_libwin32_s3_win32_getConsHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = ( unsigned long)  s3::win32::getConsHandle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getConsHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getConsHandle */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getConsHandle01
static int tolua_libwin32_s3_win32_getConsHandle01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long procID = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned long tolua_ret = ( unsigned long)  s3::win32::getConsHandle(procID);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_getConsHandle00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setConsInfo */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setConsInfo00
static int tolua_libwin32_s3_win32_setConsInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long dwSize = (( unsigned long)  tolua_tonumber(tolua_S,1,25));
  bool bVisible = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   bool tolua_ret = (bool)  s3::win32::setConsInfo(dwSize,bVisible);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setConsInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setConsPos */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setConsPos00
static int tolua_libwin32_s3_win32_setConsPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   short shXPos = ((  short)  tolua_tonumber(tolua_S,1,0));
   short shYPos = ((  short)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  s3::win32::setConsPos(shXPos,shYPos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setConsPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getConsPos */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getConsPos00
static int tolua_libwin32_s3_win32_getConsPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pos = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::getConsPos(pos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getConsPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setConsColor */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setConsColor00
static int tolua_libwin32_s3_win32_setConsColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   char wFore = ((  char)  tolua_tonumber(tolua_S,1,s3::win32::L_WHITE));
   char wBack = ((  char)  tolua_tonumber(tolua_S,2,s3::win32::L_BLACK));
  {
   bool tolua_ret = (bool)  s3::win32::setConsColor(wFore,wBack);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setConsColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::clearCons */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_clearCons00
static int tolua_libwin32_s3_win32_clearCons00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   char wFore = ((  char)  tolua_tonumber(tolua_S,1,s3::win32::L_WHITE));
   char wBack = ((  char)  tolua_tonumber(tolua_S,2,s3::win32::L_BLACK));
  {
   bool tolua_ret = (bool)  s3::win32::clearCons(wFore,wBack);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearCons'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::drawConsText */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_drawConsText00
static int tolua_libwin32_s3_win32_drawConsText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   short x = ((  short)  tolua_tonumber(tolua_S,1,0));
   short y = ((  short)  tolua_tonumber(tolua_S,2,0));
  const char* str = ((const char*)  tolua_tostring(tolua_S,3,0));
   char color = ((  char)  tolua_tonumber(tolua_S,4,s3::win32::L_WHITE));
   char back = ((  char)  tolua_tonumber(tolua_S,5,s3::win32::L_BLACK));
  {
   bool tolua_ret = (bool)  s3::win32::drawConsText(x,y,str,color,back);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawConsText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::findWindow */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_findWindow00
static int tolua_libwin32_s3_win32_findWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* className = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   unsigned long tolua_ret = ( unsigned long)  s3::win32::findWindow(className,title);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getWindowName */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getWindowName00
static int tolua_libwin32_s3_win32_getWindowName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long max = (( unsigned long)  tolua_tonumber(tolua_S,2,256));
  {
   string tolua_ret = (string)  s3::win32::getWindowName(hwnd,max);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setWindowText */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setWindowText00
static int tolua_libwin32_s3_win32_setWindowText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  s3::win32::setWindowText(hwnd,text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWindowText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getWindowText */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getWindowText00
static int tolua_libwin32_s3_win32_getWindowText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   string tolua_ret = (string)  s3::win32::getWindowText(hwnd);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setWindowPos */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setWindowPos00
static int tolua_libwin32_s3_win32_setWindowPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long insertAfter = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
   long x = ((  long)  tolua_tonumber(tolua_S,3,0));
   long y = ((  long)  tolua_tonumber(tolua_S,4,0));
   long w = ((  long)  tolua_tonumber(tolua_S,5,0));
   long h = ((  long)  tolua_tonumber(tolua_S,6,0));
  unsigned long opt = (( unsigned long)  tolua_tonumber(tolua_S,7,0));
  {
   bool tolua_ret = (bool)  s3::win32::setWindowPos(hwnd,insertAfter,x,y,w,h,opt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWindowPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::setForegroundWindow */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_setForegroundWindow00
static int tolua_libwin32_s3_win32_setForegroundWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::setForegroundWindow(hwnd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setForegroundWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getOpenFile */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getOpenFile00
static int tolua_libwin32_s3_win32_getOpenFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  s3::win32::getOpenFile();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpenFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getOpenFile */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getOpenFile01
static int tolua_libwin32_s3_win32_getOpenFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   string tolua_ret = (string)  s3::win32::getOpenFile(title);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_getOpenFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getOpenFile */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getOpenFile02
static int tolua_libwin32_s3_win32_getOpenFile02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* title = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* filter = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* init_dir = ((const char*)  tolua_tostring(tolua_S,3,""));
  unsigned long parent = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
  {
   string tolua_ret = (string)  s3::win32::getOpenFile(title,filter,init_dir,parent);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_getOpenFile01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getSysDir */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getSysDir00
static int tolua_libwin32_s3_win32_getSysDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   long id = ((  long)  tolua_tonumber(tolua_S,1,CSIDL_PERSONAL));
  bool current = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   string tolua_ret = (string)  s3::win32::getSysDir(id,current);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSysDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getUserName */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getUserName00
static int tolua_libwin32_s3_win32_getUserName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  s3::win32::getUserName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getUserSID */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getUserSID00
static int tolua_libwin32_s3_win32_getUserSID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   string tolua_ret = (string)  s3::win32::getUserSID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserSID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getCursorPos */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getCursorPos00
static int tolua_libwin32_s3_win32_getCursorPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pos = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::getCursorPos(pos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCursorPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::getScreenSize */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_getScreenSize00
static int tolua_libwin32_s3_win32_getScreenSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* size = ((void*)  tolua_touserdata(tolua_S,1,0));
  {
   s3::win32::getScreenSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScreenSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::warpCursor */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_warpCursor00
static int tolua_libwin32_s3_win32_warpCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long x = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  unsigned long y = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  s3::win32::warpCursor(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'warpCursor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::sendMouseAction */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_sendMouseAction00
static int tolua_libwin32_s3_win32_sendMouseAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long event = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::sendMouseAction(event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendMouseAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::sendMouseWheel */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_sendMouseWheel00
static int tolua_libwin32_s3_win32_sendMouseWheel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long rot = (( unsigned long)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::sendMouseWheel(rot);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendMouseWheel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::sendKeyAction */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_sendKeyAction00
static int tolua_libwin32_s3_win32_sendKeyAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char vkey = (( unsigned char)  tolua_tonumber(tolua_S,1,0));
   char mode = ((  char)  tolua_tonumber(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  s3::win32::sendKeyAction(vkey,mode);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendKeyAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: s3::win32::sendKeyString */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_sendKeyString00
static int tolua_libwin32_s3_win32_sendKeyString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* keys = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  s3::win32::sendKeyString(keys);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sendKeyString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_new00
static int tolua_libwin32_s3_win32_Process_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::Process* tolua_ret = (s3::win32::Process*)  Mtolua_new((s3::win32::Process)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::Process");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_new00_local
static int tolua_libwin32_s3_win32_Process_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::Process* tolua_ret = (s3::win32::Process*)  Mtolua_new((s3::win32::Process)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::Process");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_delete00
static int tolua_libwin32_s3_win32_Process_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAll of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getAll00
static int tolua_libwin32_s3_win32_Process_getAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  s3::win32::Process::getAll();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_open00
static int tolua_libwin32_s3_win32_Process_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_open01
static int tolua_libwin32_s3_win32_Process_open01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(id);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_Process_open00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_close00
static int tolua_libwin32_s3_win32_Process_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: exec of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_exec00
static int tolua_libwin32_s3_win32_Process_exec00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'exec'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->exec(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'exec'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_read00
static int tolua_libwin32_s3_win32_Process_read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  void* dest = ((void*)  tolua_touserdata(tolua_S,3,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->read(address,dest,size);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_get00
static int tolua_libwin32_s3_win32_Process_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned char byte = (( unsigned char)  tolua_tonumber(tolua_S,3,4));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->get(address,byte);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_write00
static int tolua_libwin32_s3_win32_Process_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const void* buf = ((const void*)  tolua_touserdata(tolua_S,3,0));
  unsigned long size = (( unsigned long)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write(address,buf,size);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: puts of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_puts00
static int tolua_libwin32_s3_win32_Process_puts00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* exp = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'puts'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->puts(address,exp);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'puts'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_set00
static int tolua_libwin32_s3_win32_Process_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long address = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  unsigned long val = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
  unsigned long byte = (( unsigned long)  tolua_tonumber(tolua_S,4,4));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->set(address,val,byte);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: enumModules of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_enumModules00
static int tolua_libwin32_s3_win32_Process_enumModules00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'enumModules'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->enumModules();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'enumModules'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModuleName of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getModuleName00
static int tolua_libwin32_s3_win32_Process_getModuleName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModuleName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getModuleName(index);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getModuleName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getModule of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getModule00
static int tolua_libwin32_s3_win32_Process_getModule00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getModule'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->getModule(name);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getModule'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isExit of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_isExit00
static int tolua_libwin32_s3_win32_Process_isExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isExit'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isExit();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: kill of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_kill00
static int tolua_libwin32_s3_win32_Process_kill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Process* self = (s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'kill'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->kill();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'kill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pid of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_pid00
static int tolua_libwin32_s3_win32_Process_pid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::Process* self = (const s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pid'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->pid();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hwnd of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_hwnd00
static int tolua_libwin32_s3_win32_Process_hwnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::Process* self = (const s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hwnd'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->hwnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hwnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: handle of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_handle00
static int tolua_libwin32_s3_win32_Process_handle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::Process* self = (const s3::win32::Process*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'handle'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->handle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'handle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNum of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getNum00
static int tolua_libwin32_s3_win32_Process_getNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned long tolua_ret = (unsigned long)  s3::win32::Process::getNum();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getID of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getID00
static int tolua_libwin32_s3_win32_Process_getID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long n = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   unsigned long tolua_ret = (unsigned long)  s3::win32::Process::getID(n);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  s3::win32::Process */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Process_getName00
static int tolua_libwin32_s3_win32_Process_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Process",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned long n = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   string tolua_ret = (string)  s3::win32::Process::getName(n);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_new00
static int tolua_libwin32_s3_win32_Registry_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::Registry* tolua_ret = (s3::win32::Registry*)  Mtolua_new((s3::win32::Registry)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::Registry");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_new00_local
static int tolua_libwin32_s3_win32_Registry_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::Registry* tolua_ret = (s3::win32::Registry*)  Mtolua_new((s3::win32::Registry)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::Registry");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_delete00
static int tolua_libwin32_s3_win32_Registry_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_open00
static int tolua_libwin32_s3_win32_Registry_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long key = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* sub = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(key,sub);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_create00
static int tolua_libwin32_s3_win32_Registry_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long key = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  const char* sub = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->create(key,sub);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_close00
static int tolua_libwin32_s3_win32_Registry_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVal of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_setVal00
static int tolua_libwin32_s3_win32_Registry_setVal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long data = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVal'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setVal(name,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStr of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_setStr00
static int tolua_libwin32_s3_win32_Registry_setStr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* data = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStr'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setStr(name,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_remove00
static int tolua_libwin32_s3_win32_Registry_remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  unsigned long MAX_KEY_LENGTH = (( unsigned long)  tolua_tonumber(tolua_S,2,256));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   self->remove(MAX_KEY_LENGTH);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_remove01
static int tolua_libwin32_s3_win32_Registry_remove01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  s3::win32::Registry* self = (s3::win32::Registry*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->remove(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_Registry_remove00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: reflect of class  s3::win32::Registry */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_Registry_reflect00
static int tolua_libwin32_s3_win32_Registry_reflect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::Registry",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::Registry::reflect();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reflect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_new00
static int tolua_libwin32_s3_win32_ShellLink_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::ShellLink* tolua_ret = (s3::win32::ShellLink*)  Mtolua_new((s3::win32::ShellLink)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::ShellLink");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_new00_local
static int tolua_libwin32_s3_win32_ShellLink_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::ShellLink* tolua_ret = (s3::win32::ShellLink*)  Mtolua_new((s3::win32::ShellLink)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::ShellLink");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_new01
static int tolua_libwin32_s3_win32_ShellLink_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* args = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  {
   s3::win32::ShellLink* tolua_ret = (s3::win32::ShellLink*)  Mtolua_new((s3::win32::ShellLink)(path,args));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::ShellLink");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_ShellLink_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_new01_local
static int tolua_libwin32_s3_win32_ShellLink_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* args = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  {
   s3::win32::ShellLink* tolua_ret = (s3::win32::ShellLink*)  Mtolua_new((s3::win32::ShellLink)(path,args));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::ShellLink");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_ShellLink_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_delete00
static int tolua_libwin32_s3_win32_ShellLink_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: failed of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_failed00
static int tolua_libwin32_s3_win32_ShellLink_failed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::ShellLink* self = (const s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'failed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->failed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'failed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_open00
static int tolua_libwin32_s3_win32_ShellLink_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* args = ((const char*)  tolua_tostring(tolua_S,3,""));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(path,args);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_close00
static int tolua_libwin32_s3_win32_ShellLink_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_save00
static int tolua_libwin32_s3_win32_ShellLink_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->save(path);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWorkDir of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_setWorkDir00
static int tolua_libwin32_s3_win32_ShellLink_setWorkDir00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
  const char* dir = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWorkDir'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setWorkDir(dir);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWorkDir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_setDescription00
static int tolua_libwin32_s3_win32_ShellLink_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setDescription(str);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIcon of class  s3::win32::ShellLink */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_ShellLink_setIcon00
static int tolua_libwin32_s3_win32_ShellLink_setIcon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::ShellLink",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::ShellLink* self = (s3::win32::ShellLink*)  tolua_tousertype(tolua_S,1,0);
  const char* icofile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long index = (( unsigned long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIcon'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setIcon(icofile,index);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIcon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_new00
static int tolua_libwin32_s3_win32_DirectInput_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::DirectInput* tolua_ret = (s3::win32::DirectInput*)  Mtolua_new((s3::win32::DirectInput)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::DirectInput");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_new00_local
static int tolua_libwin32_s3_win32_DirectInput_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   s3::win32::DirectInput* tolua_ret = (s3::win32::DirectInput*)  Mtolua_new((s3::win32::DirectInput)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::DirectInput");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_new01
static int tolua_libwin32_s3_win32_DirectInput_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   s3::win32::DirectInput* tolua_ret = (s3::win32::DirectInput*)  Mtolua_new((s3::win32::DirectInput)(hwnd));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::DirectInput");
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_DirectInput_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_new01_local
static int tolua_libwin32_s3_win32_DirectInput_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
  {
   s3::win32::DirectInput* tolua_ret = (s3::win32::DirectInput*)  Mtolua_new((s3::win32::DirectInput)(hwnd));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"s3::win32::DirectInput");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_libwin32_s3_win32_DirectInput_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_delete00
static int tolua_libwin32_s3_win32_DirectInput_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: failed of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_failed00
static int tolua_libwin32_s3_win32_DirectInput_failed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::DirectInput* self = (const s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'failed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->failed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'failed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: open of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_open00
static int tolua_libwin32_s3_win32_DirectInput_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
  unsigned long hwnd = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'open'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->open(hwnd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: close of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_close00
static int tolua_libwin32_s3_win32_DirectInput_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'close'", NULL);
#endif
  {
   self->close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: acquire of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_acquire00
static int tolua_libwin32_s3_win32_DirectInput_acquire00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'acquire'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->acquire();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'acquire'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unacquire of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_unacquire00
static int tolua_libwin32_s3_win32_DirectInput_unacquire00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unacquire'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->unacquire();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unacquire'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_get00
static int tolua_libwin32_s3_win32_DirectInput_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->get();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_clear00
static int tolua_libwin32_s3_win32_DirectInput_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStr of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_getStr00
static int tolua_libwin32_s3_win32_DirectInput_getStr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  s3::win32::DirectInput* self = (s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStr'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getStr();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: key of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_key00
static int tolua_libwin32_s3_win32_DirectInput_key00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::DirectInput* self = (const s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
  unsigned long id = (( unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'key'", NULL);
#endif
  {
    char tolua_ret = (  char)  self->key(id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'key'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hwnd of class  s3::win32::DirectInput */
#ifndef TOLUA_DISABLE_tolua_libwin32_s3_win32_DirectInput_hwnd00
static int tolua_libwin32_s3_win32_DirectInput_hwnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const s3::win32::DirectInput",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const s3::win32::DirectInput* self = (const s3::win32::DirectInput*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hwnd'", NULL);
#endif
  {
   unsigned long tolua_ret = ( unsigned long)  self->hwnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hwnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_libwin32_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"CSIDL_DESKTOP",CSIDL_DESKTOP);
  tolua_constant(tolua_S,"CSIDL_INTERNET",CSIDL_INTERNET);
  tolua_constant(tolua_S,"CSIDL_PROGRAMS",CSIDL_PROGRAMS);
  tolua_constant(tolua_S,"CSIDL_CONTROLS",CSIDL_CONTROLS);
  tolua_constant(tolua_S,"CSIDL_PRINTERS",CSIDL_PRINTERS);
  tolua_constant(tolua_S,"CSIDL_PERSONAL",CSIDL_PERSONAL);
  tolua_constant(tolua_S,"CSIDL_FAVORITES",CSIDL_FAVORITES);
  tolua_constant(tolua_S,"CSIDL_STARTUP",CSIDL_STARTUP);
  tolua_constant(tolua_S,"CSIDL_RECENT",CSIDL_RECENT);
  tolua_constant(tolua_S,"CSIDL_SENDTO",CSIDL_SENDTO);
  tolua_constant(tolua_S,"CSIDL_BITBUCKET",CSIDL_BITBUCKET);
  tolua_constant(tolua_S,"CSIDL_STARTMENU",CSIDL_STARTMENU);
  tolua_constant(tolua_S,"CSIDL_MYDOCUMENTS",CSIDL_MYDOCUMENTS);
  tolua_constant(tolua_S,"CSIDL_MYMUSIC",CSIDL_MYMUSIC);
  tolua_constant(tolua_S,"CSIDL_MYVIDEO",CSIDL_MYVIDEO);
  tolua_constant(tolua_S,"CSIDL_DESKTOPDIRECTORY",CSIDL_DESKTOPDIRECTORY);
  tolua_constant(tolua_S,"CSIDL_DRIVES",CSIDL_DRIVES);
  tolua_constant(tolua_S,"CSIDL_NETWORK",CSIDL_NETWORK);
  tolua_constant(tolua_S,"CSIDL_NETHOOD",CSIDL_NETHOOD);
  tolua_constant(tolua_S,"CSIDL_FONTS",CSIDL_FONTS);
  tolua_constant(tolua_S,"CSIDL_TEMPLATES",CSIDL_TEMPLATES);
  tolua_constant(tolua_S,"CSIDL_COMMON_STARTMENU",CSIDL_COMMON_STARTMENU);
  tolua_constant(tolua_S,"CSIDL_COMMON_STARTUP",CSIDL_COMMON_STARTUP);
  tolua_constant(tolua_S,"CSIDL_COMMON_DESKTOPDIRECTORY",CSIDL_COMMON_DESKTOPDIRECTORY);
  tolua_constant(tolua_S,"CSIDL_APPDATA",CSIDL_APPDATA);
  tolua_constant(tolua_S,"CSIDL_PRINTHOOD",CSIDL_PRINTHOOD);
  tolua_constant(tolua_S,"CSIDL_LOCAL_APPDATA",CSIDL_LOCAL_APPDATA);
  tolua_constant(tolua_S,"CSIDL_ALTSTARTUP",CSIDL_ALTSTARTUP);
  tolua_constant(tolua_S,"CSIDL_COMMON_ALTSTARTUP",CSIDL_COMMON_ALTSTARTUP);
  tolua_constant(tolua_S,"CSIDL_COMMON_FAVORITES",CSIDL_COMMON_FAVORITES);
  tolua_constant(tolua_S,"CSIDL_INTERNET_CACHE",CSIDL_INTERNET_CACHE);
  tolua_constant(tolua_S,"CSIDL_COOKIES",CSIDL_COOKIES);
  tolua_constant(tolua_S,"CSIDL_HISTORY",CSIDL_HISTORY);
  tolua_constant(tolua_S,"CSIDL_COMMON_APPDATA",CSIDL_COMMON_APPDATA);
  tolua_constant(tolua_S,"CSIDL_WINDOWS",CSIDL_WINDOWS);
  tolua_constant(tolua_S,"CSIDL_SYSTEM",CSIDL_SYSTEM);
  tolua_constant(tolua_S,"CSIDL_PROGRAM_FILES",CSIDL_PROGRAM_FILES);
  tolua_constant(tolua_S,"CSIDL_MYPICTURES",CSIDL_MYPICTURES);
  tolua_constant(tolua_S,"CSIDL_PROFILE",CSIDL_PROFILE);
  tolua_constant(tolua_S,"CSIDL_SYSTEMX86",CSIDL_SYSTEMX86);
  tolua_constant(tolua_S,"CSIDL_PROGRAM_FILESX86",CSIDL_PROGRAM_FILESX86);
  tolua_constant(tolua_S,"HKEY_CLASSES_ROOT",HKEY_CLASSES_ROOT);
  tolua_constant(tolua_S,"HKEY_CURRENT_USER",HKEY_CURRENT_USER);
  tolua_constant(tolua_S,"HKEY_LOCAL_MACHINE",HKEY_LOCAL_MACHINE);
  tolua_constant(tolua_S,"HKEY_USERS",HKEY_USERS);
  tolua_constant(tolua_S,"HKEY_PERFORMANCE_DATA",HKEY_PERFORMANCE_DATA);
  tolua_constant(tolua_S,"HKEY_PERFORMANCE_TEXT",HKEY_PERFORMANCE_TEXT);
  tolua_constant(tolua_S,"HKEY_PERFORMANCE_NLSTEXT",HKEY_PERFORMANCE_NLSTEXT);
  tolua_constant(tolua_S,"DIK_ESCAPE",DIK_ESCAPE);
  tolua_constant(tolua_S,"DIK_1",DIK_1);
  tolua_constant(tolua_S,"DIK_2",DIK_2);
  tolua_constant(tolua_S,"DIK_3",DIK_3);
  tolua_constant(tolua_S,"DIK_4",DIK_4);
  tolua_constant(tolua_S,"DIK_5",DIK_5);
  tolua_constant(tolua_S,"DIK_6",DIK_6);
  tolua_constant(tolua_S,"DIK_7",DIK_7);
  tolua_constant(tolua_S,"DIK_8",DIK_8);
  tolua_constant(tolua_S,"DIK_9",DIK_9);
  tolua_constant(tolua_S,"DIK_0",DIK_0);
  tolua_constant(tolua_S,"DIK_MINUS",DIK_MINUS);
  tolua_constant(tolua_S,"DIK_EQUALS",DIK_EQUALS);
  tolua_constant(tolua_S,"DIK_BACK",DIK_BACK);
  tolua_constant(tolua_S,"DIK_TAB",DIK_TAB);
  tolua_constant(tolua_S,"DIK_Q",DIK_Q);
  tolua_constant(tolua_S,"DIK_W",DIK_W);
  tolua_constant(tolua_S,"DIK_E",DIK_E);
  tolua_constant(tolua_S,"DIK_R",DIK_R);
  tolua_constant(tolua_S,"DIK_T",DIK_T);
  tolua_constant(tolua_S,"DIK_Y",DIK_Y);
  tolua_constant(tolua_S,"DIK_U",DIK_U);
  tolua_constant(tolua_S,"DIK_I",DIK_I);
  tolua_constant(tolua_S,"DIK_O",DIK_O);
  tolua_constant(tolua_S,"DIK_P",DIK_P);
  tolua_constant(tolua_S,"DIK_LBRACKET",DIK_LBRACKET);
  tolua_constant(tolua_S,"DIK_RBRACKET",DIK_RBRACKET);
  tolua_constant(tolua_S,"DIK_RETURN",DIK_RETURN);
  tolua_constant(tolua_S,"DIK_LCONTROL",DIK_LCONTROL);
  tolua_constant(tolua_S,"DIK_A",DIK_A);
  tolua_constant(tolua_S,"DIK_S",DIK_S);
  tolua_constant(tolua_S,"DIK_D",DIK_D);
  tolua_constant(tolua_S,"DIK_F",DIK_F);
  tolua_constant(tolua_S,"DIK_G",DIK_G);
  tolua_constant(tolua_S,"DIK_H",DIK_H);
  tolua_constant(tolua_S,"DIK_J",DIK_J);
  tolua_constant(tolua_S,"DIK_K",DIK_K);
  tolua_constant(tolua_S,"DIK_L",DIK_L);
  tolua_constant(tolua_S,"DIK_SEMICOLON",DIK_SEMICOLON);
  tolua_constant(tolua_S,"DIK_APOSTROPHE",DIK_APOSTROPHE);
  tolua_constant(tolua_S,"DIK_GRAVE",DIK_GRAVE);
  tolua_constant(tolua_S,"DIK_LSHIFT",DIK_LSHIFT);
  tolua_constant(tolua_S,"DIK_BACKSLASH",DIK_BACKSLASH);
  tolua_constant(tolua_S,"DIK_Z",DIK_Z);
  tolua_constant(tolua_S,"DIK_X",DIK_X);
  tolua_constant(tolua_S,"DIK_C",DIK_C);
  tolua_constant(tolua_S,"DIK_V",DIK_V);
  tolua_constant(tolua_S,"DIK_B",DIK_B);
  tolua_constant(tolua_S,"DIK_N",DIK_N);
  tolua_constant(tolua_S,"DIK_M",DIK_M);
  tolua_constant(tolua_S,"DIK_COMMA",DIK_COMMA);
  tolua_constant(tolua_S,"DIK_PERIOD",DIK_PERIOD);
  tolua_constant(tolua_S,"DIK_SLASH",DIK_SLASH);
  tolua_constant(tolua_S,"DIK_RSHIFT",DIK_RSHIFT);
  tolua_constant(tolua_S,"DIK_MULTIPLY",DIK_MULTIPLY);
  tolua_constant(tolua_S,"DIK_LMENU",DIK_LMENU);
  tolua_constant(tolua_S,"DIK_SPACE",DIK_SPACE);
  tolua_constant(tolua_S,"DIK_CAPITAL",DIK_CAPITAL);
  tolua_constant(tolua_S,"DIK_F1",DIK_F1);
  tolua_constant(tolua_S,"DIK_F2",DIK_F2);
  tolua_constant(tolua_S,"DIK_F3",DIK_F3);
  tolua_constant(tolua_S,"DIK_F4",DIK_F4);
  tolua_constant(tolua_S,"DIK_F5",DIK_F5);
  tolua_constant(tolua_S,"DIK_F6",DIK_F6);
  tolua_constant(tolua_S,"DIK_F7",DIK_F7);
  tolua_constant(tolua_S,"DIK_F8",DIK_F8);
  tolua_constant(tolua_S,"DIK_F9",DIK_F9);
  tolua_constant(tolua_S,"DIK_F10",DIK_F10);
  tolua_constant(tolua_S,"DIK_NUMLOCK",DIK_NUMLOCK);
  tolua_constant(tolua_S,"DIK_SCROLL",DIK_SCROLL);
  tolua_constant(tolua_S,"DIK_NUMPAD7",DIK_NUMPAD7);
  tolua_constant(tolua_S,"DIK_NUMPAD8",DIK_NUMPAD8);
  tolua_constant(tolua_S,"DIK_NUMPAD9",DIK_NUMPAD9);
  tolua_constant(tolua_S,"DIK_SUBTRACT",DIK_SUBTRACT);
  tolua_constant(tolua_S,"DIK_NUMPAD4",DIK_NUMPAD4);
  tolua_constant(tolua_S,"DIK_NUMPAD5",DIK_NUMPAD5);
  tolua_constant(tolua_S,"DIK_NUMPAD6",DIK_NUMPAD6);
  tolua_constant(tolua_S,"DIK_ADD",DIK_ADD);
  tolua_constant(tolua_S,"DIK_NUMPAD1",DIK_NUMPAD1);
  tolua_constant(tolua_S,"DIK_NUMPAD2",DIK_NUMPAD2);
  tolua_constant(tolua_S,"DIK_NUMPAD3",DIK_NUMPAD3);
  tolua_constant(tolua_S,"DIK_NUMPAD0",DIK_NUMPAD0);
  tolua_constant(tolua_S,"DIK_DECIMAL",DIK_DECIMAL);
  tolua_constant(tolua_S,"DIK_OEM_102",DIK_OEM_102);
  tolua_constant(tolua_S,"DIK_F11",DIK_F11);
  tolua_constant(tolua_S,"DIK_F12",DIK_F12);
  tolua_constant(tolua_S,"DIK_F13",DIK_F13);
  tolua_constant(tolua_S,"DIK_F14",DIK_F14);
  tolua_constant(tolua_S,"DIK_F15",DIK_F15);
  tolua_constant(tolua_S,"DIK_KANA",DIK_KANA);
  tolua_constant(tolua_S,"DIK_ABNT_C1",DIK_ABNT_C1);
  tolua_constant(tolua_S,"DIK_CONVERT",DIK_CONVERT);
  tolua_constant(tolua_S,"DIK_NOCONVERT",DIK_NOCONVERT);
  tolua_constant(tolua_S,"DIK_YEN",DIK_YEN);
  tolua_constant(tolua_S,"DIK_ABNT_C2",DIK_ABNT_C2);
  tolua_constant(tolua_S,"DIK_NUMPADEQUALS",DIK_NUMPADEQUALS);
  tolua_constant(tolua_S,"DIK_PREVTRACK",DIK_PREVTRACK);
  tolua_constant(tolua_S,"DIK_AT",DIK_AT);
  tolua_constant(tolua_S,"DIK_COLON",DIK_COLON);
  tolua_constant(tolua_S,"DIK_UNDERLINE",DIK_UNDERLINE);
  tolua_constant(tolua_S,"DIK_KANJI",DIK_KANJI);
  tolua_constant(tolua_S,"DIK_STOP",DIK_STOP);
  tolua_constant(tolua_S,"DIK_AX",DIK_AX);
  tolua_constant(tolua_S,"DIK_UNLABELED",DIK_UNLABELED);
  tolua_constant(tolua_S,"DIK_NEXTTRACK",DIK_NEXTTRACK);
  tolua_constant(tolua_S,"DIK_NUMPADENTER",DIK_NUMPADENTER);
  tolua_constant(tolua_S,"DIK_RCONTROL",DIK_RCONTROL);
  tolua_constant(tolua_S,"DIK_MUTE",DIK_MUTE);
  tolua_constant(tolua_S,"DIK_CALCULATOR",DIK_CALCULATOR);
  tolua_constant(tolua_S,"DIK_PLAYPAUSE",DIK_PLAYPAUSE);
  tolua_constant(tolua_S,"DIK_MEDIASTOP",DIK_MEDIASTOP);
  tolua_constant(tolua_S,"DIK_VOLUMEDOWN",DIK_VOLUMEDOWN);
  tolua_constant(tolua_S,"DIK_VOLUMEUP",DIK_VOLUMEUP);
  tolua_constant(tolua_S,"DIK_WEBHOME",DIK_WEBHOME);
  tolua_constant(tolua_S,"DIK_NUMPADCOMMA",DIK_NUMPADCOMMA);
  tolua_constant(tolua_S,"DIK_DIVIDE",DIK_DIVIDE);
  tolua_constant(tolua_S,"DIK_SYSRQ",DIK_SYSRQ);
  tolua_constant(tolua_S,"DIK_RMENU",DIK_RMENU);
  tolua_constant(tolua_S,"DIK_PAUSE",DIK_PAUSE);
  tolua_constant(tolua_S,"DIK_HOME",DIK_HOME);
  tolua_constant(tolua_S,"DIK_UP",DIK_UP);
  tolua_constant(tolua_S,"DIK_PRIOR",DIK_PRIOR);
  tolua_constant(tolua_S,"DIK_LEFT",DIK_LEFT);
  tolua_constant(tolua_S,"DIK_RIGHT",DIK_RIGHT);
  tolua_constant(tolua_S,"DIK_END",DIK_END);
  tolua_constant(tolua_S,"DIK_DOWN",DIK_DOWN);
  tolua_constant(tolua_S,"DIK_NEXT",DIK_NEXT);
  tolua_constant(tolua_S,"DIK_INSERT",DIK_INSERT);
  tolua_constant(tolua_S,"DIK_DELETE",DIK_DELETE);
  tolua_constant(tolua_S,"DIK_LWIN",DIK_LWIN);
  tolua_constant(tolua_S,"DIK_RWIN",DIK_RWIN);
  tolua_constant(tolua_S,"DIK_APPS",DIK_APPS);
  tolua_constant(tolua_S,"DIK_POWER",DIK_POWER);
  tolua_constant(tolua_S,"DIK_SLEEP",DIK_SLEEP);
  tolua_constant(tolua_S,"DIK_WAKE",DIK_WAKE);
  tolua_constant(tolua_S,"DIK_WEBSEARCH",DIK_WEBSEARCH);
  tolua_constant(tolua_S,"DIK_WEBFAVORITES",DIK_WEBFAVORITES);
  tolua_constant(tolua_S,"DIK_WEBREFRESH",DIK_WEBREFRESH);
  tolua_constant(tolua_S,"DIK_WEBSTOP",DIK_WEBSTOP);
  tolua_constant(tolua_S,"DIK_WEBFORWARD",DIK_WEBFORWARD);
  tolua_constant(tolua_S,"DIK_WEBBACK",DIK_WEBBACK);
  tolua_constant(tolua_S,"DIK_MYCOMPUTER",DIK_MYCOMPUTER);
  tolua_constant(tolua_S,"DIK_MAIL",DIK_MAIL);
  tolua_constant(tolua_S,"DIK_MEDIASELECT",DIK_MEDIASELECT);
  tolua_constant(tolua_S,"VK_BACK",VK_BACK);
  tolua_constant(tolua_S,"VK_TAB",VK_TAB);
  tolua_constant(tolua_S,"VK_CLEAR",VK_CLEAR);
  tolua_constant(tolua_S,"VK_RETURN",VK_RETURN);
  tolua_constant(tolua_S,"VK_SHIFT",VK_SHIFT);
  tolua_constant(tolua_S,"VK_CONTROL",VK_CONTROL);
  tolua_constant(tolua_S,"VK_MENU",VK_MENU);
  tolua_constant(tolua_S,"VK_PAUSE",VK_PAUSE);
  tolua_constant(tolua_S,"VK_CAPITAL",VK_CAPITAL);
  tolua_constant(tolua_S,"VK_KANA",VK_KANA);
  tolua_constant(tolua_S,"VK_HANGUL",VK_HANGUL);
  tolua_constant(tolua_S,"VK_JUNJA",VK_JUNJA);
  tolua_constant(tolua_S,"VK_FINAL",VK_FINAL);
  tolua_constant(tolua_S,"VK_HANJA",VK_HANJA);
  tolua_constant(tolua_S,"VK_KANJI",VK_KANJI);
  tolua_constant(tolua_S,"VK_ESCAPE",VK_ESCAPE);
  tolua_constant(tolua_S,"VK_CONVERT",VK_CONVERT);
  tolua_constant(tolua_S,"VK_NONCONVERT",VK_NONCONVERT);
  tolua_constant(tolua_S,"VK_ACCEPT",VK_ACCEPT);
  tolua_constant(tolua_S,"VK_MODECHANGE",VK_MODECHANGE);
  tolua_constant(tolua_S,"VK_SPACE",VK_SPACE);
  tolua_constant(tolua_S,"VK_PRIOR",VK_PRIOR);
  tolua_constant(tolua_S,"VK_NEXT",VK_NEXT);
  tolua_constant(tolua_S,"VK_END",VK_END);
  tolua_constant(tolua_S,"VK_HOME",VK_HOME);
  tolua_constant(tolua_S,"VK_LEFT",VK_LEFT);
  tolua_constant(tolua_S,"VK_UP",VK_UP);
  tolua_constant(tolua_S,"VK_RIGHT",VK_RIGHT);
  tolua_constant(tolua_S,"VK_DOWN",VK_DOWN);
  tolua_constant(tolua_S,"VK_SELECT",VK_SELECT);
  tolua_constant(tolua_S,"VK_PRINT",VK_PRINT);
  tolua_constant(tolua_S,"VK_EXECUTE",VK_EXECUTE);
  tolua_constant(tolua_S,"VK_SNAPSHOT",VK_SNAPSHOT);
  tolua_constant(tolua_S,"VK_INSERT",VK_INSERT);
  tolua_constant(tolua_S,"VK_DELETE",VK_DELETE);
  tolua_constant(tolua_S,"VK_HELP",VK_HELP);
  tolua_constant(tolua_S,"VK_LWIN",VK_LWIN);
  tolua_constant(tolua_S,"VK_RWIN",VK_RWIN);
  tolua_constant(tolua_S,"VK_UNDERBAR",VK_UNDERBAR);
  tolua_constant(tolua_S,"VK_APPS",VK_APPS);
  tolua_constant(tolua_S,"VK_SLEEP",VK_SLEEP);
  tolua_constant(tolua_S,"VK_NUMPAD0",VK_NUMPAD0);
  tolua_constant(tolua_S,"VK_NUMPAD1",VK_NUMPAD1);
  tolua_constant(tolua_S,"VK_NUMPAD2",VK_NUMPAD2);
  tolua_constant(tolua_S,"VK_NUMPAD3",VK_NUMPAD3);
  tolua_constant(tolua_S,"VK_NUMPAD4",VK_NUMPAD4);
  tolua_constant(tolua_S,"VK_NUMPAD5",VK_NUMPAD5);
  tolua_constant(tolua_S,"VK_NUMPAD6",VK_NUMPAD6);
  tolua_constant(tolua_S,"VK_NUMPAD7",VK_NUMPAD7);
  tolua_constant(tolua_S,"VK_NUMPAD8",VK_NUMPAD8);
  tolua_constant(tolua_S,"VK_NUMPAD9",VK_NUMPAD9);
  tolua_constant(tolua_S,"VK_MULTIPLY",VK_MULTIPLY);
  tolua_constant(tolua_S,"VK_ADD",VK_ADD);
  tolua_constant(tolua_S,"VK_SEPARATOR",VK_SEPARATOR);
  tolua_constant(tolua_S,"VK_SUBTRACT",VK_SUBTRACT);
  tolua_constant(tolua_S,"VK_DECIMAL",VK_DECIMAL);
  tolua_constant(tolua_S,"VK_DIVIDE",VK_DIVIDE);
  tolua_constant(tolua_S,"VK_F1",VK_F1);
  tolua_constant(tolua_S,"VK_F2",VK_F2);
  tolua_constant(tolua_S,"VK_F3",VK_F3);
  tolua_constant(tolua_S,"VK_F4",VK_F4);
  tolua_constant(tolua_S,"VK_F5",VK_F5);
  tolua_constant(tolua_S,"VK_F6",VK_F6);
  tolua_constant(tolua_S,"VK_F7",VK_F7);
  tolua_constant(tolua_S,"VK_F8",VK_F8);
  tolua_constant(tolua_S,"VK_F9",VK_F9);
  tolua_constant(tolua_S,"VK_F10",VK_F10);
  tolua_constant(tolua_S,"VK_F11",VK_F11);
  tolua_constant(tolua_S,"VK_F12",VK_F12);
  tolua_constant(tolua_S,"VK_F13",VK_F13);
  tolua_constant(tolua_S,"VK_F14",VK_F14);
  tolua_constant(tolua_S,"VK_F15",VK_F15);
  tolua_constant(tolua_S,"VK_F16",VK_F16);
  tolua_constant(tolua_S,"VK_F17",VK_F17);
  tolua_constant(tolua_S,"VK_F18",VK_F18);
  tolua_constant(tolua_S,"VK_F19",VK_F19);
  tolua_constant(tolua_S,"VK_F20",VK_F20);
  tolua_constant(tolua_S,"VK_F21",VK_F21);
  tolua_constant(tolua_S,"VK_F22",VK_F22);
  tolua_constant(tolua_S,"VK_F23",VK_F23);
  tolua_constant(tolua_S,"VK_F24",VK_F24);
  tolua_constant(tolua_S,"VK_NUMLOCK",VK_NUMLOCK);
  tolua_constant(tolua_S,"VK_SCROLL",VK_SCROLL);
  tolua_constant(tolua_S,"VK_LSHIFT",VK_LSHIFT);
  tolua_constant(tolua_S,"VK_RSHIFT",VK_RSHIFT);
  tolua_constant(tolua_S,"VK_LCONTROL",VK_LCONTROL);
  tolua_constant(tolua_S,"VK_RCONTROL",VK_RCONTROL);
  tolua_constant(tolua_S,"VK_LMENU",VK_LMENU);
  tolua_constant(tolua_S,"VK_RMENU",VK_RMENU);
  tolua_constant(tolua_S,"VK_BROWSER_BACK",VK_BROWSER_BACK);
  tolua_constant(tolua_S,"VK_BROWSER_FORWARD",VK_BROWSER_FORWARD);
  tolua_constant(tolua_S,"VK_BROWSER_REFRESH",VK_BROWSER_REFRESH);
  tolua_constant(tolua_S,"VK_BROWSER_STOP",VK_BROWSER_STOP);
  tolua_constant(tolua_S,"VK_BROWSER_SEARCH",VK_BROWSER_SEARCH);
  tolua_constant(tolua_S,"VK_BROWSER_FAVORITES",VK_BROWSER_FAVORITES);
  tolua_constant(tolua_S,"VK_BROWSER_HOME",VK_BROWSER_HOME);
  tolua_constant(tolua_S,"VK_VOLUME_MUTE",VK_VOLUME_MUTE);
  tolua_constant(tolua_S,"VK_VOLUME_DOWN",VK_VOLUME_DOWN);
  tolua_constant(tolua_S,"VK_VOLUME_UP",VK_VOLUME_UP);
  tolua_constant(tolua_S,"VK_MEDIA_NEXT_TRACK",VK_MEDIA_NEXT_TRACK);
  tolua_constant(tolua_S,"VK_MEDIA_PREV_TRACK",VK_MEDIA_PREV_TRACK);
  tolua_constant(tolua_S,"VK_MEDIA_STOP",VK_MEDIA_STOP);
  tolua_constant(tolua_S,"VK_MEDIA_PLAY_PAUSE",VK_MEDIA_PLAY_PAUSE);
  tolua_constant(tolua_S,"VK_LAUNCH_MAIL",VK_LAUNCH_MAIL);
  tolua_constant(tolua_S,"VK_LAUNCH_MEDIA_SELECT",VK_LAUNCH_MEDIA_SELECT);
  tolua_constant(tolua_S,"VK_LAUNCH_APP1",VK_LAUNCH_APP1);
  tolua_constant(tolua_S,"VK_LAUNCH_APP2",VK_LAUNCH_APP2);
  tolua_constant(tolua_S,"VK_OEM_1",VK_OEM_1);
  tolua_constant(tolua_S,"VK_OEM_PLUS",VK_OEM_PLUS);
  tolua_constant(tolua_S,"VK_OEM_COMMA",VK_OEM_COMMA);
  tolua_constant(tolua_S,"VK_OEM_MINUS",VK_OEM_MINUS);
  tolua_constant(tolua_S,"VK_OEM_PERIOD",VK_OEM_PERIOD);
  tolua_constant(tolua_S,"VK_OEM_2",VK_OEM_2);
  tolua_constant(tolua_S,"VK_OEM_3",VK_OEM_3);
  tolua_constant(tolua_S,"VK_OEM_AT",VK_OEM_AT);
  tolua_constant(tolua_S,"VK_OEM_4",VK_OEM_4);
  tolua_constant(tolua_S,"VK_OEM_5",VK_OEM_5);
  tolua_constant(tolua_S,"VK_OEM_6",VK_OEM_6);
  tolua_constant(tolua_S,"VK_OEM_7",VK_OEM_7);
  tolua_constant(tolua_S,"VK_OEM_8",VK_OEM_8);
  tolua_constant(tolua_S,"VK_OEM_AX",VK_OEM_AX);
  tolua_constant(tolua_S,"VK_OEM_102",VK_OEM_102);
  tolua_constant(tolua_S,"VK_ICO_HELP",VK_ICO_HELP);
  tolua_constant(tolua_S,"VK_ICO_00",VK_ICO_00);
  tolua_constant(tolua_S,"VK_PROCESSKEY",VK_PROCESSKEY);
  tolua_constant(tolua_S,"VK_ICO_CLEAR",VK_ICO_CLEAR);
  tolua_constant(tolua_S,"VK_PACKET",VK_PACKET);
  tolua_constant(tolua_S,"VK_OEM_RESET",VK_OEM_RESET);
  tolua_constant(tolua_S,"VK_OEM_JUMP",VK_OEM_JUMP);
  tolua_constant(tolua_S,"VK_OEM_PA1",VK_OEM_PA1);
  tolua_constant(tolua_S,"VK_OEM_PA2",VK_OEM_PA2);
  tolua_constant(tolua_S,"VK_OEM_PA3",VK_OEM_PA3);
  tolua_constant(tolua_S,"VK_OEM_WSCTRL",VK_OEM_WSCTRL);
  tolua_constant(tolua_S,"VK_OEM_CUSEL",VK_OEM_CUSEL);
  tolua_constant(tolua_S,"VK_OEM_ATTN",VK_OEM_ATTN);
  tolua_constant(tolua_S,"VK_OEM_FINISH",VK_OEM_FINISH);
  tolua_constant(tolua_S,"VK_OEM_COPY",VK_OEM_COPY);
  tolua_constant(tolua_S,"VK_OEM_AUTO",VK_OEM_AUTO);
  tolua_constant(tolua_S,"VK_OEM_ENLW",VK_OEM_ENLW);
  tolua_constant(tolua_S,"VK_OEM_BACKTAB",VK_OEM_BACKTAB);
  tolua_constant(tolua_S,"VK_ATTN",VK_ATTN);
  tolua_constant(tolua_S,"VK_CRSEL",VK_CRSEL);
  tolua_constant(tolua_S,"VK_EXSEL",VK_EXSEL);
  tolua_constant(tolua_S,"VK_EREOF",VK_EREOF);
  tolua_constant(tolua_S,"VK_PLAY",VK_PLAY);
  tolua_constant(tolua_S,"VK_ZOOM",VK_ZOOM);
  tolua_constant(tolua_S,"VK_NONAME",VK_NONAME);
  tolua_constant(tolua_S,"VK_PA1",VK_PA1);
  tolua_constant(tolua_S,"VK_OEM_CLEAR",VK_OEM_CLEAR);
  tolua_constant(tolua_S,"SWP_NOSIZE",SWP_NOSIZE);
  tolua_constant(tolua_S,"SWP_NOMOVE",SWP_NOMOVE);
  tolua_constant(tolua_S,"SWP_NOZORDER",SWP_NOZORDER);
  tolua_constant(tolua_S,"SWP_NOREDRAW",SWP_NOREDRAW);
  tolua_constant(tolua_S,"SWP_NOACTIVATE",SWP_NOACTIVATE);
  tolua_constant(tolua_S,"SWP_FRAMECHANGED",SWP_FRAMECHANGED);
  tolua_constant(tolua_S,"SWP_SHOWWINDOW",SWP_SHOWWINDOW);
  tolua_constant(tolua_S,"SWP_HIDEWINDOW",SWP_HIDEWINDOW);
  tolua_constant(tolua_S,"SWP_NOCOPYBITS",SWP_NOCOPYBITS);
  tolua_constant(tolua_S,"SWP_NOOWNERZORDER",SWP_NOOWNERZORDER);
  tolua_constant(tolua_S,"SWP_NOSENDCHANGING",SWP_NOSENDCHANGING);
  tolua_constant(tolua_S,"HWND_TOP",HWND_TOP);
  tolua_constant(tolua_S,"HWND_BOTTOM",HWND_BOTTOM);
  tolua_constant(tolua_S,"HWND_TOPMOST",HWND_TOPMOST);
  tolua_constant(tolua_S,"HWND_NOTOPMOST",HWND_NOTOPMOST);
  tolua_module(tolua_S,"s3",0);
  tolua_beginmodule(tolua_S,"s3");
   tolua_module(tolua_S,"win32",0);
   tolua_beginmodule(tolua_S,"win32");
    tolua_function(tolua_S,"com_Init",tolua_libwin32_s3_win32_com_Init00);
    tolua_constant(tolua_S,"L_BLACK",s3::win32::L_BLACK);
    tolua_constant(tolua_S,"L_BLUE",s3::win32::L_BLUE);
    tolua_constant(tolua_S,"L_GREEN",s3::win32::L_GREEN);
    tolua_constant(tolua_S,"L_CYAN",s3::win32::L_CYAN);
    tolua_constant(tolua_S,"L_RED",s3::win32::L_RED);
    tolua_constant(tolua_S,"L_PURPLE",s3::win32::L_PURPLE);
    tolua_constant(tolua_S,"L_YELLOW",s3::win32::L_YELLOW);
    tolua_constant(tolua_S,"L_WHITE",s3::win32::L_WHITE);
    tolua_constant(tolua_S,"H_BLACK",s3::win32::H_BLACK);
    tolua_constant(tolua_S,"H_BLUE",s3::win32::H_BLUE);
    tolua_constant(tolua_S,"H_GREEN",s3::win32::H_GREEN);
    tolua_constant(tolua_S,"H_CYAN",s3::win32::H_CYAN);
    tolua_constant(tolua_S,"H_RED",s3::win32::H_RED);
    tolua_constant(tolua_S,"H_PURPLE",s3::win32::H_PURPLE);
    tolua_constant(tolua_S,"H_YELLOW",s3::win32::H_YELLOW);
    tolua_constant(tolua_S,"H_WHITE",s3::win32::H_WHITE);
    tolua_function(tolua_S,"getCurrentProcessId",tolua_libwin32_s3_win32_getCurrentProcessId00);
    tolua_function(tolua_S,"getConsHandle",tolua_libwin32_s3_win32_getConsHandle00);
    tolua_function(tolua_S,"getConsHandle",tolua_libwin32_s3_win32_getConsHandle01);
    tolua_function(tolua_S,"setConsInfo",tolua_libwin32_s3_win32_setConsInfo00);
    tolua_function(tolua_S,"setConsPos",tolua_libwin32_s3_win32_setConsPos00);
    tolua_function(tolua_S,"getConsPos",tolua_libwin32_s3_win32_getConsPos00);
    tolua_function(tolua_S,"setConsColor",tolua_libwin32_s3_win32_setConsColor00);
    tolua_function(tolua_S,"clearCons",tolua_libwin32_s3_win32_clearCons00);
    tolua_function(tolua_S,"drawConsText",tolua_libwin32_s3_win32_drawConsText00);
    tolua_function(tolua_S,"findWindow",tolua_libwin32_s3_win32_findWindow00);
    tolua_function(tolua_S,"getWindowName",tolua_libwin32_s3_win32_getWindowName00);
    tolua_function(tolua_S,"setWindowText",tolua_libwin32_s3_win32_setWindowText00);
    tolua_function(tolua_S,"getWindowText",tolua_libwin32_s3_win32_getWindowText00);
    tolua_function(tolua_S,"setWindowPos",tolua_libwin32_s3_win32_setWindowPos00);
    tolua_function(tolua_S,"setForegroundWindow",tolua_libwin32_s3_win32_setForegroundWindow00);
    tolua_function(tolua_S,"getOpenFile",tolua_libwin32_s3_win32_getOpenFile00);
    tolua_function(tolua_S,"getOpenFile",tolua_libwin32_s3_win32_getOpenFile01);
    tolua_function(tolua_S,"getOpenFile",tolua_libwin32_s3_win32_getOpenFile02);
    tolua_function(tolua_S,"getSysDir",tolua_libwin32_s3_win32_getSysDir00);
    tolua_function(tolua_S,"getUserName",tolua_libwin32_s3_win32_getUserName00);
    tolua_function(tolua_S,"getUserSID",tolua_libwin32_s3_win32_getUserSID00);
    tolua_function(tolua_S,"getCursorPos",tolua_libwin32_s3_win32_getCursorPos00);
    tolua_function(tolua_S,"getScreenSize",tolua_libwin32_s3_win32_getScreenSize00);
    tolua_function(tolua_S,"warpCursor",tolua_libwin32_s3_win32_warpCursor00);
    tolua_constant(tolua_S,"MOUSEACT_LEFTDOWN",s3::win32::MOUSEACT_LEFTDOWN);
    tolua_constant(tolua_S,"MOUSEACT_LEFTUP",s3::win32::MOUSEACT_LEFTUP);
    tolua_constant(tolua_S,"MOUSEACT_RIGHTDOWN",s3::win32::MOUSEACT_RIGHTDOWN);
    tolua_constant(tolua_S,"MOUSEACT_RIGHTUP",s3::win32::MOUSEACT_RIGHTUP);
    tolua_constant(tolua_S,"MOUSEACT_MIDDLEDOWN",s3::win32::MOUSEACT_MIDDLEDOWN);
    tolua_constant(tolua_S,"MOUSEACT_MIDDLEUP",s3::win32::MOUSEACT_MIDDLEUP);
    tolua_constant(tolua_S,"MOUSEACT_XDOWN",s3::win32::MOUSEACT_XDOWN);
    tolua_constant(tolua_S,"MOUSEACT_XUP",s3::win32::MOUSEACT_XUP);
    tolua_function(tolua_S,"sendMouseAction",tolua_libwin32_s3_win32_sendMouseAction00);
    tolua_function(tolua_S,"sendMouseWheel",tolua_libwin32_s3_win32_sendMouseWheel00);
    tolua_function(tolua_S,"sendKeyAction",tolua_libwin32_s3_win32_sendKeyAction00);
    tolua_function(tolua_S,"sendKeyString",tolua_libwin32_s3_win32_sendKeyString00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"s3",0);
  tolua_beginmodule(tolua_S,"s3");
   tolua_module(tolua_S,"win32",0);
   tolua_beginmodule(tolua_S,"win32");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Process","s3::win32::Process","",tolua_collect_s3__win32__Process);
    #else
    tolua_cclass(tolua_S,"Process","s3::win32::Process","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Process");
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_Process_new00);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_Process_new00_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_Process_new00_local);
     tolua_function(tolua_S,"delete",tolua_libwin32_s3_win32_Process_delete00);
     tolua_function(tolua_S,"getAll",tolua_libwin32_s3_win32_Process_getAll00);
     tolua_function(tolua_S,"open",tolua_libwin32_s3_win32_Process_open00);
     tolua_function(tolua_S,"open",tolua_libwin32_s3_win32_Process_open01);
     tolua_function(tolua_S,"close",tolua_libwin32_s3_win32_Process_close00);
     tolua_function(tolua_S,"exec",tolua_libwin32_s3_win32_Process_exec00);
     tolua_function(tolua_S,"read",tolua_libwin32_s3_win32_Process_read00);
     tolua_function(tolua_S,"get",tolua_libwin32_s3_win32_Process_get00);
     tolua_function(tolua_S,"write",tolua_libwin32_s3_win32_Process_write00);
     tolua_function(tolua_S,"puts",tolua_libwin32_s3_win32_Process_puts00);
     tolua_function(tolua_S,"set",tolua_libwin32_s3_win32_Process_set00);
     tolua_function(tolua_S,"enumModules",tolua_libwin32_s3_win32_Process_enumModules00);
     tolua_function(tolua_S,"getModuleName",tolua_libwin32_s3_win32_Process_getModuleName00);
     tolua_function(tolua_S,"getModule",tolua_libwin32_s3_win32_Process_getModule00);
     tolua_function(tolua_S,"isExit",tolua_libwin32_s3_win32_Process_isExit00);
     tolua_function(tolua_S,"kill",tolua_libwin32_s3_win32_Process_kill00);
     tolua_function(tolua_S,"pid",tolua_libwin32_s3_win32_Process_pid00);
     tolua_function(tolua_S,"hwnd",tolua_libwin32_s3_win32_Process_hwnd00);
     tolua_function(tolua_S,"handle",tolua_libwin32_s3_win32_Process_handle00);
     tolua_function(tolua_S,"getNum",tolua_libwin32_s3_win32_Process_getNum00);
     tolua_function(tolua_S,"getID",tolua_libwin32_s3_win32_Process_getID00);
     tolua_function(tolua_S,"getName",tolua_libwin32_s3_win32_Process_getName00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Registry","s3::win32::Registry","",tolua_collect_s3__win32__Registry);
    #else
    tolua_cclass(tolua_S,"Registry","s3::win32::Registry","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Registry");
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_Registry_new00);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_Registry_new00_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_Registry_new00_local);
     tolua_function(tolua_S,"delete",tolua_libwin32_s3_win32_Registry_delete00);
     tolua_function(tolua_S,"open",tolua_libwin32_s3_win32_Registry_open00);
     tolua_function(tolua_S,"create",tolua_libwin32_s3_win32_Registry_create00);
     tolua_function(tolua_S,"close",tolua_libwin32_s3_win32_Registry_close00);
     tolua_function(tolua_S,"setVal",tolua_libwin32_s3_win32_Registry_setVal00);
     tolua_function(tolua_S,"setStr",tolua_libwin32_s3_win32_Registry_setStr00);
     tolua_function(tolua_S,"remove",tolua_libwin32_s3_win32_Registry_remove00);
     tolua_function(tolua_S,"remove",tolua_libwin32_s3_win32_Registry_remove01);
     tolua_function(tolua_S,"reflect",tolua_libwin32_s3_win32_Registry_reflect00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"ShellLink","s3::win32::ShellLink","",tolua_collect_s3__win32__ShellLink);
    #else
    tolua_cclass(tolua_S,"ShellLink","s3::win32::ShellLink","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"ShellLink");
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_ShellLink_new00);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_ShellLink_new00_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_ShellLink_new00_local);
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_ShellLink_new01);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_ShellLink_new01_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_ShellLink_new01_local);
     tolua_function(tolua_S,"delete",tolua_libwin32_s3_win32_ShellLink_delete00);
     tolua_function(tolua_S,"failed",tolua_libwin32_s3_win32_ShellLink_failed00);
     tolua_function(tolua_S,"open",tolua_libwin32_s3_win32_ShellLink_open00);
     tolua_function(tolua_S,"close",tolua_libwin32_s3_win32_ShellLink_close00);
     tolua_function(tolua_S,"save",tolua_libwin32_s3_win32_ShellLink_save00);
     tolua_function(tolua_S,"setWorkDir",tolua_libwin32_s3_win32_ShellLink_setWorkDir00);
     tolua_function(tolua_S,"setDescription",tolua_libwin32_s3_win32_ShellLink_setDescription00);
     tolua_function(tolua_S,"setIcon",tolua_libwin32_s3_win32_ShellLink_setIcon00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"s3",0);
  tolua_beginmodule(tolua_S,"s3");
   tolua_module(tolua_S,"win32",0);
   tolua_beginmodule(tolua_S,"win32");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"DirectInput","s3::win32::DirectInput","",tolua_collect_s3__win32__DirectInput);
    #else
    tolua_cclass(tolua_S,"DirectInput","s3::win32::DirectInput","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"DirectInput");
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_DirectInput_new00);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_DirectInput_new00_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_DirectInput_new00_local);
     tolua_function(tolua_S,"new",tolua_libwin32_s3_win32_DirectInput_new01);
     tolua_function(tolua_S,"new_local",tolua_libwin32_s3_win32_DirectInput_new01_local);
     tolua_function(tolua_S,".call",tolua_libwin32_s3_win32_DirectInput_new01_local);
     tolua_function(tolua_S,"delete",tolua_libwin32_s3_win32_DirectInput_delete00);
     tolua_function(tolua_S,"failed",tolua_libwin32_s3_win32_DirectInput_failed00);
     tolua_function(tolua_S,"open",tolua_libwin32_s3_win32_DirectInput_open00);
     tolua_function(tolua_S,"close",tolua_libwin32_s3_win32_DirectInput_close00);
     tolua_function(tolua_S,"acquire",tolua_libwin32_s3_win32_DirectInput_acquire00);
     tolua_function(tolua_S,"unacquire",tolua_libwin32_s3_win32_DirectInput_unacquire00);
     tolua_function(tolua_S,"get",tolua_libwin32_s3_win32_DirectInput_get00);
     tolua_function(tolua_S,"clear",tolua_libwin32_s3_win32_DirectInput_clear00);
     tolua_function(tolua_S,"getStr",tolua_libwin32_s3_win32_DirectInput_getStr00);
     tolua_function(tolua_S,"key",tolua_libwin32_s3_win32_DirectInput_key00);
     tolua_function(tolua_S,"hwnd",tolua_libwin32_s3_win32_DirectInput_hwnd00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_libwin32 (lua_State* tolua_S) {
 return tolua_libwin32_open(tolua_S);
};
#endif

