

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "dcom.h"

#define TYPE_FORMAT_STRING_SIZE   789                               
#define PROC_FORMAT_STRING_SIZE   1003                              
#define EXPR_FORMAT_STRING_SIZE   57                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _dcom_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } dcom_MIDL_TYPE_FORMAT_STRING;

typedef struct _dcom_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } dcom_MIDL_PROC_FORMAT_STRING;

typedef struct _dcom_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } dcom_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const dcom_MIDL_TYPE_FORMAT_STRING dcom__MIDL_TypeFormatString;
extern const dcom_MIDL_PROC_FORMAT_STRING dcom__MIDL_ProcFormatString;
extern const dcom_MIDL_EXPR_FORMAT_STRING dcom__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IUnknown_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUnknown_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IRemUnknown_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRemUnknown_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IRemUnknown2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRemUnknown2_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const dcom_MIDL_PROC_FORMAT_STRING dcom__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RemoteActivation */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x62 ),	/* 98 */
/* 16 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 20 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ORPCthis */

/* 28 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter ORPCthat */

/* 34 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter Clsid */

/* 40 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pwszObjectName */

/* 46 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter pObjectStorage */

/* 52 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 54 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 56 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter ClientImpLevel */

/* 58 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 60 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 62 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mode */

/* 64 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 66 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 70 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 72 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 74 */	NdrFcShort( 0xe2 ),	/* 226 */

	/* Parameter pIIDs */

/* 76 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 78 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 80 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Parameter cRequestedProtseqs */

/* 82 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 84 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 86 */	NdrFcShort( 0x10a ),	/* 266 */

	/* Parameter aRequestedProtseqs */

/* 88 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 90 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 92 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Parameter pOxid */

/* 94 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 96 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 98 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppdsaOxidBindings */

/* 100 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 102 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 104 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter pipidRemUnknown */

/* 106 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 108 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 110 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 114 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServerVersion */

/* 118 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 120 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 122 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter phr */

/* 124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 126 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppInterfaceData */

/* 130 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 132 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 134 */	NdrFcShort( 0x166 ),	/* Type Offset=358 */

	/* Parameter pResults */

/* 136 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 138 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 140 */	NdrFcShort( 0x194 ),	/* Type Offset=404 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 146 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Opnum0NotUsedOnWire */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 168 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 176 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 186 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 196 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum2NotUsedOnWire */

/* 204 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x2 ),	/* 2 */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 224 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RemoteGetClassObject */

/* 232 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x3 ),	/* 3 */
/* 240 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 242 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 250 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 252 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orpcthis */

/* 260 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 264 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter orpcthat */

/* 266 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 270 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter pActProperties */

/* 272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 276 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter ppActProperties */

/* 278 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 282 */	NdrFcShort( 0x1aa ),	/* Type Offset=426 */

	/* Return value */

/* 284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCreateInstance */

/* 290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 298 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 300 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 310 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orpcthis */

/* 318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter orpcthat */

/* 324 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter pUnkOuter */

/* 330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter pActProperties */

/* 336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 340 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter ppActProperties */

/* 342 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 346 */	NdrFcShort( 0x1aa ),	/* Type Offset=426 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ResolveOxid */

/* 354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 356 */	NdrFcLong( 0x1 ),	/* 1 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 368 */	NdrFcShort( 0x2a ),	/* 42 */
/* 370 */	NdrFcShort( 0x68 ),	/* 104 */
/* 372 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 374 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 382 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 386 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 392 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 394 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 398 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */

	/* Parameter ppdsaOxidBindings */

/* 400 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 404 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter pipidRemUnknown */

/* 406 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 408 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 410 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 414 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 422 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure SimplePing */

/* 424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 426 */	NdrFcLong( 0x1 ),	/* 1 */
/* 430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 434 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 438 */	NdrFcShort( 0x24 ),	/* 36 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 444 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 452 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 456 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 462 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ComplexPing */

/* 464 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 466 */	NdrFcLong( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x2 ),	/* 2 */
/* 472 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 474 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 478 */	NdrFcShort( 0x36 ),	/* 54 */
/* 480 */	NdrFcShort( 0x46 ),	/* 70 */
/* 482 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 484 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 492 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter SequenceNum */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cAddToSet */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 508 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cDelFromSet */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 514 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter AddToSet */

/* 516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 518 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 520 */	NdrFcShort( 0x1c8 ),	/* Type Offset=456 */

	/* Parameter DelFromSet */

/* 522 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Parameter pPingBackoffFactor */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 532 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 538 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive */

/* 540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 542 */	NdrFcLong( 0x1 ),	/* 1 */
/* 546 */	NdrFcShort( 0x3 ),	/* 3 */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 552 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 560 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 572 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ResolveOxid2 */

/* 574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 576 */	NdrFcLong( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x4 ),	/* 4 */
/* 582 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 584 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 588 */	NdrFcShort( 0x2a ),	/* 42 */
/* 590 */	NdrFcShort( 0x90 ),	/* 144 */
/* 592 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 594 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 602 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 606 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 612 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 614 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 618 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */

	/* Parameter ppdsaOxidBindings */

/* 620 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 622 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 624 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter pipidRemUnknown */

/* 626 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 628 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 630 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 634 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pComVersion */

/* 638 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 640 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 642 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 646 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 648 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive2 */

/* 650 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 652 */	NdrFcLong( 0x1 ),	/* 1 */
/* 656 */	NdrFcShort( 0x5 ),	/* 5 */
/* 658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 660 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x4c ),	/* 76 */
/* 668 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 670 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pComVersion */

/* 678 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 682 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ppdsaOrBindings */

/* 684 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 688 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter pReserved */

/* 690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 700 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Opnum0NotUsedOnWire */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 718 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 748 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum2NotUsedOnWire */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x2 ),	/* 2 */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 778 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemQueryInterface */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x3 ),	/* 3 */
/* 800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 802 */	NdrFcShort( 0x52 ),	/* 82 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 808 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ripid */

/* 816 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter cRefs */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cIids */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter iids */

/* 834 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter ppQIResults */

/* 840 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 844 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemAddRef */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	NdrFcShort( 0x6 ),	/* 6 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 868 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cInterfaceRefs */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 882 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Parameter pResults */

/* 888 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	NdrFcShort( 0x298 ),	/* Type Offset=664 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemRelease */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x5 ),	/* 5 */
/* 908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 910 */	NdrFcShort( 0x6 ),	/* 6 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 916 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cInterfaceRefs */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemQueryInterface2 */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x6 ),	/* 6 */
/* 950 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 952 */	NdrFcShort( 0x4a ),	/* 74 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 958 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ripid */

/* 966 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter cIids */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter iids */

/* 978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x2b2 ),	/* Type Offset=690 */

	/* Parameter phr */

/* 984 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 988 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Parameter ppMIF */

/* 990 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 992 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 994 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 998 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const dcom_MIDL_TYPE_FORMAT_STRING dcom__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x7e ),	/* Offset= 126 (130) */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 12 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 14 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x10 ),	/* 16 */
/* 24 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 26 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 28 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (14) */
			0x5b,		/* FC_END */
/* 32 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 34 */	NdrFcShort( 0x1 ),	/* 1 */
/* 36 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 42 */	0x0 , 
			0x0,		/* 0 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 54 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 56 */	NdrFcShort( 0x14 ),	/* 20 */
/* 58 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (32) */
/* 60 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (20) */
/* 64 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
/* 70 */	0x10,		/* Corr desc:  field pointer,  */
			0x5d,		/* FC_EXPR */
/* 72 */	NdrFcShort( 0x1 ),	/* 1 */
/* 74 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 76 */	0x0 , 
			0x0,		/* 0 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcLong( 0x0 ),	/* 0 */
/* 86 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	0x12, 0x0,	/* FC_UP */
/* 102 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (54) */
/* 104 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 106 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 108 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0xc ),	/* 12 */
/* 112 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 122 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (66) */
/* 124 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x20 ),	/* 32 */
/* 134 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 138 */	NdrFcShort( 0x1c ),	/* 28 */
/* 140 */	NdrFcShort( 0x1c ),	/* 28 */
/* 142 */	0x12, 0x0,	/* FC_UP */
/* 144 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (108) */
/* 146 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 148 */	0x0,		/* 0 */
			NdrFcShort( 0xff71 ),	/* Offset= -143 (6) */
			0x8,		/* FC_LONG */
/* 152 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 154 */	0x0,		/* 0 */
			NdrFcShort( 0xff79 ),	/* Offset= -135 (20) */
			0x8,		/* FC_LONG */
/* 158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 160 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 170 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	0x12, 0x0,	/* FC_UP */
/* 178 */	NdrFcShort( 0xffba ),	/* Offset= -70 (108) */
/* 180 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 182 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 184 */	
			0x11, 0x0,	/* FC_RP */
/* 186 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (20) */
/* 188 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x12, 0x0,	/* FC_UP */
/* 194 */	NdrFcShort( 0x18 ),	/* Offset= 24 (218) */
/* 196 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 200 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 204 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 206 */	0x0 , 
			0x0,		/* 0 */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 218 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (196) */
