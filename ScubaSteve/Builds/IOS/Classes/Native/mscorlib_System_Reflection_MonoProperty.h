﻿#pragma once
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2101;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.MonoProperty
struct MonoProperty_t2099  : public PropertyInfo_t1863
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t35 ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t35 ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t2098  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t2101 * ___cached_getter_4;
};
