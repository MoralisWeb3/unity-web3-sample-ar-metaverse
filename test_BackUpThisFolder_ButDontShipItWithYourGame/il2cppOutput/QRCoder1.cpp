#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// <>f__AnonymousType0`2<System.Int32,System.Int32>
struct U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501;
// System.Comparison`1<QRCoder.QRCodeGenerator/PolynomItem>
struct Comparison_1_t20E24641D3BFEC96EBC1524D4FE20545C5123A85;
// System.Collections.Generic.Dictionary`2<System.Char,System.Int32>
struct Dictionary_2_t63C09FF55518C7D6184D63646025DC0B7B1785D0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>
struct Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589;
// System.Func`2<<>f__AnonymousType0`2<System.Int32,System.Int32>,System.Int32>
struct Func_2_t3384D5BADFCD6AB7FF1B83D98F50CB968D0878DE;
// System.Func`2<System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>,System.Boolean>
struct Func_2_t383F2DE661E0582CCA67F21B7FC7A20A93D4A8EE;
// System.Func`2<System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>,System.Int32>
struct Func_2_t83FC4D044E80C051D31C10F135A25868BD4F4ABE;
// System.Func`2<System.String,System.Int32>
struct Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783;
// System.Func`2<QRCoder.QRCodeGenerator/AlignmentPattern,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>>
struct Func_2_t7201A4A6D63C94F473AFBFB8710F34D5BC05D1DF;
// System.Func`2<QRCoder.QRCodeGenerator/PolynomItem,System.Int32>
struct Func_2_t3690AEBBFC6BE22F79A212CDB9952FDBB9A006B0;
// System.Func`2<QRCoder.QRCodeGenerator/PolynomItem,System.String>
struct Func_2_t99C0A16D2CF6E1C3E7559465F4968D47DA4DB96F;
// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean>
struct Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85;
// System.Func`3<System.Int32,System.Int32,System.Boolean>
struct Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69;
// System.Func`3<System.Int32,QRCoder.QRCodeGenerator/PolynomItem,System.Int32>
struct Func_3_tA06BD45141D4026318BC044CBF3A8FD88691B2D8;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<QRCoder.QRCodeGenerator/PolynomItem>
struct IEnumerable_1_t5D6F300C4DD1CAB0E236E53F3DA93932E1DCA4DF;
// System.Collections.Generic.IEnumerable`1<QRCoder.QRCodeGenerator/Rectangle>
struct IEnumerable_1_tB61AD02DFE8B307E9A2125401F07447E56BD1C78;
// System.Collections.Generic.IEnumerable`1<QRCoder.QRCodeGenerator/VersionInfoDetails>
struct IEnumerable_1_t7EAA176DEEF3BD350C1867D1963F28D6C82D67D7;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<QRCoder.QRCodeGenerator/EncodingMode>
struct IEqualityComparer_1_t691494568CE0FE4E7BDBD09FBBE7A18B83C24F62;
// System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>
struct IGrouping_2_tF79BAC831680806E0485437069963DC3C6EE2BE6;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct KeyCollection_t12F354156E1738E769479A4E4E606BB00F2855D8;
// System.Collections.Generic.Dictionary`2/KeyCollection<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>
struct KeyCollection_t5BF7B85CD1A1CE114FB260C4950B1357D5B15AD2;
// System.Collections.Generic.List`1<System.Collections.BitArray>
struct List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/AlignmentPattern>
struct List_1_t62C6FBE2D75CE52164B9184499533FE8120DA1D5;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Antilog>
struct List_1_t5A42252BD4BDC6068E94E8CDA442238A51E16BEC;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/ECCInfo>
struct List_1_tD272C6D44ACB5CA62E4783C11A2646640D9474FA;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>
struct List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>
struct List_1_t072755E911D175C2CCF66E2094014685F5D28AAD;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>
struct List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfo>
struct List_1_t69B89756F8EFFFF4C5DB8B99DDF309C27301CFB9;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails>
struct List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79;
// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct ValueCollection_tB3F357EE36195AB3E5836A9C935B41E068620063;
// System.Collections.Generic.Dictionary`2/ValueCollection<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>
struct ValueCollection_t686C7A070A79F432D5616A2A6E8A414FC9B2823D;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>[]
struct EntryU5BU5D_t9D57678347CD24374643C78351A7061EAB139B43;
// System.Collections.Generic.Dictionary`2/Entry<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>[]
struct EntryU5BU5D_t175D8C79CA17A70F2870451AC6346DF5C96C4C64;
// System.Collections.BitArray[]
struct BitArrayU5BU5D_tE2A8CBF83785B66AEFC4EC09F7B8F66275764D0F;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// QRCoder.QRCodeGenerator/Point[]
struct PointU5BU5D_tCFC982C0F3F5CD55DD9C1C0FDC2975DCA3F303BB;
// QRCoder.QRCodeGenerator/PolynomItem[]
struct PolynomItemU5BU5D_t713597D9031BB025B020A6579F9EEB9DDBE7D571;
// QRCoder.QRCodeGenerator/Rectangle[]
struct RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9;
// QRCoder.QRCodeGenerator/VersionInfoDetails[]
struct VersionInfoDetailsU5BU5D_t6C0953C71F86672264C1FC09483FADF620281F1A;
// QRCoder.AbstractQRCode
struct AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59;
// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// QRCoder.Exceptions.DataTooLongException
struct DataTooLongException_t33ADED4ED33524F2B78A8E6AF788BCAEB05015AB;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// QRCoder.QRCodeData
struct QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F;
// QRCoder.QRCodeGenerator
struct QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// QRCoder.Framework4._0Methods.Stream4Methods
struct Stream4Methods_tDA07D18DD3BA203619C1143A6BCCF7CE066328C3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// QRCoder.SvgQRCode
struct SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// QRCoder.QRCodeGenerator/<>c
struct U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB;
// QRCoder.QRCodeGenerator/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8D099A258532C4C4A01C89668CC57067523E7A49;
// QRCoder.QRCodeGenerator/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF;
// QRCoder.QRCodeGenerator/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t85E701E972E28CF79EDDCFCC8E9F42B42F38269E;
// QRCoder.QRCodeGenerator/<>c__DisplayClass49_1
struct U3CU3Ec__DisplayClass49_1_t5BD7DD08BBB5AE1CDCE186FC8B1CC17B16E3C5C9;
// QRCoder.QRCodeGenerator/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t9A1F870052C7F399BC05F1660F14B4BC705865AF;
// QRCoder.QRCodeGenerator/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t465EDD01898888D4DCEA94203ADBBD7916680C9E;
// QRCoder.QRCodeGenerator/Point
struct Point_tB2458287F5CF26F000F9528523513000A548815B;
// QRCoder.QRCodeGenerator/Polynom
struct Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B;
// QRCoder.QRCodeGenerator/Rectangle
struct Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t072755E911D175C2CCF66E2094014685F5D28AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tB2458287F5CF26F000F9528523513000A548815B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tC63ACC9835E9694C7859A99329E1BEAEF471A5FB____2D065BD500E885645FE9C9D7750DE5E1D39E8EBFBAAD10408A31F3D51E439C46_4_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF2EB301108A2B0DD8CC584A3FD0FE6555D2A18;
IL2CPP_EXTERN_C String_t* _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589;
IL2CPP_EXTERN_C String_t* _stringLiteral4733E39E26027253522C63CCC334C6AB8FD79A67;
IL2CPP_EXTERN_C String_t* _stringLiteral762D70BC7111FDFC4BC4C11E691BA04ED388A3E5;
IL2CPP_EXTERN_C String_t* _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C582ECD9459D0E83389F07B97BAABAEC7CE535;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF098B6D4221E8806EF0C03FCF802B670082674;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD82D29DC0A980491F8931E75EBE1A6515EC7F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3AB48BDB4AF05F6413118B7071103D5D7A6AFB;
IL2CPP_EXTERN_C String_t* _stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381;
IL2CPP_EXTERN_C String_t* _stringLiteralC17A1AA8120789C97721BDFBADCA6BE7C3AC636E;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDDDBF0962FF5FD272B95A3B2D5C168480B6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE69631EBEBF0374017E2004146018D66A224C9B6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC3AE15625F284548DEDD0F44037B29CCE9D92AB;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7F5D2E5B3CEEA7F7F5BFABB1A126EB8065604D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m472E5766760D600EA881D17A7570445973526E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1CD71DBF2BFEB01524287D92201BFB63619E1610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7370ABD6D057E5C5BB12C10099F4D35D36E36F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF320E7F57F977AAD89AB65496EA0C233F02386CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6C7DBF07E9CFCD6F4CD04BDD933252AB4992F5CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m92894C87BDDF88887BCE44E88898C48F319605FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEC151852EDBB84EA6898B206BACE2648414073DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m546CA3ACF5EE0B2355ABB17E49BE0B42350EBB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB6EAE4774AAC84717DB4DD7A8B9162AF5803C8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC89CA062FD8F1D320A738E607F8158C98C1E2C5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD2BFC3828E3AAEF9C791D87555F31309F831060C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m99B2A4B7A5688E6C04C43FDC029BFA96672DEF6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEACA7CCF0EB5E434ED343D2BADF6F2B852905BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mBD9DA5B8DB30498CFC371CADCE01DCAF74E5B717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m5B91BF0462C0D5DEE6E0F8E293E7283053C4D467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern1_m83EDA064FD99E492DE21FEC74C0DD56BF45F146E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern2_mC26DBCC59194A3FE8BA38B1F22960FA884828245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern3_m65ABDF06BABEFB919C54C11F7C6C3ED21FEDB52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern4_mB90F08CA3FCF19547B94DEEB6A485168D801FCC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern5_mF8A2F0DF0F2A1F45EDE0FF8AE4D2E70DC18A9809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern6_mEC8EF4DF210EC48A23B430E785CB4DDE31D05916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern7_m6B2CA1B84C68F052BECBA5E38BDF54D70FA983D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaskPattern_Pattern8_m638C0FBF0C38AFCD3A6E105621E6FC8FD6943A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__5_m495D3E2A5C98C5AFEAB972246D40F711821B9B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__6_mFFE3AFAFDB9B15421B803C6D82033D83223EB70C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__7_mE454C89F1573DD1ECD140E44273563F70ADDEABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__8_m6B5FED521AA912901C09941CE676C80D07E0620F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <>f__AnonymousType0`2<System.Int32,System.Int32>
struct U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501  : public RuntimeObject
{
	// <version>j__TPar <>f__AnonymousType0`2::<version>i__Field
	int32_t ___U3CversionU3Ei__Field_0;
	// <capacity>j__TPar <>f__AnonymousType0`2::<capacity>i__Field
	int32_t ___U3CcapacityU3Ei__Field_1;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9D57678347CD24374643C78351A7061EAB139B43* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t12F354156E1738E769479A4E4E606BB00F2855D8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB3F357EE36195AB3E5836A9C935B41E068620063* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>
struct Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t175D8C79CA17A70F2870451AC6346DF5C96C4C64* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5BF7B85CD1A1CE114FB260C4950B1357D5B15AD2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t686C7A070A79F432D5616A2A6E8A414FC9B2823D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.BitArray>
struct List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BitArrayU5BU5D_tE2A8CBF83785B66AEFC4EC09F7B8F66275764D0F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BitArrayU5BU5D_tE2A8CBF83785B66AEFC4EC09F7B8F66275764D0F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>
struct List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_tCFC982C0F3F5CD55DD9C1C0FDC2975DCA3F303BB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PointU5BU5D_tCFC982C0F3F5CD55DD9C1C0FDC2975DCA3F303BB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>
struct List_1_t072755E911D175C2CCF66E2094014685F5D28AAD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PolynomItemU5BU5D_t713597D9031BB025B020A6579F9EEB9DDBE7D571* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t072755E911D175C2CCF66E2094014685F5D28AAD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PolynomItemU5BU5D_t713597D9031BB025B020A6579F9EEB9DDBE7D571* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>
struct List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails>
struct List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VersionInfoDetailsU5BU5D_t6C0953C71F86672264C1FC09483FADF620281F1A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VersionInfoDetailsU5BU5D_t6C0953C71F86672264C1FC09483FADF620281F1A* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// QRCoder.AbstractQRCode
struct AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59  : public RuntimeObject
{
	// QRCoder.QRCodeData QRCoder.AbstractQRCode::<QrCodeData>k__BackingField
	QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* ___U3CQrCodeDataU3Ek__BackingField_0;
};
struct Il2CppArrayBounds;

// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616  : public RuntimeObject
{
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;
	// System.Object System.Collections.BitArray::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// QRCoder.QRCodeData
struct QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Collections.BitArray> QRCoder.QRCodeData::<ModuleMatrix>k__BackingField
	List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* ___U3CModuleMatrixU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeData::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_1;
};

// QRCoder.QRCodeGenerator
struct QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9  : public RuntimeObject
{
};

struct QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_StaticFields
{
	// System.Char[] QRCoder.QRCodeGenerator::alphanumEncTable
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___alphanumEncTable_0;
	// System.Int32[] QRCoder.QRCodeGenerator::capacityBaseValues
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___capacityBaseValues_1;
	// System.Int32[] QRCoder.QRCodeGenerator::capacityECCBaseValues
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___capacityECCBaseValues_2;
	// System.Int32[] QRCoder.QRCodeGenerator::alignmentPatternBaseValues
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___alignmentPatternBaseValues_3;
	// System.Int32[] QRCoder.QRCodeGenerator::remainderBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___remainderBits_4;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/AlignmentPattern> QRCoder.QRCodeGenerator::alignmentPatternTable
	List_1_t62C6FBE2D75CE52164B9184499533FE8120DA1D5* ___alignmentPatternTable_5;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/ECCInfo> QRCoder.QRCodeGenerator::capacityECCTable
	List_1_tD272C6D44ACB5CA62E4783C11A2646640D9474FA* ___capacityECCTable_6;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfo> QRCoder.QRCodeGenerator::capacityTable
	List_1_t69B89756F8EFFFF4C5DB8B99DDF309C27301CFB9* ___capacityTable_7;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Antilog> QRCoder.QRCodeGenerator::galoisField
	List_1_t5A42252BD4BDC6068E94E8CDA442238A51E16BEC* ___galoisField_8;
	// System.Collections.Generic.Dictionary`2<System.Char,System.Int32> QRCoder.QRCodeGenerator::alphanumEncDict
	Dictionary_2_t63C09FF55518C7D6184D63646025DC0B7B1785D0* ___alphanumEncDict_9;
};

// QRCoder.Framework4._0Methods.Stream4Methods
struct Stream4Methods_tDA07D18DD3BA203619C1143A6BCCF7CE066328C3  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// QRCoder.SvgQRCodeHelper
struct SvgQRCodeHelper_t589376FDFD1D9B50D3B7EE11B276E561EF45ABD5  : public RuntimeObject
{
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

// QRCoder.QRCodeGenerator/<>c
struct U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB  : public RuntimeObject
{
};

struct U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_StaticFields
{
	// QRCoder.QRCodeGenerator/<>c QRCoder.QRCodeGenerator/<>c::<>9
	U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* ___U3CU3E9_0;
	// System.Func`2<QRCoder.QRCodeGenerator/AlignmentPattern,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>> QRCoder.QRCodeGenerator/<>c::<>9__20_2
	Func_2_t7201A4A6D63C94F473AFBFB8710F34D5BC05D1DF* ___U3CU3E9__20_2_1;
	// System.Func`2<QRCoder.QRCodeGenerator/PolynomItem,System.String> QRCoder.QRCodeGenerator/<>c::<>9__24_0
	Func_2_t99C0A16D2CF6E1C3E7559465F4968D47DA4DB96F* ___U3CU3E9__24_0_2;
	// System.Func`2<<>f__AnonymousType0`2<System.Int32,System.Int32>,System.Int32> QRCoder.QRCodeGenerator/<>c::<>9__27_2
	Func_2_t3384D5BADFCD6AB7FF1B83D98F50CB968D0878DE* ___U3CU3E9__27_2_3;
	// System.Func`2<System.String,System.Int32> QRCoder.QRCodeGenerator/<>c::<>9__33_0
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* ___U3CU3E9__33_0_4;
	// System.Func`2<QRCoder.QRCodeGenerator/PolynomItem,System.Int32> QRCoder.QRCodeGenerator/<>c::<>9__49_0
	Func_2_t3690AEBBFC6BE22F79A212CDB9952FDBB9A006B0* ___U3CU3E9__49_0_5;
	// System.Func`2<System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>,System.Boolean> QRCoder.QRCodeGenerator/<>c::<>9__49_1
	Func_2_t383F2DE661E0582CCA67F21B7FC7A20A93D4A8EE* ___U3CU3E9__49_1_6;
	// System.Func`2<System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>,System.Int32> QRCoder.QRCodeGenerator/<>c::<>9__49_2
	Func_2_t83FC4D044E80C051D31C10F135A25868BD4F4ABE* ___U3CU3E9__49_2_7;
	// System.Func`3<System.Int32,QRCoder.QRCodeGenerator/PolynomItem,System.Int32> QRCoder.QRCodeGenerator/<>c::<>9__49_6
	Func_3_tA06BD45141D4026318BC044CBF3A8FD88691B2D8* ___U3CU3E9__49_6_8;
	// System.Comparison`1<QRCoder.QRCodeGenerator/PolynomItem> QRCoder.QRCodeGenerator/<>c::<>9__49_4
	Comparison_1_t20E24641D3BFEC96EBC1524D4FE20545C5123A85* ___U3CU3E9__49_4_9;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8D099A258532C4C4A01C89668CC57067523E7A49  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass20_0::version
	int32_t ___version_0;
	// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/<>c__DisplayClass20_0::eccLevel
	int32_t ___eccLevel_1;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF  : public RuntimeObject
{
	// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::eccLevel
	int32_t ___eccLevel_0;
	// QRCoder.QRCodeGenerator/EncodingMode QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::encMode
	int32_t ___encMode_1;
	// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::length
	int32_t ___length_2;
	// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean> QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<>9__5
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___U3CU3E9__5_3;
	// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean> QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<>9__6
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___U3CU3E9__6_4;
	// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean> QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<>9__7
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___U3CU3E9__7_5;
	// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean> QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<>9__8
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___U3CU3E9__8_6;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t85E701E972E28CF79EDDCFCC8E9F42B42F38269E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<System.Int32> QRCoder.QRCodeGenerator/<>c__DisplayClass49_0::toGlue
	RuntimeObject* ___toGlue_0;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass49_1
struct U3CU3Ec__DisplayClass49_1_t5BD7DD08BBB5AE1CDCE186FC8B1CC17B16E3C5C9  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass49_1::exponent
	int32_t ___exponent_0;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t9A1F870052C7F399BC05F1660F14B4BC705865AF  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass50_0::exp
	int32_t ___exp_0;
};

// QRCoder.QRCodeGenerator/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t465EDD01898888D4DCEA94203ADBBD7916680C9E  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass51_0::intVal
	int32_t ___intVal_0;
};

// QRCoder.QRCodeGenerator/ModulePlacer
struct ModulePlacer_t7EF5C589806FFDF4503074F9D103A45D148790B8  : public RuntimeObject
{
};

// QRCoder.QRCodeGenerator/Point
struct Point_tB2458287F5CF26F000F9528523513000A548815B  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/Point::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeGenerator/Point::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;
};

// QRCoder.QRCodeGenerator/Polynom
struct Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem> QRCoder.QRCodeGenerator/Polynom::<PolyItems>k__BackingField
	List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* ___U3CPolyItemsU3Ek__BackingField_0;
};

// QRCoder.QRCodeGenerator/Rectangle
struct Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06  : public RuntimeObject
{
	// System.Int32 QRCoder.QRCodeGenerator/Rectangle::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeGenerator/Rectangle::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;
	// System.Int32 QRCoder.QRCodeGenerator/Rectangle::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_2;
	// System.Int32 QRCoder.QRCodeGenerator/Rectangle::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_3;
};

// QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern
struct MaskPattern_tE90A7FAEEA20C9D3303621AA2E9043A1FF2207D2  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.BitArray>
struct Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Point>
struct Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Point_tB2458287F5CF26F000F9528523513000A548815B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Rectangle>
struct Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Drawing.Color
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 
{
	// System.String System.Drawing.Color::name
	String_t* ___name_0;
	// System.Int64 System.Drawing.Color::value
	int64_t ___value_1;
	// System.Int16 System.Drawing.Color::knownColor
	int16_t ___knownColor_2;
	// System.Int16 System.Drawing.Color::state
	int16_t ___state_3;
};
// Native definition for P/Invoke marshalling of System.Drawing.Color
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshaled_pinvoke
{
	char* ___name_0;
	int64_t ___value_1;
	int16_t ___knownColor_2;
	int16_t ___state_3;
};
// Native definition for COM marshalling of System.Drawing.Color
struct Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshaled_com
{
	Il2CppChar* ___name_0;
	int64_t ___value_1;
	int16_t ___knownColor_2;
	int16_t ___state_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Drawing.Size
struct Size_t9FCA8981191B4D1A693E50590137D636FEAC156D 
{
	// System.Int32 System.Drawing.Size::width
	int32_t ___width_0;
	// System.Int32 System.Drawing.Size::height
	int32_t ___height_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// QRCoder.SvgQRCode
struct SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA  : public AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59
{
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tEBAD25CCDD8CF7A0A01CE7A77B9CBF1004E89BFC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tEBAD25CCDD8CF7A0A01CE7A77B9CBF1004E89BFC__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1120
struct __StaticArrayInitTypeSizeU3D1120_tE403862443BED7C9929EDD0A9F7AFC8F0AD7E7DF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1120_tE403862443BED7C9929EDD0A9F7AFC8F0AD7E7DF__padding[1120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct __StaticArrayInitTypeSizeU3D160_t9B17CCE502D4B267248D9F47BF3500FE8459FAC6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t9B17CCE502D4B267248D9F47BF3500FE8459FAC6__padding[160];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_tEB3C5B4AB73809FA7BCBB8F3DF0DC1261726873D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_tEB3C5B4AB73809FA7BCBB8F3DF0DC1261726873D__padding[18];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t660F7A777BC81B79E32D3D8953C9C201B5A30FB9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t660F7A777BC81B79E32D3D8953C9C201B5A30FB9__padding[240];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2560
struct __StaticArrayInitTypeSizeU3D2560_tE2B9D206A9A79179A99AC2D736B288C3C37E537C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2560_tE2B9D206A9A79179A99AC2D736B288C3C37E537C__padding[2560];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t60B3B4B4E80C98D87C71FDAB856E5465F5A2D1FC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t60B3B4B4E80C98D87C71FDAB856E5465F5A2D1FC__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3840
struct __StaticArrayInitTypeSizeU3D3840_t4955FEAF2609665C55E46640ACA4595C51862A64 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3840_t4955FEAF2609665C55E46640ACA4595C51862A64__padding[3840];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_tE7A7D8301BF246A67A393478A12B3A3D4DFA34C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tE7A7D8301BF246A67A393478A12B3A3D4DFA34C2__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_tAC70D85DB15CFC39241E91376A89B6D94BB10664 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_tAC70D85DB15CFC39241E91376A89B6D94BB10664__padding[5];
	};
};

// QRCoder.QRCodeGenerator/AlignmentPattern
struct AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE 
{
	// System.Int32 QRCoder.QRCodeGenerator/AlignmentPattern::Version
	int32_t ___Version_0;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point> QRCoder.QRCodeGenerator/AlignmentPattern::PatternPositions
	List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* ___PatternPositions_1;
};
// Native definition for P/Invoke marshalling of QRCoder.QRCodeGenerator/AlignmentPattern
struct AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_pinvoke
{
	int32_t ___Version_0;
	List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* ___PatternPositions_1;
};
// Native definition for COM marshalling of QRCoder.QRCodeGenerator/AlignmentPattern
struct AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_com
{
	int32_t ___Version_0;
	List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* ___PatternPositions_1;
};

// QRCoder.QRCodeGenerator/Antilog
struct Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684 
{
	// System.Int32 QRCoder.QRCodeGenerator/Antilog::<ExponentAlpha>k__BackingField
	int32_t ___U3CExponentAlphaU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeGenerator/Antilog::<IntegerValue>k__BackingField
	int32_t ___U3CIntegerValueU3Ek__BackingField_1;
};

// QRCoder.QRCodeGenerator/CodewordBlock
struct CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931 
{
	// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::<GroupNumber>k__BackingField
	int32_t ___U3CGroupNumberU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::<BlockNumber>k__BackingField
	int32_t ___U3CBlockNumberU3Ek__BackingField_1;
	// System.String QRCoder.QRCodeGenerator/CodewordBlock::<BitString>k__BackingField
	String_t* ___U3CBitStringU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::<CodeWords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CCodeWordsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::<CodeWordsInt>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CCodeWordsIntU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::<ECCWords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CECCWordsU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::<ECCWordsInt>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CECCWordsIntU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of QRCoder.QRCodeGenerator/CodewordBlock
struct CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_pinvoke
{
	int32_t ___U3CGroupNumberU3Ek__BackingField_0;
	int32_t ___U3CBlockNumberU3Ek__BackingField_1;
	char* ___U3CBitStringU3Ek__BackingField_2;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CCodeWordsU3Ek__BackingField_3;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CCodeWordsIntU3Ek__BackingField_4;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CECCWordsU3Ek__BackingField_5;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CECCWordsIntU3Ek__BackingField_6;
};
// Native definition for COM marshalling of QRCoder.QRCodeGenerator/CodewordBlock
struct CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_com
{
	int32_t ___U3CGroupNumberU3Ek__BackingField_0;
	int32_t ___U3CBlockNumberU3Ek__BackingField_1;
	Il2CppChar* ___U3CBitStringU3Ek__BackingField_2;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CCodeWordsU3Ek__BackingField_3;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CCodeWordsIntU3Ek__BackingField_4;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CECCWordsU3Ek__BackingField_5;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CECCWordsIntU3Ek__BackingField_6;
};

// QRCoder.QRCodeGenerator/ECCInfo
struct ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C 
{
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/ECCInfo::<ErrorCorrectionLevel>k__BackingField
	int32_t ___U3CErrorCorrectionLevelU3Ek__BackingField_1;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<TotalDataCodewords>k__BackingField
	int32_t ___U3CTotalDataCodewordsU3Ek__BackingField_2;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<ECCPerBlock>k__BackingField
	int32_t ___U3CECCPerBlockU3Ek__BackingField_3;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<BlocksInGroup1>k__BackingField
	int32_t ___U3CBlocksInGroup1U3Ek__BackingField_4;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<CodewordsInGroup1>k__BackingField
	int32_t ___U3CCodewordsInGroup1U3Ek__BackingField_5;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<BlocksInGroup2>k__BackingField
	int32_t ___U3CBlocksInGroup2U3Ek__BackingField_6;
	// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::<CodewordsInGroup2>k__BackingField
	int32_t ___U3CCodewordsInGroup2U3Ek__BackingField_7;
};

// QRCoder.QRCodeGenerator/PolynomItem
struct PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF 
{
	// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::<Coefficient>k__BackingField
	int32_t ___U3CCoefficientU3Ek__BackingField_0;
	// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::<Exponent>k__BackingField
	int32_t ___U3CExponentU3Ek__BackingField_1;
};

// QRCoder.QRCodeGenerator/VersionInfo
struct VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96 
{
	// System.Int32 QRCoder.QRCodeGenerator/VersionInfo::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails> QRCoder.QRCodeGenerator/VersionInfo::<Details>k__BackingField
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___U3CDetailsU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of QRCoder.QRCodeGenerator/VersionInfo
struct VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_pinvoke
{
	int32_t ___U3CVersionU3Ek__BackingField_0;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___U3CDetailsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of QRCoder.QRCodeGenerator/VersionInfo
struct VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_com
{
	int32_t ___U3CVersionU3Ek__BackingField_0;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___U3CDetailsU3Ek__BackingField_1;
};

// QRCoder.QRCodeGenerator/VersionInfoDetails
struct VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 
{
	// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/VersionInfoDetails::<ErrorCorrectionLevel>k__BackingField
	int32_t ___U3CErrorCorrectionLevelU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32> QRCoder.QRCodeGenerator/VersionInfoDetails::<CapacityDict>k__BackingField
	Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___U3CCapacityDictU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of QRCoder.QRCodeGenerator/VersionInfoDetails
struct VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_pinvoke
{
	int32_t ___U3CErrorCorrectionLevelU3Ek__BackingField_0;
	Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___U3CCapacityDictU3Ek__BackingField_1;
};
// Native definition for COM marshalling of QRCoder.QRCodeGenerator/VersionInfoDetails
struct VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_com
{
	int32_t ___U3CErrorCorrectionLevelU3Ek__BackingField_0;
	Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___U3CCapacityDictU3Ek__BackingField_1;
};

// System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>
struct Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>
struct Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tC63ACC9835E9694C7859A99329E1BEAEF471A5FB  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tC63ACC9835E9694C7859A99329E1BEAEF471A5FB_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::0F6AB72C1131EC25DB11E9215243CB2D7940C4362ED9CF8BBC14E12A0C2736D9
	__StaticArrayInitTypeSizeU3D160_t9B17CCE502D4B267248D9F47BF3500FE8459FAC6 ___0F6AB72C1131EC25DB11E9215243CB2D7940C4362ED9CF8BBC14E12A0C2736D9_0;
	// System.Int32 <PrivateImplementationDetails>::1130E903A92D4D1430E7FB152CA54F6633C23AEBBB231506E196DA2A8B7256AB
	int32_t ___1130E903A92D4D1430E7FB152CA54F6633C23AEBBB231506E196DA2A8B7256AB_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86
	__StaticArrayInitTypeSizeU3D1024_tEBAD25CCDD8CF7A0A01CE7A77B9CBF1004E89BFC ___12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::2590AFCF5BF0B1E34D694D4A951DCCBF3FB196A245BDB2C1AC2B61A17D6910A4
	__StaticArrayInitTypeSizeU3D40_tE7A7D8301BF246A67A393478A12B3A3D4DFA34C2 ___2590AFCF5BF0B1E34D694D4A951DCCBF3FB196A245BDB2C1AC2B61A17D6910A4_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::2D065BD500E885645FE9C9D7750DE5E1D39E8EBFBAAD10408A31F3D51E439C46
	__StaticArrayInitTypeSizeU3D240_t660F7A777BC81B79E32D3D8953C9C201B5A30FB9 ___2D065BD500E885645FE9C9D7750DE5E1D39E8EBFBAAD10408A31F3D51E439C46_4;
	// System.Int64 <PrivateImplementationDetails>::4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6
	int64_t ___4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6_5;
	// System.Int32 <PrivateImplementationDetails>::50E4D974E7C7603E0A5A40C88E4AEF08CF66B66BB7DEE2BD1FB71003B4CACFDC
	int32_t ___50E4D974E7C7603E0A5A40C88E4AEF08CF66B66BB7DEE2BD1FB71003B4CACFDC_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::5AE7E6A42304DC6E4176210B83C43024F99A0BCE9A870C3B6D2C95FC8EBFB74C
	__StaticArrayInitTypeSizeU3D3_t60B3B4B4E80C98D87C71FDAB856E5465F5A2D1FC ___5AE7E6A42304DC6E4176210B83C43024F99A0BCE9A870C3B6D2C95FC8EBFB74C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2560 <PrivateImplementationDetails>::6B0294FA96970FD8F93B430E941D5C2DC7E62E232AC5F2080FA2592639DAA92D
	__StaticArrayInitTypeSizeU3D2560_tE2B9D206A9A79179A99AC2D736B288C3C37E537C ___6B0294FA96970FD8F93B430E941D5C2DC7E62E232AC5F2080FA2592639DAA92D_8;
	// System.Int32 <PrivateImplementationDetails>::7147F760A4767C8BC8D54EEB4DA367E290FD200336A942481E0F87ED2D9AE4DF
	int32_t ___7147F760A4767C8BC8D54EEB4DA367E290FD200336A942481E0F87ED2D9AE4DF_9;
	// System.Int64 <PrivateImplementationDetails>::789FC78722F443506B28FB5CD3B87B27372EC1C9951A9BFAB39D22EEA323D478
	int64_t ___789FC78722F443506B28FB5CD3B87B27372EC1C9951A9BFAB39D22EEA323D478_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::829CD837576B4B1109AD7C25410714940F73F76CDD1745399E871887DC314D55
	__StaticArrayInitTypeSizeU3D5_tAC70D85DB15CFC39241E91376A89B6D94BB10664 ___829CD837576B4B1109AD7C25410714940F73F76CDD1745399E871887DC314D55_11;
	// System.Int32 <PrivateImplementationDetails>::8EF4F41852F3FDD3E2F1B70CAF5339B993354652A67A9F269FEF82CD29C50A38
	int32_t ___8EF4F41852F3FDD3E2F1B70CAF5339B993354652A67A9F269FEF82CD29C50A38_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::8F2A9ED1BD48A4F03F9B24E204863FBA2EA168B70F01266C739E84C6C3B20FAF
	__StaticArrayInitTypeSizeU3D18_tEB3C5B4AB73809FA7BCBB8F3DF0DC1261726873D ___8F2A9ED1BD48A4F03F9B24E204863FBA2EA168B70F01266C739E84C6C3B20FAF_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3840 <PrivateImplementationDetails>::AE4865556499F7A4B79C7AFD2087D682CFD2F2224CCFE5B3428F1825284C5C59
	__StaticArrayInitTypeSizeU3D3840_t4955FEAF2609665C55E46640ACA4595C51862A64 ___AE4865556499F7A4B79C7AFD2087D682CFD2F2224CCFE5B3428F1825284C5C59_14;
	// System.Int32 <PrivateImplementationDetails>::B43A0D3E3DEBC38B54B01F935415EDED8E8F7AC6ACD679545AEF5E01449C8F10
	int32_t ___B43A0D3E3DEBC38B54B01F935415EDED8E8F7AC6ACD679545AEF5E01449C8F10_15;
	// System.Int32 <PrivateImplementationDetails>::E80D613ED8E92AA5829E2861602FF8498D4657BD4C9917A9536360064A449AC2
	int32_t ___E80D613ED8E92AA5829E2861602FF8498D4657BD4C9917A9536360064A449AC2_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18 <PrivateImplementationDetails>::EC04892185BCBE88CA4F7ED3B99CE8725EC39701217E292A8D6DDF057CE54568
	__StaticArrayInitTypeSizeU3D18_tEB3C5B4AB73809FA7BCBB8F3DF0DC1261726873D ___EC04892185BCBE88CA4F7ED3B99CE8725EC39701217E292A8D6DDF057CE54568_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1120 <PrivateImplementationDetails>::FF44D0C42F4B010881CFB92F17D48FE9E0DCC62F497BF388AEFD339D45C5D73E
	__StaticArrayInitTypeSizeU3D1120_tE403862443BED7C9929EDD0A9F7AFC8F0AD7E7DF ___FF44D0C42F4B010881CFB92F17D48FE9E0DCC62F497BF388AEFD339D45C5D73E_18;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// QRCoder.Exceptions.DataTooLongException
struct DataTooLongException_t33ADED4ED33524F2B78A8E6AF788BCAEB05015AB  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean>
struct Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85  : public MulticastDelegate_t
{
};

// System.Func`3<System.Int32,System.Int32,System.Boolean>
struct Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// QRCoder.QRCodeGenerator/Rectangle[]
struct RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9  : public RuntimeArray
{
	ALIGN_FIELD (8) Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* m_Items[1];

	inline Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Boolean>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Int32,System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3_gshared (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Int32,System.Int32,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_gshared_inline (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Boolean>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_gshared_inline (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Boolean>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0_gshared (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E_gshared (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184_gshared (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_gshared_inline (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7_gshared (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method) ;
// <version>j__TPar <>f__AnonymousType0`2<System.Int32,System.Int32>::get_version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_gshared_inline (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<QRCoder.QRCodeGenerator/PolynomItem>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<QRCoder.QRCodeGenerator/PolynomItem>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3_gshared (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<QRCoder.QRCodeGenerator/VersionInfoDetails>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_gshared (RuntimeObject* ___source0, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___predicate1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m978CAD767E166B6BD2E111732F513A1398B0B974_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<QRCoder.QRCodeGenerator/VersionInfoDetails>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_gshared (RuntimeObject* ___source0, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___predicate1, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`2<System.Int32,System.Int32>::.ctor(<version>j__TPar,<capacity>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E_gshared (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* __this, int32_t ___version0, int32_t ___capacity1, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1<System.Collections.BitArray> QRCoder.QRCodeData::get_ModuleMatrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.BitArray>::get_Count()
inline int32_t List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.BitArray::.ctor(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray__ctor_mA79D6E8B5F3F3E415A8F0056AAF01879D95AF834 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.BitArray>::Insert(System.Int32,T)
inline void List_1_Insert_mBD9DA5B8DB30498CFC371CADCE01DCAF74E5B717 (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, int32_t ___index0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, int32_t, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.BitArray>::Add(T)
inline void List_1_Add_mD2BFC3828E3AAEF9C791D87555F31309F831060C_inline (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A_gshared)(__this, ___collection0, method);
}
// T System.Collections.Generic.List`1<System.Collections.BitArray>::get_Item(System.Int32)
inline BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058 (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Boolean>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_gshared)(__this, ___collection0, method);
}
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.BitArray>::set_Item(System.Int32,T)
inline void List_1_set_Item_m5B91BF0462C0D5DEE6E0F8E293E7283053C4D467 (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, int32_t ___index0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, int32_t, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String QRCoder.QRCodeGenerator/ModulePlacer::ReverseString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModulePlacer_ReverseString_mF2A5159D242C2EDD33DFDE5987A7B8D075FA4E93 (String_t* ___inp0, const RuntimeMethod* method) ;
// System.Void System.Collections.BitArray::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7BD03C48155BFFB01DF6849D06E9E92F029A6867 (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Point::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Point::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m472E5766760D600EA881D17A7570445973526E9A (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___capacity0, method);
}
// System.Void System.Func`3<System.Int32,System.Int32,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3 (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70 (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* __this, int32_t ___key0, Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00*, int32_t, Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::GetEnumerator()
inline Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4 Dictionary_2_GetEnumerator_m7F5D2E5B3CEEA7F7F5BFABB1A126EB8065604D04 (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4 (*) (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m7370ABD6D057E5C5BB12C10099F4D35D36E36F93 (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::get_Current()
inline KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D Enumerator_get_Current_mB6EAE4774AAC84717DB4DD7A8B9162AF5803C8A8_inline (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D (*) (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// System.Void QRCoder.QRCodeData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeData__ctor_mE66F972B9E1C93224EA6BB3C32703D78C5068710 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* __this, int32_t ___version0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.BitArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_inline (KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
// System.String QRCoder.QRCodeGenerator::GetFormatString(QRCoder.QRCodeGenerator/ECCLevel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCodeGenerator_GetFormatString_mB80029750149BBA85DD0C5A738522EC10575D7C1 (int32_t ___level0, int32_t ___maskVersion1, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceFormat(QRCoder.QRCodeData&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceFormat_mAC9A2A67EA726D5B876A1EA9C41D7F5CF490F984 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, String_t* ___formatStr1, const RuntimeMethod* method) ;
// System.String QRCoder.QRCodeGenerator::GetVersionString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCodeGenerator_GetVersionString_m11DFA328E288D4DFCEFA60FFE65A14C8D27AFF9B (int32_t ___version0, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceVersion(QRCoder.QRCodeData&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceVersion_mE4AEAC1CC06150424896F0E76892608C69AB1C9F (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, String_t* ___versionStr1, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, int32_t ___x0, int32_t ___y1, int32_t ___w2, int32_t ___h3, const RuntimeMethod* method) ;
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer::IsBlocked(QRCoder.QRCodeGenerator/Rectangle,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r10, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* ___blockedModules1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::get_Value()
inline Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_inline (KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D* __this, const RuntimeMethod* method)
{
	return ((  Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* (*) (KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// TResult System.Func`3<System.Int32,System.Int32,System.Boolean>::Invoke(T1,T2)
inline bool Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*, int32_t, int32_t, const RuntimeMethod*))Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Int32 QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Score(QRCoder.QRCodeData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaskPattern_Score_m17C57263464A64D4579A9B65F53565EF2C12491B (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m6C7DBF07E9CFCD6F4CD04BDD933252AB4992F5CE (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Func`3<System.Int32,System.Int32,System.Boolean>>::get_Item(TKey)
inline Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98 (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* (*) (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Boolean>::.ctor()
inline void Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Boolean>::Enqueue(T)
inline void Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, bool, const RuntimeMethod*))Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Boolean>::get_Count()
inline int32_t Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_inline (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Boolean>::Dequeue()
inline bool Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>::Add(T)
inline void List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_inline (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* __this, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE*, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>::GetEnumerator()
inline Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851 List_1_GetEnumerator_m99B2A4B7A5688E6C04C43FDC029BFA96672DEF6B (List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851 (*) (List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Point>::Dispose()
inline void Enumerator_Dispose_mF320E7F57F977AAD89AB65496EA0C233F02386CA (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Point>::get_Current()
inline Point_tB2458287F5CF26F000F9528523513000A548815B* Enumerator_get_Current_m546CA3ACF5EE0B2355ABB17E49BE0B42350EBB4D_inline (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851* __this, const RuntimeMethod* method)
{
	return ((  Point_tB2458287F5CF26F000F9528523513000A548815B* (*) (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>::GetEnumerator()
inline Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7 (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 (*) (List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Rectangle>::Dispose()
inline void Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Rectangle>::get_Current()
inline Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_inline (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0* __this, const RuntimeMethod* method)
{
	return ((  Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* (*) (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer::Intersects(QRCoder.QRCodeGenerator/Rectangle,QRCoder.QRCodeGenerator/Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModulePlacer_Intersects_m18870278D4B4B38B6C711431421AC1459FA4E0A7 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r10, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Rectangle>::MoveNext()
inline bool Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877 (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/Point>::MoveNext()
inline bool Enumerator_MoveNext_mEC151852EDBB84EA6898B206BACE2648414073DD (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m984555B4498CDE1EF7DCCD14848BF4E5F2F55D52_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m4C99ACF2E0E55CA53FC647CA6879199C9D0A27F7_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.BitArray>::GetEnumerator()
inline Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D List_1_GetEnumerator_mEACA7CCF0EB5E434ED343D2BADF6F2B852905BB7 (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D (*) (List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.BitArray>::Dispose()
inline void Enumerator_Dispose_m1CD71DBF2BFEB01524287D92201BFB63619E1610 (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.BitArray>::get_Current()
inline BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* Enumerator_get_Current_mC89CA062FD8F1D320A738E607F8158C98C1E2C5E_inline (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D* __this, const RuntimeMethod* method)
{
	return ((  BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* (*) (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator System.Collections.BitArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BitArray_GetEnumerator_m14EE60E271F6BB1982F8C6F698E96281D467F3B4 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.BitArray>::MoveNext()
inline bool Enumerator_MoveNext_m92894C87BDDF88887BCE44E88898C48F319605FD (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/CodewordBlock::.ctor(System.Int32,System.Int32,System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodewordBlock__ctor_m198EB49DDC3EDED406F79EB8E655A6CE31EADE1B (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, int32_t ___groupNumber0, int32_t ___blockNumber1, String_t* ___bitString2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___codeWords3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___eccWords4, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___codeWordsInt5, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___eccWordsInt6, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::get_GroupNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_GroupNumber_mE22CEF437CC98AF27D9F9D0C1EBAF9331ACEC3AA_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::get_BlockNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_BlockNumber_m5BF5697F0B94FB8D06BF9428D0A47E35E804EA46_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.String QRCoder.QRCodeGenerator/CodewordBlock::get_BitString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CodewordBlock_get_BitString_m92AAE1097567F0D3AAD68AAF60E16BA2A1637107_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::get_CodeWords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_CodeWords_m1BBCADEF835D5D6C5ECB1192FB5302115F158275_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::get_CodeWordsInt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_CodeWordsInt_m122A2188A387445B260FE7114EB373EADB29AA73_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::get_ECCWords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_ECCWords_m1AA6966F70A04B0EA5EA9C7D381AF0BBB02C9EF5_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::get_ECCWordsInt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_ECCWordsInt_mFB8EE79835A886AB5449E36D9EC5EE25FE671D0B_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/ECCInfo::.ctor(System.Int32,QRCoder.QRCodeGenerator/ECCLevel,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECCInfo__ctor_m234332B3090F676936510E6508EB19AB70DB32E8 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, int32_t ___version0, int32_t ___errorCorrectionLevel1, int32_t ___totalDataCodewords2, int32_t ___eccPerBlock3, int32_t ___blocksInGroup14, int32_t ___codewordsInGroup15, int32_t ___blocksInGroup26, int32_t ___codewordsInGroup27, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/ECCInfo::get_ErrorCorrectionLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_TotalDataCodewords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_TotalDataCodewords_mC480A552988892FE4BF51243C4640921E7E3C314_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_ECCPerBlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ECCPerBlock_m228730F5A175600D6B48C6AA8C3F1F4A9FE13DDA_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_BlocksInGroup1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup1_mD2D4F0B4A8287C3B5AB3AF1FF113BBF6219C78A8_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_CodewordsInGroup1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup1_m50691183483D03EE20310ACC1147765335D70F31_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_BlocksInGroup2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup2_m96B239DF156DAD01C09EB013C6C868A9735245E3_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_CodewordsInGroup2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup2_mE461AAC6FAA5320EDE8D00EDDE576A24535D6E61_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/VersionInfo::.ctor(System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_m5D8DE7DC9EF203004DDBB05B0C9F30761E4F5B8C (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, int32_t ___version0, List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___versionInfoDetails1, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/VersionInfo::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6_inline (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails> QRCoder.QRCodeGenerator/VersionInfo::get_Details()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/VersionInfoDetails::.ctor(QRCoder.QRCodeGenerator/ECCLevel,System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfoDetails__ctor_mA8B8358F2B13B54B5A12F866261924312D1BE816 (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, int32_t ___errorCorrectionLevel0, Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___capacityDict1, const RuntimeMethod* method) ;
// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/VersionInfoDetails::get_ErrorCorrectionLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32> QRCoder.QRCodeGenerator/VersionInfoDetails::get_CapacityDict()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/Antilog::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Antilog__ctor_m7DA88EBA1CCCF7870899F627A37DC49F3A3DDE6A (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, int32_t ___exponentAlpha0, int32_t ___integerValue1, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Antilog::get_ExponentAlpha()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F_inline (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/Antilog::get_IntegerValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414_inline (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/PolynomItem::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolynomItem__ctor_m235923F040F60FA9B6A7E46D2CA9A77A52B89659 (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, int32_t ___coefficient0, int32_t ___exponent1, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::get_Coefficient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) ;
// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::get_Exponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>::.ctor()
inline void List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0 (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD*, const RuntimeMethod*))List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0_gshared)(__this, method);
}
// System.Void QRCoder.QRCodeGenerator/Polynom::set_PolyItems(System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polynom_set_PolyItems_m13510B9A328F5AF4158FE6851CD9416A333782BF_inline (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem> QRCoder.QRCodeGenerator/Polynom::get_PolyItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* Polynom_get_PolyItems_mA0309AAD392584FF7F370CCCB5E3C04A9D978C55_inline (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>::GetEnumerator()
inline Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C (*) (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD*, const RuntimeMethod*))List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::Dispose()
inline void Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184 (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C*, const RuntimeMethod*))Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::get_Current()
inline PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_inline (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method)
{
	return ((  PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF (*) (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C*, const RuntimeMethod*))Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<QRCoder.QRCodeGenerator/PolynomItem>::MoveNext()
inline bool Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7 (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C*, const RuntimeMethod*))Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7_gshared)(__this, method);
}
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7071EC7453C39807C144BC7A8C73AF65F83E98E9 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, const RuntimeMethod* method) ;
// System.String QRCoder.QRCodeGenerator::DecToBin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QRCodeGenerator_DecToBin_m74E5A8E502DF4FEC94EF0C95C4F9ECD62C7B1369 (int32_t ___decNum0, int32_t ___padLeftUpTo1, const RuntimeMethod* method) ;
// <version>j__TPar <>f__AnonymousType0`2<System.Int32,System.Int32>::get_version()
inline int32_t U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_inline (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_gshared_inline)(__this, method);
}
// System.Int32 QRCoder.QRCodeGenerator::BinToDec(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QRCodeGenerator_BinToDec_m82693BD120275C7F4D5FAB03F53027FC022805E7 (String_t* ___binStr0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<QRCoder.QRCodeGenerator/PolynomItem>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::First<QRCoder.QRCodeGenerator/PolynomItem>(System.Collections.Generic.IEnumerable`1<TSource>)
inline PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804_gshared)(___source0, method);
}
// System.Int32 QRCoder.QRCodeGenerator::GetIntValFromAlphaExp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QRCodeGenerator_GetIntValFromAlphaExp_m51F15590B8E8878042A15673F167959C9ABF6533 (int32_t ___exp0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<QRCoder.QRCodeGenerator/VersionInfoDetails,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3 (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<QRCoder.QRCodeGenerator/VersionInfoDetails>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191 (RuntimeObject* ___source0, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*, const RuntimeMethod*))Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_gshared)(___source0, ___predicate1, method);
}
// TValue System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464 (Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m978CAD767E166B6BD2E111732F513A1398B0B974_gshared)(__this, ___key0, method);
}
// System.Int32 System.Convert::ToInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mED5F008F1BE93687E208DC11B65EFDB2AA8B72BC (int32_t ___value0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<QRCoder.QRCodeGenerator/VersionInfoDetails>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D (RuntimeObject* ___source0, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* ___predicate1, const RuntimeMethod* method)
{
	return ((  VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 (*) (RuntimeObject*, Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*, const RuntimeMethod*))Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_gshared)(___source0, ___predicate1, method);
}
// System.Void <>f__AnonymousType0`2<System.Int32,System.Int32>::.ctor(<version>j__TPar,<capacity>j__TPar)
inline void U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* __this, int32_t ___version0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501*, int32_t, int32_t, const RuntimeMethod*))U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E_gshared)(__this, ___version0, ___capacity1, method);
}
// System.Void QRCoder.AbstractQRCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractQRCode__ctor_mE67ED088046E8668D12A95EB88435201DFDC022C (AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59* __this, const RuntimeMethod* method) ;
// System.Void QRCoder.AbstractQRCode::.ctor(QRCoder.QRCodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractQRCode__ctor_mDFCE60C05283A7ED43A320BD714983B1E34BD57F (AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59* __this, QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* ___data0, const RuntimeMethod* method) ;
// QRCoder.QRCodeData QRCoder.AbstractQRCode::get_QrCodeData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline (AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Size::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_m476DDA9FA3FBB2B730B3A52B2C3A4FE6BD81689C (Size_t9FCA8981191B4D1A693E50590137D636FEAC156D* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Drawing.Color System.Drawing.Color::get_Black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 Color_get_Black_mFACB9C91B6A2D17CD4F657B6A228D4E3221FC186 (const RuntimeMethod* method) ;
// System.Drawing.Color System.Drawing.Color::get_White()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 Color_get_White_mC8214E735A936496BF90F9D632873810221C4366 (const RuntimeMethod* method) ;
// System.String QRCoder.SvgQRCode::GetGraphic(System.Drawing.Size,System.Drawing.Color,System.Drawing.Color,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mEB52EB562CDF1449A86BE8098B4A6F5D3F990ABD (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, Size_t9FCA8981191B4D1A693E50590137D636FEAC156D ___viewBox0, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___darkColor1, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___lightColor2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) ;
// System.String QRCoder.SvgQRCode::GetGraphic(System.Drawing.Size,System.String,System.String,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mB2ED7A6352AB893DA03918FCD933AC2B71D46ACA (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, Size_t9FCA8981191B4D1A693E50590137D636FEAC156D ___viewBox0, String_t* ___darkColorHex1, String_t* ___lightColorHex2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Color::ToArgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color_ToArgb_m1782C7D79C856B95679C601C8A2AB40C8B90AFFC (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661* __this, const RuntimeMethod* method) ;
// System.Drawing.Color System.Drawing.Color::FromArgb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 Color_FromArgb_m8AEB4D512962B2F5DB80026326FBD4B1F4954A10 (int32_t ___argb0, const RuntimeMethod* method) ;
// System.String System.Drawing.ColorTranslator::ToHtml(System.Drawing.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorTranslator_ToHtml_m25DB91FA2BEB0461FF76F6F8FFC53070C4C91534 (Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___c0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Size::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Size_get_Width_m1CAB2903EB07A265C466DF4FE4391DA036FBB1CB_inline (Size_t9FCA8981191B4D1A693E50590137D636FEAC156D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Size::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Size_get_Height_mF208E98EB927661F6D660CEC4E286B82F99D4961_inline (Size_t9FCA8981191B4D1A693E50590137D636FEAC156D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String QRCoder.SvgQRCode::CleanSvgVal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, double ___input0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void QRCoder.QRCodeGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeGenerator__ctor_m8136678A7D7AF4F396D48E67E4B4C2BE854401F7 (QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* __this, const RuntimeMethod* method) ;
// QRCoder.QRCodeData QRCoder.QRCodeGenerator::CreateQrCode(System.String,QRCoder.QRCodeGenerator/ECCLevel,System.Boolean,System.Boolean,QRCoder.QRCodeGenerator/EciMode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* QRCodeGenerator_CreateQrCode_m6B8659C8C3DA25AD19E7B2B3CE343E73E937C471 (QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* __this, String_t* ___plainText0, int32_t ___eccLevel1, bool ___forceUtf82, bool ___utf8BOM3, int32_t ___eciMode4, int32_t ___requestedVersion5, const RuntimeMethod* method) ;
// System.Void QRCoder.SvgQRCode::.ctor(QRCoder.QRCodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgQRCode__ctor_m5ADE374839D16B6451C6D09DCB5D64DCD23FADFB (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* ___data0, const RuntimeMethod* method) ;
// System.String QRCoder.SvgQRCode::GetGraphic(System.Int32,System.String,System.String,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_m43E4B474E8DEAED682C5E66C6512F5E4254C88A0 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, int32_t ___pixelsPerModule0, String_t* ___darkColorHex1, String_t* ___lightColorHex2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::AddQuietZone(QRCoder.QRCodeData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_AddQuietZone_mB6332197DC5AF7F94B19676DD3E8BCED1590A973 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD2BFC3828E3AAEF9C791D87555F31309F831060C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mBD9DA5B8DB30498CFC371CADCE01DCAF74E5B717_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m5B91BF0462C0D5DEE6E0F8E293E7283053C4D467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_5 = NULL;
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* V_6 = NULL;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_3, 8)));
		V_0 = L_4;
		V_1 = 0;
		goto IL_0020;
	}

IL_0018:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (bool)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0020:
	{
		int32_t L_8 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		V_2 = 0;
		goto IL_0041;
	}

IL_002a:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_10 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_11 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_10);
		NullCheck(L_11);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_12;
		L_12 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_11, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = V_0;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_14 = (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*)il2cpp_codegen_object_new(BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BitArray__ctor_mA79D6E8B5F3F3E415A8F0056AAF01879D95AF834(L_14, L_13, NULL);
		NullCheck(L_12);
		List_1_Insert_mBD9DA5B8DB30498CFC371CADCE01DCAF74E5B717(L_12, 0, L_14, List_1_Insert_mBD9DA5B8DB30498CFC371CADCE01DCAF74E5B717_RuntimeMethod_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0041:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) < ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		V_3 = 0;
		goto IL_005f;
	}

IL_0049:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_17 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_18 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_17);
		NullCheck(L_18);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_19;
		L_19 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_18, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = V_0;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_21 = (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*)il2cpp_codegen_object_new(BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		BitArray__ctor_mA79D6E8B5F3F3E415A8F0056AAF01879D95AF834(L_21, L_20, NULL);
		NullCheck(L_19);
		List_1_Add_mD2BFC3828E3AAEF9C791D87555F31309F831060C_inline(L_19, L_21, List_1_Add_mD2BFC3828E3AAEF9C791D87555F31309F831060C_RuntimeMethod_var);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		V_4 = 4;
		goto IL_00bc;
	}

IL_0068:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)4);
		V_5 = L_24;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = V_5;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_26 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A(L_26, (RuntimeObject*)L_25, List_1__ctor_mB199D9D5E202B2AE2458E50C6FDC8FA877C3431A_RuntimeMethod_var);
		V_6 = L_26;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_27 = V_6;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_28 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_29 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_28);
		NullCheck(L_29);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_30;
		L_30 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_29, NULL);
		int32_t L_31 = V_4;
		NullCheck(L_30);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_32;
		L_32 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_30, L_31, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		RuntimeObject* L_33;
		L_33 = Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5(L_32, Enumerable_Cast_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5ACA3F04376BAF762F837D06662B24410FED47E5_RuntimeMethod_var);
		NullCheck(L_27);
		List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC(L_27, L_33, List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_RuntimeMethod_var);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_34 = V_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_35 = V_5;
		NullCheck(L_34);
		List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC(L_34, (RuntimeObject*)L_35, List_1_AddRange_m4FD60CDFEDA1F0FB6CB9195A443C9F092755EEBC_RuntimeMethod_var);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_36 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_37 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_36);
		NullCheck(L_37);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_38;
		L_38 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_37, NULL);
		int32_t L_39 = V_4;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_40 = V_6;
		NullCheck(L_40);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_41;
		L_41 = List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126(L_40, List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_RuntimeMethod_var);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_42 = (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616*)il2cpp_codegen_object_new(BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		BitArray__ctor_mA79D6E8B5F3F3E415A8F0056AAF01879D95AF834(L_42, L_41, NULL);
		NullCheck(L_38);
		List_1_set_Item_m5B91BF0462C0D5DEE6E0F8E293E7283053C4D467(L_38, L_39, L_42, List_1_set_Item_m5B91BF0462C0D5DEE6E0F8E293E7283053C4D467_RuntimeMethod_var);
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00bc:
	{
		int32_t L_44 = V_4;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_45 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_46 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_45);
		NullCheck(L_46);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_47;
		L_47 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_46, NULL);
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_47, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 4)))))
		{
			goto IL_0068;
		}
	}
	{
		return;
	}
}
// System.String QRCoder.QRCodeGenerator/ModulePlacer::ReverseString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModulePlacer_ReverseString_mF2A5159D242C2EDD33DFDE5987A7B8D075FA4E93 (String_t* ___inp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		String_t* L_1 = ___inp0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_3 = ___inp0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0034;
	}

