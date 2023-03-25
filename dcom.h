

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for C:\Users\DELL\Documents\dcom\dcom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __dcom_h__
#define __dcom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;

#endif 	/* __IUnknown_FWD_DEFINED__ */


#ifndef __IRemUnknown_FWD_DEFINED__
#define __IRemUnknown_FWD_DEFINED__
typedef interface IRemUnknown IRemUnknown;

#endif 	/* __IRemUnknown_FWD_DEFINED__ */


#ifndef __IRemUnknown2_FWD_DEFINED__
#define __IRemUnknown2_FWD_DEFINED__
typedef interface IRemUnknown2 IRemUnknown2;

#endif 	/* __IRemUnknown2_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dcom_0000_0000 */
/* [local] */ 

typedef unsigned short wchar_t;

typedef void *ADCONNECTION_HANDLE;

typedef int BOOL;

typedef int *PBOOL;

typedef int *LPBOOL;

typedef unsigned char BYTE;

typedef unsigned char *PBYTE;

typedef unsigned char *LPBYTE;

typedef BYTE BOOLEAN;

typedef BYTE *PBOOLEAN;

typedef wchar_t WCHAR;

typedef wchar_t *PWCHAR;

typedef WCHAR *BSTR;

typedef unsigned char CHAR;

typedef unsigned char *PCHAR;

typedef double DOUBLE;

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef unsigned int DWORD32;

typedef unsigned __int64 DWORD64;

typedef unsigned __int64 *PDWORD64;

typedef unsigned __int64 ULONGLONG;

typedef ULONGLONG DWORDLONG;

typedef ULONGLONG *PDWORDLONG;

typedef unsigned long error_status_t;

typedef float FLOAT;

typedef unsigned char UCHAR;

typedef unsigned char *PUCHAR;

typedef short SHORT;

typedef void *HANDLE;

typedef DWORD HCALL;

typedef int INT;

typedef int *LPINT;

typedef signed char INT8;

typedef short INT16;

typedef int INT32;

typedef __int64 INT64;

typedef void *LDAP_UDP_HANDLE;

typedef const wchar_t *LMCSTR;

typedef WCHAR *LMSTR;

typedef long LONG;

typedef long *PLONG;

typedef long *LPLONG;

typedef __int64 LONGLONG;

typedef LONG HRESULT;

typedef /* [custom] */ __int3264 LONG_PTR;

typedef /* [custom] */ unsigned __int3264 ULONG_PTR;

typedef int LONG32;

typedef __int64 LONG64;

typedef __int64 *PLONG64;

typedef const unsigned char *LPCSTR;

typedef const void *LPCVOID;

typedef const wchar_t *LPCWSTR;

typedef unsigned char *PSTR;

typedef unsigned char *LPSTR;

typedef wchar_t *LPWSTR;

typedef wchar_t *PWSTR;

typedef DWORD NET_API_STATUS;

typedef long NTSTATUS;

typedef /* [context_handle] */ void *PCONTEXT_HANDLE;

typedef /* [ref] */ PCONTEXT_HANDLE *PPCONTEXT_HANDLE;

typedef unsigned __int64 QWORD;

typedef void *RPC_BINDING_HANDLE;

typedef UCHAR *STRING;

typedef unsigned int UINT;

typedef unsigned char UINT8;

typedef unsigned short UINT16;

typedef unsigned int UINT32;

typedef unsigned __int64 UINT64;

typedef unsigned long ULONG;

typedef unsigned long *PULONG;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef unsigned int ULONG32;

typedef unsigned __int64 ULONG64;

typedef wchar_t UNICODE;

typedef unsigned short USHORT;

typedef void VOID;

typedef void *PVOID;

typedef void *LPVOID;

typedef unsigned short WORD;

typedef unsigned short *PWORD;

typedef unsigned short *LPWORD;

typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } 	FILETIME;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;

typedef struct _GUID
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    byte Data4[ 8 ];
    } 	GUID;

