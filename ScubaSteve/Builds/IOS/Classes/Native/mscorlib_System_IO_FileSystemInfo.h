﻿#pragma once
// System.String
struct String_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileSystemInfo
struct FileSystemInfo_t2024  : public MarshalByRefObject_t1518
{
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t2037  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;
};