IL_001a:
	{
		String_t* L_5 = V_0;
		String_t* L_6 = ___inp0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}

IL_0038:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceVersion(QRCoder.QRCodeData&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceVersion_mE4AEAC1CC06150424896F0E76892608C69AB1C9F (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, String_t* ___versionStr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = ___versionStr1;
		String_t* L_5;
		L_5 = ModulePlacer_ReverseString_mF2A5159D242C2EDD33DFDE5987A7B8D075FA4E93(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0076;
	}

IL_0018:
	{
		V_3 = 0;
		goto IL_006e;
	}

IL_001c:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_6 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_7 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_6);
		NullCheck(L_7);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_8;
		L_8 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_7, NULL);
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_11;
		L_11 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), ((int32_t)11))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_12 = V_2;
		String_t* L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_14, 3)), L_15)), NULL);
		NullCheck(L_11);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_11, L_12, (bool)((((int32_t)L_16) == ((int32_t)((int32_t)49)))? 1 : 0), NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_17 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_18 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_17);
		NullCheck(L_18);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_19;
		L_19 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_18, NULL);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_21;
		L_21 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_19, L_20, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		String_t* L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_24);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, 3)), L_26)), NULL);
		NullCheck(L_21);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), ((int32_t)11))), (bool)((((int32_t)L_27) == ((int32_t)((int32_t)49)))? 1 : 0), NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006e:
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0076:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceFormat(QRCoder.QRCodeData&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceFormat_mAC9A2A67EA726D5B876A1EA9C41D7F5CF490F984 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, String_t* ___formatStr1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tB2458287F5CF26F000F9528523513000A548815B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tC63ACC9835E9694C7859A99329E1BEAEF471A5FB____2D065BD500E885645FE9C9D7750DE5E1D39E8EBFBAAD10408A31F3D51E439C46_4_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_2 = NULL;
	int32_t V_3 = 0;
	Point_tB2458287F5CF26F000F9528523513000A548815B* V_4 = NULL;
	Point_tB2458287F5CF26F000F9528523513000A548815B* V_5 = NULL;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = ___formatStr1;
		String_t* L_5;
		L_5 = ModulePlacer_ReverseString_mF2A5159D242C2EDD33DFDE5987A7B8D075FA4E93(L_4, NULL);
		V_1 = L_5;
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)((int32_t)15), (il2cpp_array_size_t)4 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_6 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_7);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_8 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tC63ACC9835E9694C7859A99329E1BEAEF471A5FB____2D065BD500E885645FE9C9D7750DE5E1D39E8EBFBAAD10408A31F3D51E439C46_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_8, L_9, NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_10 = L_8;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(0, 2, ((int32_t)il2cpp_codegen_subtract(L_11, 1)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_12 = L_10;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(1, 2, ((int32_t)il2cpp_codegen_subtract(L_13, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_14 = L_12;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(2, 2, ((int32_t)il2cpp_codegen_subtract(L_15, 3)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_16 = L_14;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(3, 2, ((int32_t)il2cpp_codegen_subtract(L_17, 4)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_18 = L_16;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(4, 2, ((int32_t)il2cpp_codegen_subtract(L_19, 5)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_20 = L_18;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(5, 2, ((int32_t)il2cpp_codegen_subtract(L_21, 6)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_22 = L_20;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(6, 2, ((int32_t)il2cpp_codegen_subtract(L_23, 7)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_24 = L_22;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(7, 2, ((int32_t)il2cpp_codegen_subtract(L_25, 8)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_26 = L_24;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(8, 3, ((int32_t)il2cpp_codegen_subtract(L_27, 7)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_28 = L_26;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(((int32_t)9), 3, ((int32_t)il2cpp_codegen_subtract(L_29, 6)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_30 = L_28;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(((int32_t)10), 3, ((int32_t)il2cpp_codegen_subtract(L_31, 5)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_32 = L_30;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(((int32_t)11), 3, ((int32_t)il2cpp_codegen_subtract(L_33, 4)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_34 = L_32;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		(L_34)->SetAt(((int32_t)12), 3, ((int32_t)il2cpp_codegen_subtract(L_35, 3)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_36 = L_34;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(((int32_t)13), 3, ((int32_t)il2cpp_codegen_subtract(L_37, 2)));
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_38 = L_36;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(((int32_t)14), 3, ((int32_t)il2cpp_codegen_subtract(L_39, 1)));
		V_2 = L_38;
		V_3 = 0;
		goto IL_0160;
	}

IL_00da:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_40 = V_2;
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42;
		L_42 = (L_40)->GetAt(L_41, 0);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_43 = V_2;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45;
		L_45 = (L_43)->GetAt(L_44, 1);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_46 = (Point_tB2458287F5CF26F000F9528523513000A548815B*)il2cpp_codegen_object_new(Point_tB2458287F5CF26F000F9528523513000A548815B_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Point__ctor_m7BD03C48155BFFB01DF6849D06E9E92F029A6867(L_46, L_42, L_45, NULL);
		V_4 = L_46;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_47 = V_2;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49;
		L_49 = (L_47)->GetAt(L_48, 2);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_50 = V_2;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = (L_50)->GetAt(L_51, 3);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_53 = (Point_tB2458287F5CF26F000F9528523513000A548815B*)il2cpp_codegen_object_new(Point_tB2458287F5CF26F000F9528523513000A548815B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Point__ctor_m7BD03C48155BFFB01DF6849D06E9E92F029A6867(L_53, L_49, L_52, NULL);
		V_5 = L_53;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_54 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_55 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_54);
		NullCheck(L_55);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_56;
		L_56 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_55, NULL);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_57 = V_4;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline(L_57, NULL);
		NullCheck(L_56);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_59;
		L_59 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_56, L_58, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_60 = V_4;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline(L_60, NULL);
		String_t* L_62 = V_1;
		int32_t L_63 = V_3;
		NullCheck(L_62);
		Il2CppChar L_64;
		L_64 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_62, L_63, NULL);
		NullCheck(L_59);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_59, L_61, (bool)((((int32_t)L_64) == ((int32_t)((int32_t)49)))? 1 : 0), NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_65 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_66 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_65);
		NullCheck(L_66);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_67;
		L_67 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_66, NULL);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_68 = V_5;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline(L_68, NULL);
		NullCheck(L_67);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_70;
		L_70 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_67, L_69, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		Point_tB2458287F5CF26F000F9528523513000A548815B* L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline(L_71, NULL);
		String_t* L_73 = V_1;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		Il2CppChar L_75;
		L_75 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_73, L_74, NULL);
		NullCheck(L_70);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_70, L_72, (bool)((((int32_t)L_75) == ((int32_t)((int32_t)49)))? 1 : 0), NULL);
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0160:
	{
		int32_t L_77 = V_3;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)15))))
		{
			goto IL_00da;
		}
	}
	{
		return;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/ModulePlacer::MaskCode(QRCoder.QRCodeData&,System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&,QRCoder.QRCodeGenerator/ECCLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModulePlacer_MaskCode_m199DB72D98B2E5F6B948BC526A6D9A9AD37AC108 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, int32_t ___version1, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules2, int32_t ___eccLevel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7F5D2E5B3CEEA7F7F5BFABB1A126EB8065604D04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m472E5766760D600EA881D17A7570445973526E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7370ABD6D057E5C5BB12C10099F4D35D36E36F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6C7DBF07E9CFCD6F4CD04BDD933252AB4992F5CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB6EAE4774AAC84717DB4DD7A8B9162AF5803C8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern1_m83EDA064FD99E492DE21FEC74C0DD56BF45F146E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern2_mC26DBCC59194A3FE8BA38B1F22960FA884828245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern3_m65ABDF06BABEFB919C54C11F7C6C3ED21FEDB52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern4_mB90F08CA3FCF19547B94DEEB6A485168D801FCC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern5_mF8A2F0DF0F2A1F45EDE0FF8AE4D2E70DC18A9809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern6_mEC8EF4DF210EC48A23B430E785CB4DDE31D05916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern7_m6B2CA1B84C68F052BECBA5E38BDF54D70FA983D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskPattern_Pattern8_m638C0FBF0C38AFCD3A6E105621E6FC8FD6943A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* V_3 = NULL;
	Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D V_5;
	memset((&V_5), 0, sizeof(V_5));
	QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		V_1 = 0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_2 = L_3;
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_4 = (Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00*)il2cpp_codegen_object_new(Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m472E5766760D600EA881D17A7570445973526E9A(L_4, 8, Dictionary_2__ctor_m472E5766760D600EA881D17A7570445973526E9A_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_5 = L_4;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_6 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_6, NULL, (intptr_t)((void*)MaskPattern_Pattern1_m83EDA064FD99E492DE21FEC74C0DD56BF45F146E_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_5, 1, L_6, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_7 = L_5;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_8 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_8, NULL, (intptr_t)((void*)MaskPattern_Pattern2_mC26DBCC59194A3FE8BA38B1F22960FA884828245_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_7, 2, L_8, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_9 = L_7;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_10 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_10, NULL, (intptr_t)((void*)MaskPattern_Pattern3_m65ABDF06BABEFB919C54C11F7C6C3ED21FEDB52B_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_9, 3, L_10, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_11 = L_9;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_12 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_12, NULL, (intptr_t)((void*)MaskPattern_Pattern4_mB90F08CA3FCF19547B94DEEB6A485168D801FCC0_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_11, 4, L_12, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_13 = L_11;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_14 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_14, NULL, (intptr_t)((void*)MaskPattern_Pattern5_mF8A2F0DF0F2A1F45EDE0FF8AE4D2E70DC18A9809_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_13, 5, L_14, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_15 = L_13;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_16 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_16, NULL, (intptr_t)((void*)MaskPattern_Pattern6_mEC8EF4DF210EC48A23B430E785CB4DDE31D05916_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_15, 6, L_16, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_17 = L_15;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_18 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_18, NULL, (intptr_t)((void*)MaskPattern_Pattern7_m6B2CA1B84C68F052BECBA5E38BDF54D70FA983D2_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_17, 7, L_18, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_19 = L_17;
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_20 = (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69*)il2cpp_codegen_object_new(Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_3__ctor_m5C0B07EE1619560A43C23CFB2723E33008414AC3(L_20, NULL, (intptr_t)((void*)MaskPattern_Pattern8_m638C0FBF0C38AFCD3A6E105621E6FC8FD6943A81_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70(L_19, 8, L_20, Dictionary_2_Add_m15B3927932EA05320F2CEB89220586C6E653DA70_RuntimeMethod_var);
		V_3 = L_19;
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_21 = V_3;
		NullCheck(L_21);
		Enumerator_tF1B3AD8B9768267469F7F1B4211AF79DADA202A4 L_22;
		L_22 = Dictionary_2_GetEnumerator_m7F5D2E5B3CEEA7F7F5BFABB1A126EB8065604D04(L_21, Dictionary_2_GetEnumerator_m7F5D2E5B3CEEA7F7F5BFABB1A126EB8065604D04_RuntimeMethod_var);
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_027c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7370ABD6D057E5C5BB12C10099F4D35D36E36F93((&V_4), Enumerator_Dispose_m7370ABD6D057E5C5BB12C10099F4D35D36E36F93_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_026e_1;
			}

IL_00c3_1:
			{
				KeyValuePair_2_tA5A1453FACC3CD033F9D17873E9C0CDC2102E22D L_23;
				L_23 = Enumerator_get_Current_mB6EAE4774AAC84717DB4DD7A8B9162AF5803C8A8_inline((&V_4), Enumerator_get_Current_mB6EAE4774AAC84717DB4DD7A8B9162AF5803C8A8_RuntimeMethod_var);
				V_5 = L_23;
				int32_t L_24 = ___version1;
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_25 = (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F*)il2cpp_codegen_object_new(QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				QRCodeData__ctor_mE66F972B9E1C93224EA6BB3C32703D78C5068710(L_25, L_24, NULL);
				V_6 = L_25;
				V_9 = 0;
				goto IL_0119_1;
			}

IL_00d9_1:
			{
				V_10 = 0;
				goto IL_010e_1;
			}

IL_00de_1:
			{
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_26 = V_6;
				NullCheck(L_26);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_27;
				L_27 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_26, NULL);
				int32_t L_28 = V_9;
				NullCheck(L_27);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_29;
				L_29 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_27, L_28, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				int32_t L_30 = V_10;
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_31 = ___qrCode0;
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_32 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_31);
				NullCheck(L_32);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_33;
				L_33 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_32, NULL);
				int32_t L_34 = V_9;
				NullCheck(L_33);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_35;
				L_35 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_33, L_34, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				int32_t L_36 = V_10;
				NullCheck(L_35);
				bool L_37;
				L_37 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_35, L_36, NULL);
				NullCheck(L_29);
				BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_29, L_30, L_37, NULL);
				int32_t L_38 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			}

IL_010e_1:
			{
				int32_t L_39 = V_10;
				int32_t L_40 = V_2;
				if ((((int32_t)L_39) < ((int32_t)L_40)))
				{
					goto IL_00de_1;
				}
			}
			{
				int32_t L_41 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_0119_1:
			{
				int32_t L_42 = V_9;
				int32_t L_43 = V_2;
				if ((((int32_t)L_42) < ((int32_t)L_43)))
				{
					goto IL_00d9_1;
				}
			}
			{
				int32_t L_44 = ___eccLevel3;
				int32_t L_45;
				L_45 = KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_inline((&V_5), KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
				String_t* L_46;
				L_46 = QRCodeGenerator_GetFormatString_mB80029750149BBA85DD0C5A738522EC10575D7C1(L_44, ((int32_t)il2cpp_codegen_subtract(L_45, 1)), NULL);
				V_7 = L_46;
				String_t* L_47 = V_7;
				ModulePlacer_PlaceFormat_mAC9A2A67EA726D5B876A1EA9C41D7F5CF490F984((&V_6), L_47, NULL);
				int32_t L_48 = ___version1;
				if ((((int32_t)L_48) < ((int32_t)7)))
				{
					goto IL_014d_1;
				}
			}
			{
				int32_t L_49 = ___version1;
				il2cpp_codegen_runtime_class_init_inline(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
				String_t* L_50;
				L_50 = QRCodeGenerator_GetVersionString_m11DFA328E288D4DFCEFA60FFE65A14C8D27AFF9B(L_49, NULL);
				V_11 = L_50;
				String_t* L_51 = V_11;
				ModulePlacer_PlaceVersion_mE4AEAC1CC06150424896F0E76892608C69AB1C9F((&V_6), L_51, NULL);
			}

IL_014d_1:
			{
				V_12 = 0;
				goto IL_023f_1;
			}

IL_0155_1:
			{
				V_13 = 0;
				goto IL_01e5_1;
			}

IL_015d_1:
			{
				int32_t L_52 = V_12;
				int32_t L_53 = V_13;
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_54 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
				NullCheck(L_54);
				Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_54, L_52, L_53, 1, 1, NULL);
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_55 = ___blockedModules2;
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_56 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_55);
				bool L_57;
				L_57 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_54, L_56, NULL);
				if (L_57)
				{
					goto IL_01df_1;
				}
			}
			{
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_58 = V_6;
				NullCheck(L_58);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_59;
				L_59 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_58, NULL);
				int32_t L_60 = V_13;
				NullCheck(L_59);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_61;
				L_61 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_59, L_60, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				V_14 = L_61;
				int32_t L_62 = V_12;
				V_15 = L_62;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_63 = V_14;
				int32_t L_64 = V_15;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_65 = V_14;
				int32_t L_66 = V_15;
				NullCheck(L_65);
				bool L_67;
				L_67 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_65, L_66, NULL);
				Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_68;
				L_68 = KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_inline((&V_5), KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_RuntimeMethod_var);
				int32_t L_69 = V_12;
				int32_t L_70 = V_13;
				NullCheck(L_68);
				bool L_71;
				L_71 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_68, L_69, L_70, NULL);
				NullCheck(L_63);
				BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_63, L_64, (bool)((int32_t)((int32_t)L_67^(int32_t)L_71)), NULL);
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_72 = V_6;
				NullCheck(L_72);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_73;
				L_73 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_72, NULL);
				int32_t L_74 = V_12;
				NullCheck(L_73);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_75;
				L_75 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_73, L_74, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				V_14 = L_75;
				int32_t L_76 = V_13;
				V_15 = L_76;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_77 = V_14;
				int32_t L_78 = V_15;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_79 = V_14;
				int32_t L_80 = V_15;
				NullCheck(L_79);
				bool L_81;
				L_81 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_79, L_80, NULL);
				Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_82;
				L_82 = KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_inline((&V_5), KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_RuntimeMethod_var);
				int32_t L_83 = V_13;
				int32_t L_84 = V_12;
				NullCheck(L_82);
				bool L_85;
				L_85 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_82, L_83, L_84, NULL);
				NullCheck(L_77);
				BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_77, L_78, (bool)((int32_t)((int32_t)L_81^(int32_t)L_85)), NULL);
			}

IL_01df_1:
			{
				int32_t L_86 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_86, 1));
			}

IL_01e5_1:
			{
				int32_t L_87 = V_13;
				int32_t L_88 = V_12;
				if ((((int32_t)L_87) < ((int32_t)L_88)))
				{
					goto IL_015d_1;
				}
			}
			{
				int32_t L_89 = V_12;
				int32_t L_90 = V_12;
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_91 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
				NullCheck(L_91);
				Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_91, L_89, L_90, 1, 1, NULL);
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_92 = ___blockedModules2;
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_93 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_92);
				bool L_94;
				L_94 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_91, L_93, NULL);
				if (L_94)
				{
					goto IL_0239_1;
				}
			}
			{
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_95 = V_6;
				NullCheck(L_95);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_96;
				L_96 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_95, NULL);
				int32_t L_97 = V_12;
				NullCheck(L_96);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_98;
				L_98 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_96, L_97, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				V_14 = L_98;
				int32_t L_99 = V_12;
				V_15 = L_99;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_100 = V_14;
				int32_t L_101 = V_15;
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_102 = V_14;
				int32_t L_103 = V_15;
				NullCheck(L_102);
				bool L_104;
				L_104 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_102, L_103, NULL);
				Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_105;
				L_105 = KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_inline((&V_5), KeyValuePair_2_get_Value_m299C47776AAE9315EC1596B57EE9A359324A7B6A_RuntimeMethod_var);
				int32_t L_106 = V_12;
				int32_t L_107 = V_12;
				NullCheck(L_105);
				bool L_108;
				L_108 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_105, L_106, L_107, NULL);
				NullCheck(L_100);
				BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_100, L_101, (bool)((int32_t)((int32_t)L_104^(int32_t)L_108)), NULL);
			}

IL_0239_1:
			{
				int32_t L_109 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_109, 1));
			}

IL_023f_1:
			{
				int32_t L_110 = V_12;
				int32_t L_111 = V_2;
				if ((((int32_t)L_110) < ((int32_t)L_111)))
				{
					goto IL_0155_1;
				}
			}
			{
				int32_t L_112;
				L_112 = MaskPattern_Score_m17C57263464A64D4579A9B65F53565EF2C12491B((&V_6), NULL);
				V_8 = L_112;
				bool L_113;
				L_113 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (!L_113)
				{
					goto IL_025e_1;
				}
			}
			{
				int32_t L_114 = V_1;
				int32_t L_115 = V_8;
				if ((((int32_t)L_114) <= ((int32_t)L_115)))
				{
					goto IL_026e_1;
				}
			}

IL_025e_1:
			{
				int32_t L_116;
				L_116 = KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_inline((&V_5), KeyValuePair_2_get_Key_mA9A052379D8AFFF09EE56C527A3AAC9C952AFD0B_RuntimeMethod_var);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_117;
				memset((&L_117), 0, sizeof(L_117));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_117), L_116, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				V_0 = L_117;
				int32_t L_118 = V_8;
				V_1 = L_118;
			}

IL_026e_1:
			{
				bool L_119;
				L_119 = Enumerator_MoveNext_m6C7DBF07E9CFCD6F4CD04BDD933252AB4992F5CE((&V_4), Enumerator_MoveNext_m6C7DBF07E9CFCD6F4CD04BDD933252AB4992F5CE_RuntimeMethod_var);
				if (L_119)
				{
					goto IL_00c3_1;
				}
			}
			{
				goto IL_028a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_028a:
	{
		V_16 = 0;
		goto IL_038e;
	}

IL_0292:
	{
		V_17 = 0;
		goto IL_032e;
	}

IL_029a:
	{
		int32_t L_120 = V_16;
		int32_t L_121 = V_17;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_122 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_122);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_122, L_120, L_121, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_123 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_124 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_123);
		bool L_125;
		L_125 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_122, L_124, NULL);
		if (L_125)
		{
			goto IL_0328;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_126 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_127 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_126);
		NullCheck(L_127);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_128;
		L_128 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_127, NULL);
		int32_t L_129 = V_17;
		NullCheck(L_128);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_130;
		L_130 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_128, L_129, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		V_14 = L_130;
		int32_t L_131 = V_16;
		V_15 = L_131;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_132 = V_14;
		int32_t L_133 = V_15;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_134 = V_14;
		int32_t L_135 = V_15;
		NullCheck(L_134);
		bool L_136;
		L_136 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_134, L_135, NULL);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_137 = V_3;
		int32_t L_138;
		L_138 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_137);
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_139;
		L_139 = Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98(L_137, L_138, Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98_RuntimeMethod_var);
		int32_t L_140 = V_16;
		int32_t L_141 = V_17;
		NullCheck(L_139);
		bool L_142;
		L_142 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_139, L_140, L_141, NULL);
		NullCheck(L_132);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_132, L_133, (bool)((int32_t)((int32_t)L_136^(int32_t)L_142)), NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_143 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_144 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_143);
		NullCheck(L_144);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_145;
		L_145 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_144, NULL);
		int32_t L_146 = V_16;
		NullCheck(L_145);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_147;
		L_147 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_145, L_146, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		V_14 = L_147;
		int32_t L_148 = V_17;
		V_15 = L_148;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_149 = V_14;
		int32_t L_150 = V_15;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_151 = V_14;
		int32_t L_152 = V_15;
		NullCheck(L_151);
		bool L_153;
		L_153 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_151, L_152, NULL);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_154 = V_3;
		int32_t L_155;
		L_155 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_154);
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_156;
		L_156 = Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98(L_154, L_155, Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98_RuntimeMethod_var);
		int32_t L_157 = V_17;
		int32_t L_158 = V_16;
		NullCheck(L_156);
		bool L_159;
		L_159 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_156, L_157, L_158, NULL);
		NullCheck(L_149);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_149, L_150, (bool)((int32_t)((int32_t)L_153^(int32_t)L_159)), NULL);
	}

