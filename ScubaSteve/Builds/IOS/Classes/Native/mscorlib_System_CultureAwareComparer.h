﻿#pragma once
// System.Globalization.CompareInfo
struct CompareInfo_t1840;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct CultureAwareComparer_t2400  : public StringComparer_t1299
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1840 * ____compareInfo_5;
};