typedef struct _GUID UUID;

typedef struct _GUID *PGUID;

typedef struct _LARGE_INTEGER
    {
    __int64 QuadPart;
    } 	LARGE_INTEGER;

typedef struct _LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _EVENT_DESCRIPTOR
    {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
    } 	EVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR *PEVENT_DESCRIPTOR;

typedef struct _EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;

typedef struct _EVENT_HEADER
    {
    USHORT Size;
    USHORT HeaderType;
    USHORT Flags;
    USHORT EventProperty;
    ULONG ThreadId;
    ULONG ProcessId;
    LARGE_INTEGER TimeStamp;
    GUID ProviderId;
    EVENT_DESCRIPTOR EventDescriptor;
    union 
        {
        struct 
            {
            ULONG KernelTime;
            ULONG UserTime;
            } 	;
        ULONG64 ProcessorTime;
        } 	;
    GUID ActivityId;
    } 	EVENT_HEADER;

typedef struct _EVENT_HEADER *PEVENT_HEADER;

typedef DWORD LCID;

typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } 	LUID;

typedef struct _LUID *PLUID;

typedef struct _MULTI_SZ
    {
    wchar_t *Value;
    DWORD nChar;
    } 	MULTI_SZ;

typedef struct _RPC_UNICODE_STRING
    {
    unsigned short Length;
    unsigned short MaximumLength;
    /* [length_is][size_is] */ WCHAR *Buffer;
    } 	RPC_UNICODE_STRING;

typedef struct _RPC_UNICODE_STRING *PRPC_UNICODE_STRING;

typedef struct _SERVER_INFO_100
    {
    DWORD sv100_platform_id;
    /* [string] */ wchar_t *sv100_name;
    } 	SERVER_INFO_100;

typedef struct _SERVER_INFO_100 *PSERVER_INFO_100;

typedef struct _SERVER_INFO_100 *LPSERVER_INFO_100;

typedef struct _SERVER_INFO_101
    {
    DWORD sv101_platform_id;
    /* [string] */ wchar_t *sv101_name;
    DWORD sv101_version_major;
    DWORD sv101_version_minor;
    DWORD sv101_version_type;
    /* [string] */ wchar_t *sv101_comment;
    } 	SERVER_INFO_101;

typedef struct _SERVER_INFO_101 *PSERVER_INFO_101;

typedef struct _SERVER_INFO_101 *LPSERVER_INFO_101;

typedef struct _SYSTEMTIME
    {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
    } 	SYSTEMTIME;

typedef struct _SYSTEMTIME *PSYSTEMTIME;

typedef struct _UINT128
    {
    UINT64 lower;
    UINT64 upper;
    } 	UINT128;

typedef struct _UINT128 *PUINT128;

typedef struct _ULARGE_INTEGER
    {
    unsigned __int64 QuadPart;
    } 	ULARGE_INTEGER;

typedef struct _ULARGE_INTEGER *PULARGE_INTEGER;

typedef struct _RPC_SID_IDENTIFIER_AUTHORITY
    {
    byte Value[ 6 ];
    } 	RPC_SID_IDENTIFIER_AUTHORITY;

typedef DWORD ACCESS_MASK;

typedef ACCESS_MASK *PACCESS_MASK;

typedef struct _OBJECT_TYPE_LIST
    {
    WORD Level;
    ACCESS_MASK Remaining;
    GUID *ObjectType;
    } 	OBJECT_TYPE_LIST;

typedef struct _OBJECT_TYPE_LIST *POBJECT_TYPE_LIST;

typedef struct _ACE_HEADER
    {
    UCHAR AceType;
    UCHAR AceFlags;
    USHORT AceSize;
    } 	ACE_HEADER;

typedef struct _ACE_HEADER *PACE_HEADER;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE
    {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    } 	SYSTEM_MANDATORY_LABEL_ACE;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE *PSYSTEM_MANDATORY_LABEL_ACE;