IL_0328:
	{
		int32_t L_160 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_160, 1));
	}

IL_032e:
	{
		int32_t L_161 = V_17;
		int32_t L_162 = V_16;
		if ((((int32_t)L_161) < ((int32_t)L_162)))
		{
			goto IL_029a;
		}
	}
	{
		int32_t L_163 = V_16;
		int32_t L_164 = V_16;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_165 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_165);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_165, L_163, L_164, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_166 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_167 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_166);
		bool L_168;
		L_168 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_165, L_167, NULL);
		if (L_168)
		{
			goto IL_0388;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_169 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_170 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_169);
		NullCheck(L_170);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_171;
		L_171 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_170, NULL);
		int32_t L_172 = V_16;
		NullCheck(L_171);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_173;
		L_173 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_171, L_172, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		V_14 = L_173;
		int32_t L_174 = V_16;
		V_15 = L_174;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_175 = V_14;
		int32_t L_176 = V_15;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_177 = V_14;
		int32_t L_178 = V_15;
		NullCheck(L_177);
		bool L_179;
		L_179 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_177, L_178, NULL);
		Dictionary_2_t00FF376E49FF9CA7D8C2C6DE9AF359E81289DD00* L_180 = V_3;
		int32_t L_181;
		L_181 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_180);
		Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* L_182;
		L_182 = Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98(L_180, L_181, Dictionary_2_get_Item_m33CCF6B075FC6BDE272F2EA72184D1CF607B0F98_RuntimeMethod_var);
		int32_t L_183 = V_16;
		int32_t L_184 = V_16;
		NullCheck(L_182);
		bool L_185;
		L_185 = Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_inline(L_182, L_183, L_184, NULL);
		NullCheck(L_175);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_175, L_176, (bool)((int32_t)((int32_t)L_179^(int32_t)L_185)), NULL);
	}

IL_0388:
	{
		int32_t L_186 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_186, 1));
	}

IL_038e:
	{
		int32_t L_187 = V_16;
		int32_t L_188 = V_2;
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_0292;
		}
	}
	{
		int32_t L_189;
		L_189 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_0), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_189, 1));
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceDataWords(QRCoder.QRCodeData&,System.String,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceDataWords_mF393E3948CE38F1521315301D4D32619491C70B7 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, String_t* ___data1, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_0 = L_3;
		V_1 = (bool)1;
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_4 = (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*)il2cpp_codegen_object_new(Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B(L_4, Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_RuntimeMethod_var);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0031;
	}

IL_0019:
	{
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_5 = V_2;
		String_t* L_6 = ___data1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		NullCheck(L_5);
		Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16(L_5, (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)((int32_t)48)))? 1 : 0)) == ((int32_t)0))? 1 : 0), Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_RuntimeMethod_var);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		int32_t L_10 = V_3;
		String_t* L_11 = ___data1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_13 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_017c;
	}

IL_0044:
	{
		int32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)6))))
		{
			goto IL_004c;
		}
	}
	{
		V_4 = 5;
	}

IL_004c:
	{
		V_5 = 1;
		goto IL_0169;
	}

IL_0054:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_inline(L_18, Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_6;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_22 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_22, L_20, L_21, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_23 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_24 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_23);
		bool L_25;
		L_25 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_0098;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_26 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_27 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_26);
		NullCheck(L_27);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_28;
		L_28 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_27, NULL);
		int32_t L_29 = V_6;
		NullCheck(L_28);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_30;
		L_30 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_28, L_29, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_31 = V_4;
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_32 = V_2;
		NullCheck(L_32);
		bool L_33;
		L_33 = Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13(L_32, Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var);
		NullCheck(L_30);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_30, L_31, L_33, NULL);
	}

IL_0098:
	{
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_inline(L_34, Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_37 = V_4;
		int32_t L_38 = V_6;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_39 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_39, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), L_38, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_40 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_41 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_40);
		bool L_42;
		L_42 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0163;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_43 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_44 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_43);
		NullCheck(L_44);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_45;
		L_45 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_44, NULL);
		int32_t L_46 = V_6;
		NullCheck(L_45);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_47;
		L_47 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_45, L_46, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_48 = V_4;
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_49 = V_2;
		NullCheck(L_49);
		bool L_50;
		L_50 = Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13(L_49, Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var);
		NullCheck(L_47);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_47, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), L_50, NULL);
		goto IL_0163;
	}

IL_00e4:
	{
		int32_t L_51 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_inline(L_52, Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_54 = V_4;
		int32_t L_55 = V_6;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_56 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_56, L_54, L_55, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_57 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_58 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_57);
		bool L_59;
		L_59 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_56, L_58, NULL);
		if (L_59)
		{
			goto IL_0122;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_60 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_61 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_60);
		NullCheck(L_61);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_62;
		L_62 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_61, NULL);
		int32_t L_63 = V_6;
		NullCheck(L_62);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_64;
		L_64 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_62, L_63, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_65 = V_4;
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_66 = V_2;
		NullCheck(L_66);
		bool L_67;
		L_67 = Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13(L_66, Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var);
		NullCheck(L_64);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_64, L_65, L_67, NULL);
	}

IL_0122:
	{
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_inline(L_68, Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_RuntimeMethod_var);
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_70 = V_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_71 = V_4;
		int32_t L_72 = V_6;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_73 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_73, ((int32_t)il2cpp_codegen_subtract(L_71, 1)), L_72, 1, 1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_74 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_75 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_74);
		bool L_76;
		L_76 = ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046(L_73, L_75, NULL);
		if (L_76)
		{
			goto IL_0163;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_77 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_78 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_77);
		NullCheck(L_78);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_79;
		L_79 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_78, NULL);
		int32_t L_80 = V_6;
		NullCheck(L_79);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_81;
		L_81 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_79, L_80, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_82 = V_4;
		Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* L_83 = V_2;
		NullCheck(L_83);
		bool L_84;
		L_84 = Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13(L_83, Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_RuntimeMethod_var);
		NullCheck(L_81);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_81, ((int32_t)il2cpp_codegen_subtract(L_82, 1)), L_84, NULL);
	}

IL_0163:
	{
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0169:
	{
		int32_t L_86 = V_5;
		int32_t L_87 = V_0;
		if ((((int32_t)L_86) <= ((int32_t)L_87)))
		{
			goto IL_0054;
		}
	}
	{
		bool L_88 = V_1;
		V_1 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_89, 2));
	}

IL_017c:
	{
		int32_t L_90 = V_4;
		if ((((int32_t)L_90) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::ReserveSeperatorAreas(System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_ReserveSeperatorAreas_m7ED501060ECE7715B046DC6630809C325B4D100B (int32_t ___size0, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_0 = ___blockedModules1;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_1 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_0);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_2 = (RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)SZArrayNew(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var, (uint32_t)6);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_3 = L_2;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_4 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_4, 7, 0, 1, 8, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_4);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_5 = L_3;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_6 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_6, 0, 7, 7, 1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_6);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_7 = L_5;
		int32_t L_8 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_9 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_9, 0, ((int32_t)il2cpp_codegen_subtract(L_8, 8)), 8, 1, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_9);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_10 = L_7;
		int32_t L_11 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_12 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_12, 7, ((int32_t)il2cpp_codegen_subtract(L_11, 7)), 1, 7, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_12);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_13 = L_10;
		int32_t L_14 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_15 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_15, ((int32_t)il2cpp_codegen_subtract(L_14, 8)), 0, 1, 8, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_15);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_16 = L_13;
		int32_t L_17 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_18 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_18, ((int32_t)il2cpp_codegen_subtract(L_17, 7)), 7, 7, 1, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_18);
		NullCheck(L_1);
		List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E(L_1, (RuntimeObject*)L_16, List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::ReserveVersionAreas(System.Int32,System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_ReserveVersionAreas_mF1494A9395646C8A363C8A1D5CCEEA087C93B971 (int32_t ___size0, int32_t ___version1, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_0 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_1 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_0);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_2 = (RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)SZArrayNew(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var, (uint32_t)6);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_3 = L_2;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_4 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_4, 8, 0, 1, 6, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_4);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_5 = L_3;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_6 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_6, 8, 7, 1, 1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_6);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_7 = L_5;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_8 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_8, 0, 8, 6, 1, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_8);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_9 = L_7;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_10 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_10, 7, 8, 2, 1, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_10);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_11 = L_9;
		int32_t L_12 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_13 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_13, ((int32_t)il2cpp_codegen_subtract(L_12, 8)), 8, 8, 1, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_13);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_14 = L_11;
		int32_t L_15 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_16 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_16, 8, ((int32_t)il2cpp_codegen_subtract(L_15, 7)), 1, 7, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_16);
		NullCheck(L_1);
		List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E(L_1, (RuntimeObject*)L_14, List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		int32_t L_17 = ___version1;
		if ((((int32_t)L_17) < ((int32_t)7)))
		{
			goto IL_0088;
		}
	}
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_18 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_19 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_18);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_20 = (RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)SZArrayNew(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var, (uint32_t)2);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_21 = L_20;
		int32_t L_22 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_23 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_23, ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)11))), 0, 3, 6, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_23);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_24 = L_21;
		int32_t L_25 = ___size0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_26 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_26, 0, ((int32_t)il2cpp_codegen_subtract(L_25, ((int32_t)11))), 6, 3, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_26);
		NullCheck(L_19);
		List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E(L_19, (RuntimeObject*)L_24, List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
	}

IL_0088:
	{
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceDarkModule(QRCoder.QRCodeData&,System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceDarkModule_m6EF490EFC7B1D63CB2068A31BEBC6D2B8608CD9F (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, int32_t ___version1, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		int32_t L_3 = ___version1;
		NullCheck(L_2);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_4;
		L_4 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_2, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, L_3)), ((int32_t)9))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		NullCheck(L_4);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_4, 8, (bool)1, NULL);
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_5 = ___blockedModules2;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_6 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_5);
		int32_t L_7 = ___version1;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_8 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_8, 8, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, L_7)), ((int32_t)9))), 1, 1, NULL);
		NullCheck(L_6);
		List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_inline(L_6, L_8, List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceFinderPatterns(QRCoder.QRCodeData&,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceFinderPatterns_m3315809C397A9E6A4D78713FF6D96136B6F59392 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 7)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 7)));
		V_1 = L_7;
		V_2 = 0;
		goto IL_009d;
	}

IL_0024:
	{
		V_3 = 0;
		goto IL_007f;
	}

IL_0028:
	{
		V_4 = 0;
		goto IL_0076;
	}

IL_002d:
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)5))))
		{
			goto IL_003f;
		}
	}

IL_0035:
	{
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) < ((int32_t)6)))
		{
			goto IL_0070;
		}
	}

IL_003f:
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) >= ((int32_t)6)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_0070;
		}
	}

IL_0051:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_17 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_18 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_17);
		NullCheck(L_18);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_19;
		L_19 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_18, NULL);
		int32_t L_20 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_25;
		L_25 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_19, ((int32_t)il2cpp_codegen_add(L_20, L_24)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_26 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_25, ((int32_t)il2cpp_codegen_add(L_26, L_30)), (bool)1, NULL);
	}

IL_0070:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0076:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)7)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_007f:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) < ((int32_t)7)))
		{
			goto IL_0028;
		}
	}
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_35 = ___blockedModules1;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_36 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_1;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_45 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_45, L_40, L_44, 7, 7, NULL);
		NullCheck(L_36);
		List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_inline(L_36, L_45, List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 2));
	}

IL_009d:
	{
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)6)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceAlignmentPatterns(QRCoder.QRCodeData&,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point>,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceAlignmentPatterns_m5EDFB8A29B3191BF29C3DAC94C509678E2992BA7 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* ___alignmentPatternLocations1, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF320E7F57F977AAD89AB65496EA0C233F02386CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEC151852EDBB84EA6898B206BACE2648414073DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m546CA3ACF5EE0B2355ABB17E49BE0B42350EBB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m99B2A4B7A5688E6C04C43FDC029BFA96672DEF6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Point_tB2458287F5CF26F000F9528523513000A548815B* V_1 = NULL;
	Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* V_2 = NULL;
	bool V_3 = false;
	Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* L_0 = ___alignmentPatternLocations1;
		NullCheck(L_0);
		Enumerator_t1F76944F22C73F219E171C160588EEB6ACB96851 L_1;
		L_1 = List_1_GetEnumerator_m99B2A4B7A5688E6C04C43FDC029BFA96672DEF6B(L_0, List_1_GetEnumerator_m99B2A4B7A5688E6C04C43FDC029BFA96672DEF6B_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF320E7F57F977AAD89AB65496EA0C233F02386CA((&V_0), Enumerator_Dispose_mF320E7F57F977AAD89AB65496EA0C233F02386CA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e2_1;
			}

IL_000c_1:
			{
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_2;
				L_2 = Enumerator_get_Current_m546CA3ACF5EE0B2355ABB17E49BE0B42350EBB4D_inline((&V_0), Enumerator_get_Current_m546CA3ACF5EE0B2355ABB17E49BE0B42350EBB4D_RuntimeMethod_var);
				V_1 = L_2;
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline(L_3, NULL);
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_5 = V_1;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline(L_5, NULL);
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_7 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_7, L_4, L_6, 5, 5, NULL);
				V_2 = L_7;
				V_3 = (bool)0;
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_8 = ___blockedModules2;
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_9 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_8);
				NullCheck(L_9);
				Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 L_10;
				L_10 = List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7(L_9, List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7_RuntimeMethod_var);
				V_4 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0057_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA((&V_4), Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_004c_2;
					}

IL_0035_2:
					{
						Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_11;
						L_11 = Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_inline((&V_4), Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_RuntimeMethod_var);
						V_5 = L_11;
						Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_12 = V_2;
						Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_13 = V_5;
						bool L_14;
						L_14 = ModulePlacer_Intersects_m18870278D4B4B38B6C711431421AC1459FA4E0A7(L_12, L_13, NULL);
						if (!L_14)
						{
							goto IL_004c_2;
						}
					}
					{
						V_3 = (bool)1;
						goto IL_0065_1;
					}

IL_004c_2:
					{
						bool L_15;
						L_15 = Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877((&V_4), Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877_RuntimeMethod_var);
						if (L_15)
						{
							goto IL_0035_2;
						}
					}
					{
						goto IL_0065_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0065_1:
			{
				bool L_16 = V_3;
				if (L_16)
				{
					goto IL_00e2_1;
				}
			}
			{
				V_6 = 0;
				goto IL_00c3_1;
			}

IL_006d_1:
			{
				V_7 = 0;
				goto IL_00b8_1;
			}

IL_0072_1:
			{
				int32_t L_17 = V_7;
				if (!L_17)
				{
					goto IL_008e_1;
				}
			}
			{
				int32_t L_18 = V_7;
				if ((((int32_t)L_18) == ((int32_t)4)))
				{
					goto IL_008e_1;
				}
			}
			{
				int32_t L_19 = V_6;
				if (!L_19)
				{
					goto IL_008e_1;
				}
			}
			{
				int32_t L_20 = V_6;
				if ((((int32_t)L_20) == ((int32_t)4)))
				{
					goto IL_008e_1;
				}
			}
			{
				int32_t L_21 = V_6;
				if ((!(((uint32_t)L_21) == ((uint32_t)2))))
				{
					goto IL_00b2_1;
				}
			}
			{
				int32_t L_22 = V_7;
				if ((!(((uint32_t)L_22) == ((uint32_t)2))))
				{
					goto IL_00b2_1;
				}
			}

IL_008e_1:
			{
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_23 = ___qrCode0;
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_24 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_23);
				NullCheck(L_24);
				List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_25;
				L_25 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_24, NULL);
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_26 = V_1;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline(L_26, NULL);
				int32_t L_28 = V_7;
				NullCheck(L_25);
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_29;
				L_29 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_25, ((int32_t)il2cpp_codegen_add(L_27, L_28)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_30 = V_1;
				NullCheck(L_30);
				int32_t L_31;
				L_31 = Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline(L_30, NULL);
				int32_t L_32 = V_6;
				NullCheck(L_29);
				BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_29, ((int32_t)il2cpp_codegen_add(L_31, L_32)), (bool)1, NULL);
			}

IL_00b2_1:
			{
				int32_t L_33 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			}

IL_00b8_1:
			{
				int32_t L_34 = V_7;
				if ((((int32_t)L_34) < ((int32_t)5)))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_35 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			}

IL_00c3_1:
			{
				int32_t L_36 = V_6;
				if ((((int32_t)L_36) < ((int32_t)5)))
				{
					goto IL_006d_1;
				}
			}
			{
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_37 = ___blockedModules2;
				List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_38 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_37);
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_39 = V_1;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline(L_39, NULL);
				Point_tB2458287F5CF26F000F9528523513000A548815B* L_41 = V_1;
				NullCheck(L_41);
				int32_t L_42;
				L_42 = Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline(L_41, NULL);
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_43 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
				NullCheck(L_43);
				Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_43, L_40, L_42, 5, 5, NULL);
				NullCheck(L_38);
				List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_inline(L_38, L_43, List_1_Add_mFB8FF5BDD9E6AE1F4DA713BEA74ED4CF463BEBFD_RuntimeMethod_var);
			}

