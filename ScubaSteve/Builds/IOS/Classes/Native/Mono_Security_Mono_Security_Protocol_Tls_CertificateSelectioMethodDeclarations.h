﻿#pragma once

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1772;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1492;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1506;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t31;
// System.AsyncCallback
struct AsyncCallback_t32;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
 void CertificateSelectionCallback__ctor_m8663 (CertificateSelectionCallback_t1772 * __this, Object_t * ___object, IntPtr_t35 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1492 * CertificateSelectionCallback_Invoke_m8664 (CertificateSelectionCallback_t1772 * __this, X509CertificateCollection_t1506 * ___clientCertificates, X509Certificate_t1492 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1506 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
 Object_t * CertificateSelectionCallback_BeginInvoke_m8665 (CertificateSelectionCallback_t1772 * __this, X509CertificateCollection_t1506 * ___clientCertificates, X509Certificate_t1492 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1506 * ___serverRequestedCertificates, AsyncCallback_t32 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
 X509Certificate_t1492 * CertificateSelectionCallback_EndInvoke_m8666 (CertificateSelectionCallback_t1772 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
