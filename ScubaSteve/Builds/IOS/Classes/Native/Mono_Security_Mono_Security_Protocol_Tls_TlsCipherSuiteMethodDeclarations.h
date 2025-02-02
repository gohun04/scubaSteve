﻿#pragma once

// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t1753;
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

// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
 void TlsCipherSuite__ctor_m8523 (TlsCipherSuite_t1753 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t163* TlsCipherSuite_ComputeServerRecordMAC_m8524 (TlsCipherSuite_t1753 * __this, uint8_t ___contentType, ByteU5BU5D_t163* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t163* TlsCipherSuite_ComputeClientRecordMAC_m8525 (TlsCipherSuite_t1753 * __this, uint8_t ___contentType, ByteU5BU5D_t163* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeMasterSecret(System.Byte[])
 void TlsCipherSuite_ComputeMasterSecret_m8526 (TlsCipherSuite_t1753 * __this, ByteU5BU5D_t163* ___preMasterSecret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeKeys()
 void TlsCipherSuite_ComputeKeys_m8527 (TlsCipherSuite_t1753 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