IL_00e2_1:
			{
				bool L_44;
				L_44 = Enumerator_MoveNext_mEC151852EDBB84EA6898B206BACE2648414073DD((&V_0), Enumerator_MoveNext_mEC151852EDBB84EA6898B206BACE2648414073DD_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_00fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fe:
	{
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/ModulePlacer::PlaceTimingPatterns(QRCoder.QRCodeData&,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulePlacer_PlaceTimingPatterns_m245EF64415711C6F101AF489C960BA75F17BF1D8 (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** ___blockedModules1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_0 = L_3;
		V_1 = 8;
		goto IL_0042;
	}

IL_0011:
	{
		int32_t L_4 = V_1;
		if (((int32_t)(L_4%2)))
		{
			goto IL_003e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_5 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_6 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_5);
		NullCheck(L_6);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_7;
		L_7 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_6, NULL);
		NullCheck(L_7);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_8;
		L_8 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_7, 6, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_8, L_9, (bool)1, NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_10 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_11 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_10);
		NullCheck(L_11);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_12;
		L_12 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_11, NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_14;
		L_14 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_12, L_13, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		NullCheck(L_14);
		BitArray_set_Item_m58EFAF76D726AE0632AE5D8BD7E482AE9B982976(L_14, 6, (bool)1, NULL);
	}

IL_003e:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0042:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, 8)))))
		{
			goto IL_0011;
		}
	}
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE** L_18 = ___blockedModules1;
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_19 = *((List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE**)L_18);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_20 = (RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9*)SZArrayNew(RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9_il2cpp_TypeInfo_var, (uint32_t)2);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_21 = L_20;
		int32_t L_22 = V_0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_23 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_23, 6, 8, 1, ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)16))), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_23);
		RectangleU5BU5D_tEDC813B288C050ED9B7F4BC603813362A813B3B9* L_24 = L_21;
		int32_t L_25 = V_0;
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_26 = (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)il2cpp_codegen_object_new(Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45(L_26, 8, 6, ((int32_t)il2cpp_codegen_subtract(L_25, ((int32_t)16))), 1, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06*)L_26);
		NullCheck(L_19);
		List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E(L_19, (RuntimeObject*)L_24, List_1_AddRange_m18892561B8896F3EC6B560ECEF0439480116EF1E_RuntimeMethod_var);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer::Intersects(QRCoder.QRCodeGenerator/Rectangle,QRCoder.QRCodeGenerator/Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModulePlacer_Intersects_m18870278D4B4B38B6C711431421AC1459FA4E0A7 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r10, Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r21, const RuntimeMethod* method) 
{
	{
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_0 = ___r21;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline(L_0, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_2 = ___r10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline(L_2, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_4 = ___r10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Rectangle_get_Width_m984555B4498CDE1EF7DCCD14848BF4E5F2F55D52_inline(L_4, NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_5)))))
		{
			goto IL_0055;
		}
	}
	{
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_6 = ___r10;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline(L_6, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_8 = ___r21;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline(L_8, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_10 = ___r21;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Rectangle_get_Width_m984555B4498CDE1EF7DCCD14848BF4E5F2F55D52_inline(L_10, NULL);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_11)))))
		{
			goto IL_0055;
		}
	}
	{
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_12 = ___r21;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline(L_12, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_14 = ___r10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline(L_14, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_16 = ___r10;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Rectangle_get_Height_m4C99ACF2E0E55CA53FC647CA6879199C9D0A27F7_inline(L_16, NULL);
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_17)))))
		{
			goto IL_0055;
		}
	}
	{
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_18 = ___r10;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline(L_18, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_20 = ___r21;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline(L_20, NULL);
		Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_22 = ___r21;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Rectangle_get_Height_m4C99ACF2E0E55CA53FC647CA6879199C9D0A27F7_inline(L_22, NULL);
		return (bool)((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_21, L_23))))? 1 : 0);
	}

IL_0055:
	{
		return (bool)0;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer::IsBlocked(QRCoder.QRCodeGenerator/Rectangle,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Rectangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModulePlacer_IsBlocked_m2EA423D398CD61E0450C1C79E2809C70E0D23046 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* ___r10, List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* ___blockedModules1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		List_1_tECA703DB6109CC1F2566E755B2847E5A04E3E7FE* L_0 = ___blockedModules1;
		NullCheck(L_0);
		Enumerator_tA26BBBFB422A3FD9841CE631AA732888E6BCD5E0 L_1;
		L_1 = List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7(L_0, List_1_GetEnumerator_m10FE91AE74079DFC7DAFC9FB63A7C363DC5E2CD7_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA((&V_0), Enumerator_Dispose_m26B65F7BD37AD0182474DB4E80E0083F08E1DDBA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001c_1;
			}

IL_0009_1:
			{
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_2;
				L_2 = Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_inline((&V_0), Enumerator_get_Current_m74D5995185BB204577142955A1755E62DA393693_RuntimeMethod_var);
				Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* L_3 = ___r10;
				bool L_4;
				L_4 = ModulePlacer_Intersects_m18870278D4B4B38B6C711431421AC1459FA4E0A7(L_2, L_3, NULL);
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				V_1 = (bool)1;
				goto IL_0037;
			}

IL_001c_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877((&V_0), Enumerator_MoveNext_mFD109C3E0ABDF01B0F8FB8200C2CB679A78B7877_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return (bool)0;
	}

IL_0037:
	{
		bool L_6 = V_1;
		return L_6;
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
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern1(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern1_m83EDA064FD99E492DE21FEC74C0DD56BF45F146E (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		return (bool)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))%2))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern2_mC26DBCC59194A3FE8BA38B1F22960FA884828245 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___y1;
		return (bool)((((int32_t)((int32_t)(L_0%2))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern3(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern3_m65ABDF06BABEFB919C54C11F7C6C3ED21FEDB52B (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return (bool)((((int32_t)((int32_t)(L_0%3))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern4(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern4_mB90F08CA3FCF19547B94DEEB6A485168D801FCC0 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		return (bool)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))%3))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern5(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern5_mF8A2F0DF0F2A1F45EDE0FF8AE4D2E70DC18A9809 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)(((double)L_0)/(2.0))));
		int32_t L_2 = ___x0;
		double L_3;
		L_3 = floor(((double)(((double)L_2)/(3.0))));
		return (bool)((((int32_t)((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(L_1, L_3)))%2))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern6(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern6_mEC8EF4DF210EC48A23B430E785CB4DDE31D05916 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))%2)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, L_3))%3))))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern7(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern7_m6B2CA1B84C68F052BECBA5E38BDF54D70FA983D2 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return (bool)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))%2)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, L_3))%3))))%2))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Pattern8(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskPattern_Pattern8_m638C0FBF0C38AFCD3A6E105621E6FC8FD6943A81 (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return (bool)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))%2)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, L_3))%3))))%2))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 QRCoder.QRCodeGenerator/ModulePlacer/MaskPattern::Score(QRCoder.QRCodeData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaskPattern_Score_m17C57263464A64D4579A9B65F53565EF2C12491B (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** ___qrCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1CD71DBF2BFEB01524287D92201BFB63619E1610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m92894C87BDDF88887BCE44E88898C48F319605FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC89CA062FD8F1D320A738E607F8158C98C1E2C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEACA7CCF0EB5E434ED343D2BADF6F2B852905BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D V_18;
	memset((&V_18), 0, sizeof(V_18));
	RuntimeObject* V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_0 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_0);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		V_4 = L_3;
		V_8 = 0;
		goto IL_010b;
	}

IL_001e:
	{
		V_9 = 0;
		V_10 = 0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_4 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_5 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_4);
		NullCheck(L_5);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_6;
		L_6 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_5, NULL);
		int32_t L_7 = V_8;
		NullCheck(L_6);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_8;
		L_8 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_6, L_7, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9;
		L_9 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_8, 0, NULL);
		V_11 = L_9;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_10 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_11 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_10);
		NullCheck(L_11);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_12;
		L_12 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_11, NULL);
		NullCheck(L_12);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_13;
		L_13 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_12, 0, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_14 = V_8;
		NullCheck(L_13);
		bool L_15;
		L_15 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_13, L_14, NULL);
		V_12 = L_15;
		V_13 = 0;
		goto IL_00fc;
	}

IL_0058:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_16 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_17 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_16);
		NullCheck(L_17);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_18;
		L_18 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_17, NULL);
		int32_t L_19 = V_8;
		NullCheck(L_18);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_20;
		L_20 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_18, L_19, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_21 = V_13;
		NullCheck(L_20);
		bool L_22;
		L_22 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_20, L_21, NULL);
		bool L_23 = V_11;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_24 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_007c;
	}

IL_0079:
	{
		V_9 = 1;
	}

IL_007c:
	{
		int32_t L_25 = V_9;
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 3));
		goto IL_0090;
	}

IL_0087:
	{
		int32_t L_27 = V_9;
		if ((((int32_t)L_27) <= ((int32_t)5)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0090:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_29 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_30 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_29);
		NullCheck(L_30);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_31;
		L_31 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_30, NULL);
		int32_t L_32 = V_8;
		NullCheck(L_31);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_33;
		L_33 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_31, L_32, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_34 = V_13;
		NullCheck(L_33);
		bool L_35;
		L_35 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_33, L_34, NULL);
		V_11 = L_35;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_36 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_37 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_36);
		NullCheck(L_37);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_38;
		L_38 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_37, NULL);
		int32_t L_39 = V_13;
		NullCheck(L_38);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_40;
		L_40 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_38, L_39, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_41 = V_8;
		NullCheck(L_40);
		bool L_42;
		L_42 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_40, L_41, NULL);
		bool L_43 = V_12;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_44 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_00cb;
	}

IL_00c8:
	{
		V_10 = 1;
	}

IL_00cb:
	{
		int32_t L_45 = V_10;
		if ((!(((uint32_t)L_45) == ((uint32_t)5))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		goto IL_00df;
	}

IL_00d6:
	{
		int32_t L_47 = V_10;
		if ((((int32_t)L_47) <= ((int32_t)5)))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00df:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_49 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_50 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_49);
		NullCheck(L_50);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_51;
		L_51 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_50, NULL);
		int32_t L_52 = V_13;
		NullCheck(L_51);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_53;
		L_53 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_51, L_52, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_54 = V_8;
		NullCheck(L_53);
		bool L_55;
		L_55 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_53, L_54, NULL);
		V_12 = L_55;
		int32_t L_56 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00fc:
	{
		int32_t L_57 = V_13;
		int32_t L_58 = V_4;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_59 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_010b:
	{
		int32_t L_60 = V_8;
		int32_t L_61 = V_4;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_001e;
		}
	}
	{
		V_14 = 0;
		goto IL_01cb;
	}

IL_011c:
	{
		V_15 = 0;
		goto IL_01ba;
	}

IL_0124:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_62 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_63 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_62);
		NullCheck(L_63);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_64;
		L_64 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_63, NULL);
		int32_t L_65 = V_14;
		NullCheck(L_64);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_66;
		L_66 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_64, L_65, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_67 = V_15;
		NullCheck(L_66);
		bool L_68;
		L_68 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_66, L_67, NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_69 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_70 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_69);
		NullCheck(L_70);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_71;
		L_71 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_70, NULL);
		int32_t L_72 = V_14;
		NullCheck(L_71);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_73;
		L_73 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_71, L_72, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_74 = V_15;
		NullCheck(L_73);
		bool L_75;
		L_75 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_73, ((int32_t)il2cpp_codegen_add(L_74, 1)), NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)L_75))))
		{
			goto IL_01b4;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_76 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_77 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_76);
		NullCheck(L_77);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_78;
		L_78 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_77, NULL);
		int32_t L_79 = V_14;
		NullCheck(L_78);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_80;
		L_80 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_78, L_79, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_81 = V_15;
		NullCheck(L_80);
		bool L_82;
		L_82 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_80, L_81, NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_83 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_84 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_83);
		NullCheck(L_84);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_85;
		L_85 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_84, NULL);
		int32_t L_86 = V_14;
		NullCheck(L_85);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_87;
		L_87 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_85, ((int32_t)il2cpp_codegen_add(L_86, 1)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_88 = V_15;
		NullCheck(L_87);
		bool L_89;
		L_89 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_87, L_88, NULL);
		if ((!(((uint32_t)L_82) == ((uint32_t)L_89))))
		{
			goto IL_01b4;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_90 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_91 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_90);
		NullCheck(L_91);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_92;
		L_92 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_91, NULL);
		int32_t L_93 = V_14;
		NullCheck(L_92);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_94;
		L_94 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_92, L_93, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_95 = V_15;
		NullCheck(L_94);
		bool L_96;
		L_96 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_94, L_95, NULL);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_97 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_98 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_97);
		NullCheck(L_98);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_99;
		L_99 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_98, NULL);
		int32_t L_100 = V_14;
		NullCheck(L_99);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_101;
		L_101 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_99, ((int32_t)il2cpp_codegen_add(L_100, 1)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_102 = V_15;
		NullCheck(L_101);
		bool L_103;
		L_103 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_101, ((int32_t)il2cpp_codegen_add(L_102, 1)), NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)L_103))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_104, 3));
	}

IL_01b4:
	{
		int32_t L_105 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_01ba:
	{
		int32_t L_106 = V_15;
		int32_t L_107 = V_4;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_107, 1)))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_108 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_01cb:
	{
		int32_t L_109 = V_14;
		int32_t L_110 = V_4;
		if ((((int32_t)L_109) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_110, 1)))))
		{
			goto IL_011c;
		}
	}
	{
		V_16 = 0;
		goto IL_06a2;
	}

IL_01de:
	{
		V_17 = 0;
		goto IL_0690;
	}

IL_01e6:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_111 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_112 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_111);
		NullCheck(L_112);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_113;
		L_113 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_112, NULL);
		int32_t L_114 = V_16;
		NullCheck(L_113);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_115;
		L_115 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_113, L_114, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_116 = V_17;
		NullCheck(L_115);
		bool L_117;
		L_117 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_115, L_116, NULL);
		if (!L_117)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_118 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_119 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_118);
		NullCheck(L_119);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_120;
		L_120 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_119, NULL);
		int32_t L_121 = V_16;
		NullCheck(L_120);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_122;
		L_122 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_120, L_121, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_123 = V_17;
		NullCheck(L_122);
		bool L_124;
		L_124 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_122, ((int32_t)il2cpp_codegen_add(L_123, 1)), NULL);
		if (L_124)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_125 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_126 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_125);
		NullCheck(L_126);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_127;
		L_127 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_126, NULL);
		int32_t L_128 = V_16;
		NullCheck(L_127);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_129;
		L_129 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_127, L_128, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_130 = V_17;
		NullCheck(L_129);
		bool L_131;
		L_131 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_129, ((int32_t)il2cpp_codegen_add(L_130, 2)), NULL);
		if (!L_131)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_132 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_133 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_132);
		NullCheck(L_133);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_134;
		L_134 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_133, NULL);
		int32_t L_135 = V_16;
		NullCheck(L_134);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_136;
		L_136 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_134, L_135, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_137 = V_17;
		NullCheck(L_136);
		bool L_138;
		L_138 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_136, ((int32_t)il2cpp_codegen_add(L_137, 3)), NULL);
		if (!L_138)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_139 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_140 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_139);
		NullCheck(L_140);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_141;
		L_141 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_140, NULL);
		int32_t L_142 = V_16;
		NullCheck(L_141);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_143;
		L_143 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_141, L_142, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_144 = V_17;
		NullCheck(L_143);
		bool L_145;
		L_145 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_143, ((int32_t)il2cpp_codegen_add(L_144, 4)), NULL);
		if (!L_145)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_146 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_147 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_146);
		NullCheck(L_147);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_148;
		L_148 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_147, NULL);
		int32_t L_149 = V_16;
		NullCheck(L_148);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_150;
		L_150 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_148, L_149, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_151 = V_17;
		NullCheck(L_150);
		bool L_152;
		L_152 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_150, ((int32_t)il2cpp_codegen_add(L_151, 5)), NULL);
		if (L_152)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_153 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_154 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_153);
		NullCheck(L_154);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_155;
		L_155 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_154, NULL);
		int32_t L_156 = V_16;
		NullCheck(L_155);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_157;
		L_157 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_155, L_156, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_158 = V_17;
		NullCheck(L_157);
		bool L_159;
		L_159 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_157, ((int32_t)il2cpp_codegen_add(L_158, 6)), NULL);
		if (!L_159)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_160 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_161 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_160);
		NullCheck(L_161);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_162;
		L_162 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_161, NULL);
		int32_t L_163 = V_16;
		NullCheck(L_162);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_164;
		L_164 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_162, L_163, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_165 = V_17;
		NullCheck(L_164);
		bool L_166;
		L_166 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_164, ((int32_t)il2cpp_codegen_add(L_165, 7)), NULL);
		if (L_166)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_167 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_168 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_167);
		NullCheck(L_168);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_169;
		L_169 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_168, NULL);
		int32_t L_170 = V_16;
		NullCheck(L_169);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_171;
		L_171 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_169, L_170, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_172 = V_17;
		NullCheck(L_171);
		bool L_173;
		L_173 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_171, ((int32_t)il2cpp_codegen_add(L_172, 8)), NULL);
		if (L_173)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_174 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_175 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_174);
		NullCheck(L_175);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_176;
		L_176 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_175, NULL);
		int32_t L_177 = V_16;
		NullCheck(L_176);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_178;
		L_178 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_176, L_177, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_179 = V_17;
		NullCheck(L_178);
		bool L_180;
		L_180 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_178, ((int32_t)il2cpp_codegen_add(L_179, ((int32_t)9))), NULL);
		if (L_180)
		{
			goto IL_030e;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_181 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_182 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_181);
		NullCheck(L_182);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_183;
		L_183 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_182, NULL);
		int32_t L_184 = V_16;
		NullCheck(L_183);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_185;
		L_185 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_183, L_184, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_186 = V_17;
		NullCheck(L_185);
		bool L_187;
		L_187 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_185, ((int32_t)il2cpp_codegen_add(L_186, ((int32_t)10))), NULL);
		if (!L_187)
		{
			goto IL_0433;
		}
	}

IL_030e:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_188 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_189 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_188);
		NullCheck(L_189);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_190;
		L_190 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_189, NULL);
		int32_t L_191 = V_16;
		NullCheck(L_190);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_192;
		L_192 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_190, L_191, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_193 = V_17;
		NullCheck(L_192);
		bool L_194;
		L_194 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_192, L_193, NULL);
		if (L_194)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_195 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_196 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_195);
		NullCheck(L_196);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_197;
		L_197 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_196, NULL);
		int32_t L_198 = V_16;
		NullCheck(L_197);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_199;
		L_199 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_197, L_198, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_200 = V_17;
		NullCheck(L_199);
		bool L_201;
		L_201 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_199, ((int32_t)il2cpp_codegen_add(L_200, 1)), NULL);
		if (L_201)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_202 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_203 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_202);
		NullCheck(L_203);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_204;
		L_204 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_203, NULL);
		int32_t L_205 = V_16;
		NullCheck(L_204);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_206;
		L_206 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_204, L_205, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_207 = V_17;
		NullCheck(L_206);
		bool L_208;
		L_208 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_206, ((int32_t)il2cpp_codegen_add(L_207, 2)), NULL);
		if (L_208)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_209 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_210 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_209);
		NullCheck(L_210);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_211;
		L_211 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_210, NULL);
		int32_t L_212 = V_16;
		NullCheck(L_211);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_213;
		L_213 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_211, L_212, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_214 = V_17;
		NullCheck(L_213);
		bool L_215;
		L_215 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_213, ((int32_t)il2cpp_codegen_add(L_214, 3)), NULL);
		if (L_215)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_216 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_217 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_216);
		NullCheck(L_217);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_218;
		L_218 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_217, NULL);
		int32_t L_219 = V_16;
		NullCheck(L_218);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_220;
		L_220 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_218, L_219, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_221 = V_17;
		NullCheck(L_220);
		bool L_222;
		L_222 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_220, ((int32_t)il2cpp_codegen_add(L_221, 4)), NULL);
		if (!L_222)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_223 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_224 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_223);
		NullCheck(L_224);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_225;
		L_225 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_224, NULL);
		int32_t L_226 = V_16;
		NullCheck(L_225);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_227;
		L_227 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_225, L_226, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_228 = V_17;
		NullCheck(L_227);
		bool L_229;
		L_229 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_227, ((int32_t)il2cpp_codegen_add(L_228, 5)), NULL);
		if (L_229)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_230 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_231 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_230);
		NullCheck(L_231);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_232;
		L_232 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_231, NULL);
		int32_t L_233 = V_16;
		NullCheck(L_232);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_234;
		L_234 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_232, L_233, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_235 = V_17;
		NullCheck(L_234);
		bool L_236;
		L_236 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_234, ((int32_t)il2cpp_codegen_add(L_235, 6)), NULL);
		if (!L_236)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_237 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_238 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_237);
		NullCheck(L_238);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_239;
		L_239 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_238, NULL);
		int32_t L_240 = V_16;
		NullCheck(L_239);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_241;
		L_241 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_239, L_240, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_242 = V_17;
		NullCheck(L_241);
		bool L_243;
		L_243 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_241, ((int32_t)il2cpp_codegen_add(L_242, 7)), NULL);
		if (!L_243)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_244 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_245 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_244);
		NullCheck(L_245);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_246;
		L_246 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_245, NULL);
		int32_t L_247 = V_16;
		NullCheck(L_246);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_248;
		L_248 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_246, L_247, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_249 = V_17;
		NullCheck(L_248);
		bool L_250;
		L_250 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_248, ((int32_t)il2cpp_codegen_add(L_249, 8)), NULL);
		if (!L_250)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_251 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_252 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_251);
		NullCheck(L_252);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_253;
		L_253 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_252, NULL);
		int32_t L_254 = V_16;
		NullCheck(L_253);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_255;
		L_255 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_253, L_254, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_256 = V_17;
		NullCheck(L_255);
		bool L_257;
		L_257 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_255, ((int32_t)il2cpp_codegen_add(L_256, ((int32_t)9))), NULL);
		if (L_257)
		{
			goto IL_0438;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_258 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_259 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_258);
		NullCheck(L_259);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_260;
		L_260 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_259, NULL);
		int32_t L_261 = V_16;
		NullCheck(L_260);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_262;
		L_262 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_260, L_261, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_263 = V_17;
		NullCheck(L_262);
		bool L_264;
		L_264 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_262, ((int32_t)il2cpp_codegen_add(L_263, ((int32_t)10))), NULL);
		if (!L_264)
		{
			goto IL_0438;
		}
	}

IL_0433:
	{
		int32_t L_265 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_265, ((int32_t)40)));
	}

