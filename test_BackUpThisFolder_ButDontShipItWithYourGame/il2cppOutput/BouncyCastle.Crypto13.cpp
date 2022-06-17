#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Int64[][]
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB;
// Org.BouncyCastle.Security.InvalidKeyException
struct InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Org.BouncyCastle.Crypto.Engines.NullEngine
struct NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5;
// Org.BouncyCastle.Crypto.Engines.RC2Engine
struct RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455;
// Org.BouncyCastle.Crypto.Parameters.RC2Parameters
struct RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90;
// Org.BouncyCastle.Crypto.Engines.RC2WrapEngine
struct RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4;
// Org.BouncyCastle.Crypto.Engines.RC4Engine
struct RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF;
// Org.BouncyCastle.Crypto.Engines.RC532Engine
struct RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B;
// Org.BouncyCastle.Crypto.Engines.RC564Engine
struct RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32;
// Org.BouncyCastle.Crypto.Parameters.RC5Parameters
struct RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879;
// Org.BouncyCastle.Crypto.Engines.RC6Engine
struct RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696;
// Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine
struct Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702;
// Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
struct Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1;
// Org.BouncyCastle.Crypto.Engines.RijndaelEngine
struct RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A;
// Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
struct RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6;
// Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine
struct RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303;
// Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
struct RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D;
// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
struct RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478;
// Org.BouncyCastle.Crypto.Engines.RsaEngine
struct RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B;
// Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
struct RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Engines.SeedEngine
struct SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4;
// Org.BouncyCastle.Crypto.Engines.SeedWrapEngine
struct SeedWrapEngine_t083783C050C6EDEA18DF55D83C592CFAFBD4777F;
// Org.BouncyCastle.Crypto.Engines.SerpentEngine
struct SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172;
// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0;
// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA;
// Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015aaU2D1_126_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015b2U2D1_127_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D10_137_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D11_138_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D12_139_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D13_140_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D14_141_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D15_142_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D1_128_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D2_129_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D3_130_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D4_131_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D5_132_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D6_133_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D7_134_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D8_135_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D9_136_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D1_143_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D2_144_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D3_145_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D4_146_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D5_147_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001665U2D1_148_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0920A6AABBEFA13D4437110676BB9315863FF7ED;
IL2CPP_EXTERN_C String_t* _stringLiteral10B049D9030EED71568DBA6470C98D793E1C4E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral18B74F30D80838D0CDF4092D72E6A4A0FE098B62;
IL2CPP_EXTERN_C String_t* _stringLiteral18BB83580C7D91DDE15B424F080336CF198BF399;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE569B4C3EA7B1B22788B903C90F9CBEC04D912;
IL2CPP_EXTERN_C String_t* _stringLiteral1F78DF94890BD848717BF7401CDDB930D6A54181;
IL2CPP_EXTERN_C String_t* _stringLiteral23168166059948ADEC8F54CD9538BEF23BF2D820;
IL2CPP_EXTERN_C String_t* _stringLiteral25A94718469E584D6A829C24BF0434998B09B8A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA;
IL2CPP_EXTERN_C String_t* _stringLiteral2DEB2F67FD25F7E0A9F3F5B832BA4E882C6905D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral3755AF5CDA549392DC97D710674394BA3F06F442;
IL2CPP_EXTERN_C String_t* _stringLiteral3B61056CE34B3597E690DEF082DF2AB2F399A4E8;
IL2CPP_EXTERN_C String_t* _stringLiteral3D65B278FAAF69167BD4784DE725A62671D05EC1;
IL2CPP_EXTERN_C String_t* _stringLiteral3EDA0355A6B53D3D4A549589177E809E514C650D;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4A0FABAE51E3B4BABEF37449D8A7FE638A975502;
IL2CPP_EXTERN_C String_t* _stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB;
IL2CPP_EXTERN_C String_t* _stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3A022B03059BF4890370A8B7B5A3C7582D7BD5;
IL2CPP_EXTERN_C String_t* _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
IL2CPP_EXTERN_C String_t* _stringLiteral71B3CD3397671C8E3618F011BF170FAC9F499980;
IL2CPP_EXTERN_C String_t* _stringLiteral73DEA90DC5A44B4F6D6175E411C45478F05776EF;
IL2CPP_EXTERN_C String_t* _stringLiteral790AD59E6474F50CCB2314B67DBEDC0EB478862A;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8599FC60C1CB6E010C304BEDAB3F1C9F2613A0;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB44EA744A3060D01211672D5FF225D29CC2B31;
IL2CPP_EXTERN_C String_t* _stringLiteral88F574AE4E296ACA7898B11E165C1331CA71F33A;
IL2CPP_EXTERN_C String_t* _stringLiteral92121EA1B3368BA74DACC650CFB6E85B47E49439;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9ECCDD7D662625994C31E64097C1D5826BADFF;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C6E3B2725F3C7DC9E8805E139D27FB638ECA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D94F054CFFA4959E5BFD39650F74A8C73B2C92;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCBBCBD8F5E0EB099A3A1B0ECDDB8743EBCA8A8;
IL2CPP_EXTERN_C String_t* _stringLiteralBF29F2F3522174F52C44E5A1812C8A01EAC6A282;
IL2CPP_EXTERN_C String_t* _stringLiteralC692DAB34986D12FB6BBE31A5A0AAE5ADB9399E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7BC5720D92831EEF195351553329E90EA1D7B6D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C627B0FBF59740951535000A07CE2450097EC3;
IL2CPP_EXTERN_C String_t* _stringLiteralCB38BD6540168B3F80FC1E0ED60F43650A552E50;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4D45F97D1579C33DE8E414C713E11054C99C32;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4153577DC6301E1F6FFF8598C112823A34E145;
IL2CPP_EXTERN_C String_t* _stringLiteralCE029659E535DC36ADAA042FF194A35CD1638BAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C String_t* _stringLiteralDC9DC797F30B7F53D5E1DEF446818F7904897A4C;
IL2CPP_EXTERN_C String_t* _stringLiteralE134CE3B47F0CA2291ABAA4D77503AC1B87A4F4B;
IL2CPP_EXTERN_C String_t* _stringLiteralE64D5EE122D100711965395AFF4160B121E37B1B;
IL2CPP_EXTERN_C String_t* _stringLiteralF1820699B4345D86F4AB2612A13D00EBC4B47BB1;
IL2CPP_EXTERN_C String_t* _stringLiteralF338F025E15E63B321EE7885AFA62E2EBDA019DD;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFCEDA8A42E275C214506B6047B5D09353160F3FB;
IL2CPP_EXTERN_C const RuntimeMethod* NullEngine_ProcessBlock_m483D158B0854B8F5D872CDB8EE85CD556E46908D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2Engine_Init_m01904A27A5D37BA83AF233F347819B6A734EEBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2Engine_ProcessBlock_m9E325B3FB40B32DBB2C1B9E4071761BD4B29BEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2WrapEngine_Init_m8F1FEB68EB881EB3D1DD8BA2997FE3FAFFF24769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2WrapEngine_Wrap_m4BCC82C89C89E8555F1EBB1019C01C32128EF6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC4Engine_Init_m5C271693E390570B0C33C24EEA5AEEE77E4091E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC532Engine_Init_m61B3EF696BA7D71F100FD9D450C97D56C2114EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC564Engine_Init_mDC14A2E608A1738CA868F8513F2F88EAB7EEDDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC6Engine_Init_m3627E27825B6DF82838863AE615837301D0D93F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC6Engine_ProcessBlock_m41889BC5640A43CCB50645116D9235D37B698102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rfc3211WrapEngine_Wrap_m22A0A4A9F2303DC41622B375CB313CD95B1D9046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelEngine_GenerateWorkingKey_m25F184F0CBF8D21A757835E56C08C2C338BAC9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelEngine_Init_m553A338E991800FF261DABC7174142734F05420F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelEngine_ProcessBlock_m4D17920F7A6010A7A5823D363D9C5D85FCC19626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelEngine__ctor_mFA3A7D535ECED37F0CE901516B65D1C5C88E6F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsaBlindedEngine_ProcessBlock_m687BA8C31233E73096824E493A7F688A101C4307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsaCoreEngine_ConvertInput_m76657B8B7F3F62FACB1B6DDB6C107CF18260BE46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsaCoreEngine_Init_mDE62A23D556045663DC368D216C1734FCAD24810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsaEngine_ProcessBlock_mAFAB566577A77BE2131DE5306B5D848B02D71333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SeedEngine_ProcessBlock_mD50118DC032887CB68ED4E608B18F421A04CC5B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerpentEngineBase_Init_mC05C856DB27CE8F552AA7FE9C69F2D6AC5CF9BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerpentEngineBase_ProcessBlock_m569816A7889A73B2110921F076B037F23FC99E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerpentEngine_MakeWorkingKey_m98C25B2203D5C92FDD194EC926C41EE80DF14CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_Init_mCAA1BA8BDADE41E9B2A9ACC4D096B219A2A3E626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_ProcessBlock_m7D31606AB6A6CBD3232F9197FAA0759728C9F050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;
};

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::magnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude_30;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::sign
	int32_t ___sign_31;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBits
	int32_t ___nBits_32;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBitLength
	int32_t ___nBitLength_33;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::mQuote
	int32_t ___mQuote_34;
};

struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields
{
	// System.Int32[][] Org.BouncyCastle.Math.BigInteger::primeLists
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists_9;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::primeProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts_10;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ZeroMagnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude_11;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::ZeroEncoding
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding_12;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.BigInteger::SMALL_CONSTANTS
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___SMALL_CONSTANTS_13;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Zero
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Zero_14;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::One
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One_15;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Two
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Two_16;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Three
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Three_17;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Ten
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Ten_18;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::BitLengthTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable_19;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2_20;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2E_21;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8_22;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8E_23;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10_24;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10E_25;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16_26;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16E_27;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Math.BigInteger::RandomSource
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource_28;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ExpWindowThresholds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds_29;
};

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcNextV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcNextV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cipher
	RuntimeObject* ___cipher_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::encrypting
	bool ___encrypting_5;
};

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Engines.NullEngine
struct NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.NullEngine::initialised
	bool ___initialised_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_1;
};

// Org.BouncyCastle.Crypto.Engines.RC2Engine
struct RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC2Engine::workingKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___workingKey_2;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2Engine::encrypting
	bool ___encrypting_3;
};

struct RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2Engine::piTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___piTable_1;
};

// Org.BouncyCastle.Crypto.Engines.RC2WrapEngine
struct RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::engine
	CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* ___engine_0;
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::parameters
	RuntimeObject* ___parameters_1;
	// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::paramPlusIV
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* ___paramPlusIV_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_3;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::forWrapping
	bool ___forWrapping_4;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::sr
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___sr_5;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::sha1
	RuntimeObject* ___sha1_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::digest
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___digest_8;
};

struct RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::IV2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV2_6;
};

// Org.BouncyCastle.Crypto.Engines.RC4Engine
struct RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC4Engine::engineState
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___engineState_1;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC4Engine::x
	int32_t ___x_2;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC4Engine::y
	int32_t ___y_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC4Engine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_4;
};

struct RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC4Engine::STATE_LENGTH
	int32_t ___STATE_LENGTH_0;
};

// Org.BouncyCastle.Crypto.Engines.RC532Engine
struct RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::_noRounds
	int32_t ____noRounds_0;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC532Engine::_S
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____S_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RC532Engine::forEncryption
	bool ___forEncryption_4;
};

struct RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::P32
	int32_t ___P32_2;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::Q32
	int32_t ___Q32_3;
};

// Org.BouncyCastle.Crypto.Engines.RC564Engine
struct RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::_noRounds
	int32_t ____noRounds_2;
	// System.Int64[] Org.BouncyCastle.Crypto.Engines.RC564Engine::_S
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____S_3;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RC564Engine::forEncryption
	bool ___forEncryption_6;
};

struct RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::wordSize
	int32_t ___wordSize_0;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::bytesPerWord
	int32_t ___bytesPerWord_1;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::P64
	int64_t ___P64_4;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::Q64
	int64_t ___Q64_5;
};

// Org.BouncyCastle.Crypto.Engines.RC6Engine
struct RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC6Engine::_S
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____S_3;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RC6Engine::forEncryption
	bool ___forEncryption_7;
};

struct RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::wordSize
	int32_t ___wordSize_0;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::bytesPerWord
	int32_t ___bytesPerWord_1;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::_noRounds
	int32_t ____noRounds_2;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::P32
	int32_t ___P32_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::Q32
	int32_t ___Q32_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::LGW
	int32_t ___LGW_6;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine
struct Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::engine
	CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* ___engine_0;
	// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::param
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* ___param_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::forWrapping
	bool ___forWrapping_2;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::rand
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___rand_3;
};

// Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
struct Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::engine
	RuntimeObject* ___engine_0;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::param
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___param_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::forWrapping
	bool ___forWrapping_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_3;
};

// Org.BouncyCastle.Crypto.Engines.RijndaelEngine
struct RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::BC
	int32_t ___BC_9;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::BC_MASK
	int64_t ___BC_MASK_10;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ROUNDS
	int32_t ___ROUNDS_11;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::blockBits
	int32_t ___blockBits_12;
	// System.Int64[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::workingKey
	Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___workingKey_13;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::A0
	int64_t ___A0_14;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::A1
	int64_t ___A1_15;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::A2
	int64_t ___A2_16;
	// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::A3
	int64_t ___A3_17;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RijndaelEngine::forEncryption
	bool ___forEncryption_18;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::shifts0SC
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shifts0SC_19;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::shifts1SC
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shifts1SC_20;
};

struct RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::MAXROUNDS
	int32_t ___MAXROUNDS_0;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::MAXKC
	int32_t ___MAXKC_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Logtable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Logtable_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Alogtable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Alogtable_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Si
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Si_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::rcon
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rcon_6;
	// System.Byte[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::shifts0
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___shifts0_7;
	// System.Byte[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::shifts1
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___shifts1_8;
};

// Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
struct RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::core
	RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* ___core_0;
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::key
	RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* ___key_1;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_2;
};

// Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine
struct RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::core
	RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* ___core_0;
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::key
	RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* ___key_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::blindingFactor
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___blindingFactor_2;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::forEncryption
	bool ___forEncryption_3;
};

// Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
struct RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::publicKey
	RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* ___publicKey_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::blindingFactor
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___blindingFactor_1;
};

// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine
struct RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::key
	RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* ___key_0;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::forEncryption
	bool ___forEncryption_1;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::bitSize
	int32_t ___bitSize_2;
};

// Org.BouncyCastle.Crypto.Engines.RsaEngine
struct RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.RsaCoreEngine Org.BouncyCastle.Crypto.Engines.RsaEngine::core
	RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* ___core_0;
};

// Org.BouncyCastle.Crypto.Engines.SeedEngine
struct SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_6;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SeedEngine::forEncryption
	bool ___forEncryption_7;
};

struct SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::SS0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SS0_1;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::SS1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SS1_2;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::SS2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SS2_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::SS3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SS3_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::KC
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KC_5;
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::encrypting
	bool ___encrypting_3;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X0
	int32_t ___X0_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X1
	int32_t ___X1_6;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X2
	int32_t ___X2_7;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X3
	int32_t ___X3_8;
};

struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::BlockSize
	int32_t ___BlockSize_2;
};

// Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key0_2;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key1_3;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key2_4;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key3_5;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SkipjackEngine::encrypting
	bool ___encrypting_6;
};

struct SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields
{
	// System.Int16[] Org.BouncyCastle.Crypto.Engines.SkipjackEngine::ftable
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ftable_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Org.BouncyCastle.Crypto.Parameters.RC2Parameters
struct RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90  : public KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC
{
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC2Parameters::bits
	int32_t ___bits_1;
};

// Org.BouncyCastle.Crypto.Parameters.RC5Parameters
struct RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879  : public KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC
{
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC5Parameters::rounds
	int32_t ___rounds_1;
};

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B  : public AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::modulus
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___modulus_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::exponent
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___exponent_3;
};

struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_StaticFields
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::SmallPrimesProduct
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___SmallPrimesProduct_1;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_7;
};

struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master_6;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_8;
};

// Org.BouncyCastle.Crypto.Engines.SeedWrapEngine
struct SeedWrapEngine_t083783C050C6EDEA18DF55D83C592CFAFBD4777F  : public Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1
{
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngine
struct SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172  : public SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0
{
};

// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H1
	uint32_t ___H1_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H2
	uint32_t ___H2_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H3
	uint32_t ___H3_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H4
	uint32_t ___H4_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H5
	uint32_t ___H5_13;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha1Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_14;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::xOff
	int32_t ___xOff_15;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
struct RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F  : public RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::e
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___e_4;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::p
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p_5;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::q
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q_6;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::dP
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___dP_7;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::dQ
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___dQ_8;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::qInv
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___qInv_9;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26  : public Exception_t
{
};

// Org.BouncyCastle.Security.GeneralSecurityException
struct GeneralSecurityException_tB34120124FDBAF5CD3468EA98A95E47CD4F48789  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Org.BouncyCastle.Security.KeyException
struct KeyException_tDC21333515987DB539910286B133696C9D9FB178  : public GeneralSecurityException_tB34120124FDBAF5CD3468EA98A95E47CD4F48789
{
};

// Org.BouncyCastle.Security.InvalidKeyException
struct InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5  : public KeyException_tDC21333515987DB539910286B133696C9D9FB178
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[][]
struct Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B  : public RuntimeArray
{
	ALIGN_FIELD (8) Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* m_Items[1];

	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC2Parameters::get_EffectiveKeyBits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RC2Parameters_get_EffectiveKeyBits_mD4884D8650D9C98A76865433E867123899D6A544_inline (RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90* __this, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC2Engine::GenerateWorkingKey(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* RC2Engine_GenerateWorkingKey_mA39CF1FE088D81B1F2E80CC3269026234AA14FBE (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_EncryptBlock_mD3CEA611D66CBF9362BFEB158F0928CD31E34650 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_DecryptBlock_m20D34EE71F1657C4EF5E332749B78B66F7D72F95 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::RotateWordLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine__ctor_mE817FC1D3577E164BDA9662A1418418830489F00 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Random()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CalculateCmsKeyChecksum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RC2WrapEngine_CalculateCmsKeyChecksum_mA4CB8F40ADAE9337E97D6E135F25DA3C9F7108E0 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6 (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CheckCmsKeyChecksum(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC2WrapEngine_CheckCmsKeyChecksum_m656BEC6359C89581EB109EC656E9D0A6C1B674B1 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine_SetKey_m73FB430B1ABB7BF7566C0970B5B404F05F7FA87D (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC5Parameters::get_Rounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RC5Parameters_get_Rounds_m85239BF2CE005D7A5C2B002856205B2E4247A1CC_inline (RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_SetKey_mCB886257C420B7D24B397BC847F9DCB8246C7C67 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_DecryptBlock_m52269BB2F875546B457F3B62BFFDF78D606F0538 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_EncryptBlock_m8F897626A5A1885B487412196A917ED6FFAF513D (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_RotateRight_m8CBD1A68DF5C8C9E81FE75839CD9C17037C1389B (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_SetKey_mD55587322783031694268EE5121647A292F0C360 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_DecryptBlock_m6C808B085C8080F274AF6EFE2D0529F810CFA40F (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_EncryptBlock_m9698388DD0B21AF44B682B0306FF711FB4BC4B1C (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateLeft(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::WordToBytes(System.Int64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateRight(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_RotateRight_mDEEE02EB0EEA5B11DFCEB86F1412E98A14524DDB (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_SetKey_m5E576B11D4C9CB9A923DCA00B39A2631888E02BA (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_DecryptBlock_mFC7AEBC747ED8F05E1935A730A75F397F0939541 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_EncryptBlock_mD3DAE903E66B63826F45CD6A0EA8BE2DC0BDE0CB (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_RotateRight_m8DEF81F0E1D270422D702408BAF966AB2A2B05C8 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetUnderlyingCipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Shift(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RijndaelEngine_Shift_m1CFEA024790EC6F1E5728BA74C46B5A4EC946FC2 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int64_t ___r0, int32_t ___shift1, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ApplyS(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int64_t ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___box1, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xe(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x9(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine__ctor_mFA3A7D535ECED37F0CE901516B65D1C5C88E6F86 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___blockBits0, const RuntimeMethod* method) ;
// System.Int64[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::GenerateWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* RijndaelEngine_GenerateWorkingKey_m25F184F0CBF8D21A757835E56C08C2C338BAC9FC (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_UnPackBlock_mA7EA70B7449604A83A0C76D2321DC2068D0472B1 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::EncryptBlock(System.Int64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_EncryptBlock_mF3C8A9A996055848DFE3010236F04C61F43BA7D3 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___rk0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::DecryptBlock(System.Int64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_DecryptBlock_m82BF1251D95644E584444D0F97A98199009F951D (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___rk0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_PackBlock_m515B1271076855D89B68D3B4BD703AD99AC5C853 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::KeyAddition(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___rk0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Substitution(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___box0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ShiftRow(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shiftsSC0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::MixColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_MixColumn_m5E5BFCD8B5A00B3CD94D6FBDA3F13115E940673C (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::InvMixColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_InvMixColumn_m78C344E10FD7F1989985547E80124714AAEA9F39 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_PublicExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_PublicExponent_m1CE6D67559EF7A573A5DCFA2E119E53EB24CF538_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::get_Modulus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Subtract(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___n0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Utilities.BigIntegers::CreateRandomInRange(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___min0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___max1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModPow(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___e0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Multiply(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___val0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Mod(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModInverse(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ModInverse_m17E50C383B3E4D3868420160E63F969145971A7D (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaCoreEngine__ctor_m2B3FEBFB9243CA826063B1951A63399C07924065 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* RsaBlindingParameters_get_PublicKey_mE9C82C78D227A15B214B6B86BC801EA81B3B0401_inline (RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters::get_BlindingFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingParameters_get_BlindingFactor_m017DE8B8AD76EBB3636110AD7F3EB893AED6E6FF_inline (RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::BlindMessage(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingEngine_BlindMessage_mE076E17ED1CC7C450385153AE861190D1AEDCE8D (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___msg0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::UnblindMessage(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingEngine_UnblindMessage_m38D541175C26C3CE82A4CCE366AA206AAD1E33E0 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___blindedMsg0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::get_Exponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Exponent_m53F01DA95BCBD6DDE23ED14286653B851AD30AFB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.InvalidKeyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKeyException__ctor_m40FEA53E12B585BB41D46A11E9B53D3814463755 (InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_BitLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2 (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mA773DCE54A2861811F9CF1C91CF8611A92C919B6 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___sign0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareTo(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m2AC6C020406E0012C1F48B7C3193552F605AC1D9 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.BigInteger::ToByteArrayUnsigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArrayUnsigned_m851F34EB4990FB95CAA13F23E16D1774E0B26FA6 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_P_mD1856B8A898DB1763E2DF84DCE335A6B353C9A9F_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_Q_m43B53C0E3F837093F8AA2810494ADE021FD99654_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_DP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_DP_m551662D41C61A77263D3BBDCB12D4F0BAE0EDE5A_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_DQ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_DQ_mC5EB14A21F366C34EC8E314BED6ED2CB77F9F29E_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters::get_QInv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_QInv_m2104336292891D5BCBF68982D420A9EFD9435750_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Remainder(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Remainder_m3EC0AB3AE3F935252F117BA4A5219555D800A961 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___n0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Add(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___value0, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::createWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* SeedEngine_createWorkingKey_mCD8CCE60CC0711EB1D980D1334E22AC543AE9196 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inKey0, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::bytesToLong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::F(System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_F_mC15C1A202E153D932388B9AE18F547D51FECD41F (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___ki00, int32_t ___ki11, int64_t ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::longToBytes(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine_longToBytes_mDCD190BB2E965E6C98E31C13B181538C0012E5A7 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest0, int32_t ___destOff1, int64_t ___value2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___lVal0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___lVal0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::G(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateRight8(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_rotateRight8_mD5DC6B20BF4A062A1BF87EC5B9D51AD65E34509A (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___x0, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateLeft8(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_rotateLeft8_mD36561373EDFAAFB97864CAFD120CD48B75597BD (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_phaseCalc2_mB2F42E726A5A21DAAC7B6FFE277347CB64D275F7 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_phaseCalc1_mD537C2862BED9109A8EC61CBCD7EAF007EE671EF (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine__ctor_m8D9B73C3169D65A138076A76AD9BD9AD4020A817 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604 (Rfc3394WrapEngine_tE66253E3F6CE7FCB5A19AC798C0127E99AEA14C1* __this, RuntimeObject* ___engine0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28 (int32_t ___x0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143 (int32_t ___x0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::G(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m22B7E0348F1C886404BDC6307F6739B7CF75D748 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, int32_t ___k0, int32_t ___w1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::H(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m99511F026DF44CA4F21E35F756976555B4D1F0C6 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, int32_t ___k0, int32_t ___w1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.NullEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullEngine__ctor_mF9F5CA1E5D99B89DF7DD627F81854ADF363B168E (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.NullEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullEngine_Init_mBB2843E4747A91AFD71731F4C101FFD43E19E98F (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	{
		__this->___initialised_1 = (bool)1;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.NullEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullEngine_get_AlgorithmName_m90FF23A9E46A1FE69FA92D05A153C23FE6E62305 (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.NullEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullEngine_get_IsPartialBlockOkay_m2B2C51EEE007EA9B836F7E0E006690D41766710B (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.NullEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullEngine_GetBlockSize_m9CFAE0371C09CF1DE3B524DE45E6D80E644B9D6A (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.NullEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullEngine_ProcessBlock_m483D158B0854B8F5D872CDB8EE85CD556E46908D (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___initialised_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23168166059948ADEC8F54CD9538BEF23BF2D820)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullEngine_ProcessBlock_m483D158B0854B8F5D872CDB8EE85CD556E46908D_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, 1, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, 1, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_0041;
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output2;
		int32_t L_7 = ___outOff3;
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))), (uint8_t)L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.NullEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullEngine_Reset_mEF597A71177F1F9B98B4AF324D51669E4EA4F8AA (NullEngine_t10B2283CF736308FCA4D5E4F9072518800D5CFA4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC2Engine::GenerateWorkingKey(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* RC2Engine_GenerateWorkingKey_mA39CF1FE088D81B1F2E80CC3269026234AA14FBE (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___bits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t V_7 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		V_1 = L_0;
		V_2 = 0;
		goto IL_001f;
	}

IL_000f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_1;
		int32_t L_2 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___key0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int32_t)((int32_t)((int32_t)L_6&((int32_t)255))));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		int32_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___key0;
		NullCheck(L_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___key0;
		NullCheck(L_10);
		V_3 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0068;
		}
	}
	{
		V_4 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields*)il2cpp_codegen_static_fields_for(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var))->___piTable_1;
		int32_t L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = L_19;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		int32_t L_23 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_17, L_22))&((int32_t)255)));
		uint8_t L_24 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int32_t)((int32_t)L_24&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_28);
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_0068:
	{
		int32_t L_30 = ___bits1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_30, 7))>>3));
		il2cpp_codegen_runtime_class_init_inline(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ((RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields*)il2cpp_codegen_static_fields_for(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var))->___piTable_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_33));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = ___bits1;
		NullCheck(L_31);
		int32_t L_37 = ((int32_t)(L_35&((int32_t)(((int32_t)255)>>((int32_t)(((int32_t)(7&((-L_36))))&((int32_t)31)))))));
		uint8_t L_38 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)((int32_t)L_38&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40 = V_3;
		int32_t L_41 = V_0;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_40))), (int32_t)L_41);
		int32_t L_42 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_42)), 1));
		goto IL_00c9;
	}

IL_00a9:
	{
		il2cpp_codegen_runtime_class_init_inline(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields*)il2cpp_codegen_static_fields_for(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var))->___piTable_1;
		int32_t L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_1;
		int32_t L_46 = V_5;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		int32_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		int32_t L_50 = ((int32_t)(L_44^L_49));
		uint8_t L_51 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_0 = ((int32_t)((int32_t)L_51&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_1;
		int32_t L_53 = V_5;
		int32_t L_54 = V_0;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
	}

IL_00c9:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_6 = L_57;
		V_7 = 0;
		goto IL_00f8;
	}

IL_00dc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_6;
		int32_t L_59 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		int32_t L_61 = V_7;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_multiply(2, L_61));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_65)), 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (int32_t)((int32_t)il2cpp_codegen_add(L_63, ((int32_t)(L_67<<8)))));
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_00f8:
	{
		int32_t L_69 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_6;
		NullCheck(L_70);
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)(((RuntimeArray*)L_70)->max_length))))))
		{
			goto IL_00dc;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_6;
		return L_71;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_Init_m01904A27A5D37BA83AF233F347819B6A734EEBC5 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		bool L_0 = ___forEncryption0;
		__this->___encrypting_3 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		if (!((RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90*)IsInstClass((RuntimeObject*)L_1, RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		V_0 = ((RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90*)CastclassClass((RuntimeObject*)L_2, RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90_il2cpp_TypeInfo_var));
		RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_3, NULL);
		RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RC2Parameters_get_EffectiveKeyBits_mD4884D8650D9C98A76865433E867123899D6A544_inline(L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = RC2Engine_GenerateWorkingKey_mA39CF1FE088D81B1F2E80CC3269026234AA14FBE(__this, L_4, L_6, NULL);
		__this->___workingKey_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_2), (void*)L_7);
		return;
	}

IL_002f:
	{
		RuntimeObject* L_8 = ___parameters1;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_8, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_9 = ___parameters1;
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_10, NULL);
		V_2 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
		L_14 = RC2Engine_GenerateWorkingKey_mA39CF1FE088D81B1F2E80CC3269026234AA14FBE(__this, L_12, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_13)->max_length)), 8)), NULL);
		__this->___workingKey_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_2), (void*)L_14);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_15 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_16;
		L_16 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral790AD59E6474F50CCB2314B67DBEDC0EB478862A)), L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2Engine_Init_m01904A27A5D37BA83AF233F347819B6A734EEBC5_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_Reset_m6AB3589FFB46F1550811DB0547A3BD1A47049931 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC2Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC2Engine_get_AlgorithmName_m27AB48D6917E67FB4F4F81BDD20ADA514085B89A (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE134CE3B47F0CA2291ABAA4D77503AC1B87A4F4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE134CE3B47F0CA2291ABAA4D77503AC1B87A4F4B;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC2Engine_get_IsPartialBlockOkay_mA87FD7C68D7A4E51F5B0FF78C04C2D5AA8DDC915 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2Engine_GetBlockSize_m8F9975F451149BB2BFAE0CF9426503FA435F1C12 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2Engine_ProcessBlock_m9E325B3FB40B32DBB2C1B9E4071761BD4B29BEE8 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___workingKey_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB4D45F97D1579C33DE8E414C713E11054C99C32)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2Engine_ProcessBlock_m9E325B3FB40B32DBB2C1B9E4071761BD4B29BEE8_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_3;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		RC2Engine_EncryptBlock_mD3CEA611D66CBF9362BFEB158F0928CD31E34650(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_004e;
	}

IL_0043:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		RC2Engine_DecryptBlock_m20D34EE71F1657C4EF5E332749B78B66F7D72F95(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_004e:
	{
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::RotateWordLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		___x0 = ((int32_t)(L_0&((int32_t)65535)));
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___x0;
		int32_t L_4 = ___y1;
		return ((int32_t)(((int32_t)(L_1<<((int32_t)(L_2&((int32_t)31)))))|((int32_t)(L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_4))&((int32_t)31)))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_EncryptBlock_mD3CEA611D66CBF9362BFEB158F0928CD31E34650 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 7));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 6));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 5));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 4));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 2));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_19&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___inOff1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___input0;
		int32_t L_29 = ___inOff1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_27&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = 0;
		goto IL_00e7;
	}