typedef struct _TOKEN_MANDATORY_POLICY
    {
    DWORD Policy;
    } 	TOKEN_MANDATORY_POLICY;

typedef struct _TOKEN_MANDATORY_POLICY *PTOKEN_MANDATORY_POLICY;

typedef struct _MANDATORY_INFORMATION
    {
    ACCESS_MASK AllowedAccess;
    BOOLEAN WriteAllowed;
    BOOLEAN ReadAllowed;
    BOOLEAN ExecuteAllowed;
    TOKEN_MANDATORY_POLICY MandatoryPolicy;
    } 	MANDATORY_INFORMATION;

typedef struct _MANDATORY_INFORMATION *PMANDATORY_INFORMATION;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE
    {
    DWORD Length;
    BYTE OctetString[ 1 ];
    } 	CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1
    {
    DWORD Name;
    WORD ValueType;
    WORD Reserved;
    DWORD Flags;
    DWORD ValueCount;
    union 
        {
        PLONG64 pInt64[ 1 ];
        PDWORD64 pUint64[ 1 ];
        PWSTR ppString[ 1 ];
        PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE pOctetString[ 1 ];
        } 	Values;
    } 	CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;

typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;

typedef DWORD SECURITY_INFORMATION;

typedef DWORD *PSECURITY_INFORMATION;

typedef struct _RPC_SID
    {
    unsigned char Revision;
    unsigned char SubAuthorityCount;
    RPC_SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ unsigned long SubAuthority[ 1 ];
    } 	RPC_SID;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _RPC_SID *PSID;

typedef struct _ACL
    {
    unsigned char AclRevision;
    unsigned char Sbz1;
    unsigned short AclSize;
    unsigned short AceCount;
    unsigned short Sbz2;
    } 	ACL;

typedef struct _ACL *PACL;

typedef struct _SECURITY_DESCRIPTOR
    {
    UCHAR Revision;
    UCHAR Sbz1;
    USHORT Control;
    PSID Owner;
    PSID Group;
    PACL Sacl;
    PACL Dacl;
    } 	SECURITY_DESCRIPTOR;

typedef struct _SECURITY_DESCRIPTOR *PSECURITY_DESCRIPTOR;

typedef GUID CLSID;

typedef GUID IID;

typedef MIDL_uhyper ID;

typedef MIDL_uhyper OXID;

typedef MIDL_uhyper OID;

typedef MIDL_uhyper SETID;

typedef GUID IPID;

typedef GUID CID;

typedef const GUID *REFIPID;

typedef struct tagCOMVERSION
    {
    unsigned short MajorVersion;
    unsigned short MinorVersion;
    } 	COMVERSION;

typedef struct tagORPC_EXTENT
    {
    GUID id;
    unsigned long size;
    /* [size_is] */ byte data[ 1 ];
    } 	ORPC_EXTENT;

typedef struct tagORPC_EXTENT_ARRAY
    {
    unsigned long size;
    unsigned long reserved;
    /* [unique][size_is][size_is] */ ORPC_EXTENT **extent;
    } 	ORPC_EXTENT_ARRAY;