IL_0438:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_266 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_267 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_266);
		NullCheck(L_267);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_268;
		L_268 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_267, NULL);
		int32_t L_269 = V_17;
		NullCheck(L_268);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_270;
		L_270 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_268, L_269, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_271 = V_16;
		NullCheck(L_270);
		bool L_272;
		L_272 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_270, L_271, NULL);
		if (!L_272)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_273 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_274 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_273);
		NullCheck(L_274);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_275;
		L_275 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_274, NULL);
		int32_t L_276 = V_17;
		NullCheck(L_275);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_277;
		L_277 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_275, ((int32_t)il2cpp_codegen_add(L_276, 1)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_278 = V_16;
		NullCheck(L_277);
		bool L_279;
		L_279 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_277, L_278, NULL);
		if (L_279)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_280 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_281 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_280);
		NullCheck(L_281);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_282;
		L_282 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_281, NULL);
		int32_t L_283 = V_17;
		NullCheck(L_282);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_284;
		L_284 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_282, ((int32_t)il2cpp_codegen_add(L_283, 2)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_285 = V_16;
		NullCheck(L_284);
		bool L_286;
		L_286 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_284, L_285, NULL);
		if (!L_286)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_287 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_288 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_287);
		NullCheck(L_288);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_289;
		L_289 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_288, NULL);
		int32_t L_290 = V_17;
		NullCheck(L_289);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_291;
		L_291 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_289, ((int32_t)il2cpp_codegen_add(L_290, 3)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_292 = V_16;
		NullCheck(L_291);
		bool L_293;
		L_293 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_291, L_292, NULL);
		if (!L_293)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_294 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_295 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_294);
		NullCheck(L_295);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_296;
		L_296 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_295, NULL);
		int32_t L_297 = V_17;
		NullCheck(L_296);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_298;
		L_298 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_296, ((int32_t)il2cpp_codegen_add(L_297, 4)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_299 = V_16;
		NullCheck(L_298);
		bool L_300;
		L_300 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_298, L_299, NULL);
		if (!L_300)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_301 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_302 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_301);
		NullCheck(L_302);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_303;
		L_303 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_302, NULL);
		int32_t L_304 = V_17;
		NullCheck(L_303);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_305;
		L_305 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_303, ((int32_t)il2cpp_codegen_add(L_304, 5)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_306 = V_16;
		NullCheck(L_305);
		bool L_307;
		L_307 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_305, L_306, NULL);
		if (L_307)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_308 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_309 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_308);
		NullCheck(L_309);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_310;
		L_310 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_309, NULL);
		int32_t L_311 = V_17;
		NullCheck(L_310);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_312;
		L_312 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_310, ((int32_t)il2cpp_codegen_add(L_311, 6)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_313 = V_16;
		NullCheck(L_312);
		bool L_314;
		L_314 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_312, L_313, NULL);
		if (!L_314)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_315 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_316 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_315);
		NullCheck(L_316);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_317;
		L_317 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_316, NULL);
		int32_t L_318 = V_17;
		NullCheck(L_317);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_319;
		L_319 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_317, ((int32_t)il2cpp_codegen_add(L_318, 7)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_320 = V_16;
		NullCheck(L_319);
		bool L_321;
		L_321 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_319, L_320, NULL);
		if (L_321)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_322 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_323 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_322);
		NullCheck(L_323);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_324;
		L_324 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_323, NULL);
		int32_t L_325 = V_17;
		NullCheck(L_324);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_326;
		L_326 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_324, ((int32_t)il2cpp_codegen_add(L_325, 8)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_327 = V_16;
		NullCheck(L_326);
		bool L_328;
		L_328 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_326, L_327, NULL);
		if (L_328)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_329 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_330 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_329);
		NullCheck(L_330);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_331;
		L_331 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_330, NULL);
		int32_t L_332 = V_17;
		NullCheck(L_331);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_333;
		L_333 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_331, ((int32_t)il2cpp_codegen_add(L_332, ((int32_t)9))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_334 = V_16;
		NullCheck(L_333);
		bool L_335;
		L_335 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_333, L_334, NULL);
		if (L_335)
		{
			goto IL_0560;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_336 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_337 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_336);
		NullCheck(L_337);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_338;
		L_338 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_337, NULL);
		int32_t L_339 = V_17;
		NullCheck(L_338);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_340;
		L_340 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_338, ((int32_t)il2cpp_codegen_add(L_339, ((int32_t)10))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_341 = V_16;
		NullCheck(L_340);
		bool L_342;
		L_342 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_340, L_341, NULL);
		if (!L_342)
		{
			goto IL_0685;
		}
	}

IL_0560:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_343 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_344 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_343);
		NullCheck(L_344);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_345;
		L_345 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_344, NULL);
		int32_t L_346 = V_17;
		NullCheck(L_345);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_347;
		L_347 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_345, L_346, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_348 = V_16;
		NullCheck(L_347);
		bool L_349;
		L_349 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_347, L_348, NULL);
		if (L_349)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_350 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_351 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_350);
		NullCheck(L_351);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_352;
		L_352 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_351, NULL);
		int32_t L_353 = V_17;
		NullCheck(L_352);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_354;
		L_354 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_352, ((int32_t)il2cpp_codegen_add(L_353, 1)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_355 = V_16;
		NullCheck(L_354);
		bool L_356;
		L_356 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_354, L_355, NULL);
		if (L_356)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_357 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_358 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_357);
		NullCheck(L_358);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_359;
		L_359 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_358, NULL);
		int32_t L_360 = V_17;
		NullCheck(L_359);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_361;
		L_361 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_359, ((int32_t)il2cpp_codegen_add(L_360, 2)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_362 = V_16;
		NullCheck(L_361);
		bool L_363;
		L_363 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_361, L_362, NULL);
		if (L_363)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_364 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_365 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_364);
		NullCheck(L_365);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_366;
		L_366 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_365, NULL);
		int32_t L_367 = V_17;
		NullCheck(L_366);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_368;
		L_368 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_366, ((int32_t)il2cpp_codegen_add(L_367, 3)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_369 = V_16;
		NullCheck(L_368);
		bool L_370;
		L_370 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_368, L_369, NULL);
		if (L_370)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_371 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_372 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_371);
		NullCheck(L_372);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_373;
		L_373 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_372, NULL);
		int32_t L_374 = V_17;
		NullCheck(L_373);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_375;
		L_375 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_373, ((int32_t)il2cpp_codegen_add(L_374, 4)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_376 = V_16;
		NullCheck(L_375);
		bool L_377;
		L_377 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_375, L_376, NULL);
		if (!L_377)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_378 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_379 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_378);
		NullCheck(L_379);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_380;
		L_380 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_379, NULL);
		int32_t L_381 = V_17;
		NullCheck(L_380);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_382;
		L_382 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_380, ((int32_t)il2cpp_codegen_add(L_381, 5)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_383 = V_16;
		NullCheck(L_382);
		bool L_384;
		L_384 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_382, L_383, NULL);
		if (L_384)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_385 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_386 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_385);
		NullCheck(L_386);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_387;
		L_387 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_386, NULL);
		int32_t L_388 = V_17;
		NullCheck(L_387);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_389;
		L_389 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_387, ((int32_t)il2cpp_codegen_add(L_388, 6)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_390 = V_16;
		NullCheck(L_389);
		bool L_391;
		L_391 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_389, L_390, NULL);
		if (!L_391)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_392 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_393 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_392);
		NullCheck(L_393);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_394;
		L_394 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_393, NULL);
		int32_t L_395 = V_17;
		NullCheck(L_394);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_396;
		L_396 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_394, ((int32_t)il2cpp_codegen_add(L_395, 7)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_397 = V_16;
		NullCheck(L_396);
		bool L_398;
		L_398 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_396, L_397, NULL);
		if (!L_398)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_399 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_400 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_399);
		NullCheck(L_400);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_401;
		L_401 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_400, NULL);
		int32_t L_402 = V_17;
		NullCheck(L_401);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_403;
		L_403 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_401, ((int32_t)il2cpp_codegen_add(L_402, 8)), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_404 = V_16;
		NullCheck(L_403);
		bool L_405;
		L_405 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_403, L_404, NULL);
		if (!L_405)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_406 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_407 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_406);
		NullCheck(L_407);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_408;
		L_408 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_407, NULL);
		int32_t L_409 = V_17;
		NullCheck(L_408);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_410;
		L_410 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_408, ((int32_t)il2cpp_codegen_add(L_409, ((int32_t)9))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_411 = V_16;
		NullCheck(L_410);
		bool L_412;
		L_412 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_410, L_411, NULL);
		if (L_412)
		{
			goto IL_068a;
		}
	}
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_413 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_414 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_413);
		NullCheck(L_414);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_415;
		L_415 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_414, NULL);
		int32_t L_416 = V_17;
		NullCheck(L_415);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_417;
		L_417 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_415, ((int32_t)il2cpp_codegen_add(L_416, ((int32_t)10))), List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_418 = V_16;
		NullCheck(L_417);
		bool L_419;
		L_419 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_417, L_418, NULL);
		if (!L_419)
		{
			goto IL_068a;
		}
	}

IL_0685:
	{
		int32_t L_420 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_420, ((int32_t)40)));
	}

IL_068a:
	{
		int32_t L_421 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_421, 1));
	}

IL_0690:
	{
		int32_t L_422 = V_17;
		int32_t L_423 = V_4;
		if ((((int32_t)L_422) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_423, ((int32_t)10))))))
		{
			goto IL_01e6;
		}
	}
	{
		int32_t L_424 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_424, 1));
	}

IL_06a2:
	{
		int32_t L_425 = V_16;
		int32_t L_426 = V_4;
		if ((((int32_t)L_425) < ((int32_t)L_426)))
		{
			goto IL_01de;
		}
	}
	{
		V_5 = (0.0);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_427 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_428 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_427);
		NullCheck(L_428);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_429;
		L_429 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_428, NULL);
		NullCheck(L_429);
		Enumerator_t31065BC26FC07F89546DDCEDDAEF50931E97BB9D L_430;
		L_430 = List_1_GetEnumerator_mEACA7CCF0EB5E434ED343D2BADF6F2B852905BB7(L_429, List_1_GetEnumerator_mEACA7CCF0EB5E434ED343D2BADF6F2B852905BB7_RuntimeMethod_var);
		V_18 = L_430;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_071d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1CD71DBF2BFEB01524287D92201BFB63619E1610((&V_18), Enumerator_Dispose_m1CD71DBF2BFEB01524287D92201BFB63619E1610_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0712_1;
			}

IL_06c6_1:
			{
				BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_431;
				L_431 = Enumerator_get_Current_mC89CA062FD8F1D320A738E607F8158C98C1E2C5E_inline((&V_18), Enumerator_get_Current_mC89CA062FD8F1D320A738E607F8158C98C1E2C5E_RuntimeMethod_var);
				NullCheck(L_431);
				RuntimeObject* L_432;
				L_432 = BitArray_GetEnumerator_m14EE60E271F6BB1982F8C6F698E96281D467F3B4(L_431, NULL);
				V_19 = L_432;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_06fd_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_433 = V_19;
							V_20 = ((RuntimeObject*)IsInst((RuntimeObject*)L_433, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_434 = V_20;
							if (!L_434)
							{
								goto IL_0711_1;
							}
						}
						{
							RuntimeObject* L_435 = V_20;
							NullCheck(L_435);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_435);
						}

IL_0711_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_06f2_2;
					}