IL_006b:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___workingKey_2;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41;
		L_41 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, ((int32_t)(L_33&((~L_34)))))), ((int32_t)(L_35&L_36)))), L_40)), 1, NULL);
		V_3 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_1;
		int32_t L_44 = V_3;
		int32_t L_45 = V_0;
		int32_t L_46 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->___workingKey_2;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51;
		L_51 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_42, ((int32_t)(L_43&((~L_44)))))), ((int32_t)(L_45&L_46)))), L_50)), 2, NULL);
		V_2 = L_51;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		int32_t L_56 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___workingKey_2;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 2));
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61;
		L_61 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)(L_53&((~L_54)))))), ((int32_t)(L_55&L_56)))), L_60)), 3, NULL);
		V_1 = L_61;
		int32_t L_62 = V_0;
		int32_t L_63 = V_3;
		int32_t L_64 = V_1;
		int32_t L_65 = V_2;
		int32_t L_66 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___workingKey_2;
		int32_t L_68 = V_4;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 3));
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71;
		L_71 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_62, ((int32_t)(L_63&((~L_64)))))), ((int32_t)(L_65&L_66)))), L_70)), 5, NULL);
		V_0 = L_71;
		int32_t L_72 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_72, 4));
	}

IL_00e7:
	{
		int32_t L_73 = V_4;
		if ((((int32_t)L_73) <= ((int32_t)((int32_t)16))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_74 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___workingKey_2;
		int32_t L_76 = V_0;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)(L_76&((int32_t)63)));
		int32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_3 = ((int32_t)il2cpp_codegen_add(L_74, L_78));
		int32_t L_79 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = __this->___workingKey_2;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)(L_81&((int32_t)63)));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_2 = ((int32_t)il2cpp_codegen_add(L_79, L_83));
		int32_t L_84 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___workingKey_2;
		int32_t L_86 = V_2;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)(L_86&((int32_t)63)));
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, L_88));
		int32_t L_89 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->___workingKey_2;
		int32_t L_91 = V_1;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)(L_91&((int32_t)63)));
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_0 = ((int32_t)il2cpp_codegen_add(L_89, L_93));
		V_5 = ((int32_t)20);
		goto IL_01aa;
	}

IL_012e:
	{
		int32_t L_94 = V_3;
		int32_t L_95 = V_2;
		int32_t L_96 = V_0;
		int32_t L_97 = V_1;
		int32_t L_98 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___workingKey_2;
		int32_t L_100 = V_5;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		int32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103;
		L_103 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_94, ((int32_t)(L_95&((~L_96)))))), ((int32_t)(L_97&L_98)))), L_102)), 1, NULL);
		V_3 = L_103;
		int32_t L_104 = V_2;
		int32_t L_105 = V_1;
		int32_t L_106 = V_3;
		int32_t L_107 = V_0;
		int32_t L_108 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___workingKey_2;
		int32_t L_110 = V_5;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		int32_t L_113;
		L_113 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_104, ((int32_t)(L_105&((~L_106)))))), ((int32_t)(L_107&L_108)))), L_112)), 2, NULL);
		V_2 = L_113;
		int32_t L_114 = V_1;
		int32_t L_115 = V_0;
		int32_t L_116 = V_2;
		int32_t L_117 = V_3;
		int32_t L_118 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___workingKey_2;
		int32_t L_120 = V_5;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 2));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123;
		L_123 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_114, ((int32_t)(L_115&((~L_116)))))), ((int32_t)(L_117&L_118)))), L_122)), 3, NULL);
		V_1 = L_123;
		int32_t L_124 = V_0;
		int32_t L_125 = V_3;
		int32_t L_126 = V_1;
		int32_t L_127 = V_2;
		int32_t L_128 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = __this->___workingKey_2;
		int32_t L_130 = V_5;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 3));
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		int32_t L_133;
		L_133 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_124, ((int32_t)(L_125&((~L_126)))))), ((int32_t)(L_127&L_128)))), L_132)), 5, NULL);
		V_0 = L_133;
		int32_t L_134 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_134, 4));
	}

IL_01aa:
	{
		int32_t L_135 = V_5;
		if ((((int32_t)L_135) <= ((int32_t)((int32_t)40))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_136 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = __this->___workingKey_2;
		int32_t L_138 = V_0;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)(L_138&((int32_t)63)));
		int32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_3 = ((int32_t)il2cpp_codegen_add(L_136, L_140));
		int32_t L_141 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = __this->___workingKey_2;
		int32_t L_143 = V_3;
		NullCheck(L_142);
		int32_t L_144 = ((int32_t)(L_143&((int32_t)63)));
		int32_t L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_2 = ((int32_t)il2cpp_codegen_add(L_141, L_145));
		int32_t L_146 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = __this->___workingKey_2;
		int32_t L_148 = V_2;
		NullCheck(L_147);
		int32_t L_149 = ((int32_t)(L_148&((int32_t)63)));
		int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		V_1 = ((int32_t)il2cpp_codegen_add(L_146, L_150));
		int32_t L_151 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = __this->___workingKey_2;
		int32_t L_153 = V_1;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)(L_153&((int32_t)63)));
		int32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_0 = ((int32_t)il2cpp_codegen_add(L_151, L_155));
		V_6 = ((int32_t)44);
		goto IL_026d;
	}

IL_01f1:
	{
		int32_t L_156 = V_3;
		int32_t L_157 = V_2;
		int32_t L_158 = V_0;
		int32_t L_159 = V_1;
		int32_t L_160 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = __this->___workingKey_2;
		int32_t L_162 = V_6;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		int32_t L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		int32_t L_165;
		L_165 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_156, ((int32_t)(L_157&((~L_158)))))), ((int32_t)(L_159&L_160)))), L_164)), 1, NULL);
		V_3 = L_165;
		int32_t L_166 = V_2;
		int32_t L_167 = V_1;
		int32_t L_168 = V_3;
		int32_t L_169 = V_0;
		int32_t L_170 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___workingKey_2;
		int32_t L_172 = V_6;
		NullCheck(L_171);
		int32_t L_173 = ((int32_t)il2cpp_codegen_add(L_172, 1));
		int32_t L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175;
		L_175 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_166, ((int32_t)(L_167&((~L_168)))))), ((int32_t)(L_169&L_170)))), L_174)), 2, NULL);
		V_2 = L_175;
		int32_t L_176 = V_1;
		int32_t L_177 = V_0;
		int32_t L_178 = V_2;
		int32_t L_179 = V_3;
		int32_t L_180 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = __this->___workingKey_2;
		int32_t L_182 = V_6;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 2));
		int32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		int32_t L_185;
		L_185 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(L_177&((~L_178)))))), ((int32_t)(L_179&L_180)))), L_184)), 3, NULL);
		V_1 = L_185;
		int32_t L_186 = V_0;
		int32_t L_187 = V_3;
		int32_t L_188 = V_1;
		int32_t L_189 = V_2;
		int32_t L_190 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = __this->___workingKey_2;
		int32_t L_192 = V_6;
		NullCheck(L_191);
		int32_t L_193 = ((int32_t)il2cpp_codegen_add(L_192, 3));
		int32_t L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195;
		L_195 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_186, ((int32_t)(L_187&((~L_188)))))), ((int32_t)(L_189&L_190)))), L_194)), 5, NULL);
		V_0 = L_195;
		int32_t L_196 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_196, 4));
	}

IL_026d:
	{
		int32_t L_197 = V_6;
		if ((((int32_t)L_197) < ((int32_t)((int32_t)64))))
		{
			goto IL_01f1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_198 = ___outBytes2;
		int32_t L_199 = ___outOff3;
		int32_t L_200 = V_3;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)((int32_t)(uint8_t)L_200));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = ___outBytes2;
		int32_t L_202 = ___outOff3;
		int32_t L_203 = V_3;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_202, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_203>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = ___outBytes2;
		int32_t L_205 = ___outOff3;
		int32_t L_206 = V_2;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_205, 2))), (uint8_t)((int32_t)(uint8_t)L_206));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = ___outBytes2;
		int32_t L_208 = ___outOff3;
		int32_t L_209 = V_2;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_208, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_209>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = ___outBytes2;
		int32_t L_211 = ___outOff3;
		int32_t L_212 = V_1;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_211, 4))), (uint8_t)((int32_t)(uint8_t)L_212));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = ___outBytes2;
		int32_t L_214 = ___outOff3;
		int32_t L_215 = V_1;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_214, 5))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_215>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ___outBytes2;
		int32_t L_217 = ___outOff3;
		int32_t L_218 = V_0;
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_217, 6))), (uint8_t)((int32_t)(uint8_t)L_218));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = ___outBytes2;
		int32_t L_220 = ___outOff3;
		int32_t L_221 = V_0;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_220, 7))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_221>>8))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine_DecryptBlock_m20D34EE71F1657C4EF5E332749B78B66F7D72F95 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 7));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 6));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 5));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 4));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 2));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_19&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___inOff1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___input0;
		int32_t L_29 = ___inOff1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_27&((int32_t)255)))<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = ((int32_t)60);
		goto IL_00ef;
	}

IL_006f:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_32, ((int32_t)11), NULL);
		int32_t L_34 = V_3;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___workingKey_2;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 3));
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_33, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_34&((~L_35)))), ((int32_t)(L_36&L_37)))), L_41))));
		int32_t L_42 = V_1;
		int32_t L_43;
		L_43 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_42, ((int32_t)13), NULL);
		int32_t L_44 = V_0;
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->___workingKey_2;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 2));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_43, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_44&((~L_45)))), ((int32_t)(L_46&L_47)))), L_51))));
		int32_t L_52 = V_2;
		int32_t L_53;
		L_53 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_52, ((int32_t)14), NULL);
		int32_t L_54 = V_1;
		int32_t L_55 = V_3;
		int32_t L_56 = V_0;
		int32_t L_57 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___workingKey_2;
		int32_t L_59 = V_4;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_53, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_54&((~L_55)))), ((int32_t)(L_56&L_57)))), L_61))));
		int32_t L_62 = V_3;
		int32_t L_63;
		L_63 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_62, ((int32_t)15), NULL);
		int32_t L_64 = V_2;
		int32_t L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___workingKey_2;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_64&((~L_65)))), ((int32_t)(L_66&L_67)))), L_71))));
		int32_t L_72 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 4));
	}

IL_00ef:
	{
		int32_t L_73 = V_4;
		if ((((int32_t)L_73) >= ((int32_t)((int32_t)44))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_74 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___workingKey_2;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)(L_76&((int32_t)63)));
		int32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_74, L_78));
		int32_t L_79 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = __this->___workingKey_2;
		int32_t L_81 = V_2;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)(L_81&((int32_t)63)));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_79, L_83));
		int32_t L_84 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___workingKey_2;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)(L_86&((int32_t)63)));
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_84, L_88));
		int32_t L_89 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->___workingKey_2;
		int32_t L_91 = V_0;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)(L_91&((int32_t)63)));
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_89, L_93));
		V_5 = ((int32_t)40);
		goto IL_01b9;
	}

IL_0139:
	{
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_94, ((int32_t)11), NULL);
		int32_t L_96 = V_3;
		int32_t L_97 = V_1;
		int32_t L_98 = V_2;
		int32_t L_99 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = __this->___workingKey_2;
		int32_t L_101 = V_5;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 3));
		int32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_95, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_96&((~L_97)))), ((int32_t)(L_98&L_99)))), L_103))));
		int32_t L_104 = V_1;
		int32_t L_105;
		L_105 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_104, ((int32_t)13), NULL);
		int32_t L_106 = V_0;
		int32_t L_107 = V_2;
		int32_t L_108 = V_3;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->___workingKey_2;
		int32_t L_111 = V_5;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 2));
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_105, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_106&((~L_107)))), ((int32_t)(L_108&L_109)))), L_113))));
		int32_t L_114 = V_2;
		int32_t L_115;
		L_115 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_114, ((int32_t)14), NULL);
		int32_t L_116 = V_1;
		int32_t L_117 = V_3;
		int32_t L_118 = V_0;
		int32_t L_119 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = __this->___workingKey_2;
		int32_t L_121 = V_5;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_115, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_116&((~L_117)))), ((int32_t)(L_118&L_119)))), L_123))));
		int32_t L_124 = V_3;
		int32_t L_125;
		L_125 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_124, ((int32_t)15), NULL);
		int32_t L_126 = V_2;
		int32_t L_127 = V_0;
		int32_t L_128 = V_1;
		int32_t L_129 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___workingKey_2;
		int32_t L_131 = V_5;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_125, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_126&((~L_127)))), ((int32_t)(L_128&L_129)))), L_133))));
		int32_t L_134 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_134, 4));
	}

IL_01b9:
	{
		int32_t L_135 = V_5;
		if ((((int32_t)L_135) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_136 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = __this->___workingKey_2;
		int32_t L_138 = V_1;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)(L_138&((int32_t)63)));
		int32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_136, L_140));
		int32_t L_141 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = __this->___workingKey_2;
		int32_t L_143 = V_2;
		NullCheck(L_142);
		int32_t L_144 = ((int32_t)(L_143&((int32_t)63)));
		int32_t L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_141, L_145));
		int32_t L_146 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = __this->___workingKey_2;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		int32_t L_149 = ((int32_t)(L_148&((int32_t)63)));
		int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_146, L_150));
		int32_t L_151 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = __this->___workingKey_2;
		int32_t L_153 = V_0;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)(L_153&((int32_t)63)));
		int32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_151, L_155));
		V_6 = ((int32_t)16);
		goto IL_0283;
	}

IL_0203:
	{
		int32_t L_156 = V_0;
		int32_t L_157;
		L_157 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_156, ((int32_t)11), NULL);
		int32_t L_158 = V_3;
		int32_t L_159 = V_1;
		int32_t L_160 = V_2;
		int32_t L_161 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___workingKey_2;
		int32_t L_163 = V_6;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, 3));
		int32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_157, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_158&((~L_159)))), ((int32_t)(L_160&L_161)))), L_165))));
		int32_t L_166 = V_1;
		int32_t L_167;
		L_167 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_166, ((int32_t)13), NULL);
		int32_t L_168 = V_0;
		int32_t L_169 = V_2;
		int32_t L_170 = V_3;
		int32_t L_171 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = __this->___workingKey_2;
		int32_t L_173 = V_6;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(L_173, 2));
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_167, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_168&((~L_169)))), ((int32_t)(L_170&L_171)))), L_175))));
		int32_t L_176 = V_2;
		int32_t L_177;
		L_177 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_176, ((int32_t)14), NULL);
		int32_t L_178 = V_1;
		int32_t L_179 = V_3;
		int32_t L_180 = V_0;
		int32_t L_181 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_182 = __this->___workingKey_2;
		int32_t L_183 = V_6;
		NullCheck(L_182);
		int32_t L_184 = ((int32_t)il2cpp_codegen_add(L_183, 1));
		int32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_177, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_178&((~L_179)))), ((int32_t)(L_180&L_181)))), L_185))));
		int32_t L_186 = V_3;
		int32_t L_187;
		L_187 = RC2Engine_RotateWordLeft_m8F52D2565A8F0C178A0A008A6F640596B5C23143(__this, L_186, ((int32_t)15), NULL);
		int32_t L_188 = V_2;
		int32_t L_189 = V_0;
		int32_t L_190 = V_1;
		int32_t L_191 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = __this->___workingKey_2;
		int32_t L_193 = V_6;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		int32_t L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_187, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_188&((~L_189)))), ((int32_t)(L_190&L_191)))), L_195))));
		int32_t L_196 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_196, 4));
	}

IL_0283:
	{
		int32_t L_197 = V_6;
		if ((((int32_t)L_197) >= ((int32_t)0)))
		{
			goto IL_0203;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_198 = ___outBytes2;
		int32_t L_199 = ___outOff3;
		int32_t L_200 = V_3;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)((int32_t)(uint8_t)L_200));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = ___outBytes2;
		int32_t L_202 = ___outOff3;
		int32_t L_203 = V_3;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_202, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_203>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = ___outBytes2;
		int32_t L_205 = ___outOff3;
		int32_t L_206 = V_2;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_205, 2))), (uint8_t)((int32_t)(uint8_t)L_206));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = ___outBytes2;
		int32_t L_208 = ___outOff3;
		int32_t L_209 = V_2;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_208, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_209>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = ___outBytes2;
		int32_t L_211 = ___outOff3;
		int32_t L_212 = V_1;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_211, 4))), (uint8_t)((int32_t)(uint8_t)L_212));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = ___outBytes2;
		int32_t L_214 = ___outOff3;
		int32_t L_215 = V_1;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_214, 5))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_215>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ___outBytes2;
		int32_t L_217 = ___outOff3;
		int32_t L_218 = V_0;
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_217, 6))), (uint8_t)((int32_t)(uint8_t)L_218));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = ___outBytes2;
		int32_t L_220 = ___outOff3;
		int32_t L_221 = V_0;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_220, 7))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_221>>8))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine__cctor_m5BAA43F10CA2A4CCCDA83F9F8BC50375F3E63928 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015aaU2D1_126_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015aaU2D1_126_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields*)il2cpp_codegen_static_fields_for(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var))->___piTable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_StaticFields*)il2cpp_codegen_static_fields_for(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var))->___piTable_1), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Engine__ctor_mE817FC1D3577E164BDA9662A1418418830489F00 (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2WrapEngine_Init_m8F1FEB68EB881EB3D1DD8BA2997FE3FAFFF24769 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, bool ___forWrapping0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_0 = NULL;
	{
		bool L_0 = ___forWrapping0;
		__this->___forWrapping_4 = L_0;
		RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455* L_1 = (RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455*)il2cpp_codegen_object_new(RC2Engine_t4B0551B0C3A350E3D9DAC200D9D3FF1D61579455_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RC2Engine__ctor_mE817FC1D3577E164BDA9662A1418418830489F00(L_1, NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_2 = (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)il2cpp_codegen_object_new(CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F(L_2, L_1, NULL);
		__this->___engine_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_2);
		RuntimeObject* L_3 = ___parameters1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_3, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_4 = ___parameters1;
		V_0 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_4, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_5 = V_0;
		NullCheck(L_5);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_6;
		L_6 = ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline(L_5, NULL);
		__this->___sr_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_5), (void*)L_6);
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_7, NULL);
		___parameters1 = L_8;
		goto IL_0047;
	}

IL_003c:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_9 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_9, NULL);
		__this->___sr_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sr_5), (void*)L_9);
	}

IL_0047:
	{
		RuntimeObject* L_10 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_10, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_11 = ___forWrapping0;
		if (L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B8599FC60C1CB6E010C304BEDAB3F1C9F2613A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Init_m8F1FEB68EB881EB3D1DD8BA2997FE3FAFFF24769_RuntimeMethod_var)));
	}

IL_005d:
	{
		RuntimeObject* L_13 = ___parameters1;
		__this->___paramPlusIV_2 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_13, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramPlusIV_2), (void*)((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_13, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_14 = __this->___paramPlusIV_2;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_14, NULL);
		__this->___iv_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_15);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_16 = __this->___paramPlusIV_2;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_16, NULL);
		__this->___parameters_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_1), (void*)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___iv_3;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) == ((int32_t)8)))
		{
			goto IL_00e4;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB38BD6540168B3F80FC1E0ED60F43650A552E50)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Init_m8F1FEB68EB881EB3D1DD8BA2997FE3FAFFF24769_RuntimeMethod_var)));
	}

IL_00a1:
	{
		RuntimeObject* L_20 = ___parameters1;
		__this->___parameters_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_1), (void*)L_20);
		bool L_21 = __this->___forWrapping_4;
		if (!L_21)
		{
			goto IL_00e4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___iv_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_22);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_23 = __this->___sr_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___iv_3;
		NullCheck(L_23);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_23, L_24);
		RuntimeObject* L_25 = __this->___parameters_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___iv_3;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_27 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_27, L_25, L_26, NULL);
		__this->___paramPlusIV_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramPlusIV_2), (void*)L_27);
	}

IL_00e4:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC2WrapEngine_get_AlgorithmName_m80FD78967AA6325E70A4DCC4D120739B966170F1 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE134CE3B47F0CA2291ABAA4D77503AC1B87A4F4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE134CE3B47F0CA2291ABAA4D77503AC1B87A4F4B;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RC2WrapEngine_Wrap_m4BCC82C89C89E8555F1EBB1019C01C32128EF6BB (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	int32_t V_12 = 0;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		bool L_0 = __this->___forWrapping_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2D94F054CFFA4959E5BFD39650F74A8C73B2C92)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Wrap_m4BCC82C89C89E8555F1EBB1019C01C32128EF6BB_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___length2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		if (!((int32_t)(L_3%8)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_subtract(8, ((int32_t)(L_5%8))))));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		int32_t L_9 = ___length2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input0;
		int32_t L_11 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		int32_t L_13 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 1, L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15)), 1)));
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_18 = __this->___sr_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		NullCheck(L_18);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_18, L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		int32_t L_22 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
	}

IL_0067:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = RC2WrapEngine_CalculateCmsKeyChecksum_mA4CB8F40ADAE9337E97D6E135F25DA3C9F7108E0(__this, L_24, NULL);
		V_3 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_26)->max_length)), ((int32_t)(((RuntimeArray*)L_27)->max_length)))));
		V_4 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		NullCheck(L_31);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_29, 0, (RuntimeArray*)L_30, 0, ((int32_t)(((RuntimeArray*)L_31)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
		NullCheck(L_35);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_32, 0, (RuntimeArray*)L_33, ((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)(((RuntimeArray*)L_35)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_4;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)));
		V_5 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		NullCheck(L_40);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_38, 0, (RuntimeArray*)L_39, 0, ((int32_t)(((RuntimeArray*)L_40)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_4;
		NullCheck(L_41);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_42 = __this->___engine_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_42, NULL);
		V_6 = ((int32_t)(((int32_t)(((RuntimeArray*)L_41)->max_length))/L_43));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_4;
		NullCheck(L_44);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_45 = __this->___engine_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_45, NULL);
		V_7 = ((int32_t)(((int32_t)(((RuntimeArray*)L_44)->max_length))%L_46));
		int32_t L_47 = V_7;
		if (!L_47)
		{
			goto IL_00e6;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_48 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7BC5720D92831EEF195351553329E90EA1D7B6D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Wrap_m4BCC82C89C89E8555F1EBB1019C01C32128EF6BB_RuntimeMethod_var)));
	}

IL_00e6:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_49 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_50 = __this->___paramPlusIV_2;
		NullCheck(L_49);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_49, (bool)1, L_50, NULL);
		V_8 = 0;
		goto IL_0127;
	}

IL_00fd:
	{
		int32_t L_51 = V_8;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_52 = __this->___engine_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_52, NULL);
		V_9 = ((int32_t)il2cpp_codegen_multiply(L_51, L_53));
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_54 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_5;
		int32_t L_56 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_5;
		int32_t L_58 = V_9;
		NullCheck(L_54);
		int32_t L_59;
		L_59 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_54, L_55, L_56, L_57, L_58, NULL);
		int32_t L_60 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0127:
	{
		int32_t L_61 = V_8;
		int32_t L_62 = V_6;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00fd;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___iv_3;
		NullCheck(L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_5;
		NullCheck(L_64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_63)->max_length)), ((int32_t)(((RuntimeArray*)L_64)->max_length)))));
		V_10 = L_65;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___iv_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___iv_3;
		NullCheck(L_68);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_66, 0, (RuntimeArray*)L_67, 0, ((int32_t)(((RuntimeArray*)L_68)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___iv_3;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_5;
		NullCheck(L_72);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_69, 0, (RuntimeArray*)L_70, ((int32_t)(((RuntimeArray*)L_71)->max_length)), ((int32_t)(((RuntimeArray*)L_72)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_10;
		NullCheck(L_73);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)));
		V_11 = L_74;
		V_12 = 0;
		goto IL_0195;
	}

IL_017e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_11;
		int32_t L_76 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_10;
		NullCheck(L_78);
		int32_t L_79 = V_12;
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_78)->max_length)), ((int32_t)il2cpp_codegen_add(L_79, 1))));
		uint8_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)L_81);
		int32_t L_82 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_0195:
	{
		int32_t L_83 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_10;
		NullCheck(L_84);
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
		{
			goto IL_017e;
		}
	}
	{
		RuntimeObject* L_85 = __this->___parameters_1;
		il2cpp_codegen_runtime_class_init_inline(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_StaticFields*)il2cpp_codegen_static_fields_for(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var))->___IV2_6;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_87 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_87, L_85, L_86, NULL);
		V_13 = L_87;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_88 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_89 = V_13;
		NullCheck(L_88);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_88, (bool)1, L_89, NULL);
		V_14 = 0;
		goto IL_01ec;
	}

IL_01c2:
	{
		int32_t L_90 = V_14;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_91 = __this->___engine_0;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_91, NULL);
		V_15 = ((int32_t)il2cpp_codegen_multiply(L_90, L_92));
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_93 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_11;
		int32_t L_95 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_11;
		int32_t L_97 = V_15;
		NullCheck(L_93);
		int32_t L_98;
		L_98 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_93, L_94, L_95, L_96, L_97, NULL);
		int32_t L_99 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_01ec:
	{
		int32_t L_100 = V_14;
		int32_t L_101 = V_6;
		if ((((int32_t)L_100) < ((int32_t)((int32_t)il2cpp_codegen_add(L_101, 1)))))
		{
			goto IL_01c2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_11;
		return L_102;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	{
		bool L_0 = __this->___forWrapping_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7CB44EA744A3060D01211672D5FF225D29CC2B31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_3 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC4153577DC6301E1F6FFF8598C112823A34E145)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_4 = ___length2;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_5 = __this->___engine_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_5, NULL);
		if (!((int32_t)(L_4%L_6)))
		{
			goto IL_0050;
		}
	}
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_7 = __this->___engine_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_7, NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0920A6AABBEFA13D4437110676BB9315863FF7ED)), L_10, NULL);
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_12 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_13 = __this->___parameters_1;
		il2cpp_codegen_runtime_class_init_inline(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_StaticFields*)il2cpp_codegen_static_fields_for(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var))->___IV2_6;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_15 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_15, L_13, L_14, NULL);
		V_0 = L_15;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_16 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_17 = V_0;
		NullCheck(L_16);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_16, (bool)0, L_17, NULL);
		int32_t L_18 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_1 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		int32_t L_23 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_20, L_21, (RuntimeArray*)L_22, 0, L_23, NULL);
		V_2 = 0;
		goto IL_00a5;
	}

IL_0083:
	{
		int32_t L_24 = V_2;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_25 = __this->___engine_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_25, NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_24, L_26));
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_27 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		int32_t L_29 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		int32_t L_31 = V_3;
		NullCheck(L_27);
		int32_t L_32;
		L_32 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_27, L_28, L_29, L_30, L_31, NULL);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a5:
	{
		int32_t L_34 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		NullCheck(L_35);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_36 = __this->___engine_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_36, NULL);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_35)->max_length))/L_37)))))
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		NullCheck(L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)));
		V_4 = L_39;
		V_5 = 0;
		goto IL_00db;
	}

IL_00c6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		int32_t L_41 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = V_5;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), ((int32_t)il2cpp_codegen_add(L_44, 1))));
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)L_46);
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00db:
	{
		int32_t L_48 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00c6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___iv_3 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_4;
		NullCheck(L_51);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_51)->max_length)), 8)));
		V_6 = L_52;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___iv_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_53, 0, (RuntimeArray*)L_54, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_4;
		NullCheck(L_57);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_55, 8, (RuntimeArray*)L_56, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_57)->max_length)), 8)), NULL);
		RuntimeObject* L_58 = __this->___parameters_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___iv_3;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_60 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_60, L_58, L_59, NULL);
		__this->___paramPlusIV_2 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramPlusIV_2), (void*)L_60);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_61 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_62 = __this->___paramPlusIV_2;
		NullCheck(L_61);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_61, (bool)0, L_62, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_6;
		NullCheck(L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)));
		V_7 = L_64;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_6;
		NullCheck(L_67);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_65, 0, (RuntimeArray*)L_66, 0, ((int32_t)(((RuntimeArray*)L_67)->max_length)), NULL);
		V_8 = 0;
		goto IL_018e;
	}

IL_0164:
	{
		int32_t L_68 = V_8;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_69 = __this->___engine_0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_69, NULL);
		V_9 = ((int32_t)il2cpp_codegen_multiply(L_68, L_70));
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_71 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_7;
		int32_t L_73 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_71);
		int32_t L_76;
		L_76 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_71, L_72, L_73, L_74, L_75, NULL);
		int32_t L_77 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_018e:
	{
		int32_t L_78 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_7;
		NullCheck(L_79);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_80 = __this->___engine_0;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_80, NULL);
		if ((((int32_t)L_78) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_79)->max_length))/L_81)))))
		{
			goto IL_0164;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_7;
		NullCheck(L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_82)->max_length)), 8)));
		V_10 = L_83;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_11 = L_84;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_7;
		NullCheck(L_87);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_85, 0, (RuntimeArray*)L_86, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_87)->max_length)), 8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_7;
		NullCheck(L_89);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_88, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_89)->max_length)), 8)), (RuntimeArray*)L_90, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_11;
		bool L_93;
		L_93 = RC2WrapEngine_CheckCmsKeyChecksum_m656BEC6359C89581EB109EC656E9D0A6C1B674B1(__this, L_91, L_92, NULL);
		if (L_93)
		{
			goto IL_01f0;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_94 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_94);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_94, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10B049D9030EED71568DBA6470C98D793E1C4E3F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var)));
	}

IL_01f0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_10;
		NullCheck(L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_10;
		NullCheck(L_96);
		int32_t L_97 = 0;
		uint8_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_98&((int32_t)255))), 1))))) <= ((int32_t)7)))
		{
			goto IL_022f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_10;
		NullCheck(L_99);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = V_10;
		NullCheck(L_100);
		int32_t L_101 = 0;
		uint8_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_99)->max_length)), ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_102&((int32_t)255))), 1))));
		RuntimeObject* L_104 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_103);
		String_t* L_105;
		L_105 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDCBBCBD8F5E0EB099A3A1B0ECDDB8743EBCA8A8)), L_104, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_106 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2WrapEngine_Unwrap_m67FBD7F50E423881F33ADDE2C6CE97FA66772F20_RuntimeMethod_var)));
	}

