﻿#pragma once

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t2271;
// System.Byte[]
struct ByteU5BU5D_t163;

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
 void SHA256Managed__ctor_m11981 (SHA256Managed_t2271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA256Managed_HashCore_m11982 (SHA256Managed_t2271 * __this, ByteU5BU5D_t163* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
 ByteU5BU5D_t163* SHA256Managed_HashFinal_m11983 (SHA256Managed_t2271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
 void SHA256Managed_Initialize_m11984 (SHA256Managed_t2271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
 void SHA256Managed_ProcessBlock_m11985 (SHA256Managed_t2271 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void SHA256Managed_ProcessFinalBlock_m11986 (SHA256Managed_t2271 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
 void SHA256Managed_AddLength_m11987 (SHA256Managed_t2271 * __this, uint64_t ___length, ByteU5BU5D_t163* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