typedef struct tagORPCTHIS
    {
    COMVERSION version;
    unsigned long flags;
    unsigned long reserved1;
    CID cid;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHIS;

typedef struct tagORPCTHAT
    {
    unsigned long flags;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHAT;

typedef struct tagDUALSTRINGARRAY
    {
    unsigned short wNumEntries;
    unsigned short wSecurityOffset;
    /* [size_is] */ unsigned short aStringArray[ 1 ];
    } 	DUALSTRINGARRAY;


enum tagCPFLAGS
    {
        CPFLAG_PROPAGATE	= 0x1,
        CPFLAG_EXPOSE	= 0x2,
        CPFLAG_ENVOY	= 0x4
    } ;
typedef struct tagMInterfacePointer
    {
    unsigned long ulCntData;
    /* [size_is] */ byte abData[ 1 ];
    } 	MInterfacePointer;

typedef /* [unique] */ MInterfacePointer *PMInterfacePointer;

typedef struct tagErrorObjectData
    {
    DWORD dwVersion;
    DWORD dwHelpContext;
    IID iid;
    /* [string][unique] */ wchar_t *pszSource;
    /* [string][unique] */ wchar_t *pszDescription;
    /* [string][unique] */ wchar_t *pszHelpFile;
    } 	ErrorObjectData;



extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0000_v0_0_s_ifspec;

#ifndef __IActivation_INTERFACE_DEFINED__
#define __IActivation_INTERFACE_DEFINED__

/* interface IActivation */
/* [unique][uuid] */ 

#define	MAX_REQUESTED_INTERFACES	( 0x8000 )

#define	MAX_REQUESTED_PROTSEQS	( 0x8000 )

error_status_t RemoteActivation( 
    /* [in] */ handle_t hRpc,
    /* [in] */ ORPCTHIS *ORPCthis,
    /* [out] */ ORPCTHAT *ORPCthat,
    /* [in] */ GUID *Clsid,
    /* [unique][string][in] */ wchar_t *pwszObjectName,
    /* [unique][in] */ MInterfacePointer *pObjectStorage,
    /* [in] */ DWORD ClientImpLevel,
    /* [in] */ DWORD Mode,
    /* [range][in] */ DWORD Interfaces,
    /* [size_is][unique][in] */ IID *pIIDs,
    /* [range][in] */ unsigned short cRequestedProtseqs,
    /* [size_is][in] */ unsigned short aRequestedProtseqs[  ],
    /* [out] */ OXID *pOxid,
    /* [out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [out] */ IPID *pipidRemUnknown,
    /* [out] */ DWORD *pAuthnHint,
    /* [out] */ COMVERSION *pServerVersion,
    /* [out] */ HRESULT *phr,
    /* [disable_consistency_check][size_is][out] */ MInterfacePointer **ppInterfaceData,
    /* [disable_consistency_check][size_is][out] */ HRESULT *pResults);



extern RPC_IF_HANDLE IActivation_v0_0_c_ifspec;
extern RPC_IF_HANDLE IActivation_v0_0_s_ifspec;
#endif /* __IActivation_INTERFACE_DEFINED__ */

#ifndef __IRemoteSCMActivator_INTERFACE_DEFINED__
#define __IRemoteSCMActivator_INTERFACE_DEFINED__

/* interface IRemoteSCMActivator */
/* [unique][uuid] */ 

void Opnum0NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum2NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RemoteGetClassObject( 
    /* [in] */ handle_t rpc,
    /* [in] */ ORPCTHIS *orpcthis,
    /* [out] */ ORPCTHAT *orpcthat,
    /* [unique][in] */ MInterfacePointer *pActProperties,
    /* [out] */ MInterfacePointer **ppActProperties);

HRESULT RemoteCreateInstance( 
    /* [in] */ handle_t rpc,
    /* [in] */ ORPCTHIS *orpcthis,
    /* [out] */ ORPCTHAT *orpcthat,
    /* [unique][in] */ MInterfacePointer *pUnkOuter,
    /* [unique][in] */ MInterfacePointer *pActProperties,
    /* [out] */ MInterfacePointer **ppActProperties);



extern RPC_IF_HANDLE IRemoteSCMActivator_v0_0_c_ifspec;
extern RPC_IF_HANDLE IRemoteSCMActivator_v0_0_s_ifspec;
#endif /* __IRemoteSCMActivator_INTERFACE_DEFINED__ */

#ifndef __IObjectExporter_INTERFACE_DEFINED__
#define __IObjectExporter_INTERFACE_DEFINED__

/* interface IObjectExporter */
/* [unique][uuid] */ 

/* [idempotent] */ error_status_t ResolveOxid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID *pipidRemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint);

/* [idempotent] */ error_status_t SimplePing( 
    /* [in] */ handle_t hRpc,
    /* [in] */ SETID *pSetId);

/* [idempotent] */ error_status_t ComplexPing( 
    /* [in] */ handle_t hRpc,
    /* [out][in] */ SETID *pSetId,
    /* [in] */ unsigned short SequenceNum,
    /* [in] */ unsigned short cAddToSet,
    /* [in] */ unsigned short cDelFromSet,
    /* [size_is][unique][in] */ OID AddToSet[  ],
    /* [size_is][unique][in] */ OID DelFromSet[  ],
    /* [out] */ unsigned short *pPingBackoffFactor);

/* [idempotent] */ error_status_t ServerAlive( 
    /* [in] */ handle_t hRpc);

/* [idempotent] */ error_status_t ResolveOxid2( 
    /* [in] */ handle_t hRpc,
    /* [in] */ OXID *pOxid,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][ref][in] */ unsigned short arRequestedProtseqs[  ],
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOxidBindings,
    /* [ref][out] */ IPID *pipidRemUnknown,
    /* [ref][out] */ DWORD *pAuthnHint,
    /* [ref][out] */ COMVERSION *pComVersion);