IL_022f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_10;
		NullCheck(L_107);
		int32_t L_108 = 0;
		uint8_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_109);
		V_12 = L_110;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_12;
		NullCheck(L_113);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_111, 1, (RuntimeArray*)L_112, 0, ((int32_t)(((RuntimeArray*)L_113)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = V_12;
		return L_114;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CalculateCmsKeyChecksum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RC2WrapEngine_CalculateCmsKeyChecksum_mA4CB8F40ADAE9337E97D6E135F25DA3C9F7108E0 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___sha1_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___key0;
		NullCheck(L_2);
		NullCheck(L_0);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		RuntimeObject* L_3 = __this->___sha1_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___digest_8;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___digest_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CheckCmsKeyChecksum(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC2WrapEngine_CheckCmsKeyChecksum_m656BEC6359C89581EB109EC656E9D0A6C1B674B1 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RC2WrapEngine_CalculateCmsKeyChecksum_mA4CB8F40ADAE9337E97D6E135F25DA3C9F7108E0(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___checksum1;
		bool L_3;
		L_3 = Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2WrapEngine__cctor_mBD0832633B802C248DBBC2539881914C3B467E03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015b2U2D1_127_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60015b2U2D1_127_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_StaticFields*)il2cpp_codegen_static_fields_for(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var))->___IV2_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_StaticFields*)il2cpp_codegen_static_fields_for(RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4_il2cpp_TypeInfo_var))->___IV2_6), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2WrapEngine__ctor_mF356FF3D945EA2A19EC0891114D5F002F27FC2A4 (RC2WrapEngine_t8098429EEB0B14C2F2FBF8E5C376EBDB256F14B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* L_0 = (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA*)il2cpp_codegen_object_new(Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E(L_0, NULL);
		__this->___sha1_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sha1_7), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___digest_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine_Init_m5C271693E390570B0C33C24EEA5AEEE77E4091E0 (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_4), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___workingKey_4;
		RC4Engine_SetKey_m73FB430B1ABB7BF7566C0970B5B404F05F7FA87D(__this, L_3, NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject* L_4 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18BB83580C7D91DDE15B424F080336CF198BF399)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC4Engine_Init_m5C271693E390570B0C33C24EEA5AEEE77E4091E0_RuntimeMethod_var)));
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC4Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC4Engine_get_AlgorithmName_m4D944345995561C44EA9F633E9FD35E7366BBEA7 (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B61056CE34B3597E690DEF082DF2AB2F399A4E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3B61056CE34B3597E690DEF082DF2AB2F399A4E8;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RC4Engine::ReturnByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RC4Engine_ReturnByte_m5BB4749CDA744D8BB1CB3CDF9C269286B01F1D0C (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = __this->___x_2;
		__this->___x_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))&((int32_t)255)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___engineState_1;
		int32_t L_2 = __this->___x_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = __this->___y_3;
		__this->___y_3 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_4, L_5))&((int32_t)255)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___engineState_1;
		int32_t L_7 = __this->___x_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___engineState_1;
		int32_t L_11 = __this->___x_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___engineState_1;
		int32_t L_13 = __this->___y_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___engineState_1;
		int32_t L_17 = __this->___y_3;
		uint8_t L_18 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)L_18);
		uint8_t L_19 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___engineState_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___engineState_1;
		int32_t L_22 = __this->___x_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___engineState_1;
		int32_t L_26 = __this->___y_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_20);
		int32_t L_29 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_28))&((int32_t)255)));
		uint8_t L_30 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_19^(int32_t)L_30)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine_ProcessBytes_mC47665C055D4B4441E7AC1F9EFC4624C3C19778C (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___length2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output3;
		int32_t L_4 = ___outOff4;
		int32_t L_5 = ___length2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00c7;
	}

IL_0023:
	{
		int32_t L_6 = __this->___x_2;
		__this->___x_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_6, 1))&((int32_t)255)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___engineState_1;
		int32_t L_8 = __this->___x_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->___y_3;
		__this->___y_3 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_10, L_11))&((int32_t)255)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___engineState_1;
		int32_t L_13 = __this->___x_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___engineState_1;
		int32_t L_17 = __this->___x_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___engineState_1;
		int32_t L_19 = __this->___y_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___engineState_1;
		int32_t L_23 = __this->___y_3;
		uint8_t L_24 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___output3;
		int32_t L_26 = V_0;
		int32_t L_27 = ___outOff4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___input0;
		int32_t L_29 = V_0;
		int32_t L_30 = ___inOff1;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		uint8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___engineState_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___engineState_1;
		int32_t L_35 = __this->___x_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___engineState_1;
		int32_t L_39 = __this->___y_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_33);
		int32_t L_42 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_41))&((int32_t)255)));
		uint8_t L_43 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, L_27))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32^(int32_t)L_43))));
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c7:
	{
		int32_t L_45 = V_0;
		int32_t L_46 = ___length2;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine_Reset_m9C7778982CBF14068F17F56CA8A4A5AC9E34BEF2 (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_4;
		RC4Engine_SetKey_m73FB430B1ABB7BF7566C0970B5B404F05F7FA87D(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine_SetKey_m73FB430B1ABB7BF7566C0970B5B404F05F7FA87D (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyBytes0;
		__this->___workingKey_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_4), (void*)L_0);
		__this->___x_2 = 0;
		__this->___y_3 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___engineState_1;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_StaticFields*)il2cpp_codegen_static_fields_for(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var))->___STATE_LENGTH_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___engineState_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engineState_1), (void*)L_3);
	}

IL_002d:
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___engineState_1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)L_6));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003f:
	{
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_StaticFields*)il2cpp_codegen_static_fields_for(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var))->___STATE_LENGTH_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		goto IL_009a;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___keyBytes0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___engineState_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_13&((int32_t)255))), (int32_t)L_17)), L_18))&((int32_t)255)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___engineState_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___engineState_1;
		int32_t L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___engineState_1;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___engineState_1;
		int32_t L_30 = V_2;
		uint8_t L_31 = V_4;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)L_31);
		int32_t L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___keyBytes0;
		NullCheck(L_33);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_32, 1))%((int32_t)(((RuntimeArray*)L_33)->max_length))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_009a:
	{
		int32_t L_35 = V_3;
		il2cpp_codegen_runtime_class_init_inline(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var);
		int32_t L_36 = ((RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_StaticFields*)il2cpp_codegen_static_fields_for(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var))->___STATE_LENGTH_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine__cctor_m388137F4022A2B1534DD4EC1A2B09DA9610FD3AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_StaticFields*)il2cpp_codegen_static_fields_for(RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF_il2cpp_TypeInfo_var))->___STATE_LENGTH_0 = ((int32_t)256);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC4Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Engine__ctor_mC9A1794FE1E9F3885261BBB64951649CEB1FF5CC (RC4Engine_tCE74A3D9B79576D1445B95BA2FCB2DBCF2401FEF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine__ctor_m0DD5C8823AA2C0B388A6C5E7F07B59BC08D22B50 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____noRounds_0 = ((int32_t)12);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC532Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC532Engine_get_AlgorithmName_mED1B2E3A63962AE27605740F030ADA2DD9EE1A92 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71B3CD3397671C8E3618F011BF170FAC9F499980);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral71B3CD3397671C8E3618F011BF170FAC9F499980;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC532Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC532Engine_get_IsPartialBlockOkay_m56932463902EB534127D60A0277D4A3B86E7E096 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_GetBlockSize_mA88E300104D2F76DF7AEBAE51E38DB6B39059550 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_Init_m61B3EF696BA7D71F100FD9D450C97D56C2114EF0 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeObject* L_2 = ___parameters1;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(117 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = ___parameters1;
		V_0 = ((RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879*)CastclassClass((RuntimeObject*)L_4, RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_il2cpp_TypeInfo_var));
		RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RC5Parameters_get_Rounds_m85239BF2CE005D7A5C2B002856205B2E4247A1CC_inline(L_5, NULL);
		__this->____noRounds_0 = L_6;
		RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_7, NULL);
		RC532Engine_SetKey_mCB886257C420B7D24B397BC847F9DCB8246C7C67(__this, L_8, NULL);
		goto IL_0070;
	}

IL_0033:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		RuntimeObject* L_11 = ___parameters1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(117 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = ___parameters1;
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_13, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_14, NULL);
		RC532Engine_SetKey_mCB886257C420B7D24B397BC847F9DCB8246C7C67(__this, L_15, NULL);
		goto IL_0070;
	}

IL_005a:
	{
		RuntimeObject* L_16 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_17;
		L_17 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1820699B4345D86F4AB2612A13D00EBC4B47BB1)), L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC532Engine_Init_m61B3EF696BA7D71F100FD9D450C97D56C2114EF0_RuntimeMethod_var)));
	}

IL_0070:
	{
		bool L_20 = ___forEncryption0;
		__this->___forEncryption_4 = L_20;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_ProcessBlock_m0B690CA555B010893D31DA0CB00BECDB3B1EEAAC (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output2;
		int32_t L_4 = ___outOff3;
		int32_t L_5;
		L_5 = RC532Engine_DecryptBlock_m52269BB2F875546B457F3B62BFFDF78D606F0538(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output2;
		int32_t L_9 = ___outOff3;
		int32_t L_10;
		L_10 = RC532Engine_EncryptBlock_m8F897626A5A1885B487412196A917ED6FFAF513D(__this, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_Reset_m56BCB375E109D1F43D0E389F1E350981FEE2DF0A (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_SetKey_mCB886257C420B7D24B397BC847F9DCB8246C7C67 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3))/4)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0038;
	}

IL_0011:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2;
		V_9 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)(L_4/4));
		V_10 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_9;
		intptr_t L_7 = V_10;
		NullCheck(L_6);
		intptr_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___key0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)((int32_t)il2cpp_codegen_add(L_9, ((int32_t)(((int32_t)((int32_t)L_13&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, ((int32_t)(L_14%4))))&((int32_t)31))))))));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0038:
	{
		int32_t L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key0;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_18 = __this->____noRounds_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(L_18, 1)))));
		__this->____S_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_1), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____S_1;
		il2cpp_codegen_runtime_class_init_inline(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var);
		int32_t L_21 = ((RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_StaticFields*)il2cpp_codegen_static_fields_for(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var))->___P32_2;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_21);
		V_2 = 1;
		goto IL_0080;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____S_1;
		int32_t L_23 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____S_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		il2cpp_codegen_runtime_class_init_inline(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var);
		int32_t L_28 = ((RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_StaticFields*)il2cpp_codegen_static_fields_for(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var))->___Q32_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_27, L_28)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0080:
	{
		int32_t L_30 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____S_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0064;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		NullCheck(L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____S_1;
		NullCheck(L_33);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_0;
		NullCheck(L_34);
		V_3 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_34)->max_length))));
		goto IL_00ab;
	}

IL_00a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____S_1;
		NullCheck(L_35);
		V_3 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_35)->max_length))));
	}

IL_00ab:
	{
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = 0;
		goto IL_0121;
	}

IL_00bc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____S_1;
		int32_t L_37 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____S_1;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = V_4;
		int32_t L_43 = V_5;
		int32_t L_44;
		L_44 = RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_41, L_42)), L_43)), 3, NULL);
		int32_t L_45 = L_44;
		V_11 = L_45;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)L_45);
		int32_t L_46 = V_11;
		V_4 = L_46;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_0;
		int32_t L_48 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_4;
		int32_t L_54 = V_5;
		int32_t L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57;
		L_57 = RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)), ((int32_t)il2cpp_codegen_add(L_55, L_56)), NULL);
		int32_t L_58 = L_57;
		V_11 = L_58;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)L_58);
		int32_t L_59 = V_11;
		V_5 = L_59;
		int32_t L_60 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->____S_1;
		NullCheck(L_61);
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_60, 1))%((int32_t)(((RuntimeArray*)L_61)->max_length))));
		int32_t L_62 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_0;
		NullCheck(L_63);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_62, 1))%((int32_t)(((RuntimeArray*)L_63)->max_length))));
		int32_t L_64 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0121:
	{
		int32_t L_65 = V_8;
		int32_t L_66 = V_3;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_00bc;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_EncryptBlock_m8F897626A5A1885B487412196A917ED6FFAF513D (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2;
		L_2 = RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____S_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		int32_t L_8;
		L_8 = RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____S_1;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		V_2 = 1;
		goto IL_005c;
	}

IL_002a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7(__this, ((int32_t)(L_12^L_13)), L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____S_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_multiply(2, L_17));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, L_19));
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7(__this, ((int32_t)(L_20^L_21)), L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____S_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_25)), 1));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, L_27));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005c:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = __this->____noRounds_0;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___outBytes2;
		int32_t L_33 = ___outOff3;
		RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE(__this, L_31, L_32, L_33, NULL);
		int32_t L_34 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___outBytes2;
		int32_t L_36 = ___outOff3;
		RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE(__this, L_34, L_35, ((int32_t)il2cpp_codegen_add(L_36, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_DecryptBlock_m52269BB2F875546B457F3B62BFFDF78D606F0538 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2;
		L_2 = RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		int32_t L_5;
		L_5 = RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB(__this, L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		int32_t L_6 = __this->____noRounds_0;
		V_2 = L_6;
		goto IL_004f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____S_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_9)), 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RC532Engine_RotateRight_m8CBD1A68DF5C8C9E81FE75839CD9C17037C1389B(__this, ((int32_t)il2cpp_codegen_subtract(L_7, L_11)), L_12, NULL);
		int32_t L_14 = V_0;
		V_1 = ((int32_t)(L_13^L_14));
		int32_t L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____S_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_multiply(2, L_17));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RC532Engine_RotateRight_m8CBD1A68DF5C8C9E81FE75839CD9C17037C1389B(__this, ((int32_t)il2cpp_codegen_subtract(L_15, L_19)), L_20, NULL);
		int32_t L_22 = V_1;
		V_0 = ((int32_t)(L_21^L_22));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_004f:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) >= ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_25 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->____S_1;
		NullCheck(L_26);
		int32_t L_27 = 0;
		int32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___outBytes2;
		int32_t L_30 = ___outOff3;
		RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE(__this, ((int32_t)il2cpp_codegen_subtract(L_25, L_28)), L_29, L_30, NULL);
		int32_t L_31 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____S_1;
		NullCheck(L_32);
		int32_t L_33 = 1;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___outBytes2;
		int32_t L_36 = ___outOff3;
		RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE(__this, ((int32_t)il2cpp_codegen_subtract(L_31, L_34)), L_35, ((int32_t)il2cpp_codegen_add(L_36, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_RotateLeft_mFFD0ABDDD010BDADE08050120488140115553FD7 (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(((int32_t)(L_1&((int32_t)31)))&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), ((int32_t)(L_3&((int32_t)31)))))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_RotateRight_m8CBD1A68DF5C8C9E81FE75839CD9C17037C1389B (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(((int32_t)(L_1&((int32_t)31)))&((int32_t)31)))))|((int32_t)(L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), ((int32_t)(L_3&((int32_t)31)))))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC532Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC532Engine_BytesToWord_m2606E6EF4D3D4D6FF397448972F83392783363DB (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcOff1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___src0;
		int32_t L_5 = ___srcOff1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___src0;
		int32_t L_9 = ___srcOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___srcOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)24)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine_WordToBytes_m02FD492508205F8738AB263595DDEF5ADE907BBE (RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dst1;
		int32_t L_1 = ___dstOff2;
		int32_t L_2 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___dst1;
		int32_t L_4 = ___dstOff2;
		int32_t L_5 = ___word0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___dst1;
		int32_t L_7 = ___dstOff2;
		int32_t L_8 = ___word0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___dst1;
		int32_t L_10 = ___dstOff2;
		int32_t L_11 = ___word0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC532Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC532Engine__cctor_mAB3757300DF0E537524CC264C93BCBD77CA1DBCB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_StaticFields*)il2cpp_codegen_static_fields_for(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var))->___P32_2 = ((int32_t)-1209970333);
		((RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_StaticFields*)il2cpp_codegen_static_fields_for(RC532Engine_t8689B72AB4CA946696F6969EC59D8E19F44B7E5B_il2cpp_TypeInfo_var))->___Q32_3 = ((int32_t)-1640531527);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine__ctor_m56F38F0A5E0923B14B6D2E8A544199E692D54750 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____noRounds_2 = ((int32_t)12);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC564Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC564Engine_get_AlgorithmName_mE93D09A349C48AEDD3B9C1B21D218975CDB0F479 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF338F025E15E63B321EE7885AFA62E2EBDA019DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF338F025E15E63B321EE7885AFA62E2EBDA019DD;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC564Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC564Engine_get_IsPartialBlockOkay_m13149C7E075441BBB06DC372EC0B8215778EC267 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_GetBlockSize_m0648C8CFFF983F12C7BDCA7355F79CBE228E6103 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(2, L_0));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_Init_mDC14A2E608A1738CA868F8513F2F88EAB7EEDDA1 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeObject* L_2 = ___parameters1;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(117 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_1, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_4 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92121EA1B3368BA74DACC650CFB6E85B47E49439)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC564Engine_Init_mDC14A2E608A1738CA868F8513F2F88EAB7EEDDA1_RuntimeMethod_var)));
	}

IL_0028:
	{
		RuntimeObject* L_8 = ___parameters1;
		V_0 = ((RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879*)CastclassClass((RuntimeObject*)L_8, RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879_il2cpp_TypeInfo_var));
		bool L_9 = ___forEncryption0;
		__this->___forEncryption_6 = L_9;
		RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = RC5Parameters_get_Rounds_m85239BF2CE005D7A5C2B002856205B2E4247A1CC_inline(L_10, NULL);
		__this->____noRounds_2 = L_11;
		RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_12, NULL);
		RC564Engine_SetKey_mD55587322783031694268EE5121647A292F0C360(__this, L_13, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_ProcessBlock_mC8DF7DC7593E575B89391A9EC54436EC3BBB3893 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_6;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output2;
		int32_t L_4 = ___outOff3;
		int32_t L_5;
		L_5 = RC564Engine_DecryptBlock_m6C808B085C8080F274AF6EFE2D0529F810CFA40F(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output2;
		int32_t L_9 = ___outOff3;
		int32_t L_10;
		L_10 = RC564Engine_EncryptBlock_m9698388DD0B21AF44B682B0306FF711FB4BC4B1C(__this, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_Reset_m4A8F7FF751927C74ED3A608A53A61289F2C16E51 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_SetKey_mD55587322783031694268EE5121647A292F0C360 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_9 = NULL;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	int64_t V_11 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_1 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_2 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_1, 1))))/L_2)));
		V_0 = L_3;
		V_1 = 0;
		goto IL_004b;
	}

IL_001b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = L_4;
		V_9 = L_5;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_8 = ((int32_t)(L_6/L_7));
		V_10 = L_8;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = V_9;
		intptr_t L_10 = V_10;
		NullCheck(L_9);
		intptr_t L_11 = L_10;
		int64_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___key0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_1;
		int32_t L_18 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int64_t)((int64_t)il2cpp_codegen_add(L_12, ((int64_t)(((int64_t)((int32_t)((int32_t)L_16&((int32_t)255))))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, ((int32_t)(L_17%L_18))))&((int32_t)63))))))));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004b:
	{
		int32_t L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___key0;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_22 = __this->____noRounds_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_add(L_22, 1)))));
		__this->____S_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_3), (void*)L_23);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = __this->____S_3;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int64_t L_25 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___P64_4;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_25);
		V_2 = 1;
		goto IL_0093;
	}

IL_0077:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_26 = __this->____S_3;
		int32_t L_27 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28 = __this->____S_3;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		int64_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int64_t L_32 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___Q64_5;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int64_t)((int64_t)il2cpp_codegen_add(L_31, L_32)));
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0093:
	{
		int32_t L_34 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35 = __this->____S_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0077;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_36 = V_0;
		NullCheck(L_36);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_37 = __this->____S_3;
		NullCheck(L_37);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_38 = V_0;
		NullCheck(L_38);
		V_3 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_38)->max_length))));
		goto IL_00be;
	}

IL_00b3:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_39 = __this->____S_3;
		NullCheck(L_39);
		V_3 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_39)->max_length))));
	}

IL_00be:
	{
		V_4 = ((int64_t)0);
		V_5 = ((int64_t)0);
		V_6 = 0;
		V_7 = 0;
		V_8 = 0;
		goto IL_0137;
	}

IL_00d1:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40 = __this->____S_3;
		int32_t L_41 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = __this->____S_3;
		int32_t L_43 = V_6;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int64_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int64_t L_46 = V_4;
		int64_t L_47 = V_5;
		int64_t L_48;
		L_48 = RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2(__this, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_45, L_46)), L_47)), ((int64_t)3), NULL);
		int64_t L_49 = L_48;
		V_11 = L_49;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int64_t)L_49);
		int64_t L_50 = V_11;
		V_4 = L_50;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51 = V_0;
		int32_t L_52 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_53 = V_0;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int64_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		int64_t L_57 = V_4;
		int64_t L_58 = V_5;
		int64_t L_59 = V_4;
		int64_t L_60 = V_5;
		int64_t L_61;
		L_61 = RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2(__this, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_56, L_57)), L_58)), ((int64_t)il2cpp_codegen_add(L_59, L_60)), NULL);
		int64_t L_62 = L_61;
		V_11 = L_62;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int64_t)L_62);
		int64_t L_63 = V_11;
		V_5 = L_63;
		int32_t L_64 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_65 = __this->____S_3;
		NullCheck(L_65);
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%((int32_t)(((RuntimeArray*)L_65)->max_length))));
		int32_t L_66 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_67 = V_0;
		NullCheck(L_67);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_66, 1))%((int32_t)(((RuntimeArray*)L_67)->max_length))));
		int32_t L_68 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0137:
	{
		int32_t L_69 = V_8;
		int32_t L_70 = V_3;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_00d1;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_EncryptBlock_m9698388DD0B21AF44B682B0306FF711FB4BC4B1C (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int64_t L_2;
		L_2 = RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561(__this, L_0, L_1, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->____S_3;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int64_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int64_t)il2cpp_codegen_add(L_2, L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_8 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int64_t L_9;
		L_9 = RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8)), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = __this->____S_3;
		NullCheck(L_10);
		int32_t L_11 = 1;
		int64_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((int64_t)il2cpp_codegen_add(L_9, L_12));
		V_2 = 1;
		goto IL_0060;
	}

IL_002e:
	{
		int64_t L_13 = V_0;
		int64_t L_14 = V_1;
		int64_t L_15 = V_1;
		int64_t L_16;
		L_16 = RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2(__this, ((int64_t)(L_13^L_14)), L_15, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = __this->____S_3;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_multiply(2, L_18));
		int64_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = ((int64_t)il2cpp_codegen_add(L_16, L_20));
		int64_t L_21 = V_1;
		int64_t L_22 = V_0;
		int64_t L_23 = V_0;
		int64_t L_24;
		L_24 = RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2(__this, ((int64_t)(L_21^L_22)), L_23, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = __this->____S_3;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_26)), 1));
		int64_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = ((int64_t)il2cpp_codegen_add(L_24, L_28));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0060:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = __this->____noRounds_2;
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_002e;
		}
	}
	{
		int64_t L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___outBytes2;
		int32_t L_34 = ___outOff3;
		RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504(__this, L_32, L_33, L_34, NULL);
		int64_t L_35 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___outBytes2;
		int32_t L_37 = ___outOff3;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_38 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504(__this, L_35, L_36, ((int32_t)il2cpp_codegen_add(L_37, L_38)), NULL);
		int32_t L_39 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(2, L_39));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC564Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC564Engine_DecryptBlock_m6C808B085C8080F274AF6EFE2D0529F810CFA40F (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int64_t L_2;
		L_2 = RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_5 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int64_t L_6;
		L_6 = RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561(__this, L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		V_1 = L_6;
		int32_t L_7 = __this->____noRounds_2;
		V_2 = L_7;
		goto IL_0053;
	}

IL_0021:
	{
		int64_t L_8 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->____S_3;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_10)), 1));
		int64_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int64_t L_13 = V_0;
		int64_t L_14;
		L_14 = RC564Engine_RotateRight_mDEEE02EB0EEA5B11DFCEB86F1412E98A14524DDB(__this, ((int64_t)il2cpp_codegen_subtract(L_8, L_12)), L_13, NULL);
		int64_t L_15 = V_0;
		V_1 = ((int64_t)(L_14^L_15));
		int64_t L_16 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = __this->____S_3;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_multiply(2, L_18));
		int64_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int64_t L_21 = V_1;
		int64_t L_22;
		L_22 = RC564Engine_RotateRight_mDEEE02EB0EEA5B11DFCEB86F1412E98A14524DDB(__this, ((int64_t)il2cpp_codegen_subtract(L_16, L_20)), L_21, NULL);
		int64_t L_23 = V_1;
		V_0 = ((int64_t)(L_22^L_23));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_0053:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) >= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int64_t L_26 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->____S_3;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int64_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___outBytes2;
		int32_t L_31 = ___outOff3;
		RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504(__this, ((int64_t)il2cpp_codegen_subtract(L_26, L_29)), L_30, L_31, NULL);
		int64_t L_32 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_33 = __this->____S_3;
		NullCheck(L_33);
		int32_t L_34 = 1;
		int64_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___outBytes2;
		int32_t L_37 = ___outOff3;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_38 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504(__this, ((int64_t)il2cpp_codegen_subtract(L_32, L_35)), L_36, ((int32_t)il2cpp_codegen_add(L_37, L_38)), NULL);
		int32_t L_39 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(2, L_39));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateLeft(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_RotateLeft_m27E9D76F6586D23192555FB566D8AA72A27B4CB2 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___x0;
		int64_t L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		int64_t L_3 = ___x0;
		int32_t L_4 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		int64_t L_5 = ___y1;
		int32_t L_6 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		return ((int64_t)(((int64_t)(L_0<<((int32_t)(((int32_t)((int64_t)(L_1&((int64_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))))))&((int32_t)63)))))|((int64_t)((uint64_t)L_3>>((int32_t)(((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_4), ((int64_t)(L_5&((int64_t)((int32_t)il2cpp_codegen_subtract(L_6, 1))))))))&((int32_t)63)))))));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::RotateRight(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_RotateRight_mDEEE02EB0EEA5B11DFCEB86F1412E98A14524DDB (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___x0, int64_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___x0;
		int64_t L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		int64_t L_3 = ___x0;
		int32_t L_4 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		int64_t L_5 = ___y1;
		int32_t L_6 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)(((int32_t)((int64_t)(L_1&((int64_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))))))&((int32_t)63)))))|((int64_t)(L_3<<((int32_t)(((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_4), ((int64_t)(L_5&((int64_t)((int32_t)il2cpp_codegen_subtract(L_6, 1))))))))&((int32_t)63)))))));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.RC564Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RC564Engine_BytesToWord_mD31214836F3DCA72B45B9856F6E09654DD6B0561 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0022;
	}

IL_000d:
	{
		int64_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___src0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___srcOff1;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(L_1<<8)), ((int64_t)((int32_t)((int32_t)L_6&((int32_t)255))))));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int64_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::WordToBytes(System.Int64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine_WordToBytes_m52C26770AB54B846531DA9FAA17C2A0D71018504 (RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32* __this, int64_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dst1;
		int32_t L_1 = V_0;
		int32_t L_2 = ___dstOff2;
		int64_t L_3 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)((int32_t)(uint8_t)L_3));
		int64_t L_4 = ___word0;
		___word0 = ((int64_t)((uint64_t)L_4>>8));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC564Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC564Engine__cctor_m28443E2760A6F733B6CE698C47A9364D36FCBA5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0 = ((int32_t)64);
		int32_t L_0 = ((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___wordSize_0;
		((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___bytesPerWord_1 = ((int32_t)(L_0/8));
		((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___P64_4 = ((int64_t)-5196783011329398165LL);
		((RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_StaticFields*)il2cpp_codegen_static_fields_for(RC564Engine_tB0FF36CC23567F9CE12EA12E6D955A51C1F96B32_il2cpp_TypeInfo_var))->___Q64_5 = ((int64_t)-7046029254386353131LL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine__ctor_mF3AE3204C173D68A099196A221A05584372E5A60 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RC6Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RC6Engine_get_AlgorithmName_m9E0BA8F1DC98A1559394E2221DFE9B9E1190E5D3 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDA0355A6B53D3D4A549589177E809E514C650D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3EDA0355A6B53D3D4A549589177E809E514C650D;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC6Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RC6Engine_get_IsPartialBlockOkay_mD1B46864DEAC4EA070827892FB8CE606C1407A64 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_GetBlockSize_m1DCFB9F2443151A7B09B242DF310BE0B57FD861B (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(4, L_0));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_Init_m3627E27825B6DF82838863AE615837301D0D93F0 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC9DC797F30B7F53D5E1DEF446818F7904897A4C)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC6Engine_Init_m3627E27825B6DF82838863AE615837301D0D93F0_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___forEncryption0;
		__this->___forEncryption_7 = L_5;
		RuntimeObject* L_6 = ___parameters1;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_7, NULL);
		RC6Engine_SetKey_m5E576B11D4C9CB9A923DCA00B39A2631888E02BA(__this, L_8, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_ProcessBlock_m41889BC5640A43CCB50645116D9235D37B698102 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::GetBlockSize() */, __this);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____S_3;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3755AF5CDA549392DC97D710674394BA3F06F442)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC6Engine_ProcessBlock_m41889BC5640A43CCB50645116D9235D37B698102_RuntimeMethod_var)));
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		int32_t L_5 = V_0;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_3, L_4, L_5, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output2;
		int32_t L_7 = ___outOff3;
		int32_t L_8 = V_0;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_6, L_7, L_8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_9 = __this->___forEncryption_7;
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input0;
		int32_t L_11 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output2;
		int32_t L_13 = ___outOff3;
		int32_t L_14;
		L_14 = RC6Engine_DecryptBlock_mFC7AEBC747ED8F05E1935A730A75F397F0939541(__this, L_10, L_11, L_12, L_13, NULL);
		return L_14;
	}

IL_0049:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___output2;
		int32_t L_18 = ___outOff3;
		int32_t L_19;
		L_19 = RC6Engine_EncryptBlock_mD3DAE903E66B63826F45CD6A0EA8BE2DC0BDE0CB(__this, L_15, L_16, L_17, L_18, NULL);
		return L_19;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_Reset_m5B713A2F67AD8F8EE2CF1A5226BEA43E53623834 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_SetKey_m5E576B11D4C9CB9A923DCA00B39A2631888E02BA (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_1 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_2 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_1, 1))))/L_2));
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		V_0 = 1;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_5 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_6 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5)), 1))/L_6)));
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___key0;
		NullCheck(L_8);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		goto IL_0058;
	}

IL_0036:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_11 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)(L_13/L_14));
		int32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___key0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/L_11))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_16<<8)), ((int32_t)((int32_t)L_20&((int32_t)255))))));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_23 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(2, ((int32_t)il2cpp_codegen_multiply(2, L_23)))), 2)));
		__this->____S_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_3), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____S_3;
		int32_t L_26 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___P32_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_26);
		V_3 = 1;
		goto IL_009f;
	}

IL_0083:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____S_3;
		int32_t L_28 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____S_3;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_33 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___Q32_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_32, L_33)));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_009f:
	{
		int32_t L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____S_3;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0083;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____S_3;
		NullCheck(L_38);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_00c0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		NullCheck(L_39);
		V_4 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_39)->max_length))));
		goto IL_00cc;
	}

IL_00c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->____S_3;
		NullCheck(L_40);
		V_4 = ((int32_t)il2cpp_codegen_multiply(3, ((int32_t)(((RuntimeArray*)L_40)->max_length))));
	}

IL_00cc:
	{
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		goto IL_0142;
	}

IL_00dd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____S_3;
		int32_t L_42 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->____S_3;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_5;
		int32_t L_48 = V_6;
		int32_t L_49;
		L_49 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_46, L_47)), L_48)), 3, NULL);
		int32_t L_50 = L_49;
		V_10 = L_50;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)L_50);
		int32_t L_51 = V_10;
		V_5 = L_51;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_1;
		int32_t L_53 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_1;
		int32_t L_55 = V_8;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		int32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = V_5;
		int32_t L_59 = V_6;
		int32_t L_60 = V_5;
		int32_t L_61 = V_6;
		int32_t L_62;
		L_62 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_57, L_58)), L_59)), ((int32_t)il2cpp_codegen_add(L_60, L_61)), NULL);
		int32_t L_63 = L_62;
		V_10 = L_63;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_63);
		int32_t L_64 = V_10;
		V_6 = L_64;
		int32_t L_65 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = __this->____S_3;
		NullCheck(L_66);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_65, 1))%((int32_t)(((RuntimeArray*)L_66)->max_length))));
		int32_t L_67 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_1;
		NullCheck(L_68);
		V_8 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_67, 1))%((int32_t)(((RuntimeArray*)L_68)->max_length))));
		int32_t L_69 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0142:
	{
		int32_t L_70 = V_9;
		int32_t L_71 = V_4;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_00dd;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_EncryptBlock_mD3DAE903E66B63826F45CD6A0EA8BE2DC0BDE0CB (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2;
		L_2 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_5 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_6;
		L_6 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		int32_t L_9 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_10;
		L_10 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, 2)))), NULL);
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		int32_t L_13 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_14;
		L_14 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_11, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, 3)))), NULL);
		V_3 = L_14;
		int32_t L_15 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____S_3;
		NullCheck(L_16);
		int32_t L_17 = 0;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, L_18));
		int32_t L_19 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____S_3;
		NullCheck(L_20);
		int32_t L_21 = 1;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, L_22));
		V_4 = 1;
		goto IL_00d1;
	}

