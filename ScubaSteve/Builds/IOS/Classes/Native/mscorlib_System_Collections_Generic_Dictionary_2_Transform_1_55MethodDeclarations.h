﻿#pragma once

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>
struct Transform_1_t3880;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m21138 (Transform_1_t3880 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
 bool Transform_1_Invoke_m21139 (Transform_1_t3880 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m21140 (Transform_1_t3880 * __this, String_t* ___key, bool ___value, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Transform_1_EndInvoke_m21141 (Transform_1_t3880 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