/* [idempotent] */ error_status_t ServerAlive2( 
    /* [in] */ handle_t hRpc,
    /* [ref][out] */ COMVERSION *pComVersion,
    /* [ref][out] */ DUALSTRINGARRAY **ppdsaOrBindings,
    /* [ref][out] */ DWORD *pReserved);



extern RPC_IF_HANDLE IObjectExporter_v0_0_c_ifspec;
extern RPC_IF_HANDLE IObjectExporter_v0_0_s_ifspec;
#endif /* __IObjectExporter_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_dcom_0000_0003 */
/* [local] */ 

typedef struct tagSTDOBJREF
    {
    unsigned long flags;
    unsigned long cPublicRefs;
    OXID oxid;
    OID oid;
    IPID ipid;
    } 	STDOBJREF;

typedef struct tagREMQIRESULT
    {
    HRESULT hResult;
    STDOBJREF std;
    } 	REMQIRESULT;

typedef struct tagREMINTERFACEREF
    {
    IPID ipid;
    unsigned long cPublicRefs;
    unsigned long cPrivateRefs;
    } 	REMINTERFACEREF;

typedef /* [disable_consistency_check] */ REMQIRESULT *PREMQIRESULT;

typedef /* [disable_consistency_check] */ MInterfacePointer *PMInterfacePointerInternal;



extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0003_v0_0_s_ifspec;

#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

/* interface IUnknown */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000000-0000-0000-C000-000000000046")
    IUnknown
    {
    public:
        BEGIN_INTERFACE
        virtual HRESULT STDMETHODCALLTYPE Opnum0NotUsedOnWire( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Opnum1NotUsedOnWire( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Opnum2NotUsedOnWire( void) = 0;
        
        END_INTERFACE
    };
    
    
#else 	/* C style interface */

    typedef struct IUnknownVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum0NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum0NotUsedOnWire )( 
            IUnknown * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum1NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum1NotUsedOnWire )( 
            IUnknown * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum2NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum2NotUsedOnWire )( 
            IUnknown * This);
        
        END_INTERFACE
    } IUnknownVtbl;

    interface IUnknown
    {
        CONST_VTBL struct IUnknownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnknown_Opnum0NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum0NotUsedOnWire(This) ) 

#define IUnknown_Opnum1NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum1NotUsedOnWire(This) ) 

#define IUnknown_Opnum2NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum2NotUsedOnWire(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IUnknown_Opnum0NotUsedOnWire_Proxy( 
    IUnknown * This);


void __RPC_STUB IUnknown_Opnum0NotUsedOnWire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUnknown_Opnum1NotUsedOnWire_Proxy( 
    IUnknown * This);