IL_0055:
	{
		V_5 = 0;
		V_6 = 0;
		int32_t L_23 = V_1;
		int32_t L_24 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_24)), 1))));
		int32_t L_25 = V_5;
		int32_t L_26;
		L_26 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_25, 5, NULL);
		V_5 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_28)), 1))));
		int32_t L_29 = V_6;
		int32_t L_30;
		L_30 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_29, 5, NULL);
		V_6 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_5;
		V_0 = ((int32_t)(L_31^L_32));
		int32_t L_33 = V_0;
		int32_t L_34 = V_6;
		int32_t L_35;
		L_35 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_33, L_34, NULL);
		V_0 = L_35;
		int32_t L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____S_3;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_multiply(2, L_38));
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, L_40));
		int32_t L_41 = V_2;
		int32_t L_42 = V_6;
		V_2 = ((int32_t)(L_41^L_42));
		int32_t L_43 = V_2;
		int32_t L_44 = V_5;
		int32_t L_45;
		L_45 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_43, L_44, NULL);
		V_2 = L_45;
		int32_t L_46 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->____S_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_48)), 1));
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, L_50));
		int32_t L_51 = V_0;
		V_7 = L_51;
		int32_t L_52 = V_1;
		V_0 = L_52;
		int32_t L_53 = V_2;
		V_1 = L_53;
		int32_t L_54 = V_3;
		V_2 = L_54;
		int32_t L_55 = V_7;
		V_3 = L_55;
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00d1:
	{
		int32_t L_57 = V_4;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_58 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_59 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->____S_3;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_61 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_61)), 2));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, L_63));
		int32_t L_64 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->____S_3;
		int32_t L_66 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_66)), 3));
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_2 = ((int32_t)il2cpp_codegen_add(L_64, L_68));
		int32_t L_69 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___outBytes2;
		int32_t L_71 = ___outOff3;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_69, L_70, L_71, NULL);
		int32_t L_72 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___outBytes2;
		int32_t L_74 = ___outOff3;
		int32_t L_75 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_72, L_73, ((int32_t)il2cpp_codegen_add(L_74, L_75)), NULL);
		int32_t L_76 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___outBytes2;
		int32_t L_78 = ___outOff3;
		int32_t L_79 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_76, L_77, ((int32_t)il2cpp_codegen_add(L_78, ((int32_t)il2cpp_codegen_multiply(L_79, 2)))), NULL);
		int32_t L_80 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ___outBytes2;
		int32_t L_82 = ___outOff3;
		int32_t L_83 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_80, L_81, ((int32_t)il2cpp_codegen_add(L_82, ((int32_t)il2cpp_codegen_multiply(L_83, 3)))), NULL);
		int32_t L_84 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(4, L_84));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_DecryptBlock_mFC7AEBC747ED8F05E1935A730A75F397F0939541 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2;
		L_2 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_5 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_6;
		L_6 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		int32_t L_9 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_10;
		L_10 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, 2)))), NULL);
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		int32_t L_13 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		int32_t L_14;
		L_14 = RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9(__this, L_11, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, 3)))), NULL);
		V_3 = L_14;
		int32_t L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____S_3;
		int32_t L_17 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_17)), 3));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, L_19));
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____S_3;
		int32_t L_22 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_22)), 2));
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, L_24));
		int32_t L_25 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2;
		V_4 = L_25;
		goto IL_00f0;
	}

IL_006c:
	{
		V_5 = 0;
		V_6 = 0;
		int32_t L_26 = V_3;
		V_7 = L_26;
		int32_t L_27 = V_2;
		V_3 = L_27;
		int32_t L_28 = V_1;
		V_2 = L_28;
		int32_t L_29 = V_0;
		V_1 = L_29;
		int32_t L_30 = V_7;
		V_0 = L_30;
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_32)), 1))));
		int32_t L_33 = V_5;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_34 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___LGW_6;
		int32_t L_35;
		L_35 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_33, L_34, NULL);
		V_5 = L_35;
		int32_t L_36 = V_3;
		int32_t L_37 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_36, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_37)), 1))));
		int32_t L_38 = V_6;
		int32_t L_39 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___LGW_6;
		int32_t L_40;
		L_40 = RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C(__this, L_38, L_39, NULL);
		V_6 = L_40;
		int32_t L_41 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->____S_3;
		int32_t L_43 = V_4;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_43)), 1));
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_41, L_45));
		int32_t L_46 = V_2;
		int32_t L_47 = V_5;
		int32_t L_48;
		L_48 = RC6Engine_RotateRight_m8DEF81F0E1D270422D702408BAF966AB2A2B05C8(__this, L_46, L_47, NULL);
		V_2 = L_48;
		int32_t L_49 = V_2;
		int32_t L_50 = V_6;
		V_2 = ((int32_t)(L_49^L_50));
		int32_t L_51 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->____S_3;
		int32_t L_53 = V_4;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_multiply(2, L_53));
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_51, L_55));
		int32_t L_56 = V_0;
		int32_t L_57 = V_6;
		int32_t L_58;
		L_58 = RC6Engine_RotateRight_m8DEF81F0E1D270422D702408BAF966AB2A2B05C8(__this, L_56, L_57, NULL);
		V_0 = L_58;
		int32_t L_59 = V_0;
		int32_t L_60 = V_5;
		V_0 = ((int32_t)(L_59^L_60));
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
	}

IL_00f0:
	{
		int32_t L_62 = V_4;
		if ((((int32_t)L_62) >= ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_63 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->____S_3;
		NullCheck(L_64);
		int32_t L_65 = 1;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_63, L_66));
		int32_t L_67 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->____S_3;
		NullCheck(L_68);
		int32_t L_69 = 0;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_67, L_70));
		int32_t L_71 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___outBytes2;
		int32_t L_73 = ___outOff3;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_71, L_72, L_73, NULL);
		int32_t L_74 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___outBytes2;
		int32_t L_76 = ___outOff3;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_77 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_74, L_75, ((int32_t)il2cpp_codegen_add(L_76, L_77)), NULL);
		int32_t L_78 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___outBytes2;
		int32_t L_80 = ___outOff3;
		int32_t L_81 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_78, L_79, ((int32_t)il2cpp_codegen_add(L_80, ((int32_t)il2cpp_codegen_multiply(L_81, 2)))), NULL);
		int32_t L_82 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___outBytes2;
		int32_t L_84 = ___outOff3;
		int32_t L_85 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51(__this, L_82, L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 3)))), NULL);
		int32_t L_86 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		return ((int32_t)il2cpp_codegen_multiply(4, L_86));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_RotateLeft_m3ACBD5D4B03E74E5AC5546052DEB74289C8F278C (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		int32_t L_3 = ___x0;
		int32_t L_4 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		int32_t L_5 = ___y1;
		int32_t L_6 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(((int32_t)(L_1&((int32_t)il2cpp_codegen_subtract(L_2, 1))))&((int32_t)31)))))|((int32_t)((uint32_t)L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5&((int32_t)il2cpp_codegen_subtract(L_6, 1))))))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_RotateRight_m8DEF81F0E1D270422D702408BAF966AB2A2B05C8 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		int32_t L_3 = ___x0;
		int32_t L_4 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		int32_t L_5 = ___y1;
		int32_t L_6 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(((int32_t)(L_1&((int32_t)il2cpp_codegen_subtract(L_2, 1))))&((int32_t)31)))))|((int32_t)(L_3<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)(L_5&((int32_t)il2cpp_codegen_subtract(L_6, 1))))))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC6Engine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC6Engine_BytesToWord_m837359E6B086053C0D770D70CB61FE822443DEA9 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_0 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0020;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___src0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___srcOff1;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_1<<8)), ((int32_t)((int32_t)L_6&((int32_t)255)))));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::WordToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine_WordToBytes_m7B0EE4A09BC4F45BB21809FE3C04621EE9E75F51 (RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, int32_t ___dstOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dst1;
		int32_t L_1 = V_0;
		int32_t L_2 = ___dstOff2;
		int32_t L_3 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)((int32_t)(uint8_t)L_3));
		int32_t L_4 = ___word0;
		___word0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RC6Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC6Engine__cctor_m533805A0294DF80203EC19F2B98FAC5AF37997C1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0 = ((int32_t)32);
		int32_t L_0 = ((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___wordSize_0;
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___bytesPerWord_1 = ((int32_t)(L_0/8));
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->____noRounds_2 = ((int32_t)20);
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___P32_4 = ((int32_t)-1209970333);
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___Q32_5 = ((int32_t)-1640531527);
		((RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_StaticFields*)il2cpp_codegen_static_fields_for(RC6Engine_tBA060FFCAE9EB6F2BA2E6CE2F456502785A34696_il2cpp_TypeInfo_var))->___LGW_6 = 5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3211WrapEngine__ctor_m3C7FD9C42146E3526A526AAE17A5EF11DD37B648 (Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702* __this, RuntimeObject* ___engine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___engine0;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_1 = (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)il2cpp_codegen_object_new(CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F(L_1, L_0, NULL);
		__this->___engine_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc3211WrapEngine_Init_m9221BBD40E6AB694DC1D84A49C4BF631DBF76A54 (Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702* __this, bool ___forWrapping0, RuntimeObject* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_0 = NULL;
	{
		bool L_0 = ___forWrapping0;
		__this->___forWrapping_2 = L_0;
		RuntimeObject* L_1 = ___param1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___param1;
		V_0 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_2, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_3 = V_0;
		NullCheck(L_3);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_4;
		L_4 = ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline(L_3, NULL);
		__this->___rand_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rand_3), (void*)L_4);
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_5, NULL);
		__this->___param_1 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_6, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_1), (void*)((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_6, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		return;
	}

IL_0034:
	{
		bool L_7 = ___forWrapping0;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_8 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_8, NULL);
		__this->___rand_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rand_3), (void*)L_8);
	}

IL_0042:
	{
		RuntimeObject* L_9 = ___param1;
		__this->___param_1 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_9, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_1), (void*)((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_9, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rfc3211WrapEngine_get_AlgorithmName_m889EB608522F327900C8463EB12B4F9CE1B8ADF7 (Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C6E3B2725F3C7DC9E8805E139D27FB638ECA1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_0 = __this->___engine_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteralB2C6E3B2725F3C7DC9E8805E139D27FB638ECA1A, NULL);
		return L_3;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Rfc3211WrapEngine_Wrap_m22A0A4A9F2303DC41622B375CB313CD95B1D9046 (Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = __this->___forWrapping_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B3A022B03059BF4890370A8B7B5A3C7582D7BD5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3211WrapEngine_Wrap_m22A0A4A9F2303DC41622B375CB313CD95B1D9046_RuntimeMethod_var)));
	}

IL_0013:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_2 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = __this->___param_1;
		NullCheck(L_2);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_2, (bool)1, L_3, NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_4 = __this->___engine_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = ___inLen2;
		int32_t L_7 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, 4))) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_7, 2)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 2)));
		V_1 = L_9;
		goto IL_005f;
	}

IL_0044:
	{
		int32_t L_10 = ___inLen2;
		int32_t L_11 = V_0;
		if (!((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 4))%L_11)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = ___inLen2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 4))/L_13)), 1)), L_14));
		goto IL_0059;
	}

IL_0056:
	{
		int32_t L_15 = ___inLen2;
		G_B7_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
	}

IL_0059:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)G_B7_0);
		V_1 = L_16;
	}

IL_005f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = ___inLen2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___inBytes0;
		int32_t L_21 = ___inOff1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((~L_23))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___inBytes0;
		int32_t L_26 = ___inOff1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((~L_28))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___inBytes0;
		int32_t L_31 = ___inOff1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 2));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((~L_33))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___inBytes0;
		int32_t L_35 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		int32_t L_37 = ___inLen2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, 4, L_37, NULL);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_38 = __this->___rand_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		int32_t L_40 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = ___inLen2;
		NullCheck(L_38);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void Org.BouncyCastle.Security.SecureRandom::NextBytes(System.Byte[],System.Int32,System.Int32) */, L_38, L_39, ((int32_t)il2cpp_codegen_add(L_40, 4)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_41)->max_length)), L_42)), 4)));
		V_2 = 0;
		goto IL_00b8;
	}

IL_00a4:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_43 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_1;
		int32_t L_45 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		int32_t L_47 = V_2;
		NullCheck(L_43);
		int32_t L_48;
		L_48 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_43, L_44, L_45, L_46, L_47, NULL);
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
	}

IL_00b8:
	{
		int32_t L_51 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_00a4;
		}
	}
	{
		V_3 = 0;
		goto IL_00d6;
	}

IL_00c2:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_53 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		int32_t L_55 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_1;
		int32_t L_57 = V_3;
		NullCheck(L_53);
		int32_t L_58;
		L_58 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_53, L_54, L_55, L_56, L_57, NULL);
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, L_60));
	}

IL_00d6:
	{
		int32_t L_61 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_1;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_00c2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_1;
		return L_63;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06 (Rfc3211WrapEngine_tD038E50FC180266C1A06B38E55A5079D99A81702* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	{
		bool L_0 = __this->___forWrapping_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCEDA8A42E275C214506B6047B5D09353160F3FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06_RuntimeMethod_var)));
	}

IL_0013:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_2 = __this->___engine_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = ___inLen2;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_5)))))
		{
			goto IL_0030;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_6 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB9ECCDD7D662625994C31E64097C1D5826BADFF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06_RuntimeMethod_var)));
	}

IL_0030:
	{
		int32_t L_7 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___inBytes0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		int32_t L_14 = ___inLen2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_13, 0, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___inBytes0;
		int32_t L_16 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		NullCheck(L_18);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_19 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_20 = __this->___param_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_23 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_23, L_21, L_22, NULL);
		NullCheck(L_19);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_19, (bool)0, L_23, NULL);
		int32_t L_24 = V_0;
		V_3 = L_24;
		goto IL_0089;
	}

IL_0075:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_25 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		int32_t L_29 = V_3;
		NullCheck(L_25);
		int32_t L_30;
		L_30 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_25, L_26, L_27, L_28, L_29, NULL);
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
	}

IL_0089:
	{
		int32_t L_33 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		NullCheck(L_39);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_36)->max_length)), ((int32_t)(((RuntimeArray*)L_37)->max_length)))), (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_40 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_41 = __this->___param_1;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_41, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_2;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_44 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_44, L_42, L_43, NULL);
		NullCheck(L_40);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_40, (bool)0, L_44, NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_45 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_1;
		NullCheck(L_45);
		int32_t L_48;
		L_48 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_45, L_46, 0, L_47, 0, NULL);
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_49 = __this->___engine_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_50 = __this->___param_1;
		NullCheck(L_49);
		CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C(L_49, (bool)0, L_50, NULL);
		V_4 = 0;
		goto IL_00fd;
	}

IL_00e5:
	{
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_51 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		int32_t L_53 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_51);
		int32_t L_56;
		L_56 = CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F(L_51, L_52, L_53, L_54, L_55, NULL);
		int32_t L_57 = V_4;
		int32_t L_58 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
	}

IL_00fd:
	{
		int32_t L_59 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_1;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_00e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_1;
		NullCheck(L_61);
		int32_t L_62 = 0;
		uint8_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_1;
		NullCheck(L_64);
		if ((((int32_t)((int32_t)((int32_t)L_63&((int32_t)255)))) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_64)->max_length)), 4)))))
		{
			goto IL_011f;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_65 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_65, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DEB2F67FD25F7E0A9F3F5B832BA4E882C6905D0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06_RuntimeMethod_var)));
	}

IL_011f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = 0;
		uint8_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_68&((int32_t)255))));
		V_5 = L_69;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_1;
		NullCheck(L_72);
		int32_t L_73 = 0;
		uint8_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_70, 4, (RuntimeArray*)L_71, 0, L_74, NULL);
		V_6 = 0;
		V_7 = 0;
		goto IL_0161;
	}

IL_0144:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_1;
		int32_t L_76 = V_7;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(1, L_76));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_8 = (uint8_t)((int32_t)(uint8_t)((~L_78)));
		int32_t L_79 = V_6;
		uint8_t L_80 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_5;
		int32_t L_82 = V_7;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_6 = ((int32_t)(L_79|((int32_t)((int32_t)L_80^(int32_t)L_84))));
		int32_t L_85 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0161:
	{
		int32_t L_86 = V_7;
		if ((!(((uint32_t)L_86) == ((uint32_t)3))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_87 = V_6;
		if (!L_87)
		{
			goto IL_0175;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_88 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_88);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_88, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88F574AE4E296ACA7898B11E165C1331CA71F33A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rfc3211WrapEngine_Unwrap_m3930EB0A022E15983D400E9F5B009CEF07339D06_RuntimeMethod_var)));
	}

IL_0175:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_5;
		return L_89;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_3 = ___b0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(((int32_t)25), ((int32_t)((int32_t)L_5&((int32_t)255)))));
		uint8_t L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_001a:
	{
		return (uint8_t)0;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_3 = ___b0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)((int32_t)L_5&((int32_t)255)))));
		uint8_t L_7 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_0019:
	{
		return (uint8_t)0;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0x9(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		int32_t L_2 = ___b0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)199), L_2));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0012:
	{
		return (uint8_t)0;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		int32_t L_2 = ___b0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)104), L_2));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_000f:
	{
		return (uint8_t)0;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		int32_t L_2 = ___b0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)238), L_2));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0012:
	{
		return (uint8_t)0;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Mul0xe(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___b0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3;
		int32_t L_2 = ___b0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)223), L_2));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0012:
	{
		return (uint8_t)0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::KeyAddition(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___rk0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___A0_14;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___rk0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___A0_14 = ((int64_t)(L_0^L_3));
		int64_t L_4 = __this->___A1_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___rk0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___A1_15 = ((int64_t)(L_4^L_7));
		int64_t L_8 = __this->___A2_16;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___rk0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___A2_16 = ((int64_t)(L_8^L_11));
		int64_t L_12 = __this->___A3_17;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = ___rk0;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___A3_17 = ((int64_t)(L_12^L_15));
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Shift(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RijndaelEngine_Shift_m1CFEA024790EC6F1E5728BA74C46B5A4EC946FC2 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int64_t ___r0, int32_t ___shift1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___r0;
		int32_t L_1 = ___shift1;
		V_0 = ((int64_t)((uint64_t)L_0>>((int32_t)(L_1&((int32_t)63)))));
		int32_t L_2 = ___shift1;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0011;
		}
	}
	{
		uint64_t L_3 = V_0;
		V_0 = ((int64_t)((int64_t)L_3&((int64_t)(uint64_t)((uint32_t)(-1)))));
	}

IL_0011:
	{
		uint64_t L_4 = V_0;
		int64_t L_5 = ___r0;
		int32_t L_6 = __this->___BC_9;
		int32_t L_7 = ___shift1;
		int64_t L_8 = __this->___BC_MASK_10;
		return ((int64_t)(((int64_t)((int64_t)L_4|((int64_t)(L_5<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, L_7))&((int32_t)63)))))))&L_8));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ShiftRow(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shiftsSC0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___A1_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___shiftsSC0;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int64_t L_4;
		L_4 = RijndaelEngine_Shift_m1CFEA024790EC6F1E5728BA74C46B5A4EC946FC2(__this, L_0, L_3, NULL);
		__this->___A1_15 = L_4;
		int64_t L_5 = __this->___A2_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___shiftsSC0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int64_t L_9;
		L_9 = RijndaelEngine_Shift_m1CFEA024790EC6F1E5728BA74C46B5A4EC946FC2(__this, L_5, L_8, NULL);
		__this->___A2_16 = L_9;
		int64_t L_10 = __this->___A3_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___shiftsSC0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int64_t L_14;
		L_14 = RijndaelEngine_Shift_m1CFEA024790EC6F1E5728BA74C46B5A4EC946FC2(__this, L_10, L_13, NULL);
		__this->___A3_17 = L_14;
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ApplyS(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int64_t ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___box1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_002a;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___box1;
		int64_t L_2 = ___r0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)((int64_t)(((int64_t)(L_2>>((int32_t)(L_3&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		V_0 = ((int64_t)(L_0|((int64_t)(((int64_t)((int32_t)((int32_t)L_5&((int32_t)255))))<<((int32_t)(L_6&((int32_t)63)))))));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 8));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___BC_9;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Substitution(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___box0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___A0_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___box0;
		int64_t L_2;
		L_2 = RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06(__this, L_0, L_1, NULL);
		__this->___A0_14 = L_2;
		int64_t L_3 = __this->___A1_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___box0;
		int64_t L_5;
		L_5 = RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06(__this, L_3, L_4, NULL);
		__this->___A1_15 = L_5;
		int64_t L_6 = __this->___A2_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___box0;
		int64_t L_8;
		L_8 = RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06(__this, L_6, L_7, NULL);
		__this->___A2_16 = L_8;
		int64_t L_9 = __this->___A3_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___box0;
		int64_t L_11;
		L_11 = RijndaelEngine_ApplyS_mEB8D8DA2A856C97D79C9B7C0890B061380A2EA06(__this, L_9, L_10, NULL);
		__this->___A3_17 = L_11;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::MixColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_MixColumn_m5E5BFCD8B5A00B3CD94D6FBDA3F13115E940673C (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int64_t L_0 = ((int64_t)0);
		V_3 = L_0;
		int64_t L_1 = L_0;
		V_2 = L_1;
		int64_t L_2 = L_1;
		V_1 = L_2;
		V_0 = L_2;
		V_4 = 0;
		goto IL_010b;
	}

IL_0011:
	{
		int64_t L_3 = __this->___A0_14;
		int32_t L_4 = V_4;
		V_5 = ((int32_t)((int64_t)(((int64_t)(L_3>>((int32_t)(L_4&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_5 = __this->___A1_15;
		int32_t L_6 = V_4;
		V_6 = ((int32_t)((int64_t)(((int64_t)(L_5>>((int32_t)(L_6&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_7 = __this->___A2_16;
		int32_t L_8 = V_4;
		V_7 = ((int32_t)((int64_t)(((int64_t)(L_7>>((int32_t)(L_8&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_9 = __this->___A3_17;
		int32_t L_10 = V_4;
		V_8 = ((int32_t)((int64_t)(((int64_t)(L_9>>((int32_t)(L_10&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_11 = V_0;
		int32_t L_12 = V_5;
		uint8_t L_13;
		L_13 = RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC(__this, L_12, NULL);
		int32_t L_14 = V_6;
		uint8_t L_15;
		L_15 = RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD(__this, L_14, NULL);
		int32_t L_16 = V_7;
		int32_t L_17 = V_8;
		int32_t L_18 = V_4;
		V_0 = ((int64_t)(L_11|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_13^(int32_t)L_15))^L_16))^L_17))&((int32_t)255))))<<((int32_t)(L_18&((int32_t)63)))))));
		int64_t L_19 = V_1;
		int32_t L_20 = V_6;
		uint8_t L_21;
		L_21 = RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC(__this, L_20, NULL);
		int32_t L_22 = V_7;
		uint8_t L_23;
		L_23 = RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD(__this, L_22, NULL);
		int32_t L_24 = V_8;
		int32_t L_25 = V_5;
		int32_t L_26 = V_4;
		V_1 = ((int64_t)(L_19|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21^(int32_t)L_23))^L_24))^L_25))&((int32_t)255))))<<((int32_t)(L_26&((int32_t)63)))))));
		int64_t L_27 = V_2;
		int32_t L_28 = V_7;
		uint8_t L_29;
		L_29 = RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC(__this, L_28, NULL);
		int32_t L_30 = V_8;
		uint8_t L_31;
		L_31 = RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD(__this, L_30, NULL);
		int32_t L_32 = V_5;
		int32_t L_33 = V_6;
		int32_t L_34 = V_4;
		V_2 = ((int64_t)(L_27|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_29^(int32_t)L_31))^L_32))^L_33))&((int32_t)255))))<<((int32_t)(L_34&((int32_t)63)))))));
		int64_t L_35 = V_3;
		int32_t L_36 = V_8;
		uint8_t L_37;
		L_37 = RijndaelEngine_Mul0x2_m6FC5E1AAA907BD1D278563B52AB8E61360F2EBDC(__this, L_36, NULL);
		int32_t L_38 = V_5;
		uint8_t L_39;
		L_39 = RijndaelEngine_Mul0x3_m1E6861E2EC5CC0F2CD3E2764EE9273C16273F1DD(__this, L_38, NULL);
		int32_t L_40 = V_6;
		int32_t L_41 = V_7;
		int32_t L_42 = V_4;
		V_3 = ((int64_t)(L_35|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_37^(int32_t)L_39))^L_40))^L_41))&((int32_t)255))))<<((int32_t)(L_42&((int32_t)63)))))));
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 8));
	}

IL_010b:
	{
		int32_t L_44 = V_4;
		int32_t L_45 = __this->___BC_9;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_46 = V_0;
		__this->___A0_14 = L_46;
		int64_t L_47 = V_1;
		__this->___A1_15 = L_47;
		int64_t L_48 = V_2;
		__this->___A2_16 = L_48;
		int64_t L_49 = V_3;
		__this->___A3_17 = L_49;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::InvMixColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_InvMixColumn_m78C344E10FD7F1989985547E80124714AAEA9F39 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	{
		int64_t L_0 = ((int64_t)0);
		V_3 = L_0;
		int64_t L_1 = L_0;
		V_2 = L_1;
		int64_t L_2 = L_1;
		V_1 = L_2;
		V_0 = L_2;
		V_4 = 0;
		goto IL_01af;
	}

IL_0011:
	{
		int64_t L_3 = __this->___A0_14;
		int32_t L_4 = V_4;
		V_5 = ((int32_t)((int64_t)(((int64_t)(L_3>>((int32_t)(L_4&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_5 = __this->___A1_15;
		int32_t L_6 = V_4;
		V_6 = ((int32_t)((int64_t)(((int64_t)(L_5>>((int32_t)(L_6&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_7 = __this->___A2_16;
		int32_t L_8 = V_4;
		V_7 = ((int32_t)((int64_t)(((int64_t)(L_7>>((int32_t)(L_8&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int64_t L_9 = __this->___A3_17;
		int32_t L_10 = V_4;
		V_8 = ((int32_t)((int64_t)(((int64_t)(L_9>>((int32_t)(L_10&((int32_t)63)))))&((int64_t)((int32_t)255)))));
		int32_t L_11 = V_5;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_0084;
	}

IL_0070:
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)(L_13&((int32_t)255)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B4_0 = ((int32_t)((int32_t)L_15&((int32_t)255)));
	}

IL_0084:
	{
		V_5 = G_B4_0;
		int32_t L_16 = V_6;
		if (L_16)
		{
			goto IL_008d;
		}
	}
	{
		G_B7_0 = (-1);
		goto IL_00a1;
	}

IL_008d:
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)(L_18&((int32_t)255)));
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B7_0 = ((int32_t)((int32_t)L_20&((int32_t)255)));
	}

IL_00a1:
	{
		V_6 = G_B7_0;
		int32_t L_21 = V_7;
		if (L_21)
		{
			goto IL_00aa;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_00be;
	}

IL_00aa:
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)(L_23&((int32_t)255)));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B10_0 = ((int32_t)((int32_t)L_25&((int32_t)255)));
	}

IL_00be:
	{
		V_7 = G_B10_0;
		int32_t L_26 = V_8;
		if (L_26)
		{
			goto IL_00c7;
		}
	}
	{
		G_B13_0 = (-1);
		goto IL_00db;
	}

IL_00c7:
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2;
		int32_t L_28 = V_8;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)(L_28&((int32_t)255)));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B13_0 = ((int32_t)((int32_t)L_30&((int32_t)255)));
	}

IL_00db:
	{
		V_8 = G_B13_0;
		int64_t L_31 = V_0;
		int32_t L_32 = V_5;
		uint8_t L_33;
		L_33 = RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D(__this, L_32, NULL);
		int32_t L_34 = V_6;
		uint8_t L_35;
		L_35 = RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341(__this, L_34, NULL);
		int32_t L_36 = V_7;
		uint8_t L_37;
		L_37 = RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838(__this, L_36, NULL);
		int32_t L_38 = V_8;
		uint8_t L_39;
		L_39 = RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8(__this, L_38, NULL);
		int32_t L_40 = V_4;
		V_0 = ((int64_t)(L_31|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_33^(int32_t)L_35))^(int32_t)L_37))^(int32_t)L_39))&((int32_t)255))))<<((int32_t)(L_40&((int32_t)63)))))));
		int64_t L_41 = V_1;
		int32_t L_42 = V_6;
		uint8_t L_43;
		L_43 = RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D(__this, L_42, NULL);
		int32_t L_44 = V_7;
		uint8_t L_45;
		L_45 = RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341(__this, L_44, NULL);
		int32_t L_46 = V_8;
		uint8_t L_47;
		L_47 = RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838(__this, L_46, NULL);
		int32_t L_48 = V_5;
		uint8_t L_49;
		L_49 = RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8(__this, L_48, NULL);
		int32_t L_50 = V_4;
		V_1 = ((int64_t)(L_41|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_43^(int32_t)L_45))^(int32_t)L_47))^(int32_t)L_49))&((int32_t)255))))<<((int32_t)(L_50&((int32_t)63)))))));
		int64_t L_51 = V_2;
		int32_t L_52 = V_7;
		uint8_t L_53;
		L_53 = RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D(__this, L_52, NULL);
		int32_t L_54 = V_8;
		uint8_t L_55;
		L_55 = RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341(__this, L_54, NULL);
		int32_t L_56 = V_5;
		uint8_t L_57;
		L_57 = RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838(__this, L_56, NULL);
		int32_t L_58 = V_6;
		uint8_t L_59;
		L_59 = RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8(__this, L_58, NULL);
		int32_t L_60 = V_4;
		V_2 = ((int64_t)(L_51|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_53^(int32_t)L_55))^(int32_t)L_57))^(int32_t)L_59))&((int32_t)255))))<<((int32_t)(L_60&((int32_t)63)))))));
		int64_t L_61 = V_3;
		int32_t L_62 = V_8;
		uint8_t L_63;
		L_63 = RijndaelEngine_Mul0xe_m6F4BA2727FBE8747ED88CC9B15DA39934712C38D(__this, L_62, NULL);
		int32_t L_64 = V_5;
		uint8_t L_65;
		L_65 = RijndaelEngine_Mul0xb_m2D1D292917867B0090326E04F8C73C9551CA4341(__this, L_64, NULL);
		int32_t L_66 = V_6;
		uint8_t L_67;
		L_67 = RijndaelEngine_Mul0xd_m9DCE717C879E9E6160F670DA2A6650527D1DE838(__this, L_66, NULL);
		int32_t L_68 = V_7;
		uint8_t L_69;
		L_69 = RijndaelEngine_Mul0x9_mED13FF4EE809E52D77E0505143FF3F26525E00A8(__this, L_68, NULL);
		int32_t L_70 = V_4;
		V_3 = ((int64_t)(L_61|((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_63^(int32_t)L_65))^(int32_t)L_67))^(int32_t)L_69))&((int32_t)255))))<<((int32_t)(L_70&((int32_t)63)))))));
		int32_t L_71 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_71, 8));
	}

IL_01af:
	{
		int32_t L_72 = V_4;
		int32_t L_73 = __this->___BC_9;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_74 = V_0;
		__this->___A0_14 = L_74;
		int64_t L_75 = V_1;
		__this->___A1_15 = L_75;
		int64_t L_76 = V_2;
		__this->___A2_16 = L_76;
		int64_t L_77 = V_3;
		__this->___A3_17 = L_77;
		return;
	}
}
// System.Int64[][] Org.BouncyCastle.Crypto.Engines.RijndaelEngine::GenerateWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* RijndaelEngine_GenerateWorkingKey_m25F184F0CBF8D21A757835E56C08C2C338BAC9FC (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* V_4 = NULL;
	Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_22 = NULL;
	intptr_t V_23;
	memset((&V_23), 0, sizeof(V_23));
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* V_24 = NULL;
	intptr_t V_25;
	memset((&V_25), 0, sizeof(V_25));
	{
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		NullCheck(L_0);
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 8));
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___MAXKC_1;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)4, (il2cpp_array_size_t)L_1 };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_3);
		V_4 = L_2;
		int32_t L_4 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___MAXROUNDS_0;
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_5 = (Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B*)SZArrayNew(Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_5 = L_5;
		V_6 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_6 = V_5;
		int32_t L_7 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)L_8);
		int32_t L_9 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		int32_t L_10 = V_6;
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		int32_t L_11 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___MAXROUNDS_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_12 = V_3;
		V_21 = L_12;
		int32_t L_13 = V_21;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)160))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_14 = V_21;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)128))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_15 = V_21;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)160))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0095;
	}

