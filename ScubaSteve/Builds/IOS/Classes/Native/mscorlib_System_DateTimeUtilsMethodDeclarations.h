﻿#pragma once

// System.DateTimeUtils
struct DateTimeUtils_t2356;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t54;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2010;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_2.h"

// System.Int32 System.DateTimeUtils::CountRepeat(System.String,System.Int32,System.Char)
 int32_t DateTimeUtils_CountRepeat_m12786 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___p, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeUtils::ZeroPad(System.Text.StringBuilder,System.Int32,System.Int32)
 void DateTimeUtils_ZeroPad_m12787 (Object_t * __this/* static, unused */, StringBuilder_t54 * ___output, int32_t ___digits, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeUtils::ParseQuotedString(System.String,System.Int32,System.Text.StringBuilder)
 int32_t DateTimeUtils_ParseQuotedString_m12788 (Object_t * __this/* static, unused */, String_t* ___fmt, int32_t ___pos, StringBuilder_t54 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&)
 String_t* DateTimeUtils_GetStandardPattern_m12789 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t2010 * ___dfi, bool* ___useutc, bool* ___use_invariant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&,System.Boolean)
 String_t* DateTimeUtils_GetStandardPattern_m12790 (Object_t * __this/* static, unused */, uint16_t ___format, DateTimeFormatInfo_t2010 * ___dfi, bool* ___useutc, bool* ___use_invariant, bool ___date_time_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m12791 (Object_t * __this/* static, unused */, DateTime_t45  ___dt, String_t* ___format, DateTimeFormatInfo_t2010 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.Nullable`1<System.TimeSpan>,System.String,System.Globalization.DateTimeFormatInfo)
 String_t* DateTimeUtils_ToString_m12792 (Object_t * __this/* static, unused */, DateTime_t45  ___dt, Nullable_1_t2357  ___utc_offset, String_t* ___format, DateTimeFormatInfo_t2010 * ___dfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