void __RPC_STUB IUnknown_Opnum1NotUsedOnWire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IUnknown_Opnum2NotUsedOnWire_Proxy( 
    IUnknown * This);


void __RPC_STUB IUnknown_Opnum2NotUsedOnWire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IUnknown_INTERFACE_DEFINED__ */


#ifndef __IRemUnknown_INTERFACE_DEFINED__
#define __IRemUnknown_INTERFACE_DEFINED__

/* interface IRemUnknown */
/* [uuid][object] */ 


EXTERN_C const IID IID_IRemUnknown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000131-0000-0000-C000-000000000046")
    IRemUnknown : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RemQueryInterface( 
            /* [in] */ REFIPID ripid,
            /* [in] */ unsigned long cRefs,
            /* [in] */ unsigned short cIids,
            /* [size_is][in] */ IID *iids,
            /* [size_is][size_is][out] */ PREMQIRESULT *ppQIResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemAddRef( 
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ],
            /* [size_is][out] */ HRESULT *pResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemRelease( 
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemUnknownVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum0NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum0NotUsedOnWire )( 
            IRemUnknown * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum1NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum1NotUsedOnWire )( 
            IRemUnknown * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum2NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum2NotUsedOnWire )( 
            IRemUnknown * This);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemQueryInterface)
        HRESULT ( STDMETHODCALLTYPE *RemQueryInterface )( 
            IRemUnknown * This,
            /* [in] */ REFIPID ripid,
            /* [in] */ unsigned long cRefs,
            /* [in] */ unsigned short cIids,
            /* [size_is][in] */ IID *iids,
            /* [size_is][size_is][out] */ PREMQIRESULT *ppQIResults);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemAddRef)
        HRESULT ( STDMETHODCALLTYPE *RemAddRef )( 
            IRemUnknown * This,
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ],
            /* [size_is][out] */ HRESULT *pResults);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemRelease)
        HRESULT ( STDMETHODCALLTYPE *RemRelease )( 
            IRemUnknown * This,
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ]);
        
        END_INTERFACE
    } IRemUnknownVtbl;

    interface IRemUnknown
    {
        CONST_VTBL struct IRemUnknownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemUnknown_Opnum0NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum0NotUsedOnWire(This) ) 

#define IRemUnknown_Opnum1NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum1NotUsedOnWire(This) ) 

#define IRemUnknown_Opnum2NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum2NotUsedOnWire(This) ) 


#define IRemUnknown_RemQueryInterface(This,ripid,cRefs,cIids,iids,ppQIResults)	\
    ( (This)->lpVtbl -> RemQueryInterface(This,ripid,cRefs,cIids,iids,ppQIResults) ) 

#define IRemUnknown_RemAddRef(This,cInterfaceRefs,InterfaceRefs,pResults)	\
    ( (This)->lpVtbl -> RemAddRef(This,cInterfaceRefs,InterfaceRefs,pResults) ) 

