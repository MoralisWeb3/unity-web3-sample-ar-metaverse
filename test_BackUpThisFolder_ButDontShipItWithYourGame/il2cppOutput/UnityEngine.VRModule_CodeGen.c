#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
extern void XRSettings_get_isDeviceActive_m05C0035E5985667632BBE1BD972C611A674039DC (void);
// 0x00000002 System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern void XRDevice_DisableAutoXRCameraTracking_mDFDDD1D32A4D623A5448533B5E8E02B9536A25DC (void);
// 0x00000003 System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_m07DEE6645B38728C7B8615DAAD6BE592C1DC59F9 (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	XRSettings_get_isDeviceActive_m05C0035E5985667632BBE1BD972C611A674039DC,
	XRDevice_DisableAutoXRCameraTracking_mDFDDD1D32A4D623A5448533B5E8E02B9536A25DC,
	XRDevice_InvokeDeviceLoaded_m07DEE6645B38728C7B8615DAAD6BE592C1DC59F9,
};
static const int32_t s_InvokerIndices[3] = 
{
	16127,
	14783,
	15946,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	3,
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