/* 224 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 226 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 228 */	NdrFcLong( 0x1 ),	/* 1 */
/* 232 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 236 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 238 */	NdrFcShort( 0x2 ),	/* Offset= 2 (240) */
/* 240 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 244 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 246 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 248 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 250 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 252 */	NdrFcLong( 0x1 ),	/* 1 */
/* 256 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xff0e ),	/* Offset= -242 (20) */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 276 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 278 */	NdrFcShort( 0x2 ),	/* 2 */
/* 280 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 282 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 284 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 286 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 292 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 296 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 298 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 300 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 302 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (306) */
/* 306 */	
			0x12, 0x0,	/* FC_UP */
/* 308 */	NdrFcShort( 0x18 ),	/* Offset= 24 (332) */
/* 310 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 312 */	NdrFcShort( 0x2 ),	/* 2 */
/* 314 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 316 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 318 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 320 */	0x0 , 
			0x0,		/* 0 */
/* 322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 332 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 334 */	NdrFcShort( 0x4 ),	/* 4 */
/* 336 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (310) */
/* 338 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 342 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 344 */	NdrFcShort( 0xfebc ),	/* Offset= -324 (20) */
/* 346 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 348 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 352 */	NdrFcShort( 0xfea6 ),	/* Offset= -346 (6) */
/* 354 */	
			0x11, 0x0,	/* FC_RP */
/* 356 */	NdrFcShort( 0x2 ),	/* Offset= 2 (358) */
/* 358 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 362 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 364 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 366 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 368 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 370 */	NdrFcLong( 0x1 ),	/* 1 */
/* 374 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 378 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 380 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 382 */	NdrFcShort( 0x4 ),	/* 4 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	0x12, 0x0,	/* FC_UP */
/* 394 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (218) */
/* 396 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 398 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 400 */	
			0x11, 0x0,	/* FC_RP */
/* 402 */	NdrFcShort( 0x2 ),	/* Offset= 2 (404) */
/* 404 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 408 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 410 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 412 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 414 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 416 */	NdrFcLong( 0x1 ),	/* 1 */
/* 420 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 424 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 426 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 428 */	NdrFcShort( 0xff14 ),	/* Offset= -236 (192) */
/* 430 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 432 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 434 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 436 */	NdrFcShort( 0x2 ),	/* 2 */
/* 438 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 444 */	0x0 , 
			0x0,		/* 0 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 456 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 458 */	NdrFcShort( 0x2 ),	/* Offset= 2 (460) */
/* 460 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 468 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 470 */	0x0 , 
			0x0,		/* 0 */
/* 472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 482 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (486) */
/* 486 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 494 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 496 */	0x0 , 
			0x0,		/* 0 */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 508 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 510 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 512 */	
			0x11, 0x0,	/* FC_RP */
/* 514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (516) */
/* 516 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 520 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 526 */	0x0 , 
			0x0,		/* 0 */
/* 528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 538 */	NdrFcShort( 0xfdfa ),	/* Offset= -518 (20) */
/* 540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 542 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (546) */
/* 546 */	
			0x13, 0x0,	/* FC_OP */
/* 548 */	NdrFcShort( 0x20 ),	/* Offset= 32 (580) */
/* 550 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 552 */	NdrFcShort( 0x28 ),	/* 40 */
/* 554 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 556 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 558 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 560 */	NdrFcShort( 0xfde4 ),	/* Offset= -540 (20) */
/* 562 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 564 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 566 */	NdrFcShort( 0x30 ),	/* 48 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* Offset= 0 (570) */
/* 572 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 574 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 576 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (550) */
/* 578 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 580 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 588 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 590 */	0x0 , 
			0x0,		/* 0 */
/* 592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 604 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 606 */	0x0 , 
			0x0,		/* 0 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 618 */	NdrFcShort( 0xffca ),	/* Offset= -54 (564) */
/* 620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 622 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 624 */	NdrFcShort( 0x18 ),	/* 24 */
/* 626 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 628 */	NdrFcShort( 0xfda0 ),	/* Offset= -608 (20) */
/* 630 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x18 ),	/* 24 */
/* 638 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 642 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 644 */	0x0 , 
			0x0,		/* 0 */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0xffde ),	/* Offset= -34 (622) */
/* 658 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 660 */	
			0x11, 0x0,	/* FC_RP */
/* 662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (664) */
/* 664 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x4 ),	/* 4 */
/* 668 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 672 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 674 */	0x0 , 
			0x0,		/* 0 */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 686 */	
			0x11, 0x0,	/* FC_RP */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x10 ),	/* 16 */