IL_0064:
	{
		int32_t L_16 = V_21;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)192))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_17 = V_21;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)224))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_18 = V_21;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)256))))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0095;
	}

IL_0081:
	{
		V_0 = 4;
		goto IL_00a0;
	}

IL_0085:
	{
		V_0 = 5;
		goto IL_00a0;
	}

IL_0089:
	{
		V_0 = 6;
		goto IL_00a0;
	}

IL_008d:
	{
		V_0 = 7;
		goto IL_00a0;
	}

IL_0091:
	{
		V_0 = 8;
		goto IL_00a0;
	}

IL_0095:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8C627B0FBF59740951535000A07CE2450097EC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelEngine_GenerateWorkingKey_m25F184F0CBF8D21A757835E56C08C2C338BAC9FC_RuntimeMethod_var)));
	}

IL_00a0:
	{
		int32_t L_20 = V_3;
		int32_t L_21 = __this->___blockBits_12;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_22 = V_0;
		__this->___ROUNDS_11 = ((int32_t)il2cpp_codegen_add(L_22, 6));
		goto IL_00c4;
	}

IL_00b4:
	{
		int32_t L_23 = __this->___BC_9;
		__this->___ROUNDS_11 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_23/8)), 6));
	}

IL_00c4:
	{
		V_7 = 0;
		V_8 = 0;
		goto IL_00ea;
	}

IL_00cc:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_24 = V_4;
		int32_t L_25 = V_8;
		int32_t L_26 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___key0;
		int32_t L_28 = V_7;
		int32_t L_29 = L_28;
		V_7 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(((int32_t)(L_25%4)), ((int32_t)(L_26/4)), L_31);
		int32_t L_32 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ea:
	{
		int32_t L_33 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___key0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = 0;
		V_9 = 0;
		goto IL_014e;
	}

IL_00f8:
	{
		V_10 = 0;
		goto IL_013f;
	}

IL_00fd:
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_35 = V_5;
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___BC_9;
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)(L_36/((int32_t)(L_37/8))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40 = L_39;
		V_22 = L_40;
		int32_t L_41 = V_10;
		int32_t L_42 = L_41;
		V_23 = L_42;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_43 = V_22;
		intptr_t L_44 = V_23;
		NullCheck(L_43);
		intptr_t L_45 = L_44;
		int64_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = V_4;
		int32_t L_48 = V_10;
		int32_t L_49 = V_9;
		NullCheck(L_47);
		uint8_t L_50;
		L_50 = (L_47)->GetAt(L_48, L_49);
		int32_t L_51 = V_1;
		int32_t L_52 = __this->___BC_9;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int64_t)((int64_t)(L_46|((int64_t)(((int64_t)((int32_t)((int32_t)L_50&((int32_t)255))))<<((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_51, 8))%L_52))&((int32_t)63))))))));
		int32_t L_53 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_013f:
	{
		int32_t L_54 = V_10;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_014e:
	{
		int32_t L_57 = V_9;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) >= ((int32_t)L_58)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_59 = V_1;
		int32_t L_60 = __this->___ROUNDS_11;
		int32_t L_61 = __this->___BC_9;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_60, 1)), ((int32_t)(L_61/8)))))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_0382;
	}

IL_016f:
	{
		V_11 = 0;
		goto IL_01b2;
	}

IL_0174:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_62 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_63 = L_62;
		V_24 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = L_64;
		V_23 = L_65;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_66 = V_24;
		intptr_t L_67 = V_23;
		NullCheck(L_66);
		uint8_t L_68;
		L_68 = (L_66)->GetAt((int32_t)(intptr_t)L_67, 0);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_70 = V_4;
		int32_t L_71 = V_11;
		int32_t L_72 = V_0;
		NullCheck(L_70);
		uint8_t L_73;
		L_73 = (L_70)->GetAt(((int32_t)(((int32_t)il2cpp_codegen_add(L_71, 1))%4)), ((int32_t)il2cpp_codegen_subtract(L_72, 1)));
		NullCheck(L_69);
		int32_t L_74 = ((int32_t)((int32_t)L_73&((int32_t)255)));
		uint8_t L_75 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_63);
		(L_63)->SetAt(L_65, 0, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_68^(int32_t)L_75))));
		int32_t L_76 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01b2:
	{
		int32_t L_77 = V_11;
		if ((((int32_t)L_77) < ((int32_t)4)))
		{
			goto IL_0174;
		}
	}
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_78 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = L_78;
		V_24 = L_79;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_80 = V_24;
		NullCheck(L_80);
		uint8_t L_81;
		L_81 = (L_80)->GetAt(0, 0);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___rcon_6;
		int32_t L_83 = V_2;
		int32_t L_84 = L_83;
		V_2 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		NullCheck(L_82);
		int32_t L_85 = L_84;
		uint8_t L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_79);
		(L_79)->SetAt(0, 0, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_81^(int32_t)L_86))));
		int32_t L_87 = V_0;
		if ((((int32_t)L_87) > ((int32_t)6)))
		{
			goto IL_0230;
		}
	}
	{
		V_12 = 1;
		goto IL_0226;
	}

IL_01e2:
	{
		V_13 = 0;
		goto IL_021b;
	}

IL_01e7:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_88 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = L_88;
		V_24 = L_89;
		int32_t L_90 = V_13;
		int32_t L_91 = L_90;
		V_23 = L_91;
		int32_t L_92 = V_12;
		int32_t L_93 = L_92;
		V_25 = L_93;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_94 = V_24;
		intptr_t L_95 = V_23;
		intptr_t L_96 = V_25;
		NullCheck(L_94);
		uint8_t L_97;
		L_97 = (L_94)->GetAt((int32_t)(intptr_t)L_95, (int32_t)(intptr_t)L_96);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_98 = V_4;
		int32_t L_99 = V_13;
		int32_t L_100 = V_12;
		NullCheck(L_98);
		uint8_t L_101;
		L_101 = (L_98)->GetAt(L_99, ((int32_t)il2cpp_codegen_subtract(L_100, 1)));
		NullCheck(L_89);
		(L_89)->SetAt(L_91, L_93, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_97^(int32_t)L_101))));
		int32_t L_102 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_021b:
	{
		int32_t L_103 = V_13;
		if ((((int32_t)L_103) < ((int32_t)4)))
		{
			goto IL_01e7;
		}
	}
	{
		int32_t L_104 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0226:
	{
		int32_t L_105 = V_12;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_030e;
	}

IL_0230:
	{
		V_14 = 1;
		goto IL_0279;
	}

IL_0235:
	{
		V_15 = 0;
		goto IL_026e;
	}

IL_023a:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = L_107;
		V_24 = L_108;
		int32_t L_109 = V_15;
		int32_t L_110 = L_109;
		V_23 = L_110;
		int32_t L_111 = V_14;
		int32_t L_112 = L_111;
		V_25 = L_112;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_113 = V_24;
		intptr_t L_114 = V_23;
		intptr_t L_115 = V_25;
		NullCheck(L_113);
		uint8_t L_116;
		L_116 = (L_113)->GetAt((int32_t)(intptr_t)L_114, (int32_t)(intptr_t)L_115);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_117 = V_4;
		int32_t L_118 = V_15;
		int32_t L_119 = V_14;
		NullCheck(L_117);
		uint8_t L_120;
		L_120 = (L_117)->GetAt(L_118, ((int32_t)il2cpp_codegen_subtract(L_119, 1)));
		NullCheck(L_108);
		(L_108)->SetAt(L_110, L_112, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_116^(int32_t)L_120))));
		int32_t L_121 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_026e:
	{
		int32_t L_122 = V_15;
		if ((((int32_t)L_122) < ((int32_t)4)))
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_123 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0279:
	{
		int32_t L_124 = V_14;
		if ((((int32_t)L_124) < ((int32_t)4)))
		{
			goto IL_0235;
		}
	}
	{
		V_16 = 0;
		goto IL_02bb;
	}

IL_0283:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_125 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_126 = L_125;
		V_24 = L_126;
		int32_t L_127 = V_16;
		int32_t L_128 = L_127;
		V_23 = L_128;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_129 = V_24;
		intptr_t L_130 = V_23;
		NullCheck(L_129);
		uint8_t L_131;
		L_131 = (L_129)->GetAt((int32_t)(intptr_t)L_130, 4);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_133 = V_4;
		int32_t L_134 = V_16;
		NullCheck(L_133);
		uint8_t L_135;
		L_135 = (L_133)->GetAt(L_134, 3);
		NullCheck(L_132);
		int32_t L_136 = ((int32_t)((int32_t)L_135&((int32_t)255)));
		uint8_t L_137 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_126);
		(L_126)->SetAt(L_128, 4, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_131^(int32_t)L_137))));
		int32_t L_138 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_02bb:
	{
		int32_t L_139 = V_16;
		if ((((int32_t)L_139) < ((int32_t)4)))
		{
			goto IL_0283;
		}
	}
	{
		V_17 = 5;
		goto IL_0309;
	}

IL_02c5:
	{
		V_18 = 0;
		goto IL_02fe;
	}

IL_02ca:
	{
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_140 = V_4;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_141 = L_140;
		V_24 = L_141;
		int32_t L_142 = V_18;
		int32_t L_143 = L_142;
		V_23 = L_143;
		int32_t L_144 = V_17;
		int32_t L_145 = L_144;
		V_25 = L_145;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_146 = V_24;
		intptr_t L_147 = V_23;
		intptr_t L_148 = V_25;
		NullCheck(L_146);
		uint8_t L_149;
		L_149 = (L_146)->GetAt((int32_t)(intptr_t)L_147, (int32_t)(intptr_t)L_148);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_150 = V_4;
		int32_t L_151 = V_18;
		int32_t L_152 = V_17;
		NullCheck(L_150);
		uint8_t L_153;
		L_153 = (L_150)->GetAt(L_151, ((int32_t)il2cpp_codegen_subtract(L_152, 1)));
		NullCheck(L_141);
		(L_141)->SetAt(L_143, L_145, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_149^(int32_t)L_153))));
		int32_t L_154 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_154, 1));
	}

IL_02fe:
	{
		int32_t L_155 = V_18;
		if ((((int32_t)L_155) < ((int32_t)4)))
		{
			goto IL_02ca;
		}
	}
	{
		int32_t L_156 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_0309:
	{
		int32_t L_157 = V_17;
		int32_t L_158 = V_0;
		if ((((int32_t)L_157) < ((int32_t)L_158)))
		{
			goto IL_02c5;
		}
	}

IL_030e:
	{
		V_19 = 0;
		goto IL_0369;
	}

IL_0313:
	{
		V_20 = 0;
		goto IL_035a;
	}

IL_0318:
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_159 = V_5;
		int32_t L_160 = V_1;
		int32_t L_161 = __this->___BC_9;
		NullCheck(L_159);
		int32_t L_162 = ((int32_t)(L_160/((int32_t)(L_161/8))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_163 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_164 = L_163;
		V_22 = L_164;
		int32_t L_165 = V_20;
		int32_t L_166 = L_165;
		V_23 = L_166;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_167 = V_22;
		intptr_t L_168 = V_23;
		NullCheck(L_167);
		intptr_t L_169 = L_168;
		int64_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_171 = V_4;
		int32_t L_172 = V_20;
		int32_t L_173 = V_19;
		NullCheck(L_171);
		uint8_t L_174;
		L_174 = (L_171)->GetAt(L_172, L_173);
		int32_t L_175 = V_1;
		int32_t L_176 = __this->___BC_9;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (int64_t)((int64_t)(L_170|((int64_t)(((int64_t)((int32_t)((int32_t)L_174&((int32_t)255))))<<((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_175, 8))%L_176))&((int32_t)63))))))));
		int32_t L_177 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_177, 1));
	}

IL_035a:
	{
		int32_t L_178 = V_20;
		if ((((int32_t)L_178) < ((int32_t)4)))
		{
			goto IL_0318;
		}
	}
	{
		int32_t L_179 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		int32_t L_180 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_180, 1));
	}

IL_0369:
	{
		int32_t L_181 = V_19;
		int32_t L_182 = V_0;
		if ((((int32_t)L_181) >= ((int32_t)L_182)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_183 = V_1;
		int32_t L_184 = __this->___ROUNDS_11;
		int32_t L_185 = __this->___BC_9;
		if ((((int32_t)L_183) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_184, 1)), ((int32_t)(L_185/8)))))))
		{
			goto IL_0313;
		}
	}

IL_0382:
	{
		int32_t L_186 = V_1;
		int32_t L_187 = __this->___ROUNDS_11;
		int32_t L_188 = __this->___BC_9;
		if ((((int32_t)L_186) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_187, 1)), ((int32_t)(L_188/8)))))))
		{
			goto IL_016f;
		}
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_189 = V_5;
		return L_189;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine__ctor_mB8778C31601D18293075DBFF4C3CBBE405181D02 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	{
		RijndaelEngine__ctor_mFA3A7D535ECED37F0CE901516B65D1C5C88E6F86(__this, ((int32_t)128), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine__ctor_mFA3A7D535ECED37F0CE901516B65D1C5C88E6F86 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, int32_t ___blockBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___blockBits0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)160))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)160))))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0142;
	}

IL_0025:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)192))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)224))))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)256))))
		{
			goto IL_0116;
		}
	}
	{
		goto IL_0142;
	}

IL_004b:
	{
		__this->___BC_9 = ((int32_t)32);
		__this->___BC_MASK_10 = ((int64_t)(uint64_t)((uint32_t)(-1)));
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7;
		NullCheck(L_7);
		int32_t L_8 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___shifts0SC_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts0SC_19), (void*)L_9);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_10 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8;
		NullCheck(L_10);
		int32_t L_11 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___shifts1SC_20 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts1SC_20), (void*)L_12);
		goto IL_014d;
	}

IL_007a:
	{
		__this->___BC_9 = ((int32_t)40);
		__this->___BC_MASK_10 = ((int64_t)1099511627775LL);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7;
		NullCheck(L_13);
		int32_t L_14 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___shifts0SC_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts0SC_19), (void*)L_15);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8;
		NullCheck(L_16);
		int32_t L_17 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___shifts1SC_20 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts1SC_20), (void*)L_18);
		goto IL_014d;
	}

IL_00b0:
	{
		__this->___BC_9 = ((int32_t)48);
		__this->___BC_MASK_10 = ((int64_t)281474976710655LL);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7;
		NullCheck(L_19);
		int32_t L_20 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___shifts0SC_19 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts0SC_19), (void*)L_21);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_22 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8;
		NullCheck(L_22);
		int32_t L_23 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___shifts1SC_20 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts1SC_20), (void*)L_24);
		goto IL_014d;
	}

IL_00e3:
	{
		__this->___BC_9 = ((int32_t)56);
		__this->___BC_MASK_10 = ((int64_t)72057594037927935LL);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_25 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7;
		NullCheck(L_25);
		int32_t L_26 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		__this->___shifts0SC_19 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts0SC_19), (void*)L_27);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_28 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8;
		NullCheck(L_28);
		int32_t L_29 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		__this->___shifts1SC_20 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts1SC_20), (void*)L_30);
		goto IL_014d;
	}

IL_0116:
	{
		__this->___BC_9 = ((int32_t)64);
		__this->___BC_MASK_10 = ((int64_t)(-1));
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_31 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7;
		NullCheck(L_31);
		int32_t L_32 = 4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->___shifts0SC_19 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts0SC_19), (void*)L_33);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_34 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8;
		NullCheck(L_34);
		int32_t L_35 = 4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		__this->___shifts1SC_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shifts1SC_20), (void*)L_36);
		goto IL_014d;
	}

IL_0142:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE029659E535DC36ADAA042FF194A35CD1638BAF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelEngine__ctor_mFA3A7D535ECED37F0CE901516B65D1C5C88E6F86_RuntimeMethod_var)));
	}

IL_014d:
	{
		int32_t L_38 = ___blockBits0;
		__this->___blockBits_12 = L_38;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_Init_m553A338E991800FF261DABC7174142734F05420F (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeObject* L_2 = ___parameters1;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(117 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_4 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_6;
		L_6 = RijndaelEngine_GenerateWorkingKey_m25F184F0CBF8D21A757835E56C08C2C338BAC9FC(__this, L_5, NULL);
		__this->___workingKey_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_13), (void*)L_6);
		bool L_7 = ___forEncryption0;
		__this->___forEncryption_18 = L_7;
		return;
	}

IL_0031:
	{
		RuntimeObject* L_8 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE64D5EE122D100711965395AFF4160B121E37B1B)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelEngine_Init_m553A338E991800FF261DABC7174142734F05420F_RuntimeMethod_var)));
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.RijndaelEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RijndaelEngine_get_AlgorithmName_mEBF04310176B0E2E7FB8C9CE538901186AB3619A (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73DEA90DC5A44B4F6D6175E411C45478F05776EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral73DEA90DC5A44B4F6D6175E411C45478F05776EF;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.RijndaelEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RijndaelEngine_get_IsPartialBlockOkay_m617885F051A02DE9AAA0461C75C7771AC163F830 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelEngine_GetBlockSize_m78953F7A6841D83A8466D10CA26DCE8FBA57C540 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___BC_9;
		return ((int32_t)(L_0/2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RijndaelEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelEngine_ProcessBlock_m4D17920F7A6010A7A5823D363D9C5D85FCC19626 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_0 = __this->___workingKey_13;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF29F2F3522174F52C44E5A1812C8A01EAC6A282)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelEngine_ProcessBlock_m4D17920F7A6010A7A5823D363D9C5D85FCC19626_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = __this->___BC_9;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, ((int32_t)(L_4/2)), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___output2;
		int32_t L_6 = ___outOff3;
		int32_t L_7 = __this->___BC_9;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_5, L_6, ((int32_t)(L_7/2)), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		RijndaelEngine_UnPackBlock_mA7EA70B7449604A83A0C76D2321DC2068D0472B1(__this, L_8, L_9, NULL);
		bool L_10 = __this->___forEncryption_18;
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_11 = __this->___workingKey_13;
		RijndaelEngine_EncryptBlock_mF3C8A9A996055848DFE3010236F04C61F43BA7D3(__this, L_11, NULL);
		goto IL_0066;
	}

IL_005a:
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_12 = __this->___workingKey_13;
		RijndaelEngine_DecryptBlock_m82BF1251D95644E584444D0F97A98199009F951D(__this, L_12, NULL);
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		RijndaelEngine_PackBlock_m515B1271076855D89B68D3B4BD703AD99AC5C853(__this, L_13, L_14, NULL);
		int32_t L_15 = __this->___BC_9;
		return ((int32_t)(L_15/2));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_Reset_mC4530BE4CB13081D44FD2F7AFD9631132302C89C (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::UnPackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_UnPackBlock_mA7EA70B7449604A83A0C76D2321DC2068D0472B1 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___off1;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___A0_14 = ((int64_t)((int32_t)((int32_t)L_5&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___A1_15 = ((int64_t)((int32_t)((int32_t)L_10&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_11);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___A2_16 = ((int64_t)((int32_t)((int32_t)L_15&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___A3_17 = ((int64_t)((int32_t)((int32_t)L_20&((int32_t)255))));
		V_1 = 8;
		goto IL_00dd;
	}

IL_0059:
	{
		int64_t L_21 = __this->___A0_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___bytes0;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_1;
		__this->___A0_14 = ((int64_t)(L_21|((int64_t)(((int64_t)((int32_t)((int32_t)L_26&((int32_t)255))))<<((int32_t)(L_27&((int32_t)63)))))));
		int64_t L_28 = __this->___A1_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___bytes0;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_1;
		__this->___A1_15 = ((int64_t)(L_28|((int64_t)(((int64_t)((int32_t)((int32_t)L_33&((int32_t)255))))<<((int32_t)(L_34&((int32_t)63)))))));
		int64_t L_35 = __this->___A2_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___bytes0;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		NullCheck(L_36);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_1;
		__this->___A2_16 = ((int64_t)(L_35|((int64_t)(((int64_t)((int32_t)((int32_t)L_40&((int32_t)255))))<<((int32_t)(L_41&((int32_t)63)))))));
		int64_t L_42 = __this->___A3_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___bytes0;
		int32_t L_44 = V_0;
		int32_t L_45 = L_44;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		NullCheck(L_43);
		int32_t L_46 = L_45;
		uint8_t L_47 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = V_1;
		__this->___A3_17 = ((int64_t)(L_42|((int64_t)(((int64_t)((int32_t)((int32_t)L_47&((int32_t)255))))<<((int32_t)(L_48&((int32_t)63)))))));
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 8));
	}

IL_00dd:
	{
		int32_t L_50 = V_1;
		int32_t L_51 = __this->___BC_9;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0059;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::PackBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_PackBlock_m515B1271076855D89B68D3B4BD703AD99AC5C853 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___off1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0056;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int64_t L_4 = __this->___A0_14;
		int32_t L_5 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_4>>((int32_t)(L_5&((int32_t)63)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int64_t L_9 = __this->___A1_15;
		int32_t L_10 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_9>>((int32_t)(L_10&((int32_t)63)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int64_t L_14 = __this->___A2_16;
		int32_t L_15 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_14>>((int32_t)(L_15&((int32_t)63)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int64_t L_19 = __this->___A3_17;
		int32_t L_20 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_19>>((int32_t)(L_20&((int32_t)63)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 8));
	}

IL_0056:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->___BC_9;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::EncryptBlock(System.Int64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_EncryptBlock_mF3C8A9A996055848DFE3010236F04C61F43BA7D3 (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___rk0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_0 = ___rk0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_2, NULL);
		V_0 = 1;
		goto IL_0037;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4;
		RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___shifts0SC_19;
		RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A(__this, L_4, NULL);
		RijndaelEngine_MixColumn_m5E5BFCD8B5A00B3CD94D6FBDA3F13115E940673C(__this, NULL);
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_5 = ___rk0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_8, NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___ROUNDS_11;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4;
		RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF(__this, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___shifts0SC_19;
		RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A(__this, L_13, NULL);
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_14 = ___rk0;
		int32_t L_15 = __this->___ROUNDS_11;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_17, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::DecryptBlock(System.Int64[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine_DecryptBlock_m82BF1251D95644E584444D0F97A98199009F951D (RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A* __this, Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* ___rk0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_0 = ___rk0;
		int32_t L_1 = __this->___ROUNDS_11;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Si_5;
		RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF(__this, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___shifts1SC_20;
		RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A(__this, L_5, NULL);
		int32_t L_6 = __this->___ROUNDS_11;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_005a;
	}

IL_0030:
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_7 = ___rk0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_10, NULL);
		RijndaelEngine_InvMixColumn_m78C344E10FD7F1989985547E80124714AAEA9F39(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Si_5;
		RijndaelEngine_Substitution_mCA216F9B587ED999BF37B666816BFA340889CEBF(__this, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___shifts1SC_20;
		RijndaelEngine_ShiftRow_m3C468330FC7D8D97BEA687E106FF541DA0CACF5A(__this, L_12, NULL);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Int64U5BU5DU5BU5D_tD6A9DF5C567631FC6550BD7BF747884CB5C6BF8B* L_15 = ___rk0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		RijndaelEngine_KeyAddition_m8F3DBA0F6C35BF67D6ACEAFBB7DE5473F2F474BE(__this, L_17, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RijndaelEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelEngine__cctor_m72C63C39B3989114373C60A0072434C50F36D997 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D10_137_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D11_138_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D12_139_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D13_140_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D14_141_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D15_142_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D1_128_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D2_129_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D3_130_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D4_131_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D5_132_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D6_133_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D7_134_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D8_135_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D9_136_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	{
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___MAXROUNDS_0 = ((int32_t)14);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___MAXKC_1 = ((int32_t)64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D1_128_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Logtable_2), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)511));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D2_129_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Alogtable_3), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D3_130_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___S_4), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D4_131_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Si_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___Si_5), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D5_132_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___rcon_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___rcon_6), (void*)L_13);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_15;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D6_133_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_18, L_19, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_18);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_20 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D7_134_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_22, L_23, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_22);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_25;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_27 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D8_135_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_26, L_27, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_26);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_28 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_31 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D9_136_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_30, L_31, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_30);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_35 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D10_137_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_34, L_35, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_36 = V_0;
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts0_7), (void*)L_36);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_37 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_37;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_38 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = L_39;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_41 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D11_138_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_40, L_41, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_40);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D12_139_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_44, L_45, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_44);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_46 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = L_47;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_49 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D13_140_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_48, L_49, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_48);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_50 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = L_51;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_53 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D14_141_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_52, L_53, NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_52);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_52);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_54 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_57 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001608U2D15_142_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_56, L_57, NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_56);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_58 = V_0;
		((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelEngine_tB7C66FA50A7B1A64FB0EC75D41396F8B2310785A_il2cpp_TypeInfo_var))->___shifts1_8), (void*)L_58);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RsaBlindedEngine_get_AlgorithmName_m4D98341466BABD603197D6A7866E739FCA1BE51A (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaBlindedEngine_Init_m5580CAE44FAC9D015D2D324C17DBC3076CAE7E27 (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, bool ___forEncryption0, RuntimeObject* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_0 = NULL;
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		bool L_1 = ___forEncryption0;
		RuntimeObject* L_2 = ___param1;
		NullCheck(L_0);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_0, L_1, L_2);
		RuntimeObject* L_3 = ___param1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_3, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_4 = ___param1;
		V_0 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_4, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_5, NULL);
		__this->___key_1 = ((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_6, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_1), (void*)((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_6, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var)));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_7 = V_0;
		NullCheck(L_7);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_8;
		L_8 = ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline(L_7, NULL);
		__this->___random_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_2), (void*)L_8);
		return;
	}

IL_003a:
	{
		RuntimeObject* L_9 = ___param1;
		__this->___key_1 = ((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_9, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_1), (void*)((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_9, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var)));
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_10 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_10, NULL);
		__this->___random_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_2), (void*)L_10);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaBlindedEngine_GetInputBlockSize_m1CF678B6AE0B233ED136294D714FC4693E9E4547 (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetInputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaBlindedEngine_GetOutputBlockSize_mD480648F27A7C9FEEEE2D956DC7E65DE118337E3 (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RsaBlindedEngine_ProcessBlock_m687BA8C31233E73096824E493A7F688A101C4307 (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_4 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_5 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_6 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_7 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_8 = NULL;
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_0 = __this->___key_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC692DAB34986D12FB6BBE31A5A0AAE5ADB9399E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaBlindedEngine_ProcessBlock_m687BA8C31233E73096824E493A7F688A101C4307_RuntimeMethod_var)));
	}

IL_0013:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_2 = __this->___core_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBuf0;
		int32_t L_4 = ___inOff1;
		int32_t L_5 = ___inLen2;
		NullCheck(L_2);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6;
		L_6 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(7 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertInput(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_7 = __this->___key_1;
		if (!((RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F*)IsInstClass((RuntimeObject*)L_7, RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_8 = __this->___key_1;
		V_2 = ((RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F*)CastclassClass((RuntimeObject*)L_8, RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var));
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_9 = V_2;
		NullCheck(L_9);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10;
		L_10 = RsaPrivateCrtKeyParameters_get_PublicExponent_m1CE6D67559EF7A573A5DCFA2E119E53EB24CF538_inline(L_9, NULL);
		V_3 = L_10;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_3;
		if (!L_11)
		{
			goto IL_00d1;
		}
	}
	{
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_12 = V_2;
		NullCheck(L_12);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13;
		L_13 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_12, NULL);
		V_4 = L_13;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		NullCheck(L_15);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17;
		L_17 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_15, L_16, NULL);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_18 = __this->___random_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19;
		L_19 = BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD(L_14, L_17, L_18, NULL);
		V_5 = L_19;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_21 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_22 = V_4;
		NullCheck(L_20);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_23;
		L_23 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_20, L_21, L_22, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24 = V_0;
		NullCheck(L_23);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25;
		L_25 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_23, L_24, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_26 = V_4;
		NullCheck(L_25);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27;
		L_27 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_25, L_26, NULL);
		V_6 = L_27;
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_28 = __this->___core_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_29 = V_6;
		NullCheck(L_28);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_30;
		L_30 = VirtualFuncInvoker1< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(9 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger) */, L_28, L_29);
		V_7 = L_30;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_32 = V_4;
		NullCheck(L_31);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33;
		L_33 = BigInteger_ModInverse_m17E50C383B3E4D3868420160E63F969145971A7D(L_31, L_32, NULL);
		V_8 = L_33;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34 = V_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_35 = V_8;
		NullCheck(L_34);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_36;
		L_36 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_34, L_35, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_37 = V_4;
		NullCheck(L_36);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_38;
		L_38 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_36, L_37, NULL);
		V_1 = L_38;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_39 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_40 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_41 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_42 = V_4;
		NullCheck(L_40);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_43;
		L_43 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_40, L_41, L_42, NULL);
		NullCheck(L_39);
		bool L_44;
		L_44 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean Org.BouncyCastle.Math.BigInteger::Equals(System.Object) */, L_39, L_43);
		if (L_44)
		{
			goto IL_00ed;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25A94718469E584D6A829C24BF0434998B09B8A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaBlindedEngine_ProcessBlock_m687BA8C31233E73096824E493A7F688A101C4307_RuntimeMethod_var)));
	}

IL_00d1:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_46 = __this->___core_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_47 = V_0;
		NullCheck(L_46);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_48;
		L_48 = VirtualFuncInvoker1< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(9 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger) */, L_46, L_47);
		V_1 = L_48;
		goto IL_00ed;
	}

IL_00e0:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_49 = __this->___core_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_50 = V_0;
		NullCheck(L_49);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_51;
		L_51 = VirtualFuncInvoker1< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(9 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger) */, L_49, L_50);
		V_1 = L_51;
	}

IL_00ed:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_52 = __this->___core_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_53 = V_1;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
		L_54 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(8 /* System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertOutput(Org.BouncyCastle.Math.BigInteger) */, L_52, L_53);
		return L_54;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaBlindedEngine__ctor_m5DE5A787A2C0A7F2CCA48B871FE455B9DB4C7EAF (RsaBlindedEngine_t40D9C7208C953EDD2E020B99073C702B01E911D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478*)il2cpp_codegen_object_new(RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RsaCoreEngine__ctor_m2B3FEBFB9243CA826063B1951A63399C07924065(L_0, NULL);
		__this->___core_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___core_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RsaBlindingEngine_get_AlgorithmName_m286BC776FF3CE883A379D140506FFA3ADC423D37 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaBlindingEngine_Init_mDEC6E1FF1819A65A523EDEAED8352EA81071532D (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, bool ___forEncryption0, RuntimeObject* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* V_0 = NULL;
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___param1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_0, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = ___param1;
		V_1 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_2, NULL);
		V_0 = ((RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D*)CastclassClass((RuntimeObject*)L_3, RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D_il2cpp_TypeInfo_var));
		goto IL_0024;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___param1;
		V_0 = ((RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D*)CastclassClass((RuntimeObject*)L_4, RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D_il2cpp_TypeInfo_var));
	}

