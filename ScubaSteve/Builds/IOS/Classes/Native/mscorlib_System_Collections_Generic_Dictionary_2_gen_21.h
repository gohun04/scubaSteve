﻿#pragma once
// System.Int32[]
struct Int32U5BU5D_t529;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2706;
// System.Object[]
struct ObjectU5BU5D_t470;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3050;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1242;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3051;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3049  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::table
	Int32U5BU5D_t529* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::linkSlots
	LinkU5BU5D_t2706* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::keySlots
	ObjectU5BU5D_t470* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::valueSlots
	ObjectU5BU5D_t470* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Object>::serialization_info
	SerializationInfo_t1242 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t3049_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.Object,System.Object>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<>f__am$cacheB
	Transform_1_t3051 * ___U3CU3Ef__am$cacheB_15;
};