/* 694 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 700 */	0x0 , 
			0x0,		/* 0 */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0xfd4c ),	/* Offset= -692 (20) */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	
			0x11, 0x0,	/* FC_RP */
/* 718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (720) */
/* 720 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 724 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 728 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 730 */	0x0 , 
			0x0,		/* 0 */
/* 732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 740 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 742 */	
			0x11, 0x0,	/* FC_RP */
/* 744 */	NdrFcShort( 0x2 ),	/* Offset= 2 (746) */
/* 746 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x4 ),	/* 4 */
/* 750 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 756 */	0x0 , 
			0x0,		/* 0 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 766 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 768 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 770 */	NdrFcShort( 0x4 ),	/* 4 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	0x13, 0x0,	/* FC_OP */
/* 782 */	NdrFcShort( 0xfdcc ),	/* Offset= -564 (218) */
/* 784 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 786 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const dcom_MIDL_EXPR_FORMAT_STRING dcom__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/*  6 */	0x0,		/*  */
			0x0,		/* 0 */
/*  8 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 10 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 12 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcLong( 0x7 ),	/* 7 */
/* 20 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0xfffffff8 ),	/* -8 */
/* 28 */	0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/* 30 */	0x0,		/*  */
			0x0,		/* 0 */
/* 32 */	0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/* 34 */	0x0,		/*  */
			0x0,		/* 0 */
/* 36 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcLong( 0x1 ),	/* 1 */
/* 48 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcLong( 0xfffffffe ),	/* -2 */

			0x0
        }
    };

static const unsigned short dcom__MIDL_ExprFormatStringOffsetTable[] =
{
0,
28,
};

static const NDR_EXPR_DESC  dcom_ExprDesc = 
 {
dcom__MIDL_ExprFormatStringOffsetTable,
dcom__MIDL_ExprFormatString.Format
};


/* Standard interface: __MIDL_itf_dcom_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: IActivation, ver. 0.0,
   GUID={0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}} */


/* Standard interface: IRemoteSCMActivator, ver. 0.0,
   GUID={0x000001A0,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Standard interface: IObjectExporter, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */


/* Standard interface: __MIDL_itf_dcom_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IUnknown_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    dcom__MIDL_ProcFormatString.Format,
    &IUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    dcom__MIDL_ProcFormatString.Format,
    &IUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _IUnknownProxyVtbl = 
{
    &IUnknown_ProxyInfo,
    &IID_IUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IUnknownStubVtbl =
{
    &IID_IUnknown,
    &IUnknown_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRemUnknown, ver. 0.0,
   GUID={0x00000131,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IRemUnknown_FormatStringOffsetTable[] =
    {
    792,
    852,
    900
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    dcom__MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRemUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    dcom__MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IRemUnknownProxyVtbl = 
{
    &IRemUnknown_ProxyInfo,
    &IID_IRemUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemQueryInterface */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemAddRef */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemRelease */
};

const CInterfaceStubVtbl _IRemUnknownStubVtbl =
{
    &IID_IRemUnknown,
    &IRemUnknown_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRemUnknown2, ver. 0.0,
   GUID={0x00000143,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IRemUnknown2_FormatStringOffsetTable[] =
    {
    792,
    852,
    900,
    942
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown2_ProxyInfo =
    {
    &Object_StubDesc,
    dcom__MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRemUnknown2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    dcom__MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IRemUnknown2ProxyVtbl = 
{
    &IRemUnknown2_ProxyInfo,
    &IID_IRemUnknown2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemQueryInterface */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemAddRef */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemRelease */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown2::RemQueryInterface2 */
};

const CInterfaceStubVtbl _IRemUnknown2StubVtbl =
{
    &IID_IRemUnknown2,
    &IRemUnknown2_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_dcom_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    dcom__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    &dcom_ExprDesc
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _dcom_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IUnknownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRemUnknownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRemUnknown2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _dcom_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IUnknownStubVtbl,
    ( CInterfaceStubVtbl *) &_IRemUnknownStubVtbl,
    ( CInterfaceStubVtbl *) &_IRemUnknown2StubVtbl,
    0
};

PCInterfaceName const _dcom_InterfaceNamesList[] = 
{
    "IUnknown",
    "IRemUnknown",
    "IRemUnknown2",
    0
};


#define _dcom_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _dcom, pIID, n)

int __stdcall _dcom_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _dcom, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _dcom, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _dcom, 3, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo dcom_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _dcom_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _dcom_StubVtblList,
    (const PCInterfaceName * ) & _dcom_InterfaceNamesList,
    0, /* no delegation */
    & _dcom_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