#define IRemUnknown_RemRelease(This,cInterfaceRefs,InterfaceRefs)	\
    ( (This)->lpVtbl -> RemRelease(This,cInterfaceRefs,InterfaceRefs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemUnknown_INTERFACE_DEFINED__ */


#ifndef __IRemUnknown2_INTERFACE_DEFINED__
#define __IRemUnknown2_INTERFACE_DEFINED__

/* interface IRemUnknown2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IRemUnknown2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00000143-0000-0000-C000-000000000046")
    IRemUnknown2 : public IRemUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RemQueryInterface2( 
            /* [in] */ REFIPID ripid,
            /* [in] */ unsigned short cIids,
            /* [size_is][in] */ IID *iids,
            /* [size_is][out] */ HRESULT *phr,
            /* [size_is][out] */ PMInterfacePointerInternal *ppMIF) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRemUnknown2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum0NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum0NotUsedOnWire )( 
            IRemUnknown2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum1NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum1NotUsedOnWire )( 
            IRemUnknown2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Opnum2NotUsedOnWire)
        HRESULT ( STDMETHODCALLTYPE *Opnum2NotUsedOnWire )( 
            IRemUnknown2 * This);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemQueryInterface)
        HRESULT ( STDMETHODCALLTYPE *RemQueryInterface )( 
            IRemUnknown2 * This,
            /* [in] */ REFIPID ripid,
            /* [in] */ unsigned long cRefs,
            /* [in] */ unsigned short cIids,
            /* [size_is][in] */ IID *iids,
            /* [size_is][size_is][out] */ PREMQIRESULT *ppQIResults);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemAddRef)
        HRESULT ( STDMETHODCALLTYPE *RemAddRef )( 
            IRemUnknown2 * This,
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ],
            /* [size_is][out] */ HRESULT *pResults);
        
        DECLSPEC_XFGVIRT(IRemUnknown, RemRelease)
        HRESULT ( STDMETHODCALLTYPE *RemRelease )( 
            IRemUnknown2 * This,
            /* [in] */ unsigned short cInterfaceRefs,
            /* [size_is][in] */ REMINTERFACEREF InterfaceRefs[  ]);
        
        DECLSPEC_XFGVIRT(IRemUnknown2, RemQueryInterface2)
        HRESULT ( STDMETHODCALLTYPE *RemQueryInterface2 )( 
            IRemUnknown2 * This,
            /* [in] */ REFIPID ripid,
            /* [in] */ unsigned short cIids,
            /* [size_is][in] */ IID *iids,
            /* [size_is][out] */ HRESULT *phr,
            /* [size_is][out] */ PMInterfacePointerInternal *ppMIF);
        
        END_INTERFACE
    } IRemUnknown2Vtbl;

    interface IRemUnknown2
    {
        CONST_VTBL struct IRemUnknown2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemUnknown2_Opnum0NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum0NotUsedOnWire(This) ) 

#define IRemUnknown2_Opnum1NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum1NotUsedOnWire(This) ) 

#define IRemUnknown2_Opnum2NotUsedOnWire(This)	\
    ( (This)->lpVtbl -> Opnum2NotUsedOnWire(This) ) 


#define IRemUnknown2_RemQueryInterface(This,ripid,cRefs,cIids,iids,ppQIResults)	\
    ( (This)->lpVtbl -> RemQueryInterface(This,ripid,cRefs,cIids,iids,ppQIResults) ) 

#define IRemUnknown2_RemAddRef(This,cInterfaceRefs,InterfaceRefs,pResults)	\
    ( (This)->lpVtbl -> RemAddRef(This,cInterfaceRefs,InterfaceRefs,pResults) ) 

#define IRemUnknown2_RemRelease(This,cInterfaceRefs,InterfaceRefs)	\
    ( (This)->lpVtbl -> RemRelease(This,cInterfaceRefs,InterfaceRefs) ) 


