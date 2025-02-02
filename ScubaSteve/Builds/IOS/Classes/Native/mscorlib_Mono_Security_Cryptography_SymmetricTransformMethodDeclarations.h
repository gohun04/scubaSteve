﻿#pragma once

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t1930;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1728;
// System.Byte[]
struct ByteU5BU5D_t163;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
 void SymmetricTransform__ctor_m9945 (SymmetricTransform_t1930 * __this, SymmetricAlgorithm_t1728 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t163* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
 void SymmetricTransform_System_IDisposable_Dispose_m9946 (SymmetricTransform_t1930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
 void SymmetricTransform_Finalize_m9947 (SymmetricTransform_t1930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
 void SymmetricTransform_Dispose_m9948 (SymmetricTransform_t1930 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
 bool SymmetricTransform_get_CanReuseTransform_m9949 (SymmetricTransform_t1930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
 void SymmetricTransform_Transform_m9950 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
 void SymmetricTransform_CBC_m9951 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
 void SymmetricTransform_CFB_m9952 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
 void SymmetricTransform_OFB_m9953 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
 void SymmetricTransform_CTS_m9954 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___input, ByteU5BU5D_t163* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_CheckInput_m9955 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_TransformBlock_m9956 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t163* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
 bool SymmetricTransform_get_KeepLastBlock_m9957 (SymmetricTransform_t1930 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_InternalTransformBlock_m9958 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t163* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_Random_m9959 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___buffer, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
 void SymmetricTransform_ThrowBadPaddingException_m9960 (SymmetricTransform_t1930 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* SymmetricTransform_FinalEncrypt_m9961 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* SymmetricTransform_FinalDecrypt_m9962 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t163* SymmetricTransform_TransformFinalBlock_m9963 (SymmetricTransform_t1930 * __this, ByteU5BU5D_t163* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
