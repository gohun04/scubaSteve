﻿#pragma once

// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t1754;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t163;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void SslCipherSuite__ctor_m8447 (SslCipherSuite_t1754 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t163* SslCipherSuite_ComputeServerRecordMAC_m8448 (SslCipherSuite_t1754 * __this, uint8_t ___contentType, ByteU5BU5D_t163* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t163* SslCipherSuite_ComputeClientRecordMAC_m8449 (SslCipherSuite_t1754 * __this, uint8_t ___contentType, ByteU5BU5D_t163* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeMasterSecret(System.Byte[])
 void SslCipherSuite_ComputeMasterSecret_m8450 (SslCipherSuite_t1754 * __this, ByteU5BU5D_t163* ___preMasterSecret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeKeys()
 void SslCipherSuite_ComputeKeys_m8451 (SslCipherSuite_t1754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::prf(System.Byte[],System.String,System.Byte[])
 ByteU5BU5D_t163* SslCipherSuite_prf_m8452 (SslCipherSuite_t1754 * __this, ByteU5BU5D_t163* ___secret, String_t* ___label, ByteU5BU5D_t163* ___random, MethodInfo* method) IL2CPP_METHOD_ATTR;