#define IRemUnknown2_RemQueryInterface2(This,ripid,cIids,iids,phr,ppMIF)	\
    ( (This)->lpVtbl -> RemQueryInterface2(This,ripid,cIids,iids,phr,ppMIF) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemUnknown2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dcom_0000_0006 */
/* [local] */ 

#define	MIN_ACTPROP_LIMIT	( 1 )

#define	MAX_ACTPROP_LIMIT	( 10 )

typedef struct _COSERVERINFO
    {
    DWORD dwReserved1;
    /* [string] */ wchar_t *pwszName;
    DWORD *pdwReserved;
    DWORD dwReserved2;
    } 	COSERVERINFO;

typedef struct _customREMOTE_REQUEST_SCM_INFO
    {
    DWORD ClientImpLevel;
    /* [range] */ unsigned short cRequestedProtseqs;
    /* [size_is] */ unsigned short *pRequestedProtseqs;
    } 	customREMOTE_REQUEST_SCM_INFO;

typedef struct _customREMOTE_REPLY_SCM_INFO
    {
    OXID Oxid;
    DUALSTRINGARRAY *pdsaOxidBindings;
    IPID ipidRemUnknown;
    DWORD authnHint;
    COMVERSION serverVersion;
    } 	customREMOTE_REPLY_SCM_INFO;

typedef struct tagInstantiationInfoData
    {
    CLSID classId;
    DWORD classCtx;
    DWORD actvflags;
    long fIsSurrogate;
    /* [range] */ DWORD cIID;
    DWORD instFlag;
    /* [size_is] */ IID *pIID;
    DWORD thisSize;
    COMVERSION clientCOMVersion;
    } 	InstantiationInfoData;

typedef struct tagLocationInfoData
    {
    /* [string] */ wchar_t *machineName;
    DWORD processId;
    DWORD apartmentId;
    DWORD contextId;
    } 	LocationInfoData;

typedef struct tagActivationContextInfoData
    {
    long clientOK;
    long bReserved1;
    DWORD dwReserved1;
    DWORD dwReserved2;
    MInterfacePointer *pIFDClientCtx;
    MInterfacePointer *pIFDPrototypeCtx;
    } 	ActivationContextInfoData;

typedef struct tagCustomHeader
    {
    DWORD totalSize;
    DWORD headerSize;
    DWORD dwReserved;
    DWORD destCtx;
    /* [range] */ DWORD cIfs;
    CLSID classInfoClsid;
    /* [size_is] */ CLSID *pclsid;
    /* [size_is] */ DWORD *pSizes;
    DWORD *pdwReserved;
    } 	CustomHeader;

typedef struct tagPropsOutInfo
    {
    /* [range] */ DWORD cIfs;
    /* [size_is] */ IID *piid;
    /* [size_is] */ HRESULT *phresults;
    /* [size_is] */ MInterfacePointer **ppIntfData;
    } 	PropsOutInfo;

typedef struct tagSecurityInfoData
    {
    DWORD dwAuthnFlags;
    COSERVERINFO *pServerInfo;
    DWORD *pdwReserved;
    } 	SecurityInfoData;

typedef struct tagScmRequestInfoData
    {
    DWORD *pdwReserved;
    customREMOTE_REQUEST_SCM_INFO *remoteRequest;
    } 	ScmRequestInfoData;

typedef struct tagScmReplyInfoData
    {
    DWORD *pdwReserved;
    customREMOTE_REPLY_SCM_INFO *remoteReply;
    } 	ScmReplyInfoData;

typedef struct tagInstanceInfoData
    {
    /* [string] */ wchar_t *fileName;
    DWORD mode;
    MInterfacePointer *ifdROT;
    MInterfacePointer *ifdStg;
    } 	InstanceInfoData;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_dcom_0000_0006_0001
    {
        SPD_FLAG_USE_CONSOLE_SESSION	= 0x1,
        SPD_FLAG_USE_DEFAULT_AUTHN_LVL	= 0x2
    } 	SPD_FLAGS;

typedef struct tagSpecialPropertiesData
    {
    unsigned long dwSessionId;
    long fRemoteThisSessionId;
    long fClientImpersonating;
    long fPartitionIDPresent;
    DWORD dwDefaultAuthnLvl;
    GUID guidPartition;
    DWORD dwPRTFlags;
    DWORD dwOrigClsctx;
    DWORD dwFlags;
    DWORD Reserved1;
    unsigned __int64 Reserved2;
    DWORD Reserved3[ 5 ];
    } 	SpecialPropertiesData;

typedef struct tagSpecialPropertiesData_Alternate
    {
    unsigned long dwSessionId;
    long fRemoteThisSessionId;
    long fClientImpersonating;
    long fPartitionIDPresent;
    DWORD dwDefaultAuthnLvl;
    GUID guidPartition;
    DWORD dwPRTFlags;
    DWORD dwOrigClsctx;
    DWORD dwFlags;
    DWORD Reserved3[ 8 ];
    } 	SpecialPropertiesData_Alternate;



extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dcom_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