IL_0024:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_5 = __this->___core_0;
		bool L_6 = ___forEncryption0;
		RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* L_7 = V_0;
		NullCheck(L_7);
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_8;
		L_8 = RsaBlindingParameters_get_PublicKey_mE9C82C78D227A15B214B6B86BC801EA81B3B0401_inline(L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_5, L_6, L_8);
		bool L_9 = ___forEncryption0;
		__this->___forEncryption_3 = L_9;
		RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* L_10 = V_0;
		NullCheck(L_10);
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_11;
		L_11 = RsaBlindingParameters_get_PublicKey_mE9C82C78D227A15B214B6B86BC801EA81B3B0401_inline(L_10, NULL);
		__this->___key_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_1), (void*)L_11);
		RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* L_12 = V_0;
		NullCheck(L_12);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13;
		L_13 = RsaBlindingParameters_get_BlindingFactor_m017DE8B8AD76EBB3636110AD7F3EB893AED6E6FF_inline(L_12, NULL);
		__this->___blindingFactor_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blindingFactor_2), (void*)L_13);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaBlindingEngine_GetInputBlockSize_m6FF489332B9858AA874E8AAA572C599A304636B9 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetInputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaBlindingEngine_GetOutputBlockSize_mC922A0599ED68475CD43C1A4D7EE8DD4F5CA9707 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RsaBlindingEngine_ProcessBlock_m3D7D2FED52164A37D06655B7B8993DB8516C9BC8 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBuf0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___inLen2;
		NullCheck(L_0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(7 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertInput(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		bool L_5 = __this->___forEncryption_3;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = RsaBlindingEngine_BlindMessage_mE076E17ED1CC7C450385153AE861190D1AEDCE8D(__this, L_6, NULL);
		V_0 = L_7;
		goto IL_0029;
	}

IL_0021:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9;
		L_9 = RsaBlindingEngine_UnblindMessage_m38D541175C26C3CE82A4CCE366AA206AAD1E33E0(__this, L_8, NULL);
		V_0 = L_9;
	}

IL_0029:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_10 = __this->___core_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(8 /* System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertOutput(Org.BouncyCastle.Math.BigInteger) */, L_10, L_11);
		return L_12;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::BlindMessage(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingEngine_BlindMessage_mE076E17ED1CC7C450385153AE861190D1AEDCE8D (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___msg0, const RuntimeMethod* method) 
{
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___blindingFactor_2;
		V_0 = L_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ___msg0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = V_0;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_3 = __this->___key_1;
		NullCheck(L_3);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = RsaKeyParameters_get_Exponent_m53F01DA95BCBD6DDE23ED14286653B851AD30AFB_inline(L_3, NULL);
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_5 = __this->___key_1;
		NullCheck(L_5);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6;
		L_6 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_5, NULL);
		NullCheck(L_2);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_2, L_4, L_6, NULL);
		NullCheck(L_1);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_1, L_7, NULL);
		V_0 = L_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = V_0;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_10 = __this->___key_1;
		NullCheck(L_10);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_10, NULL);
		NullCheck(L_9);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12;
		L_12 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_9, L_11, NULL);
		V_0 = L_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_0;
		return L_13;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::UnblindMessage(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingEngine_UnblindMessage_m38D541175C26C3CE82A4CCE366AA206AAD1E33E0 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___blindedMsg0, const RuntimeMethod* method) 
{
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_0 = __this->___key_1;
		NullCheck(L_0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1;
		L_1 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_0, NULL);
		V_0 = L_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___blindedMsg0;
		V_1 = L_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = __this->___blindingFactor_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = V_0;
		NullCheck(L_3);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = BigInteger_ModInverse_m17E50C383B3E4D3868420160E63F969145971A7D(L_3, L_4, NULL);
		V_2 = L_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = V_2;
		NullCheck(L_6);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_6, L_7, NULL);
		V_1 = L_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = V_0;
		NullCheck(L_9);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_9, L_10, NULL);
		V_1 = L_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = V_1;
		return L_12;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaBlindingEngine__ctor_m71C3C963E2E6CD2871C61BF61C5C6FBED7D67A86 (RsaBlindingEngine_t39B530509A3C8885FFD263DD38B3B038F8B06303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478*)il2cpp_codegen_object_new(RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RsaCoreEngine__ctor_m2B3FEBFB9243CA826063B1951A63399C07924065(L_0, NULL);
		__this->___core_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___core_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaCoreEngine_Init_mDE62A23D556045663DC368D216C1734FCAD24810 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_0, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		NullCheck(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)), NULL);
		___parameters1 = L_2;
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___parameters1;
		if (((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)IsInstClass((RuntimeObject*)L_3, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5* L_4 = (InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidKeyException_t4FAD2B8A94D2A4D05B527267B3FEB92AF2AA11E5_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidKeyException__ctor_m40FEA53E12B585BB41D46A11E9B53D3814463755(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EE569B4C3EA7B1B22788B903C90F9CBEC04D912)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaCoreEngine_Init_mDE62A23D556045663DC368D216C1734FCAD24810_RuntimeMethod_var)));
	}

IL_0028:
	{
		RuntimeObject* L_5 = ___parameters1;
		__this->___key_0 = ((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_5, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_0), (void*)((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_5, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var)));
		bool L_6 = ___forEncryption0;
		__this->___forEncryption_1 = L_6;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_7 = __this->___key_0;
		NullCheck(L_7);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_8, NULL);
		__this->___bitSize_2 = L_9;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaCoreEngine_GetInputBlockSize_mC6DE3713EFA3D67CC6042FA534201470D53E0FE2 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___bitSize_2;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, 1))/8));
	}

IL_0013:
	{
		int32_t L_2 = __this->___bitSize_2;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 7))/8));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaCoreEngine_GetOutputBlockSize_mC429BC132441A27432D8D6A2FBC3E96163733E9D (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___bitSize_2;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 7))/8));
	}

IL_0013:
	{
		int32_t L_2 = __this->___bitSize_2;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, 1))/8));
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaCoreEngine_ConvertInput_m76657B8B7F3F62FACB1B6DDB6C107CF18260BE46 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	{
		int32_t L_0 = __this->___bitSize_2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 7))/8));
		int32_t L_1 = ___inLen2;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F78DF94890BD848717BF7401CDDB930D6A54181)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaCoreEngine_ConvertInput_m76657B8B7F3F62FACB1B6DDB6C107CF18260BE46_RuntimeMethod_var)));
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBuf0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = ___inLen2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mA773DCE54A2861811F9CF1C91CF8611A92C919B6(L_7, 1, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_1;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_9 = __this->___key_0;
		NullCheck(L_9);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10;
		L_10 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_9, NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = BigInteger_CompareTo_m2AC6C020406E0012C1F48B7C3193552F605AC1D9(L_8, L_10, NULL);
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_12 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F78DF94890BD848717BF7401CDDB930D6A54181)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaCoreEngine_ConvertInput_m76657B8B7F3F62FACB1B6DDB6C107CF18260BE46_RuntimeMethod_var)));
	}

IL_0043:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_1;
		return L_13;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertOutput(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RsaCoreEngine_ConvertOutput_m6589393ED604B25DF7F8D511AC053EB43541B926 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___result0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_ToByteArrayUnsigned_m851F34EB4990FB95CAA13F23E16D1774E0B26FA6(L_0, NULL);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_1;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize() */, __this);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)L_5)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		NullCheck((RuntimeArray*)L_8);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), ((int32_t)(((RuntimeArray*)L_11)->max_length)))), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		V_0 = L_12;
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		return L_13;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaCoreEngine_ProcessBlock_m01B12BA502E3A3EDFAADC182CBF44D25D93D928A (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_4 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_5 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_6 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_7 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_8 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_9 = NULL;
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_0 = __this->___key_0;
		if (!((RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F*)IsInstClass((RuntimeObject*)L_0, RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var)))
		{
			goto IL_009a;
		}
	}
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_1 = __this->___key_0;
		V_0 = ((RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F*)CastclassClass((RuntimeObject*)L_1, RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F_il2cpp_TypeInfo_var));
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_2 = V_0;
		NullCheck(L_2);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3;
		L_3 = RsaPrivateCrtKeyParameters_get_P_mD1856B8A898DB1763E2DF84DCE335A6B353C9A9F_inline(L_2, NULL);
		V_1 = L_3;
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_4 = V_0;
		NullCheck(L_4);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = RsaPrivateCrtKeyParameters_get_Q_m43B53C0E3F837093F8AA2810494ADE021FD99654_inline(L_4, NULL);
		V_2 = L_5;
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_6 = V_0;
		NullCheck(L_6);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = RsaPrivateCrtKeyParameters_get_DP_m551662D41C61A77263D3BBDCB12D4F0BAE0EDE5A_inline(L_6, NULL);
		V_3 = L_7;
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_8 = V_0;
		NullCheck(L_8);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9;
		L_9 = RsaPrivateCrtKeyParameters_get_DQ_mC5EB14A21F366C34EC8E314BED6ED2CB77F9F29E_inline(L_8, NULL);
		V_4 = L_9;
		RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* L_10 = V_0;
		NullCheck(L_10);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = RsaPrivateCrtKeyParameters_get_QInv_m2104336292891D5BCBF68982D420A9EFD9435750_inline(L_10, NULL);
		V_5 = L_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = ___input0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_1;
		NullCheck(L_12);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14;
		L_14 = BigInteger_Remainder_m3EC0AB3AE3F935252F117BA4A5219555D800A961(L_12, L_13, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16 = V_1;
		NullCheck(L_14);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17;
		L_17 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_14, L_15, L_16, NULL);
		V_6 = L_17;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_18 = ___input0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19 = V_2;
		NullCheck(L_18);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20;
		L_20 = BigInteger_Remainder_m3EC0AB3AE3F935252F117BA4A5219555D800A961(L_18, L_19, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_21 = V_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_22 = V_2;
		NullCheck(L_20);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_23;
		L_23 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_20, L_21, L_22, NULL);
		V_7 = L_23;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24 = V_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25 = V_7;
		NullCheck(L_24);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_26;
		L_26 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_24, L_25, NULL);
		V_8 = L_26;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = V_5;
		NullCheck(L_27);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_29;
		L_29 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_27, L_28, NULL);
		V_8 = L_29;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_30 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = V_1;
		NullCheck(L_30);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_32;
		L_32 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_30, L_31, NULL);
		V_8 = L_32;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34 = V_2;
		NullCheck(L_33);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_35;
		L_35 = BigInteger_Multiply_mB7E40F59F8A3C751FD8E1ACF59557AC5E6310C63(L_33, L_34, NULL);
		V_9 = L_35;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_36 = V_9;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_37 = V_7;
		NullCheck(L_36);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_38;
		L_38 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_36, L_37, NULL);
		V_9 = L_38;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_39 = V_9;
		return L_39;
	}

IL_009a:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_40 = ___input0;
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_41 = __this->___key_0;
		NullCheck(L_41);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_42;
		L_42 = RsaKeyParameters_get_Exponent_m53F01DA95BCBD6DDE23ED14286653B851AD30AFB_inline(L_41, NULL);
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_43 = __this->___key_0;
		NullCheck(L_43);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_44;
		L_44 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_43, NULL);
		NullCheck(L_40);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_45;
		L_45 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_40, L_42, L_44, NULL);
		return L_45;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaCoreEngine__ctor_m2B3FEBFB9243CA826063B1951A63399C07924065 (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Org.BouncyCastle.Crypto.Engines.RsaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RsaEngine_get_AlgorithmName_mB1EDEEF9DA133288643D22D57644B496F84B4C01 (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaEngine_Init_m0F971E433FD09B1AEDB2F921C8ECFB02B96CEE69 (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_1 = (RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478*)il2cpp_codegen_object_new(RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RsaCoreEngine__ctor_m2B3FEBFB9243CA826063B1951A63399C07924065(L_1, NULL);
		__this->___core_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___core_0), (void*)L_1);
	}

IL_0013:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_2 = __this->___core_0;
		bool L_3 = ___forEncryption0;
		RuntimeObject* L_4 = ___parameters1;
		NullCheck(L_2);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_2, L_3, L_4);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaEngine::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaEngine_GetInputBlockSize_mE27C2F510298C0D02856A813BC43886666A364A5 (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetInputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.RsaEngine::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RsaEngine_GetOutputBlockSize_m87320F62DB707349AEC29A878E0D4B216E0EFC94 (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::GetOutputBlockSize() */, L_0);
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RsaEngine_ProcessBlock_mAFAB566577A77BE2131DE5306B5D848B02D71333 (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuf0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_0 = __this->___core_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC692DAB34986D12FB6BBE31A5A0AAE5ADB9399E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsaEngine_ProcessBlock_mAFAB566577A77BE2131DE5306B5D848B02D71333_RuntimeMethod_var)));
	}

IL_0013:
	{
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_2 = __this->___core_0;
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_3 = __this->___core_0;
		RsaCoreEngine_t4D04122BCF60C75CD631D5B9C234413509E1D478* L_4 = __this->___core_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___inBuf0;
		int32_t L_6 = ___inOff1;
		int32_t L_7 = ___inLen2;
		NullCheck(L_4);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(7 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertInput(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		NullCheck(L_3);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9;
		L_9 = VirtualFuncInvoker1< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(9 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ProcessBlock(Org.BouncyCastle.Math.BigInteger) */, L_3, L_8);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(8 /* System.Byte[] Org.BouncyCastle.Crypto.Engines.RsaCoreEngine::ConvertOutput(Org.BouncyCastle.Math.BigInteger) */, L_2, L_9);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.RsaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsaEngine__ctor_m3ECE57934A4D82BDA8CB3E1A704203101146BC8B (RsaEngine_tA0D2BC980BA0233F3F706CF910C6B715C7CBB7A5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine_Init_m3718E68F267571CDE30EC835DED44630560EC7C3 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_7 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = SeedEngine_createWorkingKey_mCD8CCE60CC0711EB1D980D1334E22AC543AE9196(__this, L_2, NULL);
		__this->___wKey_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wKey_6), (void*)L_3);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.SeedEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SeedEngine_get_AlgorithmName_mA80D74B8D3C37EDF9384BEB3F9FF6FD3BAC9DA0A (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18B74F30D80838D0CDF4092D72E6A4A0FE098B62);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral18B74F30D80838D0CDF4092D72E6A4A0FE098B62;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.SeedEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeedEngine_get_IsPartialBlockOkay_m588199F73C69F80A9996A581BDDF14AAE0FC9AFB (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_GetBlockSize_mBF08C1D0C3D82D6C4CEE4CE6A655F3CD1F0C0698 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_ProcessBlock_mD50118DC032887CB68ED4E608B18F421A04CC5B4 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuf0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBuf2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___wKey_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D65B278FAAF69167BD4784DE725A62671D05EC1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SeedEngine_ProcessBlock_mD50118DC032887CB68ED4E608B18F421A04CC5B4_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inBuf0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___outBuf2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___inBuf0;
		int32_t L_7 = ___inOff1;
		int64_t L_8;
		L_8 = SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC(__this, L_6, L_7, NULL);
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inBuf0;
		int32_t L_10 = ___inOff1;
		int64_t L_11;
		L_11 = SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC(__this, L_9, ((int32_t)il2cpp_codegen_add(L_10, 8)), NULL);
		V_1 = L_11;
		bool L_12 = __this->___forEncryption_7;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		V_2 = 0;
		goto IL_0078;
	}

IL_0050:
	{
		int64_t L_13 = V_1;
		V_3 = L_13;
		int64_t L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___wKey_6;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply(2, L_16));
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___wKey_6;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_20)), 1));
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int64_t L_23 = V_1;
		int64_t L_24;
		L_24 = SeedEngine_F_mC15C1A202E153D932388B9AE18F547D51FECD41F(__this, L_18, L_22, L_23, NULL);
		V_1 = ((int64_t)(L_14^L_24));
		int64_t L_25 = V_3;
		V_0 = L_25;
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0078:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)16))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_00b8;
	}

IL_007f:
	{
		V_4 = ((int32_t)15);
		goto IL_00b3;
	}

IL_0085:
	{
		int64_t L_28 = V_1;
		V_5 = L_28;
		int64_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___wKey_6;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_multiply(2, L_31));
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___wKey_6;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_35)), 1));
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int64_t L_38 = V_1;
		int64_t L_39;
		L_39 = SeedEngine_F_mC15C1A202E153D932388B9AE18F547D51FECD41F(__this, L_33, L_37, L_38, NULL);
		V_1 = ((int64_t)(L_29^L_39));
		int64_t L_40 = V_5;
		V_0 = L_40;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
	}

IL_00b3:
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_00b8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___outBuf2;
		int32_t L_44 = ___outOff3;
		int64_t L_45 = V_1;
		SeedEngine_longToBytes_mDCD190BB2E965E6C98E31C13B181538C0012E5A7(__this, L_43, L_44, L_45, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___outBuf2;
		int32_t L_47 = ___outOff3;
		int64_t L_48 = V_0;
		SeedEngine_longToBytes_mDCD190BB2E965E6C98E31C13B181538C0012E5A7(__this, L_46, ((int32_t)il2cpp_codegen_add(L_47, 8)), L_48, NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine_Reset_m843D75E36A4FBC6688BD96A0529F2707A27DB818 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::createWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* SeedEngine_createWorkingKey_mCD8CCE60CC0711EB1D980D1334E22AC543AE9196 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inKey0;
		int64_t L_2;
		L_2 = SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC(__this, L_1, 0, NULL);
		V_1 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inKey0;
		int64_t L_4;
		L_4 = SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC(__this, L_3, 8, NULL);
		V_2 = L_4;
		int64_t L_5 = V_1;
		int32_t L_6;
		L_6 = SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D(__this, L_5, NULL);
		V_3 = L_6;
		int64_t L_7 = V_1;
		int32_t L_8;
		L_8 = SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA(__this, L_7, NULL);
		V_4 = L_8;
		int64_t L_9 = V_2;
		int32_t L_10;
		L_10 = SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D(__this, L_9, NULL);
		V_5 = L_10;
		int64_t L_11 = V_2;
		int32_t L_12;
		L_12 = SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA(__this, L_11, NULL);
		V_6 = L_12;
		V_7 = 0;
		goto IL_00b8;
	}

IL_0042:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		int32_t L_14 = V_7;
		int32_t L_15 = V_3;
		int32_t L_16 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___KC_5;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21;
		L_21 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), (int32_t)L_20)), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(2, L_14))), (int32_t)L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_7;
		int32_t L_24 = V_4;
		int32_t L_25 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___KC_5;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_24, L_25)), (int32_t)L_29)), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_23)), 1))), (int32_t)L_30);
		int32_t L_31 = V_7;
		if (((int32_t)(L_31%2)))
		{
			goto IL_0098;
		}
	}
	{
		int64_t L_32 = V_1;
		int64_t L_33;
		L_33 = SeedEngine_rotateRight8_mD5DC6B20BF4A062A1BF87EC5B9D51AD65E34509A(__this, L_32, NULL);
		V_1 = L_33;
		int64_t L_34 = V_1;
		int32_t L_35;
		L_35 = SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D(__this, L_34, NULL);
		V_3 = L_35;
		int64_t L_36 = V_1;
		int32_t L_37;
		L_37 = SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA(__this, L_36, NULL);
		V_4 = L_37;
		goto IL_00b2;
	}

IL_0098:
	{
		int64_t L_38 = V_2;
		int64_t L_39;
		L_39 = SeedEngine_rotateLeft8_mD36561373EDFAAFB97864CAFD120CD48B75597BD(__this, L_38, NULL);
		V_2 = L_39;
		int64_t L_40 = V_2;
		int32_t L_41;
		L_41 = SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D(__this, L_40, NULL);
		V_5 = L_41;
		int64_t L_42 = V_2;
		int32_t L_43;
		L_43 = SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA(__this, L_42, NULL);
		V_6 = L_43;
	}