IL_06d6_2:
					{
						RuntimeObject* L_436 = V_19;
						NullCheck(L_436);
						RuntimeObject* L_437;
						L_437 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_436);
						if (!((*(bool*)((bool*)(bool*)UnBox(L_437, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
						{
							goto IL_06f2_2;
						}
					}
					{
						double L_438 = V_5;
						V_5 = ((double)il2cpp_codegen_add(L_438, (1.0)));
					}

IL_06f2_2:
					{
						RuntimeObject* L_439 = V_19;
						NullCheck(L_439);
						bool L_440;
						L_440 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_439);
						if (L_440)
						{
							goto IL_06d6_2;
						}
					}
					{
						goto IL_0712_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0712_1:
			{
				bool L_441;
				L_441 = Enumerator_MoveNext_m92894C87BDDF88887BCE44E88898C48F319605FD((&V_18), Enumerator_MoveNext_m92894C87BDDF88887BCE44E88898C48F319605FD_RuntimeMethod_var);
				if (L_441)
				{
					goto IL_06c6_1;
				}
			}
			{
				goto IL_072b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_072b:
	{
		double L_442 = V_5;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_443 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_444 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_443);
		NullCheck(L_444);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_445;
		L_445 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_444, NULL);
		NullCheck(L_445);
		int32_t L_446;
		L_446 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_445, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F** L_447 = ___qrCode0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_448 = *((QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F**)L_447);
		NullCheck(L_448);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_449;
		L_449 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_448, NULL);
		NullCheck(L_449);
		int32_t L_450;
		L_450 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_449, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		double L_451 = ((double)il2cpp_codegen_multiply(((double)(L_442/((double)((int32_t)il2cpp_codegen_multiply(L_446, L_450))))), (100.0)));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_452;
		L_452 = floor(((double)(L_451/(5.0))));
		int32_t L_453;
		L_453 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_452), 5)), ((int32_t)50))));
		V_6 = ((int32_t)(L_453/5));
		double L_454;
		L_454 = floor(((double)(L_451/(5.0))));
		int32_t L_455;
		L_455 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_454), 5)), ((int32_t)45))));
		V_7 = ((int32_t)(L_455/5));
		int32_t L_456 = V_6;
		int32_t L_457 = V_7;
		int32_t L_458;
		L_458 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_456, L_457, NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_458, ((int32_t)10)));
		int32_t L_459 = V_0;
		int32_t L_460 = V_1;
		int32_t L_461 = V_2;
		int32_t L_462 = V_3;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_459, L_460)), L_461)), L_462));
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
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/AlignmentPattern
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_pinvoke(const AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE& unmarshaled, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PatternPositions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PatternPositions' of type 'AlignmentPattern'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PatternPositions_1Exception, NULL);
}
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_pinvoke_back(const AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_pinvoke& marshaled, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE& unmarshaled)
{
	Exception_t* ___PatternPositions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PatternPositions' of type 'AlignmentPattern'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PatternPositions_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/AlignmentPattern
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_pinvoke_cleanup(AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/AlignmentPattern
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_com(const AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE& unmarshaled, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_com& marshaled)
{
	Exception_t* ___PatternPositions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PatternPositions' of type 'AlignmentPattern'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PatternPositions_1Exception, NULL);
}
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_com_back(const AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_com& marshaled, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE& unmarshaled)
{
	Exception_t* ___PatternPositions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PatternPositions' of type 'AlignmentPattern'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PatternPositions_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/AlignmentPattern
IL2CPP_EXTERN_C void AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshal_com_cleanup(AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/CodewordBlock
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_pinvoke(const CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931& unmarshaled, CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CCodeWordsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CodeWords>k__BackingField' of type 'CodewordBlock'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCodeWordsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_pinvoke_back(const CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_pinvoke& marshaled, CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931& unmarshaled)
{
	Exception_t* ___U3CCodeWordsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CodeWords>k__BackingField' of type 'CodewordBlock'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCodeWordsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/CodewordBlock
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_pinvoke_cleanup(CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/CodewordBlock
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_com(const CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931& unmarshaled, CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_com& marshaled)
{
	Exception_t* ___U3CCodeWordsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CodeWords>k__BackingField' of type 'CodewordBlock'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCodeWordsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_com_back(const CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_com& marshaled, CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931& unmarshaled)
{
	Exception_t* ___U3CCodeWordsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CodeWords>k__BackingField' of type 'CodewordBlock'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCodeWordsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/CodewordBlock
IL2CPP_EXTERN_C void CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshal_com_cleanup(CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931_marshaled_com& marshaled)
{
}
// System.Void QRCoder.QRCodeGenerator/CodewordBlock::.ctor(System.Int32,System.Int32,System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodewordBlock__ctor_m198EB49DDC3EDED406F79EB8E655A6CE31EADE1B (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, int32_t ___groupNumber0, int32_t ___blockNumber1, String_t* ___bitString2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___codeWords3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___eccWords4, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___codeWordsInt5, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___eccWordsInt6, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___groupNumber0;
		__this->___U3CGroupNumberU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___blockNumber1;
		__this->___U3CBlockNumberU3Ek__BackingField_1 = L_1;
		String_t* L_2 = ___bitString2;
		__this->___U3CBitStringU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBitStringU3Ek__BackingField_2), (void*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___codeWords3;
		__this->___U3CCodeWordsU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeWordsU3Ek__BackingField_3), (void*)L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___eccWords4;
		__this->___U3CECCWordsU3Ek__BackingField_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CECCWordsU3Ek__BackingField_5), (void*)L_4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ___codeWordsInt5;
		__this->___U3CCodeWordsIntU3Ek__BackingField_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeWordsIntU3Ek__BackingField_4), (void*)L_5);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = ___eccWordsInt6;
		__this->___U3CECCWordsIntU3Ek__BackingField_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CECCWordsIntU3Ek__BackingField_6), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void CodewordBlock__ctor_m198EB49DDC3EDED406F79EB8E655A6CE31EADE1B_AdjustorThunk (RuntimeObject* __this, int32_t ___groupNumber0, int32_t ___blockNumber1, String_t* ___bitString2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___codeWords3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___eccWords4, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___codeWordsInt5, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___eccWordsInt6, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	CodewordBlock__ctor_m198EB49DDC3EDED406F79EB8E655A6CE31EADE1B(_thisAdjusted, ___groupNumber0, ___blockNumber1, ___bitString2, ___codeWords3, ___eccWords4, ___codeWordsInt5, ___eccWordsInt6, method);
}
// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::get_GroupNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_GroupNumber_mE22CEF437CC98AF27D9F9D0C1EBAF9331ACEC3AA (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CGroupNumberU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CodewordBlock_get_GroupNumber_mE22CEF437CC98AF27D9F9D0C1EBAF9331ACEC3AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CodewordBlock_get_GroupNumber_mE22CEF437CC98AF27D9F9D0C1EBAF9331ACEC3AA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/CodewordBlock::get_BlockNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_BlockNumber_m5BF5697F0B94FB8D06BF9428D0A47E35E804EA46 (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlockNumberU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CodewordBlock_get_BlockNumber_m5BF5697F0B94FB8D06BF9428D0A47E35E804EA46_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CodewordBlock_get_BlockNumber_m5BF5697F0B94FB8D06BF9428D0A47E35E804EA46_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String QRCoder.QRCodeGenerator/CodewordBlock::get_BitString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CodewordBlock_get_BitString_m92AAE1097567F0D3AAD68AAF60E16BA2A1637107 (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBitStringU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* CodewordBlock_get_BitString_m92AAE1097567F0D3AAD68AAF60E16BA2A1637107_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CodewordBlock_get_BitString_m92AAE1097567F0D3AAD68AAF60E16BA2A1637107_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::get_CodeWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_CodeWords_m1BBCADEF835D5D6C5ECB1192FB5302115F158275 (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CCodeWordsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_CodeWords_m1BBCADEF835D5D6C5ECB1192FB5302115F158275_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* _returnValue;
	_returnValue = CodewordBlock_get_CodeWords_m1BBCADEF835D5D6C5ECB1192FB5302115F158275_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::get_CodeWordsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_CodeWordsInt_m122A2188A387445B260FE7114EB373EADB29AA73 (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CCodeWordsIntU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_CodeWordsInt_m122A2188A387445B260FE7114EB373EADB29AA73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* _returnValue;
	_returnValue = CodewordBlock_get_CodeWordsInt_m122A2188A387445B260FE7114EB373EADB29AA73_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.List`1<System.String> QRCoder.QRCodeGenerator/CodewordBlock::get_ECCWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_ECCWords_m1AA6966F70A04B0EA5EA9C7D381AF0BBB02C9EF5 (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CECCWordsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_ECCWords_m1AA6966F70A04B0EA5EA9C7D381AF0BBB02C9EF5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* _returnValue;
	_returnValue = CodewordBlock_get_ECCWords_m1AA6966F70A04B0EA5EA9C7D381AF0BBB02C9EF5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.List`1<System.Int32> QRCoder.QRCodeGenerator/CodewordBlock::get_ECCWordsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_ECCWordsInt_mFB8EE79835A886AB5449E36D9EC5EE25FE671D0B (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CECCWordsIntU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_ECCWordsInt_mFB8EE79835A886AB5449E36D9EC5EE25FE671D0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931*>(__this + _offset);
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* _returnValue;
	_returnValue = CodewordBlock_get_ECCWordsInt_mFB8EE79835A886AB5449E36D9EC5EE25FE671D0B_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCoder.QRCodeGenerator/ECCInfo::.ctor(System.Int32,QRCoder.QRCodeGenerator/ECCLevel,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECCInfo__ctor_m234332B3090F676936510E6508EB19AB70DB32E8 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, int32_t ___version0, int32_t ___errorCorrectionLevel1, int32_t ___totalDataCodewords2, int32_t ___eccPerBlock3, int32_t ___blocksInGroup14, int32_t ___codewordsInGroup15, int32_t ___blocksInGroup26, int32_t ___codewordsInGroup27, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___version0;
		__this->___U3CVersionU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___errorCorrectionLevel1;
		__this->___U3CErrorCorrectionLevelU3Ek__BackingField_1 = L_1;
		int32_t L_2 = ___totalDataCodewords2;
		__this->___U3CTotalDataCodewordsU3Ek__BackingField_2 = L_2;
		int32_t L_3 = ___eccPerBlock3;
		__this->___U3CECCPerBlockU3Ek__BackingField_3 = L_3;
		int32_t L_4 = ___blocksInGroup14;
		__this->___U3CBlocksInGroup1U3Ek__BackingField_4 = L_4;
		int32_t L_5 = ___codewordsInGroup15;
		__this->___U3CCodewordsInGroup1U3Ek__BackingField_5 = L_5;
		int32_t L_6 = ___blocksInGroup26;
		__this->___U3CBlocksInGroup2U3Ek__BackingField_6 = L_6;
		int32_t L_7 = ___codewordsInGroup27;
		__this->___U3CCodewordsInGroup2U3Ek__BackingField_7 = L_7;
		return;
	}
}
IL2CPP_EXTERN_C  void ECCInfo__ctor_m234332B3090F676936510E6508EB19AB70DB32E8_AdjustorThunk (RuntimeObject* __this, int32_t ___version0, int32_t ___errorCorrectionLevel1, int32_t ___totalDataCodewords2, int32_t ___eccPerBlock3, int32_t ___blocksInGroup14, int32_t ___codewordsInGroup15, int32_t ___blocksInGroup26, int32_t ___codewordsInGroup27, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	ECCInfo__ctor_m234332B3090F676936510E6508EB19AB70DB32E8(_thisAdjusted, ___version0, ___errorCorrectionLevel1, ___totalDataCodewords2, ___eccPerBlock3, ___blocksInGroup14, ___codewordsInGroup15, ___blocksInGroup26, ___codewordsInGroup27, method);
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31_inline(_thisAdjusted, method);
	return _returnValue;
}
// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/ECCInfo::get_ErrorCorrectionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCorrectionLevelU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_TotalDataCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_TotalDataCodewords_mC480A552988892FE4BF51243C4640921E7E3C314 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalDataCodewordsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_TotalDataCodewords_mC480A552988892FE4BF51243C4640921E7E3C314_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_TotalDataCodewords_mC480A552988892FE4BF51243C4640921E7E3C314_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_ECCPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ECCPerBlock_m228730F5A175600D6B48C6AA8C3F1F4A9FE13DDA (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CECCPerBlockU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_ECCPerBlock_m228730F5A175600D6B48C6AA8C3F1F4A9FE13DDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_ECCPerBlock_m228730F5A175600D6B48C6AA8C3F1F4A9FE13DDA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_BlocksInGroup1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup1_mD2D4F0B4A8287C3B5AB3AF1FF113BBF6219C78A8 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlocksInGroup1U3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_BlocksInGroup1_mD2D4F0B4A8287C3B5AB3AF1FF113BBF6219C78A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_BlocksInGroup1_mD2D4F0B4A8287C3B5AB3AF1FF113BBF6219C78A8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_CodewordsInGroup1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup1_m50691183483D03EE20310ACC1147765335D70F31 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodewordsInGroup1U3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_CodewordsInGroup1_m50691183483D03EE20310ACC1147765335D70F31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_CodewordsInGroup1_m50691183483D03EE20310ACC1147765335D70F31_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_BlocksInGroup2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup2_m96B239DF156DAD01C09EB013C6C868A9735245E3 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlocksInGroup2U3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_BlocksInGroup2_m96B239DF156DAD01C09EB013C6C868A9735245E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_BlocksInGroup2_m96B239DF156DAD01C09EB013C6C868A9735245E3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/ECCInfo::get_CodewordsInGroup2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup2_mE461AAC6FAA5320EDE8D00EDDE576A24535D6E61 (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodewordsInGroup2U3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ECCInfo_get_CodewordsInGroup2_mE461AAC6FAA5320EDE8D00EDDE576A24535D6E61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ECCInfo_get_CodewordsInGroup2_mE461AAC6FAA5320EDE8D00EDDE576A24535D6E61_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/VersionInfo
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_pinvoke(const VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96& unmarshaled, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CDetailsU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Details>k__BackingField' of type 'VersionInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDetailsU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_pinvoke_back(const VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_pinvoke& marshaled, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96& unmarshaled)
{
	Exception_t* ___U3CDetailsU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Details>k__BackingField' of type 'VersionInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDetailsU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/VersionInfo
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_pinvoke_cleanup(VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/VersionInfo
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_com(const VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96& unmarshaled, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_com& marshaled)
{
	Exception_t* ___U3CDetailsU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Details>k__BackingField' of type 'VersionInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDetailsU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_com_back(const VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_com& marshaled, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96& unmarshaled)
{
	Exception_t* ___U3CDetailsU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Details>k__BackingField' of type 'VersionInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDetailsU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/VersionInfo
IL2CPP_EXTERN_C void VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshal_com_cleanup(VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96_marshaled_com& marshaled)
{
}
// System.Void QRCoder.QRCodeGenerator/VersionInfo::.ctor(System.Int32,System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_m5D8DE7DC9EF203004DDBB05B0C9F30761E4F5B8C (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, int32_t ___version0, List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___versionInfoDetails1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___version0;
		__this->___U3CVersionU3Ek__BackingField_0 = L_0;
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_1 = ___versionInfoDetails1;
		__this->___U3CDetailsU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionInfo__ctor_m5D8DE7DC9EF203004DDBB05B0C9F30761E4F5B8C_AdjustorThunk (RuntimeObject* __this, int32_t ___version0, List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* ___versionInfoDetails1, const RuntimeMethod* method)
{
	VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96*>(__this + _offset);
	VersionInfo__ctor_m5D8DE7DC9EF203004DDBB05B0C9F30761E4F5B8C(_thisAdjusted, ___version0, ___versionInfoDetails1, method);
}
// System.Int32 QRCoder.QRCodeGenerator/VersionInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6 (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/VersionInfoDetails> QRCoder.QRCodeGenerator/VersionInfo::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3 (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_0 = __this->___U3CDetailsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96*>(__this + _offset);
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* _returnValue;
	_returnValue = VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/VersionInfoDetails
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_pinvoke(const VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1& unmarshaled, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CCapacityDictU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CapacityDict>k__BackingField' of type 'VersionInfoDetails'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCapacityDictU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_pinvoke_back(const VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_pinvoke& marshaled, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1& unmarshaled)
{
	Exception_t* ___U3CCapacityDictU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CapacityDict>k__BackingField' of type 'VersionInfoDetails'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCapacityDictU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/VersionInfoDetails
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_pinvoke_cleanup(VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QRCoder.QRCodeGenerator/VersionInfoDetails
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_com(const VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1& unmarshaled, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_com& marshaled)
{
	Exception_t* ___U3CCapacityDictU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CapacityDict>k__BackingField' of type 'VersionInfoDetails'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCapacityDictU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_com_back(const VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_com& marshaled, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1& unmarshaled)
{
	Exception_t* ___U3CCapacityDictU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<CapacityDict>k__BackingField' of type 'VersionInfoDetails'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CCapacityDictU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QRCoder.QRCodeGenerator/VersionInfoDetails
IL2CPP_EXTERN_C void VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshal_com_cleanup(VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_marshaled_com& marshaled)
{
}
// System.Void QRCoder.QRCodeGenerator/VersionInfoDetails::.ctor(QRCoder.QRCodeGenerator/ECCLevel,System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfoDetails__ctor_mA8B8358F2B13B54B5A12F866261924312D1BE816 (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, int32_t ___errorCorrectionLevel0, Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___capacityDict1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___errorCorrectionLevel0;
		__this->___U3CErrorCorrectionLevelU3Ek__BackingField_0 = L_0;
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_1 = ___capacityDict1;
		__this->___U3CCapacityDictU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCapacityDictU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionInfoDetails__ctor_mA8B8358F2B13B54B5A12F866261924312D1BE816_AdjustorThunk (RuntimeObject* __this, int32_t ___errorCorrectionLevel0, Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* ___capacityDict1, const RuntimeMethod* method)
{
	VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1*>(__this + _offset);
	VersionInfoDetails__ctor_mA8B8358F2B13B54B5A12F866261924312D1BE816(_thisAdjusted, ___errorCorrectionLevel0, ___capacityDict1, method);
}
// QRCoder.QRCodeGenerator/ECCLevel QRCoder.QRCodeGenerator/VersionInfoDetails::get_ErrorCorrectionLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31 (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCorrectionLevelU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.Dictionary`2<QRCoder.QRCodeGenerator/EncodingMode,System.Int32> QRCoder.QRCodeGenerator/VersionInfoDetails::get_CapacityDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310 (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_0 = __this->___U3CCapacityDictU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1*>(__this + _offset);
	Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* _returnValue;
	_returnValue = VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCoder.QRCodeGenerator/Antilog::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Antilog__ctor_m7DA88EBA1CCCF7870899F627A37DC49F3A3DDE6A (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, int32_t ___exponentAlpha0, int32_t ___integerValue1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___exponentAlpha0;
		__this->___U3CExponentAlphaU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___integerValue1;
		__this->___U3CIntegerValueU3Ek__BackingField_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Antilog__ctor_m7DA88EBA1CCCF7870899F627A37DC49F3A3DDE6A_AdjustorThunk (RuntimeObject* __this, int32_t ___exponentAlpha0, int32_t ___integerValue1, const RuntimeMethod* method)
{
	Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684*>(__this + _offset);
	Antilog__ctor_m7DA88EBA1CCCF7870899F627A37DC49F3A3DDE6A(_thisAdjusted, ___exponentAlpha0, ___integerValue1, method);
}
// System.Int32 QRCoder.QRCodeGenerator/Antilog::get_ExponentAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentAlphaU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/Antilog::get_IntegerValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414 (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIntegerValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCoder.QRCodeGenerator/PolynomItem::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolynomItem__ctor_m235923F040F60FA9B6A7E46D2CA9A77A52B89659 (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, int32_t ___coefficient0, int32_t ___exponent1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___coefficient0;
		__this->___U3CCoefficientU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___exponent1;
		__this->___U3CExponentU3Ek__BackingField_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void PolynomItem__ctor_m235923F040F60FA9B6A7E46D2CA9A77A52B89659_AdjustorThunk (RuntimeObject* __this, int32_t ___coefficient0, int32_t ___exponent1, const RuntimeMethod* method)
{
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF*>(__this + _offset);
	PolynomItem__ctor_m235923F040F60FA9B6A7E46D2CA9A77A52B89659(_thisAdjusted, ___coefficient0, ___exponent1, method);
}
// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::get_Coefficient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCoefficientU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 QRCoder.QRCodeGenerator/PolynomItem::get_Exponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9 (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QRCoder.QRCodeGenerator/Polynom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polynom__ctor_m1BB907AD65968982B9DF12B81A3178AD625A7A27 (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t072755E911D175C2CCF66E2094014685F5D28AAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_0 = (List_1_t072755E911D175C2CCF66E2094014685F5D28AAD*)il2cpp_codegen_object_new(List_1_t072755E911D175C2CCF66E2094014685F5D28AAD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0(L_0, List_1__ctor_mB1B88F0C1DC42C46D995B33A2DCE7DA5823FBCF0_RuntimeMethod_var);
		Polynom_set_PolyItems_m13510B9A328F5AF4158FE6851CD9416A333782BF_inline(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem> QRCoder.QRCodeGenerator/Polynom::get_PolyItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* Polynom_get_PolyItems_mA0309AAD392584FF7F370CCCB5E3C04A9D978C55 (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, const RuntimeMethod* method) 
{
	{
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_0 = __this->___U3CPolyItemsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void QRCoder.QRCodeGenerator/Polynom::set_PolyItems(System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/PolynomItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polynom_set_PolyItems_m13510B9A328F5AF4158FE6851CD9416A333782BF (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_0 = ___value0;
		__this->___U3CPolyItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPolyItemsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String QRCoder.QRCodeGenerator/Polynom::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Polynom_ToString_m3EFCD78533CD2B0C8C112CED3E152B7EC32853DC (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF2EB301108A2B0DD8CC584A3FD0FE6555D2A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral762D70BC7111FDFC4BC4C11E691BA04ED388A3E5);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C V_1;
	memset((&V_1), 0, sizeof(V_1));
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_1;
		L_1 = Polynom_get_PolyItems_mA0309AAD392584FF7F370CCCB5E3C04A9D978C55_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C L_2;
		L_2 = List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E(L_1, List_1_GetEnumerator_m9CDD10F7DF3B84D8580CB13C2C41FC7F3583C90E_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184((&V_1), Enumerator_Dispose_m8F08CE0FB1BC6B7CBD268B6007D413EF00D0C184_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006a_1;
			}

IL_0014_1:
			{
				PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF L_3;
				L_3 = Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_inline((&V_1), Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_RuntimeMethod_var);
				V_2 = L_3;
				StringBuilder_t* L_4 = V_0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, _stringLiteral762D70BC7111FDFC4BC4C11E691BA04ED388A3E5);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral762D70BC7111FDFC4BC4C11E691BA04ED388A3E5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
				int32_t L_8;
				L_8 = PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline((&V_2), NULL);
				V_3 = L_8;
				String_t* L_9;
				L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_9);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, _stringLiteral3EF2EB301108A2B0DD8CC584A3FD0FE6555D2A18);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3EF2EB301108A2B0DD8CC584A3FD0FE6555D2A18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				int32_t L_12;
				L_12 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&V_2), NULL);
				V_3 = L_12;
				String_t* L_13;
				L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_13);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
				String_t* L_15;
				L_15 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
				NullCheck(L_4);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_15, NULL);
			}

IL_006a_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7((&V_1), Enumerator_MoveNext_mABF3D810CABA305B79B4AE3771A6C8D0AB5571B7_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)43));
		NullCheck(L_19);
		String_t* L_23;
		L_23 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_19, L_22, NULL);
		return L_23;
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
// System.Int32 QRCoder.QRCodeGenerator/Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621 (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62 (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void QRCoder.QRCodeGenerator/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m7BD03C48155BFFB01DF6849D06E9E92F029A6867 (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___x0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___U3CYU3Ek__BackingField_1 = L_1;
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
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m984555B4498CDE1EF7DCCD14848BF4E5F2F55D52 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/Rectangle::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m4C99ACF2E0E55CA53FC647CA6879199C9D0A27F7 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void QRCoder.QRCodeGenerator/Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m79F20343885C706992B9A134E266C9F42E3EFC45 (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, int32_t ___x0, int32_t ___y1, int32_t ___w2, int32_t ___h3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___x0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___U3CYU3Ek__BackingField_1 = L_1;
		int32_t L_2 = ___w2;
		__this->___U3CWidthU3Ek__BackingField_2 = L_2;
		int32_t L_3 = ___h3;
		__this->___U3CHeightU3Ek__BackingField_3 = L_3;
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m005FCFE5F8615524F44C10F579D4A612D3D12437 (U3CU3Ec__DisplayClass20_0_t8D099A258532C4C4A01C89668CC57067523E7A49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass20_0::<GenerateQrCode>b__0(QRCoder.QRCodeGenerator/ECCInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CGenerateQrCodeU3Eb__0_mD375EDE0873746B08CBA07443F27420CF0043241 (U3CU3Ec__DisplayClass20_0_t8D099A258532C4C4A01C89668CC57067523E7A49* __this, ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31_inline((&___x0), NULL);
		int32_t L_1 = __this->___version_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2;
		L_2 = ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5_inline((&___x0), NULL);
		int32_t L_3 = __this->___eccLevel_1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass20_0::<GenerateQrCode>b__1(QRCoder.QRCodeGenerator/AlignmentPattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CGenerateQrCodeU3Eb__1_mEECEF9093F481422384C3CB6BBBCF458A4816C23 (U3CU3Ec__DisplayClass20_0_t8D099A258532C4C4A01C89668CC57067523E7A49* __this, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE ___x0, const RuntimeMethod* method) 
{
	{
		AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE L_0 = ___x0;
		int32_t L_1 = L_0.___Version_0;
		int32_t L_2 = __this->___version_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void QRCoder.QRCodeGenerator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9DB9F219BD28825297251588C77CFBF376ED392A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* L_0 = (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB*)il2cpp_codegen_object_new(U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7071EC7453C39807C144BC7A8C73AF65F83E98E9(L_0, NULL);
		((U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void QRCoder.QRCodeGenerator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7071EC7453C39807C144BC7A8C73AF65F83E98E9 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<QRCoder.QRCodeGenerator/Point> QRCoder.QRCodeGenerator/<>c::<GenerateQrCode>b__20_2(QRCoder.QRCodeGenerator/AlignmentPattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* U3CU3Ec_U3CGenerateQrCodeU3Eb__20_2_m6D07122B1CB7231D0DAB1F8DF459B1D4B14BA9F9 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE ___x0, const RuntimeMethod* method) 
{
	{
		AlignmentPattern_t78837B110CD4E98C9308BBDF0DDB60C8A1F336BE L_0 = ___x0;
		List_1_t63E0B14A2969773F340A407E4CBC50296A6C449C* L_1 = L_0.___PatternPositions_1;
		return L_1;
	}
}
// System.String QRCoder.QRCodeGenerator/<>c::<CalculateECCWords>b__24_0(QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCalculateECCWordsU3Eb__24_0_m7EF1546A64721107429FE1A18438F393CD9458B6 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline((&___x0), NULL);
		il2cpp_codegen_runtime_class_init_inline(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = QRCodeGenerator_DecToBin_m74E5A8E502DF4FEC94EF0C95C4F9ECD62C7B1369(L_0, 8, NULL);
		return L_1;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<GetVersion>b__27_2(<>f__AnonymousType0`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetVersionU3Eb__27_2_mCDBD93173539C0E09EA968DEFB39237C8964EAA4 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_inline(L_0, U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<BinaryStringListToDecList>b__33_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CBinaryStringListToDecListU3Eb__33_0_mCDD67C7BA09B39BE4C5059A3B79647E8C0C14BDF (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, String_t* ___binaryString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___binaryString0;
		il2cpp_codegen_runtime_class_init_inline(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = QRCodeGenerator_BinToDec_m82693BD120275C7F4D5FAB03F53027FC022805E7(L_0, NULL);
		return L_1;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<MultiplyAlphaPolynoms>b__49_0(QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CMultiplyAlphaPolynomsU3Eb__49_0_m7846012D0E20BA007F9AA03E16E9A5B9D3832C9D (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&___x0), NULL);
		return L_0;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c::<MultiplyAlphaPolynoms>b__49_1(System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMultiplyAlphaPolynomsU3Eb__49_1_m6A690534F445B94F247FBE3ECCF12D5B0ABAD545 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___x0;
		int32_t L_1;
		L_1 = Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959(L_0, Enumerable_Count_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_m4D7BD31C6E73E740F2EDCE0E78D9AEA7A5010959_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<MultiplyAlphaPolynoms>b__49_2(System.Linq.IGrouping`2<System.Int32,QRCoder.QRCodeGenerator/PolynomItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CMultiplyAlphaPolynomsU3Eb__49_2_mC039C923FEEF1D7B0E10959E1E9509D848C0E824 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___x0;
		PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF L_1;
		L_1 = Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804(L_0, Enumerable_First_TisPolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF_mF6F577EE00FA667A83FA21429144AFA3FA684804_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2;
		L_2 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<MultiplyAlphaPolynoms>b__49_6(System.Int32,QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CMultiplyAlphaPolynomsU3Eb__49_6_m6AEF8FC164A9E8F219C2838354914C06234792AA (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, int32_t ___current0, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___polynomOld1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___current0;
		int32_t L_1;
		L_1 = PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline((&___polynomOld1), NULL);
		il2cpp_codegen_runtime_class_init_inline(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = QRCodeGenerator_GetIntValFromAlphaExp_m51F15590B8E8878042A15673F167959C9ABF6533(L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c::<MultiplyAlphaPolynoms>b__49_4(QRCoder.QRCodeGenerator/PolynomItem,QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CMultiplyAlphaPolynomsU3Eb__49_4_m9F610BF722441F14F6753865A83867CB40BE3163 (U3CU3Ec_tF33B49D887CDE3AB70ED98B024BDC65140DABADB* __this, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___x0, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&___x0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&___y1), NULL);
		int32_t L_2;
		L_2 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_1, NULL);
		return ((-L_2));
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mE287655A27EE449D21CE6320417D8690563908DF (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__0(QRCoder.QRCodeGenerator/VersionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__0_m7453A13F5D0F8F1450DEDD25DEB8F4E28151E2A4 (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__5_m495D3E2A5C98C5AFEAB972246D40F711821B9B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* V_0 = NULL;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B2_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B2_1 = NULL;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B1_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B1_1 = NULL;
	{
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_0;
		L_0 = VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline((&___x0), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_1 = __this->___U3CU3E9__5_3;
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_3 = (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*)il2cpp_codegen_object_new(Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3(L_3, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__5_m495D3E2A5C98C5AFEAB972246D40F711821B9B42_RuntimeMethod_var), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_4 = L_3;
		V_0 = L_4;
		__this->___U3CU3E9__5_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__5_3), (void*)L_4);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_5 = V_0;
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191(G_B2_1, G_B2_0, Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__5(QRCoder.QRCodeGenerator/VersionInfoDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__5_m495D3E2A5C98C5AFEAB972246D40F711821B9B42 (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 ___y0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline((&___y0), NULL);
		int32_t L_1 = __this->___eccLevel_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0032;
		}
	}
	{
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_2;
		L_2 = VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline((&___y0), NULL);
		int32_t L_3 = __this->___encMode_1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464(L_2, L_3, Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		int32_t L_5 = __this->___length_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_mED5F008F1BE93687E208DC11B65EFDB2AA8B72BC(L_5, NULL);
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
// <>f__AnonymousType0`2<System.Int32,System.Int32> QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__1(QRCoder.QRCodeGenerator/VersionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__1_m42D4CF846CC84E17C3685B8AD1715C97C5CBDD79 (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__6_mFFE3AFAFDB9B15421B803C6D82033D83223EB70C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* V_0 = NULL;
	VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B2_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B1_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	{
		int32_t L_0;
		L_0 = VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6_inline((&___x0), NULL);
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_1;
		L_1 = VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline((&___x0), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_2 = __this->___U3CU3E9__6_4;
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_002d;
		}
	}
	{
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_4 = (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*)il2cpp_codegen_object_new(Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3(L_4, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__6_mFFE3AFAFDB9B15421B803C6D82033D83223EB70C_RuntimeMethod_var), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_5 = L_4;
		V_0 = L_5;
		__this->___U3CU3E9__6_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__6_4), (void*)L_5);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002d:
	{
		VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 L_7;
		L_7 = Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D(G_B2_1, G_B2_0, Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_RuntimeMethod_var);
		V_1 = L_7;
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_8;
		L_8 = VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline((&V_1), NULL);
		int32_t L_9 = __this->___encMode_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464(L_8, L_9, Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* L_11 = (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E(L_11, G_B2_2, L_10, U3CU3Ef__AnonymousType0_2__ctor_m5997EAC0E60EE1AE2D4574522C4FA7005A798F2E_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__6(QRCoder.QRCodeGenerator/VersionInfoDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__6_mFFE3AFAFDB9B15421B803C6D82033D83223EB70C (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 ___y0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline((&___y0), NULL);
		int32_t L_1 = __this->___eccLevel_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__3(QRCoder.QRCodeGenerator/VersionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__3_mD818C883262977FBE0C1D2C7AA5842154C30A3ED (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__7_mE454C89F1573DD1ECD140E44273563F70ADDEABD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* V_0 = NULL;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B2_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B2_1 = NULL;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B1_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B1_1 = NULL;
	{
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_0;
		L_0 = VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline((&___x0), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_1 = __this->___U3CU3E9__7_5;
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_3 = (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*)il2cpp_codegen_object_new(Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3(L_3, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__7_mE454C89F1573DD1ECD140E44273563F70ADDEABD_RuntimeMethod_var), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_4 = L_3;
		V_0 = L_4;
		__this->___U3CU3E9__7_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__7_5), (void*)L_4);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_5 = V_0;
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		bool L_6;
		L_6 = Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191(G_B2_1, G_B2_0, Enumerable_Any_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_mF9DF42DDE4FA99AB0CBA06AFF0C585A35BF3A191_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__7(QRCoder.QRCodeGenerator/VersionInfoDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__7_mE454C89F1573DD1ECD140E44273563F70ADDEABD (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 ___y0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline((&___y0), NULL);
		int32_t L_1 = __this->___eccLevel_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__4(QRCoder.QRCodeGenerator/VersionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__4_m1E2DEC3EF12DD99FA268423D30FF9A381292BB41 (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96 ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__8_m6B5FED521AA912901C09941CE676C80D07E0620F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* V_0 = NULL;
	VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B2_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B2_1 = NULL;
	Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* G_B1_0 = NULL;
	List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* G_B1_1 = NULL;
	{
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_0;
		L_0 = VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline((&___x0), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_1 = __this->___U3CU3E9__8_6;
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_3 = (Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85*)il2cpp_codegen_object_new(Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mCEC7B0295BDD5E629A7117F607DBC5E4C972D8C3(L_3, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__8_m6B5FED521AA912901C09941CE676C80D07E0620F_RuntimeMethod_var), NULL);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_4 = L_3;
		V_0 = L_4;
		__this->___U3CU3E9__8_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__8_6), (void*)L_4);
		Func_2_t62D8E49C09BF08FE88780FB2B8A61B13780BFC85* L_5 = V_0;
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 L_6;
		L_6 = Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D(G_B2_1, G_B2_0, Enumerable_Single_TisVersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1_m8A785EF494E77EC34A015C2529B68C31FA016A2D_RuntimeMethod_var);
		V_1 = L_6;
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_7;
		L_7 = VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline((&V_1), NULL);
		int32_t L_8 = __this->___encMode_1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464(L_7, L_8, Dictionary_2_get_Item_m434C553A35D1DCD2D23557D6C4248B1199410464_RuntimeMethod_var);
		return L_9;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass27_0::<GetVersion>b__8(QRCoder.QRCodeGenerator/VersionInfoDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CGetVersionU3Eb__8_m6B5FED521AA912901C09941CE676C80D07E0620F (U3CU3Ec__DisplayClass27_0_t165E17AF00E87AEE7B6488DEDE463694BF94F9EF* __this, VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1 ___y0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline((&___y0), NULL);
		int32_t L_1 = __this->___eccLevel_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m59E1CF66E902DDE447FDCDD7825EBBDD894D9A2F (U3CU3Ec__DisplayClass49_0_t85E701E972E28CF79EDDCFCC8E9F42B42F38269E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass49_0::<MultiplyAlphaPolynoms>b__3(QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass49_0_U3CMultiplyAlphaPolynomsU3Eb__3_mE5F81B039B59966F2E91A397C80560485EFB4D22 (U3CU3Ec__DisplayClass49_0_t85E701E972E28CF79EDDCFCC8E9F42B42F38269E* __this, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___toGlue_0;
		int32_t L_1;
		L_1 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&___x0), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass49_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_1__ctor_mABA1FECC9C6701EF8D21E0A4C1C5964F9FEB9781 (U3CU3Ec__DisplayClass49_1_t5BD7DD08BBB5AE1CDCE186FC8B1CC17B16E3C5C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass49_1::<MultiplyAlphaPolynoms>b__5(QRCoder.QRCodeGenerator/PolynomItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass49_1_U3CMultiplyAlphaPolynomsU3Eb__5_m68A8E5987C2F41B5239CAB734F1B0BB3F10FC8FB (U3CU3Ec__DisplayClass49_1_t5BD7DD08BBB5AE1CDCE186FC8B1CC17B16E3C5C9* __this, PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline((&___x0), NULL);
		int32_t L_1 = __this->___exponent_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m784EEF122053127CB64A79DA0932B84FB549189D (U3CU3Ec__DisplayClass50_0_t9A1F870052C7F399BC05F1660F14B4BC705865AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass50_0::<GetIntValFromAlphaExp>b__0(QRCoder.QRCodeGenerator/Antilog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass50_0_U3CGetIntValFromAlphaExpU3Eb__0_m0A6A1F591152C500D9BD538B653F530D25FE6338 (U3CU3Ec__DisplayClass50_0_t9A1F870052C7F399BC05F1660F14B4BC705865AF* __this, Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684 ___alog0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F_inline((&___alog0), NULL);
		int32_t L_1 = __this->___exp_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void QRCoder.QRCodeGenerator/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_mE74120E9DE7CFA9EA3AA790C53ACE6CD44162C94 (U3CU3Ec__DisplayClass51_0_t465EDD01898888D4DCEA94203ADBBD7916680C9E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QRCoder.QRCodeGenerator/<>c__DisplayClass51_0::<GetAlphaExpFromIntVal>b__0(QRCoder.QRCodeGenerator/Antilog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass51_0_U3CGetAlphaExpFromIntValU3Eb__0_m030836C787B7E28282A3238C6C2D6007E9EB8A3C (U3CU3Ec__DisplayClass51_0_t465EDD01898888D4DCEA94203ADBBD7916680C9E* __this, Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684 ___alog0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414_inline((&___alog0), NULL);
		int32_t L_1 = __this->___intVal_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void QRCoder.SvgQRCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgQRCode__ctor_m9AF77DCB4246AB513FDA96745562FE9FB2A3C871 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, const RuntimeMethod* method) 
{
	{
		AbstractQRCode__ctor_mE67ED088046E8668D12A95EB88435201DFDC022C(__this, NULL);
		return;
	}
}
// System.Void QRCoder.SvgQRCode::.ctor(QRCoder.QRCodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgQRCode__ctor_m5ADE374839D16B6451C6D09DCB5D64DCD23FADFB (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* ___data0, const RuntimeMethod* method) 
{
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_0 = ___data0;
		AbstractQRCode__ctor_mDFCE60C05283A7ED43A320BD714983B1E34BD57F(__this, L_0, NULL);
		return;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_m945010AF3F6E17CF3390A960832A6D84606984DA (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, int32_t ___pixelsPerModule0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Size_t9FCA8981191B4D1A693E50590137D636FEAC156D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1;
		L_1 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		int32_t L_4 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_5;
		L_5 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_5);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_6;
		L_6 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_6, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		Size__ctor_m476DDA9FA3FBB2B730B3A52B2C3A4FE6BD81689C((&V_0), ((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)il2cpp_codegen_multiply(L_4, L_7)), NULL);
		Size_t9FCA8981191B4D1A693E50590137D636FEAC156D L_8 = V_0;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_9;
		L_9 = Color_get_Black_mFACB9C91B6A2D17CD4F657B6A228D4E3221FC186(NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_10;
		L_10 = Color_get_White_mC8214E735A936496BF90F9D632873810221C4366(NULL);
		String_t* L_11;
		L_11 = SvgQRCode_GetGraphic_mEB52EB562CDF1449A86BE8098B4A6F5D3F990ABD(__this, L_8, L_9, L_10, (bool)1, 0, NULL);
		return L_11;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Int32,System.Drawing.Color,System.Drawing.Color,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mE5C725ED172C9416B00724D07EB4FB2981B134DA (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, int32_t ___pixelsPerModule0, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___darkColor1, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___lightColor2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Size_t9FCA8981191B4D1A693E50590137D636FEAC156D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1;
		L_1 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		int32_t L_4 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_5;
		L_5 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_5);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_6;
		L_6 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_6, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		Size__ctor_m476DDA9FA3FBB2B730B3A52B2C3A4FE6BD81689C((&V_0), ((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)il2cpp_codegen_multiply(L_4, L_7)), NULL);
		Size_t9FCA8981191B4D1A693E50590137D636FEAC156D L_8 = V_0;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_9 = ___darkColor1;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_10 = ___lightColor2;
		bool L_11 = ___drawQuietZones3;
		int32_t L_12 = ___sizingMode4;
		String_t* L_13;
		L_13 = SvgQRCode_GetGraphic_mEB52EB562CDF1449A86BE8098B4A6F5D3F990ABD(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Int32,System.String,System.String,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_m43E4B474E8DEAED682C5E66C6512F5E4254C88A0 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, int32_t ___pixelsPerModule0, String_t* ___darkColorHex1, String_t* ___lightColorHex2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Size_t9FCA8981191B4D1A693E50590137D636FEAC156D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1;
		L_1 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		int32_t L_4 = ___pixelsPerModule0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_5;
		L_5 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_5);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_6;
		L_6 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_6, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		Size__ctor_m476DDA9FA3FBB2B730B3A52B2C3A4FE6BD81689C((&V_0), ((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)il2cpp_codegen_multiply(L_4, L_7)), NULL);
		Size_t9FCA8981191B4D1A693E50590137D636FEAC156D L_8 = V_0;
		String_t* L_9 = ___darkColorHex1;
		String_t* L_10 = ___lightColorHex2;
		bool L_11 = ___drawQuietZones3;
		int32_t L_12 = ___sizingMode4;
		String_t* L_13;
		L_13 = SvgQRCode_GetGraphic_mB2ED7A6352AB893DA03918FCD933AC2B71D46ACA(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Drawing.Size,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mE78ECF5522BA9EFE467F4D524943D3DCFD78C335 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, Size_t9FCA8981191B4D1A693E50590137D636FEAC156D ___viewBox0, bool ___drawQuietZones1, int32_t ___sizingMode2, const RuntimeMethod* method) 
{
	{
		Size_t9FCA8981191B4D1A693E50590137D636FEAC156D L_0 = ___viewBox0;
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_1;
		L_1 = Color_get_Black_mFACB9C91B6A2D17CD4F657B6A228D4E3221FC186(NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_2;
		L_2 = Color_get_White_mC8214E735A936496BF90F9D632873810221C4366(NULL);
		bool L_3 = ___drawQuietZones1;
		int32_t L_4 = ___sizingMode2;
		String_t* L_5;
		L_5 = SvgQRCode_GetGraphic_mEB52EB562CDF1449A86BE8098B4A6F5D3F990ABD(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Drawing.Size,System.Drawing.Color,System.Drawing.Color,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mEB52EB562CDF1449A86BE8098B4A6F5D3F990ABD (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, Size_t9FCA8981191B4D1A693E50590137D636FEAC156D ___viewBox0, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___darkColor1, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 ___lightColor2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) 
{
	{
		Size_t9FCA8981191B4D1A693E50590137D636FEAC156D L_0 = ___viewBox0;
		int32_t L_1;
		L_1 = Color_ToArgb_m1782C7D79C856B95679C601C8A2AB40C8B90AFFC((&___darkColor1), NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_2;
		L_2 = Color_FromArgb_m8AEB4D512962B2F5DB80026326FBD4B1F4954A10(L_1, NULL);
		String_t* L_3;
		L_3 = ColorTranslator_ToHtml_m25DB91FA2BEB0461FF76F6F8FFC53070C4C91534(L_2, NULL);
		int32_t L_4;
		L_4 = Color_ToArgb_m1782C7D79C856B95679C601C8A2AB40C8B90AFFC((&___lightColor2), NULL);
		Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661 L_5;
		L_5 = Color_FromArgb_m8AEB4D512962B2F5DB80026326FBD4B1F4954A10(L_4, NULL);
		String_t* L_6;
		L_6 = ColorTranslator_ToHtml_m25DB91FA2BEB0461FF76F6F8FFC53070C4C91534(L_5, NULL);
		bool L_7 = ___drawQuietZones3;
		int32_t L_8 = ___sizingMode4;
		String_t* L_9;
		L_9 = SvgQRCode_GetGraphic_mB2ED7A6352AB893DA03918FCD933AC2B71D46ACA(__this, L_0, L_3, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.String QRCoder.SvgQRCode::GetGraphic(System.Drawing.Size,System.String,System.String,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_GetGraphic_mB2ED7A6352AB893DA03918FCD933AC2B71D46ACA (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, Size_t9FCA8981191B4D1A693E50590137D636FEAC156D ___viewBox0, String_t* ___darkColorHex1, String_t* ___lightColorHex2, bool ___drawQuietZones3, int32_t ___sizingMode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4733E39E26027253522C63CCC334C6AB8FD79A67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBF098B6D4221E8806EF0C03FCF802B670082674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD82D29DC0A980491F8931E75EBE1A6515EC7F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3AB48BDB4AF05F6413118B7071103D5D7A6AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC17A1AA8120789C97721BDFBADCA6BE7C3AC636E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDDDBF0962FF5FD272B95A3B2D5C168480B6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE69631EBEBF0374017E2004146018D66A224C9B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC3AE15625F284548DEDD0F44037B29CCE9D92AB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	String_t* V_4 = NULL;
	StringBuilder_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	String_t* G_B9_0 = NULL;
	{
		bool L_0 = ___drawQuietZones3;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 0;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_1;
		L_1 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_1);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_2;
		L_2 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_inline(L_2, List_1_get_Count_m715177E51CA1613D6C137E5943A44726F6DC5E6D_RuntimeMethod_var);
		bool L_4 = ___drawQuietZones3;
		G_B4_0 = L_3;
		if (L_4)
		{
			G_B5_0 = L_3;
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B6_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		G_B6_1 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0023:
	{
		V_1 = ((int32_t)il2cpp_codegen_subtract(G_B6_1, G_B6_0));
		int32_t L_6;
		L_6 = Size_get_Width_m1CAB2903EB07A265C466DF4FE4391DA036FBB1CB_inline((&___viewBox0), NULL);
		int32_t L_7;
		L_7 = Size_get_Height_mF208E98EB927661F6D660CEC4E286B82F99D4961_inline((&___viewBox0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_6, L_7, NULL);
		int32_t L_9 = V_1;
		V_2 = ((double)(((double)L_8)/((double)L_9)));
		int32_t L_10 = V_1;
		double L_11 = V_2;
		V_3 = ((double)il2cpp_codegen_multiply(((double)L_10), L_11));
		int32_t L_12 = ___sizingMode4;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13;
		L_13 = Size_get_Width_m1CAB2903EB07A265C466DF4FE4391DA036FBB1CB_inline((&___viewBox0), NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16;
		L_16 = Size_get_Height_mF208E98EB927661F6D660CEC4E286B82F99D4961_inline((&___viewBox0), NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralBBF098B6D4221E8806EF0C03FCF802B670082674, L_15, L_18, NULL);
		G_B9_0 = L_19;
		goto IL_008c;
	}

IL_006a:
	{
		int32_t L_20;
		L_20 = Size_get_Width_m1CAB2903EB07A265C466DF4FE4391DA036FBB1CB_inline((&___viewBox0), NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		int32_t L_23;
		L_23 = Size_get_Height_mF208E98EB927661F6D660CEC4E286B82F99D4961_inline((&___viewBox0), NULL);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralBCD82D29DC0A980491F8931E75EBE1A6515EC7F7, L_22, L_25, NULL);
		G_B9_0 = L_26;
	}

IL_008c:
	{
		V_4 = G_B9_0;
		String_t* L_27 = V_4;
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4733E39E26027253522C63CCC334C6AB8FD79A67, L_27, _stringLiteralE69631EBEBF0374017E2004146018D66A224C9B6, NULL);
		StringBuilder_t* L_29 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_29, L_28, NULL);
		V_5 = L_29;
		StringBuilder_t* L_30 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralCCCDDDBF0962FF5FD272B95A3B2D5C168480B6DB);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCCCDDDBF0962FF5FD272B95A3B2D5C168480B6DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		double L_34 = V_3;
		String_t* L_35;
		L_35 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_34, NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		double L_38 = V_3;
		String_t* L_39;
		L_39 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_37;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		String_t* L_42 = ___lightColorHex2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_41;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0);
		String_t* L_44;
		L_44 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_43, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_30, L_44, NULL);
		int32_t L_46 = V_0;
		V_6 = L_46;
		goto IL_01bb;
	}

IL_00f9:
	{
		int32_t L_47 = V_0;
		V_7 = L_47;
		goto IL_01ab;
	}

IL_0101:
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_48;
		L_48 = AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline(__this, NULL);
		NullCheck(L_48);
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_49;
		L_49 = QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline(L_48, NULL);
		int32_t L_50 = V_7;
		NullCheck(L_49);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_51;
		L_51 = List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058(L_49, L_50, List_1_get_Item_m790AE4E96FF4DA192814EF493AA7A99F5CAA3058_RuntimeMethod_var);
		int32_t L_52 = V_6;
		NullCheck(L_51);
		bool L_53;
		L_53 = BitArray_get_Item_m4896068D3BCCB04D4321A14AD26080FC217E4115(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_54 = V_6;
		int32_t L_55 = V_0;
		double L_56 = V_2;
		V_8 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(L_54, L_55))), L_56));
		int32_t L_57 = V_7;
		int32_t L_58 = V_0;
		double L_59 = V_2;
		V_9 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(L_57, L_58))), L_59));
		StringBuilder_t* L_60 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteralC17A1AA8120789C97721BDFBADCA6BE7C3AC636E);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC17A1AA8120789C97721BDFBADCA6BE7C3AC636E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		double L_64 = V_8;
		String_t* L_65;
		L_65 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_64, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_65);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_63;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralEC3AE15625F284548DEDD0F44037B29CCE9D92AB);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEC3AE15625F284548DEDD0F44037B29CCE9D92AB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		double L_68 = V_9;
		String_t* L_69;
		L_69 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_68, NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_67;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteralBD3AB48BDB4AF05F6413118B7071103D5D7A6AFB);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBD3AB48BDB4AF05F6413118B7071103D5D7A6AFB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
		double L_72 = V_2;
		String_t* L_73;
		L_73 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_72, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_71;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralCE516E840C2DDABB15861C7853C29F41547423E7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		double L_76 = V_2;
		String_t* L_77;
		L_77 = SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7(__this, L_76, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_75;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralBF6AD4126BAE4CD706BE9B79327C2660728CC381);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
		String_t* L_80 = ___darkColorHex1;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_80);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_79;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralAEEC206EC7F58E5056ECCFBDCC1AD87E8D4E80B0);
		String_t* L_82;
		L_82 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_81, NULL);
		NullCheck(L_60);
		StringBuilder_t* L_83;
		L_83 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_60, L_82, NULL);
	}

IL_01a5:
	{
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01ab:
	{
		int32_t L_85 = V_7;
		int32_t L_86 = V_0;
		int32_t L_87 = V_1;
		if ((((int32_t)L_85) < ((int32_t)((int32_t)il2cpp_codegen_add(L_86, L_87)))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_88 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01bb:
	{
		int32_t L_89 = V_6;
		int32_t L_90 = V_0;
		int32_t L_91 = V_1;
		if ((((int32_t)L_89) < ((int32_t)((int32_t)il2cpp_codegen_add(L_90, L_91)))))
		{
			goto IL_00f9;
		}
	}
	{
		StringBuilder_t* L_92 = V_5;
		NullCheck(L_92);
		StringBuilder_t* L_93;
		L_93 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_92, _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14, NULL);
		StringBuilder_t* L_94 = V_5;
		NullCheck(L_94);
		String_t* L_95;
		L_95 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_94);
		return L_95;
	}
}
// System.String QRCoder.SvgQRCode::CleanSvgVal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCode_CleanSvgVal_mE0B9F593F62901688964AB400A95E4D0BA6AC7F7 (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* __this, double ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___input0), L_0, NULL);
		return L_1;
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
// System.String QRCoder.SvgQRCodeHelper::GetQRCode(System.String,System.Int32,System.String,System.String,QRCoder.QRCodeGenerator/ECCLevel,System.Boolean,System.Boolean,QRCoder.QRCodeGenerator/EciMode,System.Int32,System.Boolean,QRCoder.SvgQRCode/SizingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgQRCodeHelper_GetQRCode_m77BF93611D2EFCE7B8AE069451D6933DC40F1D20 (String_t* ___plainText0, int32_t ___pixelsPerModule1, String_t* ___darkColorHex2, String_t* ___lightColorHex3, int32_t ___eccLevel4, bool ___forceUtf85, bool ___utf8BOM6, int32_t ___eciMode7, int32_t ___requestedVersion8, bool ___drawQuietZones9, int32_t ___sizingMode10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* V_0 = NULL;
	QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* V_1 = NULL;
	SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* L_0 = (QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9*)il2cpp_codegen_object_new(QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QRCodeGenerator__ctor_m8136678A7D7AF4F396D48E67E4B4C2BE854401F7(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* L_1 = V_0;
					if (!L_1)
					{
						goto IL_004c;
					}
				}
				{
					QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				QRCodeGenerator_t62DFB9F48F4B0D1CE0E7C90872ECDAAC4403EFA9* L_3 = V_0;
				String_t* L_4 = ___plainText0;
				int32_t L_5 = ___eccLevel4;
				bool L_6 = ___forceUtf85;
				bool L_7 = ___utf8BOM6;
				int32_t L_8 = ___eciMode7;
				int32_t L_9 = ___requestedVersion8;
				NullCheck(L_3);
				QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_10;
				L_10 = QRCodeGenerator_CreateQrCode_m6B8659C8C3DA25AD19E7B2B3CE343E73E937C471(L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0039_1:
					{// begin finally (depth: 2)
						{
							QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_11 = V_1;
							if (!L_11)
							{
								goto IL_0042_1;
							}
						}
						{
							QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_12 = V_1;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_0042_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_13 = V_1;
						SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* L_14 = (SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA*)il2cpp_codegen_object_new(SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA_il2cpp_TypeInfo_var);
						NullCheck(L_14);
						SvgQRCode__ctor_m5ADE374839D16B6451C6D09DCB5D64DCD23FADFB(L_14, L_13, NULL);
						V_2 = L_14;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_002f_2:
							{// begin finally (depth: 3)
								{
									SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* L_15 = V_2;
									if (!L_15)
									{
										goto IL_0038_2;
									}
								}
								{
									SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* L_16 = V_2;
									NullCheck(L_16);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
								}

IL_0038_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							SvgQRCode_tC8605F1F0A11A69B2E998D88EBA7623C5E2774FA* L_17 = V_2;
							int32_t L_18 = ___pixelsPerModule1;
							String_t* L_19 = ___darkColorHex2;
							String_t* L_20 = ___lightColorHex3;
							bool L_21 = ___drawQuietZones9;
							int32_t L_22 = ___sizingMode10;
							NullCheck(L_17);
							String_t* L_23;
							L_23 = SvgQRCode_GetGraphic_m43E4B474E8DEAED682C5E66C6512F5E4254C88A0(L_17, L_18, L_19, L_20, L_21, L_22, NULL);
							V_3 = L_23;
							goto IL_004d;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		String_t* L_24 = V_3;
		return L_24;
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
// System.Void QRCoder.Framework4._0Methods.Stream4Methods::CopyTo(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream4Methods_CopyTo_m0C6A48D37EECB74E44C3BA039CB71836A5CFBD43 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16384));
		V_0 = L_0;
		goto IL_0016;
	}

IL_000d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___output1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, L_3);
	}

IL_0016:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		int32_t L_8 = L_7;
		V_1 = L_8;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void QRCoder.Framework4._0Methods.Stream4Methods::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream4Methods__ctor_m2CFCB3F593E774218EE0DB2F94DD2DBE314A20FD (Stream4Methods_tDA07D18DD3BA203619C1143A6BCCF7CE066328C3* __this, const RuntimeMethod* method) 
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
// System.Void QRCoder.Exceptions.DataTooLongException::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTooLongException__ctor_mBD71071C9CE65229CA949174B02E3BDC31E089EE (DataTooLongException_t33ADED4ED33524F2B78A8E6AF788BCAEB05015AB* __this, String_t* ___eccLevel0, String_t* ___encodingMode1, int32_t ___maxSizeByte2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C582ECD9459D0E83389F07B97BAABAEC7CE535);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___eccLevel0;
		String_t* L_1 = ___encodingMode1;
		int32_t L_2 = ___maxSizeByte2;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralB5C582ECD9459D0E83389F07B97BAABAEC7CE535, L_0, L_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_5, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* QRCodeData_get_ModuleMatrix_m9932D4828B723B582BCF06E838B2E1419997E93E_inline (QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9C6046D129A7DD210D29E2D198E39083126EF5DC* L_0 = __this->___U3CModuleMatrixU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m42D15121440DA17D720372751E34847A876C6B62_inline (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m20ADEECADB9E01D14BF3991824CE438360322621_inline (Point_tB2458287F5CF26F000F9528523513000A548815B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m2186939D99C387540FF74D4C3044E197F1489359_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m984555B4498CDE1EF7DCCD14848BF4E5F2F55D52_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m0B2902040EA8565DBE9BE756B97620AD51D59207_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m4C99ACF2E0E55CA53FC647CA6879199C9D0A27F7_inline (Rectangle_t3267E0E4A6BFA1F08FD21CA8A53F266B97515C06* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_GroupNumber_mE22CEF437CC98AF27D9F9D0C1EBAF9331ACEC3AA_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CGroupNumberU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CodewordBlock_get_BlockNumber_m5BF5697F0B94FB8D06BF9428D0A47E35E804EA46_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlockNumberU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CodewordBlock_get_BitString_m92AAE1097567F0D3AAD68AAF60E16BA2A1637107_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBitStringU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_CodeWords_m1BBCADEF835D5D6C5ECB1192FB5302115F158275_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CCodeWordsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_CodeWordsInt_m122A2188A387445B260FE7114EB373EADB29AA73_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CCodeWordsIntU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CodewordBlock_get_ECCWords_m1AA6966F70A04B0EA5EA9C7D381AF0BBB02C9EF5_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CECCWordsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* CodewordBlock_get_ECCWordsInt_mFB8EE79835A886AB5449E36D9EC5EE25FE671D0B_inline (CodewordBlock_t681539AA5543C89688FADE930ADDBF6FC5D5E931* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CECCWordsIntU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_Version_m0F2A16C99B867F8B2C462BCE81B7ABBB3CE60E31_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ErrorCorrectionLevel_m03CAE9571A097D8E202E33F3717F15EFACE3F8D5_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCorrectionLevelU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_TotalDataCodewords_mC480A552988892FE4BF51243C4640921E7E3C314_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTotalDataCodewordsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_ECCPerBlock_m228730F5A175600D6B48C6AA8C3F1F4A9FE13DDA_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CECCPerBlockU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup1_mD2D4F0B4A8287C3B5AB3AF1FF113BBF6219C78A8_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlocksInGroup1U3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup1_m50691183483D03EE20310ACC1147765335D70F31_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodewordsInGroup1U3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_BlocksInGroup2_m96B239DF156DAD01C09EB013C6C868A9735245E3_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBlocksInGroup2U3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECCInfo_get_CodewordsInGroup2_mE461AAC6FAA5320EDE8D00EDDE576A24535D6E61_inline (ECCInfo_t41E9998952AC451FE1593B1D42EB560CB582BF5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodewordsInGroup2U3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VersionInfo_get_Version_m5DA51AD6F221E2CA9AF47E9FB216281ECE09EEB6_inline (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* VersionInfo_get_Details_m05557CCF2D506AF9F789360AD88EB1C12AE89AB3_inline (VersionInfo_t4311399385E8B2711D7F94441EFF8A6B14A3BA96* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC3877A4F0C7AA6338EDBC7CAB81BBC79244EAC79* L_0 = __this->___U3CDetailsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VersionInfoDetails_get_ErrorCorrectionLevel_m6982A6C7A3DBD1024678E079B17DE75B120CAD31_inline (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCorrectionLevelU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* VersionInfoDetails_get_CapacityDict_m908DEC6A71E6893D6A43413A968D864B0C594310_inline (VersionInfoDetails_t389054FF70493F912A5CBAEB762CF4ED7F0EA5A1* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t522B542B4BC1BE32C5912B8D1D237AFB601B6589* L_0 = __this->___U3CCapacityDictU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Antilog_get_ExponentAlpha_mA4BCFF17D096EA52E747BEE40326AA7E6D90407F_inline (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentAlphaU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Antilog_get_IntegerValue_m2F9BA4DB1D6BF1E4AF8346095FA0C16EBE18D414_inline (Antilog_t0B4E25AD35FF5449F94BE7236A0F4C36928B9684* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIntegerValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Coefficient_m587A69C958741176C9D45E83E3A00D78C814AACF_inline (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCoefficientU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PolynomItem_get_Exponent_m96F0D4466672D5A77BC38E82D4EB4F00636AB3E9_inline (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CExponentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Polynom_set_PolyItems_m13510B9A328F5AF4158FE6851CD9416A333782BF_inline (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_0 = ___value0;
		__this->___U3CPolyItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPolyItemsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* Polynom_get_PolyItems_mA0309AAD392584FF7F370CCCB5E3C04A9D978C55_inline (Polynom_t2DA2D0781609CF9ACB68F132A000F8048DD6598B* __this, const RuntimeMethod* method) 
{
	{
		List_1_t072755E911D175C2CCF66E2094014685F5D28AAD* L_0 = __this->___U3CPolyItemsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* AbstractQRCode_get_QrCodeData_mD2D5BF6BC6131E225DB5FC049BD3D955761C7C19_inline (AbstractQRCode_t15F87B23BF59C9209FB850D339E148EC944FAF59* __this, const RuntimeMethod* method) 
{
	{
		QRCodeData_t43DE54AB5CA98C179C269838FB9D51C06BD55B6F* L_0 = __this->___U3CQrCodeDataU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Size_get_Width_m1CAB2903EB07A265C466DF4FE4391DA036FBB1CB_inline (Size_t9FCA8981191B4D1A693E50590137D636FEAC156D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___width_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Size_get_Height_mF208E98EB927661F6D660CEC4E286B82F99D4961_inline (Size_t9FCA8981191B4D1A693E50590137D636FEAC156D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___height_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m5C4CCADFF1AE4540F252182089A9BF3CBE7BAFE6_gshared_inline (Func_3_tE8F85DA3CAC4998201E5C56356280AFAB7185B69* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_gshared_inline (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF Enumerator_get_Current_mD0F36EF2A62813BB8FFB16F856B0DADC80B1E520_gshared_inline (Enumerator_t4E35AEDEC455CCBCE595F30BB3533CE15586DB3C* __this, const RuntimeMethod* method) 
{
	{
		PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF L_0 = (PolynomItem_t51D69A4B7DA4430504C791599556F7818C8914CF)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3CU3Ef__AnonymousType0_2_get_version_mE90DB3210F13DD9D4A56CEDCE9FD4EFFA1FEA015_gshared_inline (U3CU3Ef__AnonymousType0_2_t9DAC72F3DD36EE4D7B3FB69035A381C958414501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CversionU3Ei__Field_0;
		return L_0;
	}
}
