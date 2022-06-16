#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Collections.Specialized.NameValueCollection System.Web.HttpRequest::get_Params()
extern void HttpRequest_get_Params_m1C9BEBD46B93B3BA8D09EC12033593FB85451595 (void);
// 0x00000002 System.Web.HttpContext System.Web.HttpContext::get_Current()
extern void HttpContext_get_Current_m56BAC4B6FC4E81FF565391289A7E5E8BF61985FD (void);
// 0x00000003 System.Collections.IDictionary System.Web.HttpContext::get_Items()
extern void HttpContext_get_Items_mA92F352722B86AAF0BD6BE5D92312C6FB87A028D (void);
// 0x00000004 System.Web.HttpRequest System.Web.HttpContext::get_Request()
extern void HttpContext_get_Request_m84F71CCCDAF1BD4ED40EE90D5726A5028689FB57 (void);
// 0x00000005 System.Web.SessionState.HttpSessionState System.Web.HttpContext::get_Session()
extern void HttpContext_get_Session_m73392087DFAF6DEB6D26138A13EB9712837C981E (void);
// 0x00000006 System.Web.TraceContext System.Web.HttpContext::get_Trace()
extern void HttpContext_get_Trace_m0706B12660740AD880D84DE668DD0E6E920718C7 (void);
// 0x00000007 System.Object System.Web.Caching.Cache::get_Item(System.String)
extern void Cache_get_Item_m8669EB7BAD714B592BF828F3185740A2C9536AE9 (void);
// 0x00000008 System.Collections.IDictionaryEnumerator System.Web.Caching.Cache::GetEnumerator()
extern void Cache_GetEnumerator_mCD8B8920BADDBE6A1EBC6C7B342880413BD5AB99 (void);
// 0x00000009 System.Web.SessionState.HttpSessionState System.Web.SessionState.HttpSessionState::get_Contents()
extern void HttpSessionState_get_Contents_m135555B86D4B2ECCEA50127CD1653B5B88532D26 (void);
// 0x0000000A System.Object System.Web.SessionState.HttpSessionState::get_Item(System.String)
extern void HttpSessionState_get_Item_m353B22125C71D6F207C251963E192A3BCE2BD5C0 (void);
// 0x0000000B System.Boolean System.Web.TraceContext::get_IsEnabled()
extern void TraceContext_get_IsEnabled_mF5969E94FDCFD5AB309942CADD197D144179E364 (void);
// 0x0000000C System.Void System.Web.TraceContext::Warn(System.String,System.String)
extern void TraceContext_Warn_m2B586A75602E1F6575B0E41D752CAF06BD44329C (void);
// 0x0000000D System.Void System.Web.TraceContext::Write(System.String,System.String)
extern void TraceContext_Write_mB9C3BC11ACA6BF6D5B103D748AE141CAF5E47901 (void);
// 0x0000000E System.Void System.Web.HttpException::.ctor()
extern void HttpException__ctor_m61C287972897C5E6A7E7748CD69A746CC0F8B3A5 (void);
// 0x0000000F System.Void System.Web.HttpException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpException__ctor_m3C6840E4C522D12DDEC25D528DF11C5351D3D29C (void);
// 0x00000010 System.Web.Caching.Cache System.Web.HttpRuntime::get_Cache()
extern void HttpRuntime_get_Cache_m58AE33EF52784269CCDFED745293BB3B458EC537 (void);
// 0x00000011 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_mF0A8A3F8448DFE943682577290033F3BA67D0521 (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	HttpRequest_get_Params_m1C9BEBD46B93B3BA8D09EC12033593FB85451595,
	HttpContext_get_Current_m56BAC4B6FC4E81FF565391289A7E5E8BF61985FD,
	HttpContext_get_Items_mA92F352722B86AAF0BD6BE5D92312C6FB87A028D,
	HttpContext_get_Request_m84F71CCCDAF1BD4ED40EE90D5726A5028689FB57,
	HttpContext_get_Session_m73392087DFAF6DEB6D26138A13EB9712837C981E,
	HttpContext_get_Trace_m0706B12660740AD880D84DE668DD0E6E920718C7,
	Cache_get_Item_m8669EB7BAD714B592BF828F3185740A2C9536AE9,
	Cache_GetEnumerator_mCD8B8920BADDBE6A1EBC6C7B342880413BD5AB99,
	HttpSessionState_get_Contents_m135555B86D4B2ECCEA50127CD1653B5B88532D26,
	HttpSessionState_get_Item_m353B22125C71D6F207C251963E192A3BCE2BD5C0,
	TraceContext_get_IsEnabled_mF5969E94FDCFD5AB309942CADD197D144179E364,
	TraceContext_Warn_m2B586A75602E1F6575B0E41D752CAF06BD44329C,
	TraceContext_Write_mB9C3BC11ACA6BF6D5B103D748AE141CAF5E47901,
	HttpException__ctor_m61C287972897C5E6A7E7748CD69A746CC0F8B3A5,
	HttpException__ctor_m3C6840E4C522D12DDEC25D528DF11C5351D3D29C,
	HttpRuntime_get_Cache_m58AE33EF52784269CCDFED745293BB3B458EC537,
	ThrowStub_ThrowNotSupportedException_mF0A8A3F8448DFE943682577290033F3BA67D0521,
};
static const int32_t s_InvokerIndices[17] = 
{
	11340,
	16144,
	11340,
	11340,
	11340,
	11340,
	8132,
	11340,
	11340,
	8132,
	11239,
	4637,
	4637,
	11472,
	4644,
	16144,
	16188,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Web_CodeGenModule;
const Il2CppCodeGenModule g_System_Web_CodeGenModule = 
{
	"System.Web.dll",
	17,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