IL_00b2:
	{
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b8:
	{
		int32_t L_45 = V_7;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)16))))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_0;
		return L_46;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_extractW1_m4787FFEB2C99C71CBFC2FC7074C580359F3B87BA (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___lVal0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___lVal0;
		return ((int32_t)L_0);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_extractW0_m43D6ABC0063AE52BF1A5E612C89DC2215F9D352D (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___lVal0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___lVal0;
		return ((int32_t)((int64_t)(L_0>>((int32_t)32))));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateLeft8(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_rotateLeft8_mD36561373EDFAAFB97864CAFD120CD48B75597BD (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___x0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___x0;
		int64_t L_1 = ___x0;
		return ((int64_t)(((int64_t)(L_0<<8))|((int64_t)((uint64_t)L_1>>((int32_t)56)))));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateRight8(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_rotateRight8_mD5DC6B20BF4A062A1BF87EC5B9D51AD65E34509A (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int64_t ___x0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___x0;
		int64_t L_1 = ___x0;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>8))|((int64_t)(L_1<<((int32_t)56)))));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::bytesToLong(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_bytesToLong_m077049192F37785C5572A940C7AD8E7D42DC19CC (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcOff1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___src0;
		int32_t L_2 = V_1;
		int32_t L_3 = ___srcOff1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(L_0<<8)), ((int64_t)((int32_t)((int32_t)L_5&((int32_t)255))))));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)7)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::longToBytes(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine_longToBytes_mDCD190BB2E965E6C98E31C13B181538C0012E5A7 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest0, int32_t ___destOff1, int64_t ___value2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dest0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___destOff1;
		int64_t L_3 = ___value2;
		int32_t L_4 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_3>>((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(7, L_4)), 8))&((int32_t)63)))))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::G(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS0_1;
		int32_t L_1 = ___x0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)255)));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS1_2;
		int32_t L_5 = ___x0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)(L_5>>8))&((int32_t)255)));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS2_3;
		int32_t L_9 = ___x0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((int32_t)(L_9>>((int32_t)16)))&((int32_t)255)));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS3_4;
		int32_t L_13 = ___x0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)(((int32_t)(L_13>>((int32_t)24)))&((int32_t)255)));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3^(int32_t)L_7))^(int32_t)L_11))^(int32_t)L_15));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::F(System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SeedEngine_F_mC15C1A202E153D932388B9AE18F547D51FECD41F (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___ki00, int32_t ___ki11, int64_t ___r2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___r2;
		V_0 = ((int32_t)((int64_t)(L_0>>((int32_t)32))));
		int64_t L_1 = ___r2;
		V_1 = ((int32_t)L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = ___ki00;
		int32_t L_4 = V_1;
		int32_t L_5 = ___ki11;
		int32_t L_6;
		L_6 = SeedEngine_phaseCalc2_mB2F42E726A5A21DAAC7B6FFE277347CB64D275F7(__this, L_2, L_3, L_4, L_5, NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		int32_t L_9 = ___ki00;
		int32_t L_10 = V_1;
		int32_t L_11 = ___ki11;
		int32_t L_12;
		L_12 = SeedEngine_phaseCalc1_mD537C2862BED9109A8EC61CBCD7EAF007EE671EF(__this, L_8, L_9, L_10, L_11, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, L_12));
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		return ((int64_t)(((int64_t)(((int64_t)L_13)<<((int32_t)32)))|((int64_t)(((int64_t)L_14)&((int64_t)(uint64_t)((uint32_t)(-1)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_phaseCalc1_mD537C2862BED9109A8EC61CBCD7EAF007EE671EF (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___r00;
		int32_t L_1 = ___ki01;
		int32_t L_2 = ___r12;
		int32_t L_3 = ___ki13;
		int32_t L_4;
		L_4 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)(((int32_t)(L_0^L_1))^((int32_t)(L_2^L_3)))), NULL);
		int32_t L_5 = ___r00;
		int32_t L_6 = ___ki01;
		int32_t L_7;
		L_7 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(L_5^L_6)))), NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeedEngine_phaseCalc2_mB2F42E726A5A21DAAC7B6FFE277347CB64D275F7 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___r00;
		int32_t L_1 = ___ki01;
		int32_t L_2 = ___r12;
		int32_t L_3 = ___ki13;
		int32_t L_4;
		L_4 = SeedEngine_phaseCalc1_mD537C2862BED9109A8EC61CBCD7EAF007EE671EF(__this, L_0, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___r00;
		int32_t L_6 = ___ki01;
		int32_t L_7 = ___r12;
		int32_t L_8 = ___ki13;
		int32_t L_9;
		L_9 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)(((int32_t)(L_5^L_6))^((int32_t)(L_7^L_8)))), NULL);
		int32_t L_10;
		L_10 = SeedEngine_G_m55D5F8A799461B39970AC62BDD7C4E0288A7C79B(__this, ((int32_t)il2cpp_codegen_add(L_4, L_9)), NULL);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine__cctor_m1723557E323E9EDF652AE3B6F863E3986B9CC4DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D1_143_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D2_144_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D3_145_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D4_146_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D5_147_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D1_143_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS0_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS0_1), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D2_144_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS1_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS1_2), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D3_145_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS2_3), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D4_146_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS3_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___SS3_4), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001635U2D5_147_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___KC_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_StaticFields*)il2cpp_codegen_static_fields_for(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var))->___KC_5), (void*)L_13);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedEngine__ctor_m8D9B73C3169D65A138076A76AD9BD9AD4020A817 (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.SeedWrapEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedWrapEngine__ctor_m62CD939DD1237975F286174F628898AA8EAD1F48 (SeedWrapEngine_t083783C050C6EDEA18DF55D83C592CFAFBD4777F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4* L_0 = (SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4*)il2cpp_codegen_object_new(SeedEngine_t7FF0174149C0E012209C1212B435AE3906483CD4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SeedEngine__ctor_m8D9B73C3169D65A138076A76AD9BD9AD4020A817(L_0, NULL);
		Rfc3394WrapEngine__ctor_m12BC3AD127033F7EAC9006FDF30AFDBCBACCA604(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Init_mC05C856DB27CE8F552AA7FE9C69F2D6AC5CF9BE8 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, bool ___encrypting0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName() */, __this);
		RuntimeObject* L_2 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A0FABAE51E3B4BABEF37449D8A7FE638A975502)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerpentEngineBase_Init_mC05C856DB27CE8F552AA7FE9C69F2D6AC5CF9BE8_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_6 = ___encrypting0;
		__this->___encrypting_3 = L_6;
		RuntimeObject* L_7 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = VirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::MakeWorkingKey(System.Byte[]) */, __this, L_8);
		__this->___wKey_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wKey_4), (void*)L_9);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerpentEngineBase_get_AlgorithmName_mCF6A28B8965D92150E28F21ABB87B68FB0EC3800 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerpentEngineBase_get_IsPartialBlockOkay_mA48B236E4BCCBB6CED2383C4BC9628F23BA36B17 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_GetBlockSize_m2BF4A0CE7024C1FE6DEDAF95EC6CA9708A706CEC (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var))->___BlockSize_2;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_ProcessBlock_m569816A7889A73B2110921F076B037F23FC99E05 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___wKey_4;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerpentEngineBase_ProcessBlock_m569816A7889A73B2110921F076B037F23FC99E05_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_6 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var))->___BlockSize_2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_4, L_5, L_6, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output2;
		int32_t L_8 = ___outOff3;
		int32_t L_9 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var))->___BlockSize_2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_7, L_8, L_9, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_10 = __this->___encrypting_3;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		VirtualActionInvoker4< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_11, L_12, L_13, L_14);
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___output2;
		int32_t L_18 = ___outOff3;
		VirtualActionInvoker4< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_15, L_16, L_17, L_18);
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_19 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var))->___BlockSize_2;
		return L_19;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Reset_m1490AD6F4F00A38484E46E1C73293E55E901100F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28 (int32_t ___x0, int32_t ___bits1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___bits1;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143 (int32_t ___x0, int32_t ___bits1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___bits1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___bits1;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)(L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___d3;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = ___c2;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2^L_3));
		int32_t L_4 = ___b1;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		int32_t L_6 = ___a0;
		int32_t L_7 = ___d3;
		int32_t L_8 = V_2;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_6&L_7))^L_8));
		int32_t L_9 = ___a0;
		int32_t L_10 = ___b1;
		int32_t L_11 = V_0;
		V_3 = ((int32_t)(L_9^((int32_t)(L_10&L_11))));
		int32_t L_12 = V_2;
		int32_t L_13 = ___c2;
		int32_t L_14 = V_3;
		__this->___X2_7 = ((int32_t)(L_12^((int32_t)(L_13|L_14))));
		int32_t L_15 = __this->___X3_8;
		int32_t L_16 = V_1;
		int32_t L_17 = V_3;
		V_4 = ((int32_t)(L_15&((int32_t)(L_16^L_17))));
		int32_t L_18 = V_1;
		int32_t L_19 = V_4;
		__this->___X1_6 = ((int32_t)(((~L_18))^L_19));
		int32_t L_20 = V_4;
		int32_t L_21 = V_3;
		__this->___X0_5 = ((int32_t)(L_20^((~L_21))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___a0;
		V_0 = ((~L_0));
		int32_t L_1 = ___a0;
		int32_t L_2 = ___b1;
		V_1 = ((int32_t)(L_1^L_2));
		int32_t L_3 = ___d3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_3^((int32_t)(L_4|L_5))));
		int32_t L_6 = ___c2;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		int32_t L_8 = V_1;
		int32_t L_9 = V_3;
		__this->___X2_7 = ((int32_t)(L_8^L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = ___d3;
		int32_t L_12 = V_1;
		V_4 = ((int32_t)(L_10^((int32_t)(L_11&L_12))));
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___X2_7;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_13^((int32_t)(L_14&L_15))));
		int32_t L_16 = ___a0;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = __this->___X1_6;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_16&L_17))^((int32_t)(L_18|L_19))));
		int32_t L_20 = __this->___X3_8;
		int32_t L_21 = V_3;
		int32_t L_22 = V_4;
		__this->___X0_5 = ((int32_t)(L_20^((int32_t)(L_21^L_22))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___b1;
		int32_t L_1 = ___a0;
		V_0 = ((int32_t)(L_0^((~L_1))));
		int32_t L_2 = ___c2;
		int32_t L_3 = ___a0;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_2^((int32_t)(L_3|L_4))));
		int32_t L_5 = ___d3;
		int32_t L_6 = V_1;
		__this->___X2_7 = ((int32_t)(L_5^L_6));
		int32_t L_7 = ___b1;
		int32_t L_8 = ___d3;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)(L_7^((int32_t)(L_8|L_9))));
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___X2_7;
		V_3 = ((int32_t)(L_10^L_11));
		int32_t L_12 = V_3;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		__this->___X3_8 = ((int32_t)(L_12^((int32_t)(L_13&L_14))));
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		V_4 = ((int32_t)(L_15^L_16));
		int32_t L_17 = __this->___X3_8;
		int32_t L_18 = V_4;
		__this->___X1_6 = ((int32_t)(L_17^L_18));
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		__this->___X0_5 = ((int32_t)(L_19^((int32_t)(L_20&L_21))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___b1;
		int32_t L_1 = ___d3;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = ___a0;
		int32_t L_3 = ___b1;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_2^((int32_t)(L_3&L_4))));
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_5^L_6));
		int32_t L_7 = ___c2;
		int32_t L_8 = V_2;
		__this->___X3_8 = ((int32_t)(L_7^L_8));
		int32_t L_9 = ___b1;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_9^((int32_t)(L_10&L_11))));
		int32_t L_12 = __this->___X3_8;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)(L_12|L_13));
		int32_t L_14 = V_1;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_14^L_15));
		int32_t L_16 = __this->___X1_6;
		V_5 = ((~L_16));
		int32_t L_17 = __this->___X3_8;
		int32_t L_18 = V_3;
		V_6 = ((int32_t)(L_17^L_18));
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		__this->___X0_5 = ((int32_t)(L_19^L_20));
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		int32_t L_23 = V_6;
		__this->___X2_7 = ((int32_t)(L_21^((int32_t)(L_22|L_23))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___a0;
		V_0 = ((~L_0));
		int32_t L_1 = ___b1;
		int32_t L_2 = ___d3;
		V_1 = ((int32_t)(L_1^L_2));
		int32_t L_3 = ___c2;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)(L_3&L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		__this->___X0_5 = ((int32_t)(L_5^L_6));
		int32_t L_7 = ___c2;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7^L_8));
		int32_t L_9 = ___c2;
		int32_t L_10 = __this->___X0_5;
		V_4 = ((int32_t)(L_9^L_10));
		int32_t L_11 = ___b1;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11&L_12));
		int32_t L_13 = V_3;
		int32_t L_14 = V_5;
		__this->___X3_8 = ((int32_t)(L_13^L_14));
		int32_t L_15 = ___a0;
		int32_t L_16 = ___d3;
		int32_t L_17 = V_5;
		int32_t L_18 = __this->___X0_5;
		int32_t L_19 = V_3;
		__this->___X2_7 = ((int32_t)(L_15^((int32_t)(((int32_t)(L_16|L_17))&((int32_t)(L_18|L_19))))));
		int32_t L_20 = V_1;
		int32_t L_21 = __this->___X3_8;
		int32_t L_22 = __this->___X2_7;
		int32_t L_23 = ___d3;
		int32_t L_24 = V_0;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_20^L_21))^((int32_t)(L_22^((int32_t)(L_23|L_24))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___b1;
		int32_t L_1 = ___d3;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = V_0;
		V_1 = ((~L_2));
		int32_t L_3 = ___a0;
		int32_t L_4 = ___c2;
		V_2 = ((int32_t)(L_3^L_4));
		int32_t L_5 = ___c2;
		int32_t L_6 = V_0;
		V_3 = ((int32_t)(L_5^L_6));
		int32_t L_7 = ___b1;
		int32_t L_8 = V_3;
		V_4 = ((int32_t)(L_7&L_8));
		int32_t L_9 = V_2;
		int32_t L_10 = V_4;
		__this->___X0_5 = ((int32_t)(L_9^L_10));
		int32_t L_11 = ___a0;
		int32_t L_12 = V_1;
		V_5 = ((int32_t)(L_11|L_12));
		int32_t L_13 = ___d3;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13^L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(L_15|L_16));
		int32_t L_17 = V_0;
		int32_t L_18 = V_7;
		__this->___X3_8 = ((int32_t)(L_17^L_18));
		int32_t L_19 = V_3;
		V_8 = ((~L_19));
		int32_t L_20 = __this->___X0_5;
		int32_t L_21 = __this->___X3_8;
		V_9 = ((int32_t)(L_20|L_21));
		int32_t L_22 = V_8;
		int32_t L_23 = V_9;
		__this->___X1_6 = ((int32_t)(L_22^L_23));
		int32_t L_24 = ___d3;
		int32_t L_25 = V_8;
		int32_t L_26 = V_2;
		int32_t L_27 = V_9;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_24&L_25))^((int32_t)(L_26^L_27))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = ___a0;
		int32_t L_3 = ___c2;
		V_1 = ((int32_t)(L_2&L_3));
		int32_t L_4 = ___a0;
		int32_t L_5 = ___d3;
		V_2 = ((int32_t)(L_4|L_5));
		int32_t L_6 = ___c2;
		int32_t L_7 = ___d3;
		V_3 = ((int32_t)(L_6^L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		V_4 = ((int32_t)(L_8&L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = V_4;
		V_5 = ((int32_t)(L_10|L_11));
		int32_t L_12 = V_3;
		int32_t L_13 = V_5;
		__this->___X2_7 = ((int32_t)(L_12^L_13));
		int32_t L_14 = ___b1;
		int32_t L_15 = V_2;
		V_6 = ((int32_t)(L_14^L_15));
		int32_t L_16 = V_5;
		int32_t L_17 = V_6;
		V_7 = ((int32_t)(L_16^L_17));
		int32_t L_18 = V_3;
		int32_t L_19 = V_7;
		V_8 = ((int32_t)(L_18&L_19));
		int32_t L_20 = V_0;
		int32_t L_21 = V_8;
		__this->___X0_5 = ((int32_t)(L_20^L_21));
		int32_t L_22 = __this->___X2_7;
		int32_t L_23 = __this->___X0_5;
		V_9 = ((int32_t)(L_22&L_23));
		int32_t L_24 = V_7;
		int32_t L_25 = V_9;
		__this->___X1_6 = ((int32_t)(L_24^L_25));
		int32_t L_26 = ___b1;
		int32_t L_27 = ___d3;
		int32_t L_28 = V_3;
		int32_t L_29 = V_9;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_26|L_27))^((int32_t)(L_28^L_29))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		V_0 = ((int32_t)(L_0|L_1));
		int32_t L_2 = ___b1;
		int32_t L_3 = ___c2;
		V_1 = ((int32_t)(L_2^L_3));
		int32_t L_4 = ___b1;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4&L_5));
		int32_t L_6 = ___a0;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		int32_t L_8 = ___c2;
		int32_t L_9 = V_3;
		V_4 = ((int32_t)(L_8^L_9));
		int32_t L_10 = ___d3;
		int32_t L_11 = V_3;
		V_5 = ((int32_t)(L_10|L_11));
		int32_t L_12 = V_1;
		int32_t L_13 = V_5;
		__this->___X0_5 = ((int32_t)(L_12^L_13));
		int32_t L_14 = V_1;
		int32_t L_15 = V_5;
		V_6 = ((int32_t)(L_14|L_15));
		int32_t L_16 = ___d3;
		int32_t L_17 = V_6;
		V_7 = ((int32_t)(L_16^L_17));
		int32_t L_18 = V_4;
		int32_t L_19 = V_7;
		__this->___X2_7 = ((int32_t)(L_18^L_19));
		int32_t L_20 = V_0;
		int32_t L_21 = V_7;
		V_8 = ((int32_t)(L_20^L_21));
		int32_t L_22 = __this->___X0_5;
		int32_t L_23 = V_8;
		V_9 = ((int32_t)(L_22&L_23));
		int32_t L_24 = V_3;
		int32_t L_25 = V_9;
		__this->___X3_8 = ((int32_t)(L_24^L_25));
		int32_t L_26 = __this->___X3_8;
		int32_t L_27 = __this->___X0_5;
		int32_t L_28 = V_8;
		__this->___X1_6 = ((int32_t)(L_26^((int32_t)(L_27^L_28))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___d3;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = ___d3;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		int32_t L_4 = ___c2;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		int32_t L_6 = ___b1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6|L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_3;
		__this->___X3_8 = ((int32_t)(L_8^L_9));
		int32_t L_10 = ___b1;
		V_4 = ((~L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11|L_12));
		int32_t L_13 = V_2;
		int32_t L_14 = V_5;
		__this->___X0_5 = ((int32_t)(L_13^L_14));
		int32_t L_15 = ___a0;
		int32_t L_16 = __this->___X0_5;
		V_6 = ((int32_t)(L_15&L_16));
		int32_t L_17 = V_0;
		int32_t L_18 = V_4;
		V_7 = ((int32_t)(L_17^L_18));
		int32_t L_19 = V_3;
		int32_t L_20 = V_7;
		V_8 = ((int32_t)(L_19&L_20));
		int32_t L_21 = V_6;
		int32_t L_22 = V_8;
		__this->___X2_7 = ((int32_t)(L_21^L_22));
		int32_t L_23 = ___a0;
		int32_t L_24 = V_2;
		int32_t L_25 = V_7;
		int32_t L_26 = __this->___X2_7;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_23^L_24))^((int32_t)(L_25&L_26))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___c2;
		int32_t L_1 = ___d3;
		V_0 = ((int32_t)(L_0|L_1));
		int32_t L_2 = ___a0;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		int32_t L_4 = ___b1;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		int32_t L_6 = ___a0;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6&L_7));
		int32_t L_8 = ___c2;
		int32_t L_9 = V_3;
		V_4 = ((int32_t)(L_8^L_9));
		int32_t L_10 = ___d3;
		int32_t L_11 = V_4;
		__this->___X1_6 = ((int32_t)(L_10^L_11));
		int32_t L_12 = ___a0;
		V_5 = ((~L_12));
		int32_t L_13 = V_4;
		int32_t L_14 = __this->___X1_6;
		V_6 = ((int32_t)(L_13&L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		__this->___X3_8 = ((int32_t)(L_15^L_16));
		int32_t L_17 = __this->___X1_6;
		int32_t L_18 = V_5;
		V_7 = ((int32_t)(L_17|L_18));
		int32_t L_19 = ___d3;
		int32_t L_20 = V_7;
		V_8 = ((int32_t)(L_19^L_20));
		int32_t L_21 = __this->___X3_8;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		int32_t L_23 = V_2;
		int32_t L_24 = V_8;
		int32_t L_25 = __this->___X1_6;
		int32_t L_26 = V_5;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25^L_26))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___a0;
		V_0 = ((~L_0));
		int32_t L_1 = ___a0;
		int32_t L_2 = ___b1;
		V_1 = ((int32_t)(L_1^L_2));
		int32_t L_3 = ___a0;
		int32_t L_4 = ___d3;
		V_2 = ((int32_t)(L_3^L_4));
		int32_t L_5 = ___c2;
		int32_t L_6 = V_0;
		V_3 = ((int32_t)(L_5^L_6));
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)(L_7|L_8));
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		__this->___X0_5 = ((int32_t)(L_9^L_10));
		int32_t L_11 = ___d3;
		int32_t L_12 = __this->___X0_5;
		V_5 = ((int32_t)(L_11&L_12));
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___X0_5;
		V_6 = ((int32_t)(L_13^L_14));
		int32_t L_15 = V_5;
		int32_t L_16 = V_6;
		__this->___X1_6 = ((int32_t)(L_15^L_16));
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___X0_5;
		V_7 = ((int32_t)(L_17|L_18));
		int32_t L_19 = V_1;
		int32_t L_20 = V_5;
		V_8 = ((int32_t)(L_19|L_20));
		int32_t L_21 = V_2;
		int32_t L_22 = V_7;
		V_9 = ((int32_t)(L_21^L_22));
		int32_t L_23 = V_8;
		int32_t L_24 = V_9;
		__this->___X2_7 = ((int32_t)(L_23^L_24));
		int32_t L_25 = ___b1;
		int32_t L_26 = V_5;
		int32_t L_27 = __this->___X1_6;
		int32_t L_28 = V_9;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_25^L_26))^((int32_t)(L_27&L_28))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___c2;
		V_0 = ((~L_0));
		int32_t L_1 = ___b1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_1&L_2));
		int32_t L_3 = ___d3;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(L_3^L_4));
		int32_t L_5 = ___a0;
		int32_t L_6 = V_2;
		V_3 = ((int32_t)(L_5&L_6));
		int32_t L_7 = ___b1;
		int32_t L_8 = V_0;
		V_4 = ((int32_t)(L_7^L_8));
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		__this->___X3_8 = ((int32_t)(L_9^L_10));
		int32_t L_11 = ___b1;
		int32_t L_12 = __this->___X3_8;
		V_5 = ((int32_t)(L_11|L_12));
		int32_t L_13 = ___a0;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13&L_14));
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		__this->___X1_6 = ((int32_t)(L_15^L_16));
		int32_t L_17 = ___a0;
		int32_t L_18 = ___d3;
		V_7 = ((int32_t)(L_17|L_18));
		int32_t L_19 = V_0;
		int32_t L_20 = V_5;
		V_8 = ((int32_t)(L_19^L_20));
		int32_t L_21 = V_7;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		int32_t L_23 = ___b1;
		int32_t L_24 = V_7;
		int32_t L_25 = V_3;
		int32_t L_26 = ___a0;
		int32_t L_27 = ___c2;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25|((int32_t)(L_26^L_27))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___a0;
		V_0 = ((~L_0));
		int32_t L_1 = ___a0;
		int32_t L_2 = ___d3;
		V_1 = ((int32_t)(L_1^L_2));
		int32_t L_3 = ___b1;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(L_3^L_4));
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_3 = ((int32_t)(L_5|L_6));
		int32_t L_7 = ___c2;
		int32_t L_8 = V_3;
		V_4 = ((int32_t)(L_7^L_8));
		int32_t L_9 = ___b1;
		int32_t L_10 = V_4;
		__this->___X1_6 = ((int32_t)(L_9^L_10));
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___X1_6;
		V_5 = ((int32_t)(L_11|L_12));
		int32_t L_13 = ___d3;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13^L_14));
		int32_t L_15 = V_4;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(L_15&L_16));
		int32_t L_17 = V_2;
		int32_t L_18 = V_7;
		__this->___X2_7 = ((int32_t)(L_17^L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = V_6;
		V_8 = ((int32_t)(L_19^L_20));
		int32_t L_21 = __this->___X2_7;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		int32_t L_23 = V_4;
		int32_t L_24 = V_2;
		int32_t L_25 = V_8;
		__this->___X3_8 = ((int32_t)(((~L_23))^((int32_t)(L_24&L_25))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___a0;
		V_0 = ((~L_0));
		int32_t L_1 = ___a0;
		int32_t L_2 = ___b1;
		V_1 = ((int32_t)(L_1^L_2));
		int32_t L_3 = ___c2;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(L_3^L_4));
		int32_t L_5 = ___c2;
		int32_t L_6 = V_0;
		V_3 = ((int32_t)(L_5|L_6));
		int32_t L_7 = ___d3;
		int32_t L_8 = V_3;
		V_4 = ((int32_t)(L_7^L_8));
		int32_t L_9 = V_2;
		int32_t L_10 = V_4;
		__this->___X1_6 = ((int32_t)(L_9^L_10));
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11&L_12));
		int32_t L_13 = V_1;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13^L_14));
		int32_t L_15 = ___b1;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(L_15|L_16));
		int32_t L_17 = V_4;
		int32_t L_18 = V_7;
		__this->___X3_8 = ((int32_t)(L_17^L_18));
		int32_t L_19 = ___b1;
		int32_t L_20 = __this->___X3_8;
		V_8 = ((int32_t)(L_19|L_20));
		int32_t L_21 = V_6;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		int32_t L_23 = ___d3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_8;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25^L_26))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___b1;
		int32_t L_1 = ___c2;
		V_0 = ((int32_t)(L_0^L_1));
		int32_t L_2 = ___c2;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		int32_t L_4 = ___d3;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		int32_t L_6 = ___a0;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		int32_t L_8 = ___d3;
		int32_t L_9 = V_0;
		V_4 = ((int32_t)(L_8|L_9));
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		V_5 = ((int32_t)(L_10&L_11));
		int32_t L_12 = ___b1;
		int32_t L_13 = V_5;
		__this->___X1_6 = ((int32_t)(L_12^L_13));
		int32_t L_14 = V_2;
		int32_t L_15 = __this->___X1_6;
		V_6 = ((int32_t)(L_14|L_15));
		int32_t L_16 = ___a0;
		int32_t L_17 = V_3;
		V_7 = ((int32_t)(L_16&L_17));
		int32_t L_18 = V_0;
		int32_t L_19 = V_7;
		__this->___X3_8 = ((int32_t)(L_18^L_19));
		int32_t L_20 = V_3;
		int32_t L_21 = V_6;
		V_8 = ((int32_t)(L_20^L_21));
		int32_t L_22 = __this->___X3_8;
		int32_t L_23 = V_8;
		V_9 = ((int32_t)(L_22&L_23));
		int32_t L_24 = V_2;
		int32_t L_25 = V_9;
		__this->___X2_7 = ((int32_t)(L_24^L_25));
		int32_t L_26 = V_8;
		int32_t L_27 = __this->___X3_8;
		int32_t L_28 = __this->___X2_7;
		__this->___X0_5 = ((int32_t)(((~L_26))^((int32_t)(L_27&L_28))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___c2;
		int32_t L_1 = ___a0;
		int32_t L_2 = ___b1;
		V_0 = ((int32_t)(L_0|((int32_t)(L_1&L_2))));
		int32_t L_3 = ___d3;
		int32_t L_4 = ___a0;
		int32_t L_5 = ___b1;
		V_1 = ((int32_t)(L_3&((int32_t)(L_4|L_5))));
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		__this->___X3_8 = ((int32_t)(L_6^L_7));
		int32_t L_8 = ___d3;
		V_2 = ((~L_8));
		int32_t L_9 = ___b1;
		int32_t L_10 = V_1;
		V_3 = ((int32_t)(L_9^L_10));
		int32_t L_11 = V_3;
		int32_t L_12 = __this->___X3_8;
		int32_t L_13 = V_2;
		V_4 = ((int32_t)(L_11|((int32_t)(L_12^L_13))));
		int32_t L_14 = ___a0;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_14^L_15));
		int32_t L_16 = ___c2;
		int32_t L_17 = V_3;
		int32_t L_18 = ___d3;
		int32_t L_19 = __this->___X1_6;
		__this->___X0_5 = ((int32_t)(((int32_t)(L_16^L_17))^((int32_t)(L_18|L_19))));
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___X1_6;
		int32_t L_22 = __this->___X0_5;
		int32_t L_23 = ___a0;
		int32_t L_24 = __this->___X3_8;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_20^L_21))^((int32_t)(L_22^((int32_t)(L_23&L_24))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___X0_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(L_0, ((int32_t)13), NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___X2_7;
		int32_t L_3;
		L_3 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(L_2, 3, NULL);
		V_1 = L_3;
		int32_t L_4 = __this->___X1_6;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(((int32_t)(L_4^L_5))^L_6));
		int32_t L_7 = __this->___X3_8;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_3 = ((int32_t)(((int32_t)(L_7^L_8))^((int32_t)(L_9<<3))));
		int32_t L_10 = V_2;
		int32_t L_11;
		L_11 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(L_10, 1, NULL);
		__this->___X1_6 = L_11;
		int32_t L_12 = V_3;
		int32_t L_13;
		L_13 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(L_12, 7, NULL);
		__this->___X3_8 = L_13;
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___X1_6;
		int32_t L_16 = __this->___X3_8;
		int32_t L_17;
		L_17 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(L_14^L_15))^L_16)), 5, NULL);
		__this->___X0_5 = L_17;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___X3_8;
		int32_t L_20 = __this->___X1_6;
		int32_t L_21;
		L_21 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(L_18^L_19))^((int32_t)(L_20<<7)))), ((int32_t)22), NULL);
		__this->___X2_7 = L_21;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___X2_7;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_0, ((int32_t)22), NULL);
		int32_t L_2 = __this->___X3_8;
		int32_t L_3 = __this->___X1_6;
		V_0 = ((int32_t)(((int32_t)(L_1^L_2))^((int32_t)(L_3<<7))));
		int32_t L_4 = __this->___X0_5;
		int32_t L_5;
		L_5 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_4, 5, NULL);
		int32_t L_6 = __this->___X1_6;
		int32_t L_7 = __this->___X3_8;
		V_1 = ((int32_t)(((int32_t)(L_5^L_6))^L_7));
		int32_t L_8 = __this->___X3_8;
		int32_t L_9;
		L_9 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_8, 7, NULL);
		V_2 = L_9;
		int32_t L_10 = __this->___X1_6;
		int32_t L_11;
		L_11 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_10, 1, NULL);
		V_3 = L_11;
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_12^L_13))^((int32_t)(L_14<<3))));
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_15^L_16))^L_17));
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_18, 3, NULL);
		__this->___X2_7 = L_19;
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = SerpentEngineBase_RotateRight_m7DFB5371F9325A9E1DFA23055F1F590B2064C143(L_20, ((int32_t)13), NULL);
		__this->___X0_5 = L_21;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__cctor_m87B41C39272C83822260FEE63290C352B9F65A12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var))->___BlockSize_2 = ((int32_t)16);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngine::MakeWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* SerpentEngine_MakeWorkingKey_m98C25B2203D5C92FDD194EC926C41EE80DF14CC8 (SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___key0;
		int32_t L_5 = V_1;
		uint32_t L_6;
		L_6 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_4, L_5, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 4));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___key0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, 4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_10 = V_1;
		if (((int32_t)(L_10%4)))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___key0;
		int32_t L_15 = V_1;
		uint32_t L_16;
		L_16 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_14, L_15, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_16);
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)8)))
		{
			goto IL_0052;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)1);
		goto IL_0052;
	}

IL_0047:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerpentEngine_MakeWorkingKey_m98C25B2203D5C92FDD194EC926C41EE80DF14CC8_RuntimeMethod_var)));
	}

IL_0052:
	{
		V_3 = ((int32_t)132);
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_4 = L_22;
		V_5 = 8;
		goto IL_009c;
	}

IL_0065:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_0;
		int32_t L_24 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 8));
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 5));
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 3));
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		int32_t L_41 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_28^L_32))^L_36))^L_40))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_41, 8)))), ((int32_t)11), NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_009c:
	{
		int32_t L_44 = V_5;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)16))))
		{
			goto IL_0065;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_45, 8, (RuntimeArray*)L_46, 0, 8, NULL);
		V_6 = 8;
		goto IL_00ec;
	}

IL_00b2:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_4;
		int32_t L_48 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_4;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 8));
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_4;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract(L_54, 5));
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_4;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 3));
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_4;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		int32_t L_65 = V_6;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_52^L_56))^L_60))^L_64))^((int32_t)-1640531527)))^L_65)), ((int32_t)11), NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)L_66);
		int32_t L_67 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00ec:
	{
		int32_t L_68 = V_6;
		int32_t L_69 = V_3;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00b2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_4;
		NullCheck(L_70);
		int32_t L_71 = 0;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_4;
		NullCheck(L_73);
		int32_t L_74 = 1;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_4;
		NullCheck(L_76);
		int32_t L_77 = 2;
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_4;
		NullCheck(L_79);
		int32_t L_80 = 3;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_72, L_75, L_78, L_81, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_4;
		int32_t L_83 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_83);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_4;
		int32_t L_85 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_85);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_4;
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_87);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_4;
		int32_t L_89 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_89);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_4;
		NullCheck(L_90);
		int32_t L_91 = 4;
		int32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_4;
		NullCheck(L_93);
		int32_t L_94 = 5;
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = V_4;
		NullCheck(L_96);
		int32_t L_97 = 6;
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_4;
		NullCheck(L_99);
		int32_t L_100 = 7;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_92, L_95, L_98, L_101, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_4;
		int32_t L_103 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_103);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_4;
		int32_t L_105 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_105);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = V_4;
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_107);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = V_4;
		int32_t L_109 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_109);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_4;
		NullCheck(L_110);
		int32_t L_111 = 8;
		int32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = V_4;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)9);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_4;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)10);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = V_4;
		NullCheck(L_119);
		int32_t L_120 = ((int32_t)11);
		int32_t L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_112, L_115, L_118, L_121, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_4;
		int32_t L_123 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_123);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = V_4;
		int32_t L_125 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_125);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_4;
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_127);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = V_4;
		int32_t L_129 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_129);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_4;
		NullCheck(L_130);
		int32_t L_131 = ((int32_t)12);
		int32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = V_4;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)13);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = V_4;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)14);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = V_4;
		NullCheck(L_139);
		int32_t L_140 = ((int32_t)15);
		int32_t L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_132, L_135, L_138, L_141, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = V_4;
		int32_t L_143 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_143);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = V_4;
		int32_t L_145 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_145);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = V_4;
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_147);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = V_4;
		int32_t L_149 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_149);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = V_4;
		NullCheck(L_150);
		int32_t L_151 = ((int32_t)16);
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = V_4;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)17);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = V_4;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)18);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = V_4;
		NullCheck(L_159);
		int32_t L_160 = ((int32_t)19);
		int32_t L_161 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_152, L_155, L_158, L_161, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = V_4;
		int32_t L_163 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_163);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = V_4;
		int32_t L_165 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_165);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = V_4;
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_167);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = V_4;
		int32_t L_169 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_169);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = V_4;
		NullCheck(L_170);
		int32_t L_171 = ((int32_t)20);
		int32_t L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = V_4;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)21);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = V_4;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)22);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_179 = V_4;
		NullCheck(L_179);
		int32_t L_180 = ((int32_t)23);
		int32_t L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_172, L_175, L_178, L_181, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_182 = V_4;
		int32_t L_183 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_183);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = V_4;
		int32_t L_185 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_185);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_4;
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_187);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = V_4;
		int32_t L_189 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_189);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_190 = V_4;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)24);
		int32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = V_4;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)25);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = V_4;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)26);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = V_4;
		NullCheck(L_199);
		int32_t L_200 = ((int32_t)27);
		int32_t L_201 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_192, L_195, L_198, L_201, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_202 = V_4;
		int32_t L_203 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_203);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = V_4;
		int32_t L_205 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_205);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_206 = V_4;
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_207);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = V_4;
		int32_t L_209 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_209);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = V_4;
		NullCheck(L_210);
		int32_t L_211 = ((int32_t)28);
		int32_t L_212 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = V_4;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)29);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = V_4;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)30);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_219 = V_4;
		NullCheck(L_219);
		int32_t L_220 = ((int32_t)31);
		int32_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_212, L_215, L_218, L_221, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = V_4;
		int32_t L_223 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_223);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = V_4;
		int32_t L_225 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_225);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_226 = V_4;
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_227);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = V_4;
		int32_t L_229 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_228);
		(L_228)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_229);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_230 = V_4;
		NullCheck(L_230);
		int32_t L_231 = ((int32_t)32);
		int32_t L_232 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = V_4;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)33);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = V_4;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)34);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_239 = V_4;
		NullCheck(L_239);
		int32_t L_240 = ((int32_t)35);
		int32_t L_241 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_232, L_235, L_238, L_241, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = V_4;
		int32_t L_243 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_242);
		(L_242)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_243);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = V_4;
		int32_t L_245 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_244);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_245);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_246 = V_4;
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_247);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = V_4;
		int32_t L_249 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_248);
		(L_248)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_249);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_250 = V_4;
		NullCheck(L_250);
		int32_t L_251 = ((int32_t)36);
		int32_t L_252 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = V_4;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)37);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = V_4;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)38);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_259 = V_4;
		NullCheck(L_259);
		int32_t L_260 = ((int32_t)39);
		int32_t L_261 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_252, L_255, L_258, L_261, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_4;
		int32_t L_263 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_262);
		(L_262)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_263);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = V_4;
		int32_t L_265 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_264);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_265);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_266 = V_4;
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_266);
		(L_266)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_267);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = V_4;
		int32_t L_269 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_268);
		(L_268)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_269);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_270 = V_4;
		NullCheck(L_270);
		int32_t L_271 = ((int32_t)40);
		int32_t L_272 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = V_4;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)41);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = V_4;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)42);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_279 = V_4;
		NullCheck(L_279);
		int32_t L_280 = ((int32_t)43);
		int32_t L_281 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_272, L_275, L_278, L_281, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_282 = V_4;
		int32_t L_283 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_282);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_283);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = V_4;
		int32_t L_285 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_284);
		(L_284)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_285);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286 = V_4;
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_287);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = V_4;
		int32_t L_289 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_288);
		(L_288)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_289);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_290 = V_4;
		NullCheck(L_290);
		int32_t L_291 = ((int32_t)44);
		int32_t L_292 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = V_4;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)45);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = V_4;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)46);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = V_4;
		NullCheck(L_299);
		int32_t L_300 = ((int32_t)47);
		int32_t L_301 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_292, L_295, L_298, L_301, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_302 = V_4;
		int32_t L_303 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_302);
		(L_302)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_303);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = V_4;
		int32_t L_305 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_304);
		(L_304)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_305);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_306 = V_4;
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_306);
		(L_306)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_307);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = V_4;
		int32_t L_309 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_308);
		(L_308)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_309);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = V_4;
		NullCheck(L_310);
		int32_t L_311 = ((int32_t)48);
		int32_t L_312 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_311));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = V_4;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)49);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = V_4;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)50);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_319 = V_4;
		NullCheck(L_319);
		int32_t L_320 = ((int32_t)51);
		int32_t L_321 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_312, L_315, L_318, L_321, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_322 = V_4;
		int32_t L_323 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_322);
		(L_322)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_323);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = V_4;
		int32_t L_325 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_324);
		(L_324)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_325);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = V_4;
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_326);
		(L_326)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_327);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = V_4;
		int32_t L_329 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_328);
		(L_328)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_329);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_330 = V_4;
		NullCheck(L_330);
		int32_t L_331 = ((int32_t)52);
		int32_t L_332 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = V_4;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)53);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = V_4;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)54);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_339 = V_4;
		NullCheck(L_339);
		int32_t L_340 = ((int32_t)55);
		int32_t L_341 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_332, L_335, L_338, L_341, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = V_4;
		int32_t L_343 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_343);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = V_4;
		int32_t L_345 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_345);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_346 = V_4;
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_347);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = V_4;
		int32_t L_349 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_349);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_350 = V_4;
		NullCheck(L_350);
		int32_t L_351 = ((int32_t)56);
		int32_t L_352 = (L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = V_4;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)57);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = V_4;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)58);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_359 = V_4;
		NullCheck(L_359);
		int32_t L_360 = ((int32_t)59);
		int32_t L_361 = (L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_352, L_355, L_358, L_361, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_362 = V_4;
		int32_t L_363 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_362);
		(L_362)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_363);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = V_4;
		int32_t L_365 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_364);
		(L_364)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_365);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = V_4;
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_367);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = V_4;
		int32_t L_369 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_368);
		(L_368)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_369);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_370 = V_4;
		NullCheck(L_370);
		int32_t L_371 = ((int32_t)60);
		int32_t L_372 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = V_4;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)61);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = V_4;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)62);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_379 = V_4;
		NullCheck(L_379);
		int32_t L_380 = ((int32_t)63);
		int32_t L_381 = (L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_372, L_375, L_378, L_381, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_382 = V_4;
		int32_t L_383 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_382);
		(L_382)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_383);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = V_4;
		int32_t L_385 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_384);
		(L_384)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_385);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_386 = V_4;
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_386);
		(L_386)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_387);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = V_4;
		int32_t L_389 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_388);
		(L_388)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_389);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_390 = V_4;
		NullCheck(L_390);
		int32_t L_391 = ((int32_t)64);
		int32_t L_392 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_391));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = V_4;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)65);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = V_4;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)66);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_399 = V_4;
		NullCheck(L_399);
		int32_t L_400 = ((int32_t)67);
		int32_t L_401 = (L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_400));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_392, L_395, L_398, L_401, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = V_4;
		int32_t L_403 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_403);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = V_4;
		int32_t L_405 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_404);
		(L_404)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_405);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = V_4;
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_407);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = V_4;
		int32_t L_409 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_408);
		(L_408)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_409);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_410 = V_4;
		NullCheck(L_410);
		int32_t L_411 = ((int32_t)68);
		int32_t L_412 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = V_4;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)69);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = V_4;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)70);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_419 = V_4;
		NullCheck(L_419);
		int32_t L_420 = ((int32_t)71);
		int32_t L_421 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_412, L_415, L_418, L_421, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_422 = V_4;
		int32_t L_423 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_422);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_423);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = V_4;
		int32_t L_425 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_424);
		(L_424)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_425);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_426 = V_4;
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_427);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = V_4;
		int32_t L_429 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_429);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_430 = V_4;
		NullCheck(L_430);
		int32_t L_431 = ((int32_t)72);
		int32_t L_432 = (L_430)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = V_4;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)73);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = V_4;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)74);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_439 = V_4;
		NullCheck(L_439);
		int32_t L_440 = ((int32_t)75);
		int32_t L_441 = (L_439)->GetAt(static_cast<il2cpp_array_size_t>(L_440));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_432, L_435, L_438, L_441, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_442 = V_4;
		int32_t L_443 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_442);
		(L_442)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_443);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = V_4;
		int32_t L_445 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_444);
		(L_444)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_445);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_446 = V_4;
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_446);
		(L_446)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_447);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = V_4;
		int32_t L_449 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_448);
		(L_448)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_449);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_450 = V_4;
		NullCheck(L_450);
		int32_t L_451 = ((int32_t)76);
		int32_t L_452 = (L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_451));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = V_4;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)77);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = V_4;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)78);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_459 = V_4;
		NullCheck(L_459);
		int32_t L_460 = ((int32_t)79);
		int32_t L_461 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_460));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_452, L_455, L_458, L_461, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_462 = V_4;
		int32_t L_463 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_462);
		(L_462)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_463);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = V_4;
		int32_t L_465 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_464);
		(L_464)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_465);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_466 = V_4;
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_466);
		(L_466)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_467);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = V_4;
		int32_t L_469 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_468);
		(L_468)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_469);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_470 = V_4;
		NullCheck(L_470);
		int32_t L_471 = ((int32_t)80);
		int32_t L_472 = (L_470)->GetAt(static_cast<il2cpp_array_size_t>(L_471));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = V_4;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)81);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = V_4;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)82);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_479 = V_4;
		NullCheck(L_479);
		int32_t L_480 = ((int32_t)83);
		int32_t L_481 = (L_479)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_472, L_475, L_478, L_481, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_482 = V_4;
		int32_t L_483 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_482);
		(L_482)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_483);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = V_4;
		int32_t L_485 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_484);
		(L_484)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_485);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_486 = V_4;
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_486);
		(L_486)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_487);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = V_4;
		int32_t L_489 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_488);
		(L_488)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_489);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_490 = V_4;
		NullCheck(L_490);
		int32_t L_491 = ((int32_t)84);
		int32_t L_492 = (L_490)->GetAt(static_cast<il2cpp_array_size_t>(L_491));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = V_4;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)85);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = V_4;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)86);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_499 = V_4;
		NullCheck(L_499);
		int32_t L_500 = ((int32_t)87);
		int32_t L_501 = (L_499)->GetAt(static_cast<il2cpp_array_size_t>(L_500));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_492, L_495, L_498, L_501, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_502 = V_4;
		int32_t L_503 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_502);
		(L_502)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_503);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = V_4;
		int32_t L_505 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_504);
		(L_504)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_505);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_506 = V_4;
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_506);
		(L_506)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_507);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = V_4;
		int32_t L_509 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_508);
		(L_508)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_509);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_510 = V_4;
		NullCheck(L_510);
		int32_t L_511 = ((int32_t)88);
		int32_t L_512 = (L_510)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = V_4;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)89);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = V_4;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)90);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_519 = V_4;
		NullCheck(L_519);
		int32_t L_520 = ((int32_t)91);
		int32_t L_521 = (L_519)->GetAt(static_cast<il2cpp_array_size_t>(L_520));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_512, L_515, L_518, L_521, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_522 = V_4;
		int32_t L_523 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_522);
		(L_522)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_523);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = V_4;
		int32_t L_525 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_524);
		(L_524)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_525);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = V_4;
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_526);
		(L_526)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_527);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_528 = V_4;
		int32_t L_529 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_528);
		(L_528)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_529);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = V_4;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)92);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = V_4;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)93);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = V_4;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)94);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_539 = V_4;
		NullCheck(L_539);
		int32_t L_540 = ((int32_t)95);
		int32_t L_541 = (L_539)->GetAt(static_cast<il2cpp_array_size_t>(L_540));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_532, L_535, L_538, L_541, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = V_4;
		int32_t L_543 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_542);
		(L_542)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_543);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_544 = V_4;
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_544);
		(L_544)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_545);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_546 = V_4;
		int32_t L_547 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_546);
		(L_546)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_547);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_548 = V_4;
		int32_t L_549 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_548);
		(L_548)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_549);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_550 = V_4;
		NullCheck(L_550);
		int32_t L_551 = ((int32_t)96);
		int32_t L_552 = (L_550)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = V_4;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)97);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_556 = V_4;
		NullCheck(L_556);
		int32_t L_557 = ((int32_t)98);
		int32_t L_558 = (L_556)->GetAt(static_cast<il2cpp_array_size_t>(L_557));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_559 = V_4;
		NullCheck(L_559);
		int32_t L_560 = ((int32_t)99);
		int32_t L_561 = (L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_552, L_555, L_558, L_561, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_562 = V_4;
		int32_t L_563 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_562);
		(L_562)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_563);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_564 = V_4;
		int32_t L_565 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_564);
		(L_564)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_565);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_566 = V_4;
		int32_t L_567 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_566);
		(L_566)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_567);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_568 = V_4;
		int32_t L_569 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_568);
		(L_568)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_569);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_570 = V_4;
		NullCheck(L_570);
		int32_t L_571 = ((int32_t)100);
		int32_t L_572 = (L_570)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = V_4;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)101);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_576 = V_4;
		NullCheck(L_576);
		int32_t L_577 = ((int32_t)102);
		int32_t L_578 = (L_576)->GetAt(static_cast<il2cpp_array_size_t>(L_577));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_579 = V_4;
		NullCheck(L_579);
		int32_t L_580 = ((int32_t)103);
		int32_t L_581 = (L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_580));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_572, L_575, L_578, L_581, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_582 = V_4;
		int32_t L_583 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_582);
		(L_582)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_583);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_584 = V_4;
		int32_t L_585 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_584);
		(L_584)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_585);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_586 = V_4;
		int32_t L_587 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_586);
		(L_586)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_587);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_588 = V_4;
		int32_t L_589 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_588);
		(L_588)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_589);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_590 = V_4;
		NullCheck(L_590);
		int32_t L_591 = ((int32_t)104);
		int32_t L_592 = (L_590)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = V_4;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)105);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_596 = V_4;
		NullCheck(L_596);
		int32_t L_597 = ((int32_t)106);
		int32_t L_598 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_597));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_599 = V_4;
		NullCheck(L_599);
		int32_t L_600 = ((int32_t)107);
		int32_t L_601 = (L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_600));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_592, L_595, L_598, L_601, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_602 = V_4;
		int32_t L_603 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_602);
		(L_602)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_603);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_604 = V_4;
		int32_t L_605 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_604);
		(L_604)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_605);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_606 = V_4;
		int32_t L_607 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_606);
		(L_606)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_607);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_608 = V_4;
		int32_t L_609 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_608);
		(L_608)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_609);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_610 = V_4;
		NullCheck(L_610);
		int32_t L_611 = ((int32_t)108);
		int32_t L_612 = (L_610)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = V_4;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)109);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_616 = V_4;
		NullCheck(L_616);
		int32_t L_617 = ((int32_t)110);
		int32_t L_618 = (L_616)->GetAt(static_cast<il2cpp_array_size_t>(L_617));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_619 = V_4;
		NullCheck(L_619);
		int32_t L_620 = ((int32_t)111);
		int32_t L_621 = (L_619)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_612, L_615, L_618, L_621, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_622 = V_4;
		int32_t L_623 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_622);
		(L_622)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_623);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_624 = V_4;
		int32_t L_625 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_624);
		(L_624)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_625);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_626 = V_4;
		int32_t L_627 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_626);
		(L_626)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_627);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_628 = V_4;
		int32_t L_629 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_628);
		(L_628)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_629);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_630 = V_4;
		NullCheck(L_630);
		int32_t L_631 = ((int32_t)112);
		int32_t L_632 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_631));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = V_4;
		NullCheck(L_633);
		int32_t L_634 = ((int32_t)113);
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_636 = V_4;
		NullCheck(L_636);
		int32_t L_637 = ((int32_t)114);
		int32_t L_638 = (L_636)->GetAt(static_cast<il2cpp_array_size_t>(L_637));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_639 = V_4;
		NullCheck(L_639);
		int32_t L_640 = ((int32_t)115);
		int32_t L_641 = (L_639)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_632, L_635, L_638, L_641, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_642 = V_4;
		int32_t L_643 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_643);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_644 = V_4;
		int32_t L_645 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_645);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_646 = V_4;
		int32_t L_647 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_647);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_648 = V_4;
		int32_t L_649 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_649);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_650 = V_4;
		NullCheck(L_650);
		int32_t L_651 = ((int32_t)116);
		int32_t L_652 = (L_650)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_653 = V_4;
		NullCheck(L_653);
		int32_t L_654 = ((int32_t)117);
		int32_t L_655 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_654));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_656 = V_4;
		NullCheck(L_656);
		int32_t L_657 = ((int32_t)118);
		int32_t L_658 = (L_656)->GetAt(static_cast<il2cpp_array_size_t>(L_657));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_659 = V_4;
		NullCheck(L_659);
		int32_t L_660 = ((int32_t)119);
		int32_t L_661 = (L_659)->GetAt(static_cast<il2cpp_array_size_t>(L_660));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_652, L_655, L_658, L_661, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_662 = V_4;
		int32_t L_663 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_663);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_664 = V_4;
		int32_t L_665 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_665);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_666 = V_4;
		int32_t L_667 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_666);
		(L_666)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_667);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_668 = V_4;
		int32_t L_669 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_668);
		(L_668)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_669);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_670 = V_4;
		NullCheck(L_670);
		int32_t L_671 = ((int32_t)120);
		int32_t L_672 = (L_670)->GetAt(static_cast<il2cpp_array_size_t>(L_671));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_673 = V_4;
		NullCheck(L_673);
		int32_t L_674 = ((int32_t)121);
		int32_t L_675 = (L_673)->GetAt(static_cast<il2cpp_array_size_t>(L_674));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_676 = V_4;
		NullCheck(L_676);
		int32_t L_677 = ((int32_t)122);
		int32_t L_678 = (L_676)->GetAt(static_cast<il2cpp_array_size_t>(L_677));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_679 = V_4;
		NullCheck(L_679);
		int32_t L_680 = ((int32_t)123);
		int32_t L_681 = (L_679)->GetAt(static_cast<il2cpp_array_size_t>(L_680));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_672, L_675, L_678, L_681, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_682 = V_4;
		int32_t L_683 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_682);
		(L_682)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_683);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_684 = V_4;
		int32_t L_685 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_684);
		(L_684)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_685);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_686 = V_4;
		int32_t L_687 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_686);
		(L_686)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_687);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_688 = V_4;
		int32_t L_689 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_688);
		(L_688)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_689);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_690 = V_4;
		NullCheck(L_690);
		int32_t L_691 = ((int32_t)124);
		int32_t L_692 = (L_690)->GetAt(static_cast<il2cpp_array_size_t>(L_691));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_693 = V_4;
		NullCheck(L_693);
		int32_t L_694 = ((int32_t)125);
		int32_t L_695 = (L_693)->GetAt(static_cast<il2cpp_array_size_t>(L_694));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_696 = V_4;
		NullCheck(L_696);
		int32_t L_697 = ((int32_t)126);
		int32_t L_698 = (L_696)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_699 = V_4;
		NullCheck(L_699);
		int32_t L_700 = ((int32_t)127);
		int32_t L_701 = (L_699)->GetAt(static_cast<il2cpp_array_size_t>(L_700));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_692, L_695, L_698, L_701, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_702 = V_4;
		int32_t L_703 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_702);
		(L_702)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_703);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_704 = V_4;
		int32_t L_705 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_704);
		(L_704)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_705);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_706 = V_4;
		int32_t L_707 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_706);
		(L_706)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_707);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_708 = V_4;
		int32_t L_709 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_708);
		(L_708)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_709);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_710 = V_4;
		NullCheck(L_710);
		int32_t L_711 = ((int32_t)128);
		int32_t L_712 = (L_710)->GetAt(static_cast<il2cpp_array_size_t>(L_711));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_713 = V_4;
		NullCheck(L_713);
		int32_t L_714 = ((int32_t)129);
		int32_t L_715 = (L_713)->GetAt(static_cast<il2cpp_array_size_t>(L_714));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_716 = V_4;
		NullCheck(L_716);
		int32_t L_717 = ((int32_t)130);
		int32_t L_718 = (L_716)->GetAt(static_cast<il2cpp_array_size_t>(L_717));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_719 = V_4;
		NullCheck(L_719);
		int32_t L_720 = ((int32_t)131);
		int32_t L_721 = (L_719)->GetAt(static_cast<il2cpp_array_size_t>(L_720));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_712, L_715, L_718, L_721, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_722 = V_4;
		int32_t L_723 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_722);
		(L_722)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_723);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_724 = V_4;
		int32_t L_725 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_724);
		(L_724)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_725);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_726 = V_4;
		int32_t L_727 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_726);
		(L_726)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_727);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_728 = V_4;
		int32_t L_729 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_728);
		(L_728)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_729);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_730 = V_4;
		return L_730;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngine_EncryptBlock_m52FAB75B307DF6F5F9443149A015B10FAF8F53EC (SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_0, L_1, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		uint32_t L_8;
		L_8 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_24);
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_28);
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_32);
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_40);
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_44);
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_88);
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_104);
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_148);
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_160);
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_164);
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_168);
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_208);
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_220);
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_224);
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_244);
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_260);
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_268);
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_280);
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_284);
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_308);
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_324);
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_328);
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_340);
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_344);
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_348);
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_360);
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_364);
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_368);
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_384);
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_388);
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_400);
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_408);
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_420);
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_424);
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_440);
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_444);
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_448);
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_460);
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_464);
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_480);
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_484);
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_488);
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_500);
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_504);
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_508);
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_520);
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)128);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___output2;
		int32_t L_529 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)129);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___output2;
		int32_t L_535 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)130);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___output2;
		int32_t L_541 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_542);
		int32_t L_543 = ((int32_t)131);
		int32_t L_544 = (L_542)->GetAt(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___output2;
		int32_t L_547 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngine_DecryptBlock_mB527586C3E22791E3C25F8B46804D678B5FCC82A (SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)128);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_3, L_4, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_2^(int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)129);
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_8^(int32_t)L_11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)130);
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = ___inOff1;
		uint32_t L_17;
		L_17 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_14^(int32_t)L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)131);
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
		int32_t L_22 = ___inOff1;
		uint32_t L_23;
		L_23 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_20^(int32_t)L_23));
		int32_t L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_25 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_26 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_28^L_31));
		int32_t L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_32^L_35));
		int32_t L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_36^L_39));
		int32_t L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_40^L_43));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_45 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_46 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_48^L_51));
		int32_t L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_52^L_55));
		int32_t L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_56^L_59));
		int32_t L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_60^L_63));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_65 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_66 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_68^L_71));
		int32_t L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_72^L_75));
		int32_t L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_77);
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_76^L_79));
		int32_t L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_80^L_83));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_85 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_86 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_84, L_85, L_86, L_87, NULL);
		int32_t L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_89);
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_88^L_91));
		int32_t L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_92^L_95));
		int32_t L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_96^L_99));
		int32_t L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_100^L_103));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_105 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_106 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_104, L_105, L_106, L_107, NULL);
		int32_t L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_108^L_111));
		int32_t L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_112^L_115));
		int32_t L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_116^L_119));
		int32_t L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_121);
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_120^L_123));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_125 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_126 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_124, L_125, L_126, L_127, NULL);
		int32_t L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_128^L_131));
		int32_t L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_132^L_135));
		int32_t L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_136^L_139));
		int32_t L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_140^L_143));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_145 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_146 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_144, L_145, L_146, L_147, NULL);
		int32_t L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_148^L_151));
		int32_t L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_152^L_155));
		int32_t L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_157);
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_156^L_159));
		int32_t L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_160^L_163));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_165 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_166 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_164, L_165, L_166, L_167, NULL);
		int32_t L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_168^L_171));
		int32_t L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_172^L_175));
		int32_t L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_177);
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_176^L_179));
		int32_t L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_180^L_183));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_185 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_186 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_184, L_185, L_186, L_187, NULL);
		int32_t L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_188^L_191));
		int32_t L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_192^L_195));
		int32_t L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_196^L_199));
		int32_t L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_201);
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_200^L_203));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_205 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_206 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_204, L_205, L_206, L_207, NULL);
		int32_t L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_208^L_211));
		int32_t L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_212^L_215));
		int32_t L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_216^L_219));
		int32_t L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_221);
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_220^L_223));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_225 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_226 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_224, L_225, L_226, L_227, NULL);
		int32_t L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_228^L_231));
		int32_t L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_232^L_235));
		int32_t L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_236^L_239));
		int32_t L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_240^L_243));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_245 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_246 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_244, L_245, L_246, L_247, NULL);
		int32_t L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_248^L_251));
		int32_t L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_252^L_255));
		int32_t L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_256^L_259));
		int32_t L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_261);
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_260^L_263));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_265 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_266 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_264, L_265, L_266, L_267, NULL);
		int32_t L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_268^L_271));
		int32_t L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_272^L_275));
		int32_t L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_277);
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_276^L_279));
		int32_t L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_281);
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_280^L_283));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_285 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_286 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_284, L_285, L_286, L_287, NULL);
		int32_t L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_288^L_291));
		int32_t L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_292^L_295));
		int32_t L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_297);
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_296^L_299));
		int32_t L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_301);
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_300^L_303));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_305 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_306 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_304, L_305, L_306, L_307, NULL);
		int32_t L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_308^L_311));
		int32_t L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_312^L_315));
		int32_t L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_316^L_319));
		int32_t L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_321);
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_320^L_323));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_325 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_326 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_324, L_325, L_326, L_327, NULL);
		int32_t L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_328^L_331));
		int32_t L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_332^L_335));
		int32_t L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_337);
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_336^L_339));
		int32_t L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_341);
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_340^L_343));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_345 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_346 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_344, L_345, L_346, L_347, NULL);
		int32_t L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_348^L_351));
		int32_t L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_352^L_355));
		int32_t L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_357);
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_356^L_359));
		int32_t L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_360^L_363));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_365 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_366 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_364, L_365, L_366, L_367, NULL);
		int32_t L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_368^L_371));
		int32_t L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_372^L_375));
		int32_t L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_377);
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_376^L_379));
		int32_t L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_381);
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_380^L_383));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_385 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_386 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_384, L_385, L_386, L_387, NULL);
		int32_t L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_388^L_391));
		int32_t L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_392^L_395));
		int32_t L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_397);
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_396^L_399));
		int32_t L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_401);
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_400^L_403));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_405 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_406 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_404, L_405, L_406, L_407, NULL);
		int32_t L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_408^L_411));
		int32_t L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_412^L_415));
		int32_t L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_417);
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_416^L_419));
		int32_t L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_421);
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_420^L_423));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_425 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_426 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_424, L_425, L_426, L_427, NULL);
		int32_t L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_428^L_431));
		int32_t L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_432^L_435));
		int32_t L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_436^L_439));
		int32_t L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_441);
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_440^L_443));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_445 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_446 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_444, L_445, L_446, L_447, NULL);
		int32_t L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_448^L_451));
		int32_t L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_452^L_455));
		int32_t L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_457);
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_456^L_459));
		int32_t L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_461);
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_460^L_463));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_465 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_466 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_464, L_465, L_466, L_467, NULL);
		int32_t L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_468^L_471));
		int32_t L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_472^L_475));
		int32_t L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_477);
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_476^L_479));
		int32_t L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_481);
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_480^L_483));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_485 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_486 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_484, L_485, L_486, L_487, NULL);
		int32_t L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_488^L_491));
		int32_t L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_492^L_495));
		int32_t L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_496^L_499));
		int32_t L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_501);
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_500^L_503));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_505 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_506 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_504, L_505, L_506, L_507, NULL);
		int32_t L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_508^L_511));
		int32_t L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_512^L_515));
		int32_t L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_517);
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_516^L_519));
		int32_t L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_520^L_523));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_525 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_526 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_524, L_525, L_526, L_527, NULL);
		int32_t L_528 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_528^L_531));
		int32_t L_532 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_532^L_535));
		int32_t L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_537);
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAt(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_536^L_539));
		int32_t L_540 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_541);
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_540^L_543));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_544 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_546 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_547 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_544, L_545, L_546, L_547, NULL);
		int32_t L_548 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_548^L_551));
		int32_t L_552 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_552^L_555));
		int32_t L_556 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_556^L_559));
		int32_t L_560 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_561);
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_560^L_563));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_564 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_565 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_566 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_567 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_564, L_565, L_566, L_567, NULL);
		int32_t L_568 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_568^L_571));
		int32_t L_572 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_572^L_575));
		int32_t L_576 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_577);
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_576^L_579));
		int32_t L_580 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_581);
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_580^L_583));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_584 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_585 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_586 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_587 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_584, L_585, L_586, L_587, NULL);
		int32_t L_588 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_588^L_591));
		int32_t L_592 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_592^L_595));
		int32_t L_596 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_597);
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_596^L_599));
		int32_t L_600 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_600^L_603));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_604 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_605 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_606 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_607 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_604, L_605, L_606, L_607, NULL);
		int32_t L_608 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_609);
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_608^L_611));
		int32_t L_612 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_612^L_615));
		int32_t L_616 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_616^L_619));
		int32_t L_620 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_621);
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_620^L_623));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_624 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_625 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_626 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_627 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_624, L_625, L_626, L_627, NULL);
		int32_t L_628 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_629);
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_628^L_631));
		int32_t L_632 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_633);
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_632^L_635));
		int32_t L_636 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_637);
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_636^L_639));
		int32_t L_640 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_641);
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_640^L_643));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_644 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_645 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_646 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_647 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_644, L_645, L_646, L_647, NULL);
		int32_t L_648 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_649);
		int32_t L_650 = 0;
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___output2;
		int32_t L_653 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		int32_t L_654 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_655);
		int32_t L_656 = 1;
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___output2;
		int32_t L_659 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		int32_t L_660 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_661);
		int32_t L_662 = 2;
		int32_t L_663 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___output2;
		int32_t L_665 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		int32_t L_666 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_667);
		int32_t L_668 = 3;
		int32_t L_669 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___output2;
		int32_t L_671 = ___outOff3;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngine__ctor_m8AFA24F1FD829A6D4FCE557165B39ED35F51E26F (SerpentEngine_t7E36886E09F2BE34BE3597CD3A23F5DB36538172* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Init_mCAA1BA8BDADE41E9B2A9ACC4D096B219A2A3E626 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_Init_mCAA1BA8BDADE41E9B2A9ACC4D096B219A2A3E626_RuntimeMethod_var)));
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___parameters1;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_5, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_5, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_6;
		bool L_7 = ___forEncryption0;
		__this->___encrypting_6 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key0_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key0_2), (void*)L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key1_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key1_3), (void*)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key2_4), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key3_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key3_5), (void*)L_11);
		V_1 = 0;
		goto IL_00cb;
	}

IL_0069:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___key0_2;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_15, 4))%((int32_t)10)));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)((int32_t)L_17&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___key1_3;
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 1))%((int32_t)10)));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)((int32_t)L_23&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___key2_4;
		int32_t L_25 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, 4)), 2))%((int32_t)10)));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)((int32_t)L_29&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___key3_5;
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_33, 4)), 3))%((int32_t)10)));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)((int32_t)L_35&((int32_t)255))));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00cb:
	{
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)32))))
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkipjackEngine_get_AlgorithmName_m6E6E51B81120BCB366B11639E29754462EE707DC (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkipjackEngine_get_IsPartialBlockOkay_m23E5A9D4F8E81FDA10F366A9FC20AF890A9E51B7 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_GetBlockSize_m04E0528A049B7133AE9526FCC18A5CA24BA8D0B1 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_ProcessBlock_m7D31606AB6A6CBD3232F9197FAA0759728C9F050 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___key1_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_ProcessBlock_m7D31606AB6A6CBD3232F9197FAA0759728C9F050_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_6;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		int32_t L_11;
		L_11 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16 /* System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_7, L_8, L_9, L_10);
		goto IL_0050;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output2;
		int32_t L_15 = ___outOff3;
		int32_t L_16;
		L_16 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_12, L_13, L_14, L_15);
	}

IL_0050:
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Reset_m8B42265F129696932D7E2F6B8B65367CBCDBF404 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::G(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m22B7E0348F1C886404BDC6307F6739B7CF75D748 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, int32_t ___k0, int32_t ___w1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___w1;
		V_0 = ((int32_t)(((int32_t)(L_0>>8))&((int32_t)255)));
		int32_t L_1 = ___w1;
		V_1 = ((int32_t)(L_1&((int32_t)255)));
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key0_2;
		int32_t L_5 = ___k0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key1_3;
		int32_t L_14 = ___k0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key2_4;
		int32_t L_23 = ___k0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key3_5;
		int32_t L_32 = ___k0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		V_5 = ((int32_t)((int32_t)L_36^L_37));
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_38<<8)), L_39));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_EncryptBlock_mF95640E9E800662594335725AAD82BA91BFBA7A8 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___inOff1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___input0;
		int32_t L_29 = ___inOff1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = 0;
		V_5 = 0;
		goto IL_00be;
	}

IL_0056:
	{
		V_6 = 0;
		goto IL_0082;
	}

IL_005b:
	{
		int32_t L_32 = V_3;
		V_7 = L_32;
		int32_t L_33 = V_2;
		V_3 = L_33;
		int32_t L_34 = V_1;
		V_2 = L_34;
		int32_t L_35 = V_4;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = SkipjackEngine_G_m22B7E0348F1C886404BDC6307F6739B7CF75D748(__this, L_35, L_36, NULL);
		V_1 = L_37;
		int32_t L_38 = V_1;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_0 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0082:
	{
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		V_8 = 0;
		goto IL_00b3;
	}

IL_008c:
	{
		int32_t L_44 = V_3;
		V_9 = L_44;
		int32_t L_45 = V_2;
		V_3 = L_45;
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		int32_t L_48 = V_4;
		V_2 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51;
		L_51 = SkipjackEngine_G_m22B7E0348F1C886404BDC6307F6739B7CF75D748(__this, L_49, L_50, NULL);
		V_1 = L_51;
		int32_t L_52 = V_9;
		V_0 = L_52;
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b3:
	{
		int32_t L_55 = V_8;
		if ((((int32_t)L_55) < ((int32_t)8)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00be:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) < ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___outBytes2;
		int32_t L_59 = ___outOff3;
		int32_t L_60 = V_0;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_60>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___outBytes2;
		int32_t L_62 = ___outOff3;
		int32_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 1))), (uint8_t)((int32_t)(uint8_t)L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___outBytes2;
		int32_t L_65 = ___outOff3;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_66>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___outBytes2;
		int32_t L_68 = ___outOff3;
		int32_t L_69 = V_1;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 3))), (uint8_t)((int32_t)(uint8_t)L_69));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___outBytes2;
		int32_t L_71 = ___outOff3;
		int32_t L_72 = V_2;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_72>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___outBytes2;
		int32_t L_74 = ___outOff3;
		int32_t L_75 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 5))), (uint8_t)((int32_t)(uint8_t)L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___outBytes2;
		int32_t L_77 = ___outOff3;
		int32_t L_78 = V_3;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_78>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___outBytes2;
		int32_t L_80 = ___outOff3;
		int32_t L_81 = V_3;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 7))), (uint8_t)((int32_t)(uint8_t)L_81));
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::H(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m99511F026DF44CA4F21E35F756976555B4D1F0C6 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, int32_t ___k0, int32_t ___w1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___w1;
		V_0 = ((int32_t)(L_0&((int32_t)255)));
		int32_t L_1 = ___w1;
		V_1 = ((int32_t)(((int32_t)(L_1>>8))&((int32_t)255)));
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key3_5;
		int32_t L_5 = ___k0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key2_4;
		int32_t L_14 = ___k0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key1_3;
		int32_t L_23 = ___k0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key0_2;
		int32_t L_32 = ___k0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		V_5 = ((int32_t)((int32_t)L_36^L_37));
		int32_t L_38 = V_5;
		int32_t L_39 = V_4;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_38<<8)), L_39));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.SkipjackEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_DecryptBlock_m5FA502DB6AB8C9EFF72C04ECBAE11765D2B05559 (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = ___inOff1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___input0;
		int32_t L_29 = ___inOff1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = ((int32_t)31);
		V_5 = 0;
		goto IL_00bf;
	}

IL_0057:
	{
		V_6 = 0;
		goto IL_0083;
	}

IL_005c:
	{
		int32_t L_32 = V_2;
		V_7 = L_32;
		int32_t L_33 = V_3;
		V_2 = L_33;
		int32_t L_34 = V_0;
		V_3 = L_34;
		int32_t L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SkipjackEngine_H_m99511F026DF44CA4F21E35F756976555B4D1F0C6(__this, L_35, L_36, NULL);
		V_0 = L_37;
		int32_t L_38 = V_0;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_1 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0083:
	{
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		V_8 = 0;
		goto IL_00b4;
	}

IL_008d:
	{
		int32_t L_44 = V_2;
		V_9 = L_44;
		int32_t L_45 = V_3;
		V_2 = L_45;
		int32_t L_46 = V_1;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		V_3 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		int32_t L_49 = V_4;
		int32_t L_50 = V_1;
		int32_t L_51;
		L_51 = SkipjackEngine_H_m99511F026DF44CA4F21E35F756976555B4D1F0C6(__this, L_49, L_50, NULL);
		V_0 = L_51;
		int32_t L_52 = V_9;
		V_1 = L_52;
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b4:
	{
		int32_t L_55 = V_8;
		if ((((int32_t)L_55) < ((int32_t)8)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00bf:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) < ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___outBytes2;
		int32_t L_59 = ___outOff3;
		int32_t L_60 = V_0;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_60>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___outBytes2;
		int32_t L_62 = ___outOff3;
		int32_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 1))), (uint8_t)((int32_t)(uint8_t)L_63));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___outBytes2;
		int32_t L_65 = ___outOff3;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_66>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___outBytes2;
		int32_t L_68 = ___outOff3;
		int32_t L_69 = V_1;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 3))), (uint8_t)((int32_t)(uint8_t)L_69));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___outBytes2;
		int32_t L_71 = ___outOff3;
		int32_t L_72 = V_2;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_72>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___outBytes2;
		int32_t L_74 = ___outOff3;
		int32_t L_75 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 5))), (uint8_t)((int32_t)(uint8_t)L_75));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___outBytes2;
		int32_t L_77 = ___outOff3;
		int32_t L_78 = V_3;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_78>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___outBytes2;
		int32_t L_80 = ___outOff3;
		int32_t L_81 = V_3;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 7))), (uint8_t)((int32_t)(uint8_t)L_81));
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__cctor_mA5EDE952A92E0B097C8D7066AD1EE67871DC2AAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001665U2D1_148_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001665U2D1_148_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F_il2cpp_TypeInfo_var))->___ftable_1), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__ctor_m069F4277429114A82C7FA3EBFE5276AA6EE9F80D (SkipjackEngine_t3180722B04E9C7AA940DBBCE50A0A28652AC7F3F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RC2Parameters_get_EffectiveKeyBits_mD4884D8650D9C98A76865433E867123899D6A544_inline (RC2Parameters_tE5DE9DFCDD21A70563416CC04A08217C87747A90* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bits_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = __this->___random_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RC5Parameters_get_Rounds_m85239BF2CE005D7A5C2B002856205B2E4247A1CC_inline (RC5Parameters_t4E97B2709C1B5FC5609616453ACB1593C0E23879* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___rounds_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_PublicExponent_m1CE6D67559EF7A573A5DCFA2E119E53EB24CF538_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___e_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___modulus_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* RsaBlindingParameters_get_PublicKey_mE9C82C78D227A15B214B6B86BC801EA81B3B0401_inline (RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* __this, const RuntimeMethod* method) 
{
	{
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_0 = __this->___publicKey_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaBlindingParameters_get_BlindingFactor_m017DE8B8AD76EBB3636110AD7F3EB893AED6E6FF_inline (RsaBlindingParameters_t915725D617AE0EE69D8C03C1ADC2BD65F46F5E1D* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___blindingFactor_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Exponent_m53F01DA95BCBD6DDE23ED14286653B851AD30AFB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___exponent_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_P_mD1856B8A898DB1763E2DF84DCE335A6B353C9A9F_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___p_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_Q_m43B53C0E3F837093F8AA2810494ADE021FD99654_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___q_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_DP_m551662D41C61A77263D3BBDCB12D4F0BAE0EDE5A_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___dP_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_DQ_mC5EB14A21F366C34EC8E314BED6ED2CB77F9F29E_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___dQ_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaPrivateCrtKeyParameters_get_QInv_m2104336292891D5BCBF68982D420A9EFD9435750_inline (RsaPrivateCrtKeyParameters_t110F226B12978BEE4EF18276F6640A756068AB7F* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___qInv_9;
		return L_0;
	}
}
