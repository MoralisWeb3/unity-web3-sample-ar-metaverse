#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<WalletConnectSharp.Core.Events.IEventProvider>>
struct Dictionary_2_tA646AFDA65857A1FE965F0B2469791C640156571;
// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<System.Object>>
struct EventHandler_1_tE629844EA83EEE3204A6579E872A82902C23F181;
// System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>>
struct EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>
struct EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335;
// System.EventHandler`1<WalletConnectSharp.Core.Models.WCSessionData>
struct EventHandler_1_t48E7B1183CBE0370BB5B78574F5C2ED433A92848;
// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectProtocol>
struct EventHandler_1_t54CA20F20F4E6C74602B2B838F6DA94A81070865;
// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectSession>
struct EventHandler_1_t8049C3760EE035D0316AA1C84324EFF62D564EBA;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// WalletConnectSharp.Core.Events.GenericEvent`1<System.Object>
struct GenericEvent_1_t09B2460DA94D8C8A387BAF50C33B3A55B912B850;
// WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tA624903E1259A700E57AC71565033F4E3C8470F9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<WalletConnectSharp.Unity.WalletSelectItem>
struct List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>
struct Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<WalletConnectSharp.Core.Models.EncryptedPayload>
struct TaskFactory_1_tDB0AC13F022E755683A0226FF8020B2B83D9EAB5;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskFactory_1_t7A8EB24C269742DE393EB86C05D812AE1029D84B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct TaskFactory_1_t90220F92F6C0C8EC26568D2DF5F7E433788508D8;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<WalletConnectSharp.Core.Models.EncryptedPayload>
struct Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct ValueCollection_t99ED8A33A935B4A1B2ACBA51BCE32F4B43E5B928;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WalletConnectSharp.Unity.Models.AppEntry>[]
struct EntryU5BU5D_tEAE5EDB12E516F9077FD0BB8DE929C96677E929E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
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
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// WalletConnectSharp.Core.Models.NetworkMessage[]
struct NetworkMessageU5BU5D_t861EFADA07987E9C6B9E6F8C72BD14B1A8CE15A4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// WalletConnectSharp.Unity.WalletSelectItem[]
struct WalletSelectItemU5BU5D_t8373DD371C32D42059618B3CA6E3AB5F2CE03475;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// WalletConnectSharp.Unity.Models.AppColors
struct AppColors_t25E41C019661B082A0A8284B05D88D323080C69F;
// WalletConnectSharp.Unity.Models.AppEntry
struct AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A;
// WalletConnectSharp.Unity.Models.AppInfo
struct AppInfo_t8B0A7091A30AE56D866EB3A946D208D12830990B;
// WalletConnectSharp.Unity.Models.AppMetadata
struct AppMetadata_t273528F18A12911293485B135FE92A6593BE0A41;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A;
// WalletConnectSharp.Unity.Utils.BindComponentsInChildren
struct BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127;
// WalletConnectSharp.Unity.Utils.BindableMonoBehavior
struct BindableMonoBehavior_t6D53C580212A669130612338B85CE69E6EE9F535;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// WalletConnectSharp.Unity.Utils.Binder
struct Binder_t4FD6BC86E58949FEF8412C28D92F9788DE3D6466;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// WalletConnectSharp.Unity.UI.ChooseWalletScreen
struct ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664;
// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13;
// WalletConnectSharp.Core.Models.ClientMeta
struct ClientMeta_tCEA58C507A1B407D02F8DD09473275F8D2DEE5E4;
// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// WalletConnectSharp.Core.Models.EncryptedPayload
struct EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4;
// WalletConnectSharp.Core.Events.EventDelegator
struct EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// WalletConnectSharp.NEthereum.Client.FallbackProvider
struct FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// WalletConnectSharp.Core.Network.ICipher
struct ICipher_t8210DC3FACC0909904D4E0F234F850DCA6E0564B;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t50E7FCF04A8C8A8EF0052347AB7AA81178AE13B7;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// log4net.ILog
struct ILog_tE7F016C98742C5098993E5012FB864AFB4050335;
// System.Net.Http.IMonoHttpClientHandler
struct IMonoHttpClientHandler_t721CE15E0E80995BFB141B935E5CF97249F183CD;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// WalletConnectSharp.Core.Network.ITransport
struct ITransport_t80896157A3853C3CFF900C12F3ABA98FAFBB874C;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// WalletConnectSharp.Core.Network.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63;
// WalletConnectSharp.Unity.Models.MessageSigner
struct MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WalletConnectSharp.Unity.Models.MobileAppData
struct MobileAppData_tF87FB69989040F3A78792C84642364020CAC3071;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents
struct MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6;
// WalletConnectSharp.Unity.Models.NFTTokenData
struct NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB;
// WalletConnectSharp.Unity.Network.NativeWebSocketTransport
struct NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A;
// WalletConnectSharp.Core.Models.NetworkMessage
struct NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96;
// Nethereum.JsonRpc.Client.RpcMessages.RpcError
struct RpcError_t028BFE55B688314EB010BE50A978D7A6F8E49E5E;
// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647;
// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6;
// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WalletConnectSharp.Unity.Models.WCMessageSigned
struct WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0;
// DefaultNamespace.WaitForTask
struct WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0;
// WalletConnectSharp.Unity.WalletConnect
struct WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63;
// WalletConnectSharp.NEthereum.Client.WalletConnectClient
struct WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29;
// WalletConnectSharp.Core.WalletConnectProtocol
struct WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C;
// WalletConnectSharp.Core.WalletConnectSession
struct WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002;
// WalletConnectSharp.Unity.WalletConnectUnitySession
struct WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52;
// WalletConnectSharp.Unity.Network.WebGlAESCipher
struct WebGlAESCipher_t2D11E7BFF8BCDA4928D3F6BEA87960D1028CE828;
// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6;
// WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8
struct U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// WalletConnectSharp.Unity.Models.MessageSigner/WCMessageSignedEvent
struct WCMessageSignedEvent_t4B4ECB50D1DE7177CE0E32695B260D956F88DC76;
// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE;
// WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6
struct U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE;
// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8;
// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097;
// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38
struct U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventNoSession
struct WalletConnectEventNoSession_t295AF4B886CA83C91C56B3FE93C90C095AAB0B03;
// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSession
struct WalletConnectEventWithSession_tDF4D4038BC32314159C3948A12853050E811C4E1;
// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSessionData
struct WalletConnectEventWithSessionData_t31A074E01B6B644CED0555303012D7B8C5C83E13;
// WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_t8406844371043BD4B6A82EFFE5FA231B936DB309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E4FEC19EFF45A773972B98F36B7BF9704AEC1;
IL2CPP_EXTERN_C String_t* _stringLiteral06D4F8C89C04E5D490713CFD062883F909EC4003;
IL2CPP_EXTERN_C String_t* _stringLiteral0FEEA693D0DFAD56876EE65C61B5DCFE3A26EEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral14D0CC22C16B40FDD4513CCF61C98F5D95E9543F;
IL2CPP_EXTERN_C String_t* _stringLiteral34B77BE9A39AB42588577893E193AE52D088B048;
IL2CPP_EXTERN_C String_t* _stringLiteral3CF1C83199414A658EE26200129D72A52EE2A5FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4FFFCB1525988144ADEEB48C587A02F0A6700E56;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral576FEAEE6C1D0A7A8F6D335BF0DC0ECBFA1221EB;
IL2CPP_EXTERN_C String_t* _stringLiteral57FACC7277A0484A269F3C53B88AAC1C986466A2;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD763F104D3D29B952CFDC0BB5244CEC16CD953;
IL2CPP_EXTERN_C String_t* _stringLiteral765F1770787C16CBA914882ACDB5A7440872F8AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCB505A35B4AD4FEEC0397829838616BE7C6DEA;
IL2CPP_EXTERN_C String_t* _stringLiteral8451D28B929E6C023C5CF1726EC710BE6210ECC3;
IL2CPP_EXTERN_C String_t* _stringLiteral933294A52EA28B88ED45A93B4DF47D0E4AAEE243;
IL2CPP_EXTERN_C String_t* _stringLiteral954E3EC4F00AF7CE85BDB2613E44373C1D66719A;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A565AEC5649180CA5327D5F5FE3BBAD6154993;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DD084743153BCDD0AAC7FA2BA85FEDC1E9EEC3;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0F7C2070363DADAD05AA842852782AFBCCA72B;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE09538204AD98EAB3D28D92042369A4AA98CF2;
IL2CPP_EXTERN_C String_t* _stringLiteralD2FDD307A5C9EA7C093103C8089F7229092D715F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE69704AC0F43A33A8D7D88C9A18CB1C35EFBD52E;
IL2CPP_EXTERN_C String_t* _stringLiteralEAED2CB9D7019C289109BDF59CC37081150F7AB7;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8B3AC95CDD4618A8D7C1D04F29249F6230AF47;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC97DACAA8A658AC40205A9080A54F97344077F4;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3D0A1093A5AFDB9A9F3898287B83F853100CD837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAE11FE45044A272AFB3BFB25BEA07F46CFA95AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mAF41A0856EB4AF02F17762FAF431BC048611B5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mFE02B8B1E9291A49EDB6EA231E8B5C0FAB3C3E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m975E85E011F6D20D6A6E36588AD57DD8B2741FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m8B76CB2EEE11FE77A1312F56F85C5725F088A715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m001CFFC6CD8BE812321414602D6025B30E6AE9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m2FCA9EC8CAA996E5CB691158C1E40D90635DCBB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m6C2817241D8745F94E5FF612EF1E4FEF61A2B68A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mC94DBB72A68CF73183990F32B8A232898A0CC2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mCE59A75369B47696B09F81CE1E119E33BCB23896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m8DC9519479365A068AC741A6368DD7403B2BEEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m10A9112A5276EFB937E16DD493135226AFF7B177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m787F0DABACF0A880D29205420FE2208EE558820F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m24D19E1F9C07D0F3ADE948E8A067B8D02111DD69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m107E76A18E11D85ECC29641ACC12CEE735D59E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF225D7F142C6B76677A13BC98CC114441088FA6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m82F135FE8C3604CD148A060C21508E0617862BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m75F465782A5BDCF08F9FCB815DC5AE8DB3FAF6A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4896C623610D3ED595C221CDFD03D8D966E014FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDD9089D72DDF6789DA5F169713B400CD5AD32124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventDelegator_ListenForGenericResponse_TisRpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA_m6B50FFD5CF9DE5FC141A13605F99F1E1D1D0EF90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mF35706111A9643A5D5217D6DB7011E8D813E162B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mBAFAD812E77397FDEB5801F9283C950F504DEFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericEvent_1_get_Response_m092D0BEE2BE8450C892D2C59F7A15934EEA4A6A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisNetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_m9F13E207DA4EA779BCAA8EF97DD055C1E5F0A8AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m5D4C6E4EEC27D70DCEC85BCF2F53209B35CDE67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NFTTokenData_get_imageSprite_m718706487DF03EA7727B00C2E1D2CF34A607F0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketTransport_OnMessageReceived_m0739F39BEE54D2930D6A8542401FFC04A532B290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebSocketTransport_U3COnApplicationPauseU3Eb__38_0_mC0FE69B7053BB4976855FEFA35485EAD0170932F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m784739849C3EE5EEF0E81423B6333F99AEE6FEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m27DBC27F6D30BBA1CC6A682B521816A35BF0C7B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m038F00DF41B8F71EE240AD5C93C84A0D319A9F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m48A5358CEEF237B942911132F4ECF31E6959C4D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mBD15AF25F8380E4A25CB246082E940029E1584FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m7DCAFA088811692A51071CA44AF85C49EBFD7FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA7197B5674A493D0DE81B0D4F0551EB4943D1CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mC57280D61E6B386CF1AB22FCF88ACFD56009716D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mE958505F35771F48CB8256E16F8B96D5E374C891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m35DF66167391E888B07562BE442E87CCE67CD923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisEncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_m63B18E7C4B3CDBD7F86A7786F170107140652A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildWalletButtonsU3Ed__8_System_Collections_IEnumerator_Reset_mF02B38FBD56614C7245BB0C25D8AFEE4A597715B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadImageSpriteU3Ed__6_MoveNext_mFCD86A041F025F220EDE82E2A23B48D721D0897A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadImageSpriteU3Ed__6_System_Collections_IEnumerator_Reset_mC22618198057A273525013712A5BB39D6C60355B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnApplicationPauseU3Ed__38_System_Collections_IEnumerator_Reset_mDF885A3750610260D428A34C8016A6C9014413CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__0_m68AAD0A10FC7C990D9F3549F6E2B80D912F33B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__1_mAFB55E8047265E92BB518ACA8D36C05E8734B1C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__2_m21D36030A562FD88E92243991806FC3AA2984A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWaitForStartU3Eb__0_m1BB3ECA94F9D65192AB9FEDFF1774740CDF3D077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_0_U3COnApplicationPauseU3Eb__1_mE7433FFC9366FC7E6E6DBBD8CFF2E1C8584B65D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CSendAsyncU3Eb__0_m826DB0F55E6CDF958D51A7B5DA758EA5C3727BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CBuildWalletButtonsU3Eb__0_m6B14D80E7767BDEAAFE4B12F9A4EFDAB1DFF66BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m9266DE2BFA2650C8163EC5C8C157A7D4CD74ABD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB61F0B2AA23A18B6005621B2B29231F7CF95668F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WalletConnectNEthereumExtensions_CreateProvider_mF8B03DFD892699923CC8E8D190F911ABAAC6F944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WalletConnectProtocol_SendRequest_TisRpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_m1CEC550E53092A9E7403C3C2FE837CFE77F78479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGlAESCipher_DecryptWithKey_mCB115C61F4B7E5ECF2056636DEB3CAE1BB9CA3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEAE5EDB12E516F9077FD0BB8DE929C96677E929E* ____entries_1;
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
	KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t99ED8A33A935B4A1B2ACBA51BCE32F4B43E5B928* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// WalletConnectSharp.Core.Events.GenericEvent`1<System.Object>
struct GenericEvent_1_t09B2460DA94D8C8A387BAF50C33B3A55B912B850  : public RuntimeObject
{
	// T WalletConnectSharp.Core.Events.GenericEvent`1::<Response>k__BackingField
	RuntimeObject* ___U3CResponseU3Ek__BackingField_0;
};

// WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F  : public RuntimeObject
{
	// T WalletConnectSharp.Core.Events.GenericEvent`1::<Response>k__BackingField
	RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* ___U3CResponseU3Ek__BackingField_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<WalletConnectSharp.Unity.WalletSelectItem>
struct List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WalletSelectItemU5BU5D_t8373DD371C32D42059618B3CA6E3AB5F2CE03475* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WalletSelectItemU5BU5D_t8373DD371C32D42059618B3CA6E3AB5F2CE03475* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>
struct Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	NetworkMessageU5BU5D_t861EFADA07987E9C6B9E6F8C72BD14B1A8CE15A4* ____array_0;
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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
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

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* ____task_0;
};

// WalletConnectSharp.Unity.Models.AppColors
struct AppColors_t25E41C019661B082A0A8284B05D88D323080C69F  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.AppColors::primary
	String_t* ___primary_0;
	// System.String WalletConnectSharp.Unity.Models.AppColors::secondary
	String_t* ___secondary_1;
};

// WalletConnectSharp.Unity.Models.AppEntry
struct AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.AppEntry::id
	String_t* ___id_0;
	// System.String WalletConnectSharp.Unity.Models.AppEntry::name
	String_t* ___name_1;
	// System.String WalletConnectSharp.Unity.Models.AppEntry::homepage
	String_t* ___homepage_2;
	// System.String[] WalletConnectSharp.Unity.Models.AppEntry::chains
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___chains_3;
	// WalletConnectSharp.Unity.Models.AppInfo WalletConnectSharp.Unity.Models.AppEntry::app
	AppInfo_t8B0A7091A30AE56D866EB3A946D208D12830990B* ___app_4;
	// WalletConnectSharp.Unity.Models.MobileAppData WalletConnectSharp.Unity.Models.AppEntry::mobile
	MobileAppData_tF87FB69989040F3A78792C84642364020CAC3071* ___mobile_5;
	// WalletConnectSharp.Unity.Models.MobileAppData WalletConnectSharp.Unity.Models.AppEntry::desktop
	MobileAppData_tF87FB69989040F3A78792C84642364020CAC3071* ___desktop_6;
	// WalletConnectSharp.Unity.Models.AppMetadata WalletConnectSharp.Unity.Models.AppEntry::metadata
	AppMetadata_t273528F18A12911293485B135FE92A6593BE0A41* ___metadata_7;
	// UnityEngine.Sprite WalletConnectSharp.Unity.Models.AppEntry::largeIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___largeIcon_8;
	// UnityEngine.Sprite WalletConnectSharp.Unity.Models.AppEntry::medimumIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___medimumIcon_9;
	// UnityEngine.Sprite WalletConnectSharp.Unity.Models.AppEntry::smallIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___smallIcon_10;
};

// WalletConnectSharp.Unity.Models.AppInfo
struct AppInfo_t8B0A7091A30AE56D866EB3A946D208D12830990B  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.AppInfo::browser
	String_t* ___browser_0;
	// System.String WalletConnectSharp.Unity.Models.AppInfo::ios
	String_t* ___ios_1;
	// System.String WalletConnectSharp.Unity.Models.AppInfo::android
	String_t* ___android_2;
	// System.String WalletConnectSharp.Unity.Models.AppInfo::mac
	String_t* ___mac_3;
	// System.String WalletConnectSharp.Unity.Models.AppInfo::windows
	String_t* ___windows_4;
	// System.String WalletConnectSharp.Unity.Models.AppInfo::linux
	String_t* ___linux_5;
};

// WalletConnectSharp.Unity.Models.AppMetadata
struct AppMetadata_t273528F18A12911293485B135FE92A6593BE0A41  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.AppMetadata::shortName
	String_t* ___shortName_0;
	// WalletConnectSharp.Unity.Models.AppColors WalletConnectSharp.Unity.Models.AppMetadata::colors
	AppColors_t25E41C019661B082A0A8284B05D88D323080C69F* ___colors_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// WalletConnectSharp.Core.Models.EncryptedPayload
struct EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4  : public RuntimeObject
{
	// System.String WalletConnectSharp.Core.Models.EncryptedPayload::iv
	String_t* ___iv_0;
	// System.String WalletConnectSharp.Core.Models.EncryptedPayload::hmac
	String_t* ___hmac_1;
	// System.String WalletConnectSharp.Core.Models.EncryptedPayload::data
	String_t* ___data_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// WalletConnectSharp.Core.Events.EventDelegator
struct EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<WalletConnectSharp.Core.Events.IEventProvider>> WalletConnectSharp.Core.Events.EventDelegator::Listeners
	Dictionary_2_tA646AFDA65857A1FE965F0B2469791C640156571* ___Listeners_0;
};

// WalletConnectSharp.NEthereum.Client.FallbackProvider
struct FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.Client.FallbackProvider::_fallback
	RuntimeObject* ____fallback_1;
	// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.Client.FallbackProvider::_signer
	RuntimeObject* ____signer_2;
	// Nethereum.JsonRpc.Client.RequestInterceptor WalletConnectSharp.NEthereum.Client.FallbackProvider::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* ___U3COverridingRequestInterceptorU3Ek__BackingField_3;
};

struct FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_StaticFields
{
	// System.String[] WalletConnectSharp.NEthereum.Client.FallbackProvider::ValidMethods
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ValidMethods_0;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17  : public RuntimeObject
{
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// WalletConnectSharp.Unity.Models.MobileAppData
struct MobileAppData_tF87FB69989040F3A78792C84642364020CAC3071  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.MobileAppData::native
	String_t* ___native_0;
	// System.String WalletConnectSharp.Unity.Models.MobileAppData::universal
	String_t* ___universal_1;
};

// WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders
struct MonoBehaviorAsyncBinders_t04BFD46A5EBDB0E1539FE87BE60F7BBE78BB3A83  : public RuntimeObject
{
};

// WalletConnectSharp.Unity.Models.NFTTokenData
struct NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Models.NFTTokenData::name
	String_t* ___name_0;
	// System.String WalletConnectSharp.Unity.Models.NFTTokenData::image
	String_t* ___image_1;
	// System.String WalletConnectSharp.Unity.Models.NFTTokenData::description
	String_t* ___description_2;
	// UnityEngine.Sprite WalletConnectSharp.Unity.Models.NFTTokenData::_cache
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____cache_3;
};

// WalletConnectSharp.Core.Models.NetworkMessage
struct NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3  : public RuntimeObject
{
	// System.String WalletConnectSharp.Core.Models.NetworkMessage::Topic
	String_t* ___Topic_0;
	// System.String WalletConnectSharp.Core.Models.NetworkMessage::Type
	String_t* ___Type_1;
	// System.String WalletConnectSharp.Core.Models.NetworkMessage::Payload
	String_t* ___Payload_2;
	// System.Boolean WalletConnectSharp.Core.Models.NetworkMessage::Silent
	bool ___Silent_3;
};

// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41  : public RuntimeObject
{
};

// Nethereum.JsonRpc.Client.RpcRequest
struct RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcRequest::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcRequest::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_1;
	// System.Object[] Nethereum.JsonRpc.Client.RpcRequest::<RawParameters>k__BackingField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CRawParametersU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage
struct RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_2;
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::<RawParameters>k__BackingField
	RuntimeObject* ___U3CRawParametersU3Ek__BackingField_3;
};

// Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage
struct RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA  : public RuntimeObject
{
	// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_0;
	// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<JsonRpcVersion>k__BackingField
	String_t* ___U3CJsonRpcVersionU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JToken Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Result>k__BackingField
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___U3CResultU3Ek__BackingField_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcError Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage::<Error>k__BackingField
	RpcError_t028BFE55B688314EB010BE50A978D7A6F8E49E5E* ___U3CErrorU3Ek__BackingField_3;
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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
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

// WalletConnectSharp.Unity.Models.WCMessageSigned
struct WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0  : public RuntimeObject
{
	// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.WCMessageSigned::<Signer>k__BackingField
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___U3CSignerU3Ek__BackingField_0;
	// System.String WalletConnectSharp.Unity.Models.WCMessageSigned::<SignedMessage>k__BackingField
	String_t* ___U3CSignedMessageU3Ek__BackingField_1;
};

// WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions
struct WalletConnectNEthereumExtensions_t4E6DA6FE4E2A087C7890380AC06A18A654470377  : public RuntimeObject
{
};

// WalletConnectSharp.Core.WalletConnectProtocol
struct WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C  : public RuntimeObject
{
	// WalletConnectSharp.Core.Events.EventDelegator WalletConnectSharp.Core.WalletConnectProtocol::Events
	EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* ___Events_1;
	// System.String WalletConnectSharp.Core.WalletConnectProtocol::Version
	String_t* ___Version_2;
	// System.String WalletConnectSharp.Core.WalletConnectProtocol::_bridgeUrl
	String_t* ____bridgeUrl_3;
	// System.String WalletConnectSharp.Core.WalletConnectProtocol::_key
	String_t* ____key_4;
	// System.Byte[] WalletConnectSharp.Core.WalletConnectProtocol::_keyRaw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____keyRaw_5;
	// System.Collections.Generic.List`1<System.String> WalletConnectSharp.Core.WalletConnectProtocol::_activeTopics
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____activeTopics_6;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectProtocol> WalletConnectSharp.Core.WalletConnectProtocol::OnTransportConnect
	EventHandler_1_t54CA20F20F4E6C74602B2B838F6DA94A81070865* ___OnTransportConnect_7;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectProtocol> WalletConnectSharp.Core.WalletConnectProtocol::OnTransportDisconnect
	EventHandler_1_t54CA20F20F4E6C74602B2B838F6DA94A81070865* ___OnTransportDisconnect_8;
	// System.Boolean WalletConnectSharp.Core.WalletConnectProtocol::<SessionConnected>k__BackingField
	bool ___U3CSessionConnectedU3Ek__BackingField_9;
	// System.Boolean WalletConnectSharp.Core.WalletConnectProtocol::<Disconnected>k__BackingField
	bool ___U3CDisconnectedU3Ek__BackingField_10;
	// System.Boolean WalletConnectSharp.Core.WalletConnectProtocol::<Connecting>k__BackingField
	bool ___U3CConnectingU3Ek__BackingField_11;
	// WalletConnectSharp.Core.Network.ITransport WalletConnectSharp.Core.WalletConnectProtocol::<Transport>k__BackingField
	RuntimeObject* ___U3CTransportU3Ek__BackingField_12;
	// WalletConnectSharp.Core.Network.ICipher WalletConnectSharp.Core.WalletConnectProtocol::<Cipher>k__BackingField
	RuntimeObject* ___U3CCipherU3Ek__BackingField_13;
	// WalletConnectSharp.Core.Models.ClientMeta WalletConnectSharp.Core.WalletConnectProtocol::<DappMetadata>k__BackingField
	ClientMeta_tCEA58C507A1B407D02F8DD09473275F8D2DEE5E4* ___U3CDappMetadataU3Ek__BackingField_14;
	// WalletConnectSharp.Core.Models.ClientMeta WalletConnectSharp.Core.WalletConnectProtocol::<WalletMetadata>k__BackingField
	ClientMeta_tCEA58C507A1B407D02F8DD09473275F8D2DEE5E4* ___U3CWalletMetadataU3Ek__BackingField_15;
	// System.String WalletConnectSharp.Core.WalletConnectProtocol::<PeerId>k__BackingField
	String_t* ___U3CPeerIdU3Ek__BackingField_16;
};

struct WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_StaticFields
{
	// System.String[] WalletConnectSharp.Core.WalletConnectProtocol::SigningMethods
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___SigningMethods_0;
};

// WalletConnectSharp.Unity.Network.WebGlAESCipher
struct WebGlAESCipher_t2D11E7BFF8BCDA4928D3F6BEA87960D1028CE828  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6  : public RuntimeObject
{
	// WalletConnectSharp.Unity.Models.AppEntry WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0::walletData
	AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* ___walletData_0;
	// WalletConnectSharp.Unity.UI.ChooseWalletScreen WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0::<>4__this
	ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* ___U3CU3E4__this_1;
};

// WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8
struct U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9  : public RuntimeObject
{
	// System.Int32 WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WalletConnectSharp.Unity.UI.ChooseWalletScreen WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::<>4__this
	ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* ___U3CU3E4__this_2;
};

// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0::eventCompleted
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___eventCompleted_0;
};

// WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6
struct U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE  : public RuntimeObject
{
	// System.Int32 WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WalletConnectSharp.Unity.Models.NFTTokenData WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::<>4__this
	NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8  : public RuntimeObject
{
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::eventCompleted
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___eventCompleted_1;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097  : public RuntimeObject
{
	// System.String WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0::topic
	String_t* ___topic_0;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_1;
};

// WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0::eventCompleted
	TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* ___eventCompleted_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Action>
struct Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,WalletConnectSharp.Unity.Models.AppEntry>
struct Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Core.Models.EncryptedPayload>
struct Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* ___m_result_22;
};

struct Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDB0AC13F022E755683A0226FF8020B2B83D9EAB5* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* ___m_result_22;
};

struct Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7A8EB24C269742DE393EB86C05D812AE1029D84B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* ___m_result_22;
};

struct Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t90220F92F6C0C8EC26568D2DF5F7E433788508D8* ___s_defaultFactory_23;
};

// UnityEngine.Events.UnityEvent`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// WalletConnectSharp.Unity.Utils.Binder
struct Binder_t4FD6BC86E58949FEF8412C28D92F9788DE3D6466  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD  : public HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17
{
	// System.Net.Http.IMonoHttpClientHandler System.Net.Http.HttpClientHandler::_delegatingHandler
	RuntimeObject* ____delegatingHandler_0;
	// System.Net.Http.ClientCertificateOption System.Net.Http.HttpClientHandler::_clientCertificateOptions
	int32_t ____clientCertificateOptions_1;
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

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// WalletConnectSharp.Core.Network.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// WalletConnectSharp.Core.Models.NetworkMessage WalletConnectSharp.Core.Network.MessageReceivedEventArgs::<Message>k__BackingField
	NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___U3CMessageU3Ek__BackingField_1;
	// WalletConnectSharp.Core.Network.ITransport WalletConnectSharp.Core.Network.MessageReceivedEventArgs::<Source>k__BackingField
	RuntimeObject* ___U3CSourceU3Ek__BackingField_2;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// DefaultNamespace.WaitForTask
struct WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Threading.Tasks.Task DefaultNamespace.WaitForTask::source
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___source_0;
};

// WalletConnectSharp.Core.WalletConnectSession
struct WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002  : public WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C
{
	// System.String WalletConnectSharp.Core.WalletConnectSession::_handshakeTopic
	String_t* ____handshakeTopic_17;
	// System.Int64 WalletConnectSharp.Core.WalletConnectSession::_handshakeId
	int64_t ____handshakeId_18;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectSession> WalletConnectSharp.Core.WalletConnectSession::OnSessionConnect
	EventHandler_1_t8049C3760EE035D0316AA1C84324EFF62D564EBA* ___OnSessionConnect_19;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectSession> WalletConnectSharp.Core.WalletConnectSession::OnSessionCreated
	EventHandler_1_t8049C3760EE035D0316AA1C84324EFF62D564EBA* ___OnSessionCreated_20;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectSession> WalletConnectSharp.Core.WalletConnectSession::OnSessionResumed
	EventHandler_1_t8049C3760EE035D0316AA1C84324EFF62D564EBA* ___OnSessionResumed_21;
	// System.EventHandler WalletConnectSharp.Core.WalletConnectSession::OnSessionDisconnect
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnSessionDisconnect_22;
	// System.EventHandler`1<WalletConnectSharp.Core.WalletConnectSession> WalletConnectSharp.Core.WalletConnectSession::OnSend
	EventHandler_1_t8049C3760EE035D0316AA1C84324EFF62D564EBA* ___OnSend_23;
	// System.EventHandler`1<WalletConnectSharp.Core.Models.WCSessionData> WalletConnectSharp.Core.WalletConnectSession::SessionUpdate
	EventHandler_1_t48E7B1183CBE0370BB5B78574F5C2ED433A92848* ___SessionUpdate_24;
	// System.Int32 WalletConnectSharp.Core.WalletConnectSession::<NetworkId>k__BackingField
	int32_t ___U3CNetworkIdU3Ek__BackingField_25;
	// System.String[] WalletConnectSharp.Core.WalletConnectSession::<Accounts>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CAccountsU3Ek__BackingField_26;
	// System.Boolean WalletConnectSharp.Core.WalletConnectSession::<ReadyForUserPrompt>k__BackingField
	bool ___U3CReadyForUserPromptU3Ek__BackingField_27;
	// System.Boolean WalletConnectSharp.Core.WalletConnectSession::<SessionUsed>k__BackingField
	bool ___U3CSessionUsedU3Ek__BackingField_28;
	// System.Int32 WalletConnectSharp.Core.WalletConnectSession::<ChainId>k__BackingField
	int32_t ___U3CChainIdU3Ek__BackingField_29;
	// System.String WalletConnectSharp.Core.WalletConnectSession::clientId
	String_t* ___clientId_30;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>
struct AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* ___s_defaultResultTask_0;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// System.Security.Cryptography.AesManaged
struct AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819  : public Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047
{
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* ___m_rijndael_11;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// WalletConnectSharp.Unity.Utils.BindComponentsInChildren
struct BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127  : public Binder_t4FD6BC86E58949FEF8412C28D92F9788DE3D6466
{
	// System.String WalletConnectSharp.Unity.Utils.BindComponentsInChildren::fromObject
	String_t* ___fromObject_0;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* ___U3COverridingRequestInterceptorU3Ek__BackingField_1;
};

struct ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13_StaticFields
{
	// System.TimeSpan Nethereum.JsonRpc.Client.ClientBase::<ConnectionTimeout>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CConnectionTimeoutU3Ek__BackingField_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// WalletConnectSharp.Unity.WalletConnectUnitySession
struct WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52  : public WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002
{
	// WalletConnectSharp.Unity.WalletConnect WalletConnectSharp.Unity.WalletConnectUnitySession::unityObjectSource
	WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* ___unityObjectSource_31;
	// System.Boolean WalletConnectSharp.Unity.WalletConnectUnitySession::listenerAdded
	bool ___listenerAdded_32;
};

// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F  : public RuntimeObject
{
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___OnOpen_0;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___OnMessage_1;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___OnError_2;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___OnClose_3;
	// System.Uri NativeWebSocket.WebSocket::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> NativeWebSocket.WebSocket::headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers_5;
	// System.Collections.Generic.List`1<System.String> NativeWebSocket.WebSocket::subprotocols
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___subprotocols_6;
	// System.Net.WebSockets.ClientWebSocket NativeWebSocket.WebSocket::m_Socket
	ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F* ___m_Socket_7;
	// System.Threading.CancellationTokenSource NativeWebSocket.WebSocket::m_TokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_TokenSource_8;
	// System.Threading.CancellationToken NativeWebSocket.WebSocket::m_CancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_CancellationToken_9;
	// System.Object NativeWebSocket.WebSocket::OutgoingMessageLock
	RuntimeObject* ___OutgoingMessageLock_10;
	// System.Object NativeWebSocket.WebSocket::IncomingMessageLock
	RuntimeObject* ___IncomingMessageLock_11;
	// System.Boolean NativeWebSocket.WebSocket::isSending
	bool ___isSending_12;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendBytesQueue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___sendBytesQueue_13;
	// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>> NativeWebSocket.WebSocket::sendTextQueue
	List_1_tA624903E1259A700E57AC71565033F4E3C8470F9* ___sendTextQueue_14;
	// System.Collections.Generic.List`1<System.Byte[]> NativeWebSocket.WebSocket::m_MessageList
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_MessageList_15;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// WalletConnectSharp.Unity.Models.MessageSigner/WCMessageSignedEvent
struct WCMessageSignedEvent_t4B4ECB50D1DE7177CE0E32695B260D956F88DC76  : public UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0
{
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38
struct U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F  : public RuntimeObject
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::pauseStatus
	bool ___pauseStatus_2;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<System.String> WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>7__wrap1
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 ___U3CU3E7__wrap1_4;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
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

// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96  : public ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13
{
	// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.RpcClient::_authHeaderValue
	AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ____authHeaderValue_4;
	// System.Uri Nethereum.JsonRpc.Client.RpcClient::_baseUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseUrl_5;
	// System.Net.Http.HttpClientHandler Nethereum.JsonRpc.Client.RpcClient::_httpClientHandler
	HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ____httpClientHandler_6;
	// log4net.ILog Nethereum.JsonRpc.Client.RpcClient::_log
	RuntimeObject* ____log_7;
	// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.RpcClient::_jsonSerializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ____jsonSerializerSettings_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Nethereum.JsonRpc.Client.RpcClient::_firstHttpClient
	bool ____firstHttpClient_9;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_10;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient2
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient2_11;
	// System.Boolean Nethereum.JsonRpc.Client.RpcClient::_rotateHttpClients
	bool ____rotateHttpClients_12;
	// System.DateTime Nethereum.JsonRpc.Client.RpcClient::_httpClientLastCreatedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____httpClientLastCreatedAt_13;
	// System.Object Nethereum.JsonRpc.Client.RpcClient::_lockObject
	RuntimeObject* ____lockObject_14;
};

struct RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96_StaticFields
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient::<MaximumConnectionsPerServer>k__BackingField
	int32_t ___U3CMaximumConnectionsPerServerU3Ek__BackingField_3;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// WalletConnectSharp.NEthereum.Client.WalletConnectClient
struct WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29  : public ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13
{
	// System.Int64 WalletConnectSharp.NEthereum.Client.WalletConnectClient::_id
	int64_t ____id_2;
	// WalletConnectSharp.Core.WalletConnectProtocol WalletConnectSharp.NEthereum.Client.WalletConnectClient::<Provider>k__BackingField
	WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___U3CProviderU3Ek__BackingField_3;
};

// NativeWebSocket.WebSocketException
struct WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525  : public Exception_t
{
};

// WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11
struct U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D 
{
	// System.Int32 WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::<>4__this
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::<>u__1
	TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1
struct U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364 
{
	// System.Int32 WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 ___U3CU3Et__builder_1;
	// UnityEngine.GameObject WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_2;
	// System.String WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::messageToSign
	String_t* ___messageToSign_3;
	// System.Int32 WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::accountIndex
	int32_t ___accountIndex_4;
	// System.String WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::addressToSign
	String_t* ___addressToSign_5;
	// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::<signer>5__2
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___U3CsignerU3E5__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::<>u__2
	TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF ___U3CU3Eu__2_8;
};

// WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12
struct U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833 
{
	// System.Int32 WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<>4__this
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___U3CU3E4__this_2;
	// WalletConnectSharp.Unity.Models.WCMessageSigned WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<eventData>5__2
	WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* ___U3CeventDataU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_5;
};

// WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0
struct U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D 
{
	// System.Int32 WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// UnityEngine.GameObject WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2
struct U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF 
{
	// System.Int32 WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::<>4__this
	MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27
struct U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24
struct U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25
struct U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29
struct U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Byte[] WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_2;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_3;
	// WalletConnectSharp.Core.Models.NetworkMessage WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::<msg>5__2
	NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___U3CmsgU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5
struct U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE 
{
	// System.Int32 WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC ___U3CU3Et__builder_1;
	// WalletConnectSharp.NEthereum.Client.WalletConnectClient WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>4__this
	WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* ___U3CU3E4__this_2;
	// Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::message
	RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* ___message_3;
	// WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0 WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>8__1
	U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* ___U3CU3E8__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::<>u__2
	TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F ___U3CU3Eu__2_6;
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>>
struct EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>
struct EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned>
struct EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.InvalidDataException
struct InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E  : public MulticastDelegate_t
{
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31
struct U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21
struct U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.String WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::url
	String_t* ___url_3;
	// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::clearSubscriptions
	bool ___clearSubscriptions_4;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32
struct U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// WalletConnectSharp.Core.Models.NetworkMessage WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::message
	NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___message_3;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33
struct U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.String WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::topic
	String_t* ___topic_3;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22
struct U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F 
{
	// System.Int32 WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::<>4__this
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// WalletConnectSharp.Unity.Utils.BindableMonoBehavior
struct BindableMonoBehavior_t6D53C580212A669130612338B85CE69E6EE9F535  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WalletConnectSharp.Unity.UI.ChooseWalletScreen
struct ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WalletConnectSharp.Unity.WalletConnect WalletConnectSharp.Unity.UI.ChooseWalletScreen::WalletConnect
	WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* ___WalletConnect_4;
	// UnityEngine.Transform WalletConnectSharp.Unity.UI.ChooseWalletScreen::buttonGridTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___buttonGridTransform_5;
	// UnityEngine.UI.Text WalletConnectSharp.Unity.UI.ChooseWalletScreen::loadingText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___loadingText_6;
	// UnityEngine.UI.Text WalletConnectSharp.Unity.UI.ChooseWalletScreen::statusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___statusText_7;
	// WalletConnectSharp.Unity.WalletSelectItem[] WalletConnectSharp.Unity.UI.ChooseWalletScreen::wallets
	WalletSelectItemU5BU5D_t8373DD371C32D42059618B3CA6E3AB5F2CE03475* ___wallets_8;
	// System.Boolean WalletConnectSharp.Unity.UI.ChooseWalletScreen::walletButtonsCreated
	bool ___walletButtonsCreated_9;
};

// WalletConnectSharp.Unity.Models.MessageSigner
struct MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String WalletConnectSharp.Unity.Models.MessageSigner::messageToSign
	String_t* ___messageToSign_4;
	// System.String WalletConnectSharp.Unity.Models.MessageSigner::overrideAddressToSign
	String_t* ___overrideAddressToSign_5;
	// System.Int32 WalletConnectSharp.Unity.Models.MessageSigner::accountIndex
	int32_t ___accountIndex_6;
	// System.Boolean WalletConnectSharp.Unity.Models.MessageSigner::disconnectOnSign
	bool ___disconnectOnSign_7;
	// System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner::MessageSigned
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* ___MessageSigned_8;
	// WalletConnectSharp.Unity.Models.MessageSigner/WCMessageSignedEvent WalletConnectSharp.Unity.Models.MessageSigner::OnMessageSigned
	WCMessageSignedEvent_t4B4ECB50D1DE7177CE0E32695B260D956F88DC76* ___OnMessageSigned_9;
};

// WalletConnectSharp.Unity.Utils.MonoBehaviourEvents
struct MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Action> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents::delegates
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___delegates_4;
};

// WalletConnectSharp.Unity.Network.NativeWebSocketTransport
struct NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport::opened
	bool ___opened_4;
	// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport::closed
	bool ___closed_5;
	// NativeWebSocket.WebSocket WalletConnectSharp.Unity.Network.NativeWebSocketTransport::nextClient
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___nextClient_6;
	// NativeWebSocket.WebSocket WalletConnectSharp.Unity.Network.NativeWebSocketTransport::client
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___client_7;
	// WalletConnectSharp.Core.Events.EventDelegator WalletConnectSharp.Unity.Network.NativeWebSocketTransport::_eventDelegator
	EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* ____eventDelegator_8;
	// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport::wasPaused
	bool ___wasPaused_9;
	// System.String WalletConnectSharp.Unity.Network.NativeWebSocketTransport::currentUrl
	String_t* ___currentUrl_10;
	// System.Collections.Generic.List`1<System.String> WalletConnectSharp.Unity.Network.NativeWebSocketTransport::subscribedTopics
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___subscribedTopics_11;
	// System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage> WalletConnectSharp.Unity.Network.NativeWebSocketTransport::_queuedMessages
	Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* ____queuedMessages_12;
	// System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs> WalletConnectSharp.Unity.Network.NativeWebSocketTransport::MessageReceived
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___MessageReceived_13;
	// System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs> WalletConnectSharp.Unity.Network.NativeWebSocketTransport::OpenReceived
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___OpenReceived_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// WalletConnectSharp.Unity.WalletConnect
struct WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63  : public BindableMonoBehavior_t6D53C580212A669130612338B85CE69E6EE9F535
{
	// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry> WalletConnectSharp.Unity.WalletConnect::<SupportedWallets>k__BackingField
	Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* ___U3CSupportedWalletsU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.String> WalletConnectSharp.Unity.WalletConnect::AllowedWalletNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AllowedWalletNames_6;
	// WalletConnectSharp.Unity.Models.AppEntry WalletConnectSharp.Unity.WalletConnect::<SelectedWallet>k__BackingField
	AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* ___U3CSelectedWalletU3Ek__BackingField_7;
	// WalletConnectSharp.Unity.Models.Wallets WalletConnectSharp.Unity.WalletConnect::DefaultWallet
	int32_t ___DefaultWallet_8;
	// System.EventHandler WalletConnectSharp.Unity.WalletConnect::ConnectionStarted
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ConnectionStarted_9;
	// System.EventHandler WalletConnectSharp.Unity.WalletConnect::NewSessionStarted
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___NewSessionStarted_10;
	// WalletConnectSharp.Unity.Network.NativeWebSocketTransport WalletConnectSharp.Unity.WalletConnect::_transport
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* ____transport_11;
	// System.Boolean WalletConnectSharp.Unity.WalletConnect::autoSaveAndResume
	bool ___autoSaveAndResume_13;
	// System.Boolean WalletConnectSharp.Unity.WalletConnect::connectOnAwake
	bool ___connectOnAwake_14;
	// System.Boolean WalletConnectSharp.Unity.WalletConnect::connectOnStart
	bool ___connectOnStart_15;
	// System.Boolean WalletConnectSharp.Unity.WalletConnect::createNewSessionOnSessionDisconnect
	bool ___createNewSessionOnSessionDisconnect_16;
	// System.Int32 WalletConnectSharp.Unity.WalletConnect::connectSessionRetryCount
	int32_t ___connectSessionRetryCount_17;
	// System.String WalletConnectSharp.Unity.WalletConnect::customBridgeUrl
	String_t* ___customBridgeUrl_18;
	// System.Int32 WalletConnectSharp.Unity.WalletConnect::chainId
	int32_t ___chainId_19;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventNoSession WalletConnectSharp.Unity.WalletConnect::ConnectedEvent
	WalletConnectEventNoSession_t295AF4B886CA83C91C56B3FE93C90C095AAB0B03* ___ConnectedEvent_20;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSessionData WalletConnectSharp.Unity.WalletConnect::ConnectedEventSession
	WalletConnectEventWithSessionData_t31A074E01B6B644CED0555303012D7B8C5C83E13* ___ConnectedEventSession_21;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSession WalletConnectSharp.Unity.WalletConnect::DisconnectedEvent
	WalletConnectEventWithSession_tDF4D4038BC32314159C3948A12853050E811C4E1* ___DisconnectedEvent_22;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSession WalletConnectSharp.Unity.WalletConnect::ConnectionFailedEvent
	WalletConnectEventWithSession_tDF4D4038BC32314159C3948A12853050E811C4E1* ___ConnectionFailedEvent_23;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSession WalletConnectSharp.Unity.WalletConnect::NewSessionConnected
	WalletConnectEventWithSession_tDF4D4038BC32314159C3948A12853050E811C4E1* ___NewSessionConnected_24;
	// WalletConnectSharp.Unity.WalletConnect/WalletConnectEventWithSession WalletConnectSharp.Unity.WalletConnect::ResumedSessionConnected
	WalletConnectEventWithSession_tDF4D4038BC32314159C3948A12853050E811C4E1* ___ResumedSessionConnected_25;
	// WalletConnectSharp.Unity.WalletConnectUnitySession WalletConnectSharp.Unity.WalletConnect::<Session>k__BackingField
	WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* ___U3CSessionU3Ek__BackingField_26;
	// WalletConnectSharp.Core.Models.ClientMeta WalletConnectSharp.Unity.WalletConnect::AppData
	ClientMeta_tCEA58C507A1B407D02F8DD09473275F8D2DEE5E4* ___AppData_27;
};

struct WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63_StaticFields
{
	// WalletConnectSharp.Unity.WalletConnect WalletConnectSharp.Unity.WalletConnect::_instance
	WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* ____instance_12;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* ___stateMachine1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* ___stateMachine1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* ___stateMachine1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* ___stateMachine1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_mC0B6F251342CF48343577DCDF87B0B1B4D43AC50_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mE0623A67BF8BA4174D5367D5E622EE434DCC3394_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mB8B15615F32613969F9F42411BAB4B2731444AE8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mEB656F4B5F08AD008F49853F59D611573E20ADB5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3CE5A4665C74453C29E2E2EDEE6EADC0861AE9C1_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m7ECF091E671D982688B0249F49F81E650042E47B_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAA9942BF9A7A8F1107350FD1EC2446ABF8AF86AC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m1CB5637C9FE1CFC1E99209D6E761834E2B7BBD7C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m0855F2FACA96F4F3A59F31DDA0CC29787A1D999B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine0, const RuntimeMethod* method) ;
// T WalletConnectSharp.Core.Events.GenericEvent`1<System.Object>::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GenericEvent_1_get_Response_m5F46EDCD7C5C1FA4642A1D4CF3F29F797C3238B0_gshared_inline (GenericEvent_1_t09B2460DA94D8C8A387BAF50C33B3A55B912B850* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Events.EventDelegator::ListenForGenericResponse<System.Object>(System.Object,System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDelegator_ListenForGenericResponse_TisRuntimeObject_mBAE74A27FC63DE124E1A7C9D822BBFC91ABC896F_gshared (EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* __this, RuntimeObject* ___id0, EventHandler_1_tE629844EA83EEE3204A6579E872A82902C23F181* ___callback1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Core.WalletConnectProtocol::SendRequest<System.Object>(T,System.String,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WalletConnectProtocol_SendRequest_TisRuntimeObject_m640103E0EB8FBB20756D04BA43E3D5687087D559_gshared (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* __this, RuntimeObject* ___requestObject0, String_t* ___sendingTopic1, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___forcePushNotification2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mF7A07AD9941A385278B1E410FE0DC46528BC9C13_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mD2CCE0999808B9A54991D6ABCF7DBFD1B2D58E38_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void WalletConnectSharp.Unity.Utils.Binder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binder__ctor_mC0C9CBDDA523CF8C5ADA74CE1E0D60F5F7764C21 (Binder_t4FD6BC86E58949FEF8412C28D92F9788DE3D6466* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA (Type_t* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject WalletConnectSharp.Unity.Utils.UnityBinder::FindInActiveObjectByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UnityBinder_FindInActiveObjectByName_m7E1B1E84C2CC1DB55DF474BF90128F0A15C595D9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Utils.UnityBinder::Inject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBinder_Inject_m48DC9B28A1975DB5C3FAB962C55BE44530C37CEC (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568 (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared)(__this, ___result0, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m68AE3775428C01430DD8BF6185411A63C4F9554A (U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, int32_t ___creationOptions0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_gshared)(__this, ___creationOptions0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__2_MoveNext_m7B566A9FF52AD95A5F05A28E44AFA374B49AB3A4 (U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___stateMachine0, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__2_SetStateMachine_m6EFF65BBBD1AE15A6D8661C714CC4C86590B6509 (U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447_gshared)(__this, ___stateMachine0, method);
}
// T UnityEngine.GameObject::GetComponent<WalletConnectSharp.Unity.Utils.MonoBehaviourEvents>()
inline MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* GameObject_GetComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mBAFAD812E77397FDEB5801F9283C950F504DEFDE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<WalletConnectSharp.Unity.Utils.MonoBehaviourEvents>()
inline MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* GameObject_AddComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mF35706111A9643A5D5217D6DB7011E8D813E162B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents::WaitForStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* MonoBehaviourEvents_WaitForStart_m8715E67D53191F678CB22376680C619DA0B337F0 (MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__0_MoveNext_mEEE01F88244357E36B048571E294208E40BCB95A (U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__0_SetStateMachine_mE69E6A8CA1A659272F2752F762506FC7D0D0C39C (U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry> WalletConnectSharp.Unity.WalletConnect::get_SupportedWallets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline (WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry>::get_Count()
inline int32_t Dictionary_2_get_Count_m107E76A18E11D85ECC29641ACC12CEE735D59E32 (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.IEnumerator WalletConnectSharp.Unity.UI.ChooseWalletScreen::BuildWalletButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChooseWalletScreen_BuildWalletButtons_m441E13FFA56A6DA3D56A35FB5CCE8E7BC00BC05E (ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildWalletButtonsU3Ed__8__ctor_m37D0A6FB268CFFF6E4BC8CADC38950C43BEC637D (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<WalletConnectSharp.Unity.WalletSelectItem> Assets.Scripts.WalletConnectSharp.Unity.UI.SupportedWalletList::SupportedWalletNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0* SupportedWalletList_SupportedWalletNames_mF02B7DAEC7980E8F7BC9C41C75B19626C248282E (const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.WalletConnect::OpenDeepLink(WalletConnectSharp.Unity.Models.AppEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletConnect_OpenDeepLink_m6C5E758EAC869DFF39A14BE19CD586C4A889C530 (WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* __this, AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* ___selectedWallet0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WalletConnectSharp.Unity.WalletConnect::FetchWalletList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnect_FetchWalletList_m1AFCA2F8342728D200495A286CF7F3175BE2390D (WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* __this, bool ___downloadImages0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry>::get_Keys()
inline KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7* Dictionary_2_get_Keys_m82F135FE8C3604CD148A060C21508E0617862BCC (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7* (*) (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WalletConnectSharp.Unity.Models.AppEntry>::GetEnumerator()
inline Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6 KeyCollection_GetEnumerator_m5D4C6E4EEC27D70DCEC85BCF2F53209B35CDE67D (KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6 (*) (KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,WalletConnectSharp.Unity.Models.AppEntry>::Dispose()
inline void Enumerator_Dispose_m75F465782A5BDCF08F9FCB815DC5AE8DB3FAF6A3 (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,WalletConnectSharp.Unity.Models.AppEntry>::get_Current()
inline String_t* Enumerator_get_Current_mDD9089D72DDF6789DA5F169713B400CD5AD32124_inline (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7DA4EB30083389CDC193FDCB16FB74B5E2D60E37 (U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Unity.Models.AppEntry>::get_Item(TKey)
inline AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* Dictionary_2_get_Item_mF225D7F142C6B76677A13BC98CC114441088FA6D (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* (*) (Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,WalletConnectSharp.Unity.Models.AppEntry>::MoveNext()
inline bool Enumerator_MoveNext_m4896C623610D3ED595C221CDFD03D8D966E014FE (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_mABA9078D10A52EC11D01A37C34216DF28DB2EC16 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// WalletConnectSharp.Core.Models.NetworkMessage WalletConnectSharp.Unity.Network.NativeWebSocketTransport::GenerateSubscribeMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* NativeWebSocketTransport_GenerateSubscribeMessage_m341D621154AFA1B036F4902205E24E1A8ACE012A (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___topic0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>::Enqueue(T)
inline void Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* __this, NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*, NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85_gshared)(__this, ___stateMachine0, method);
}
// System.Void NativeWebSocket.WebSocket::DispatchMessageQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DispatchMessageQueue_mDA040E2402463DCE13B04120793B745AE72CC1D5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46_gshared)(__this, ___stateMachine0, method);
}
// System.Void WalletConnectSharp.Core.Models.NetworkMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessage__ctor_m82EA0673F0DDD226712F479EC6BE3503A3BBA9BA (NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>::Clear()
inline void Queue_1_Clear_m784739849C3EE5EEF0E81423B6333F99AEE6FEE8 (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38__ctor_mC79B24A79801862B3FC1F651AA3946D3F84ED781 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>::.ctor()
inline void Queue_1__ctor_m038F00DF41B8F71EE240AD5C93C84A0D319A9F35 (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Open(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Open_m9D01A753E8C750EFB20686321D1604BFD9DE4F39 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___url0, bool ___clearSubscriptions1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::ClearSubscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_ClearSubscriptions_m6A394910292E2FD0BE220A6416291DD2BB673F61 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::_socketOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport__socketOpen_m1DB3F56D8363360099C6805E2E4678D5FC8A4366 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__21_MoveNext_mE8256587A0CB63687D9EA3FF7E172277240F48C1 (U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__21_SetStateMachine_mB72B5B0C7D178E8ACBC8CC76549978A7AF381425 (U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::CompleteOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_CompleteOpen_m7D08955DEF7DFAEAF061EBB8B6BDD3F35CE8FBC2 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mD17D133C7F4385C9530E022382ED23916A8FDAA8_inline (EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* __this, RuntimeObject* ___sender0, MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*, RuntimeObject*, MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::HandleError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_HandleError_m5FAAB76D1786478B98B4853FB95490F4A2B6F99E (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m828A345B48DBAC1851DD6C64348A8ADF22573655 (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___url0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___value0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___continuationAction0, int32_t ___continuationOptions1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_socketOpenU3Ed__22_MoveNext_m4709729DBE41881C3C744FD6837FB9135AF1C521 (U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_socketOpenU3Ed__22_SetStateMachine_m2EC0FF989EA50191751C25FEABC81DBE10A9D552 (U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Close_m57040A18676B00E296CE2EC6321ECADDCDA30BB0 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::QueueSubscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_QueueSubscriptions_m3BD72332851D2D7246495CFC06CD1C0B3C33DF5B (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::FlushQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_FlushQueue_m0533EC65E1E6BBABE0DFAC5CF384E67934AE2D62 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteOpenU3Ed__24_MoveNext_mA54A5EF32AE57457E61479C36BDB652C93F79735 (U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteOpenU3Ed__24_SetStateMachine_mA8FF0B714762006027B2BBE16AF62F6F56DC6FBE (U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>::Dequeue()
inline NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* Queue_1_Dequeue_m27DBC27F6D30BBA1CC6A682B521816A35BF0C7B3 (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* __this, const RuntimeMethod* method)
{
	return ((  NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* (*) (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::SendMessage(WalletConnectSharp.Core.Models.NetworkMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_SendMessage_m5CD29CD50C9957326C09C5F5B5DD813645F126DB (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int32 System.Collections.Generic.Queue`1<WalletConnectSharp.Core.Models.NetworkMessage>::get_Count()
inline int32_t Queue_1_get_Count_m48A5358CEEF237B942911132F4ECF31E6959C4D2_inline (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushQueueU3Ed__25_MoveNext_mBA201E8B6ABD91A1743B5388DE9D4CD82A01FDAA (U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushQueueU3Ed__25_SetStateMachine_m235F4213A207670D1C4A8E2753D41DB25A4129A8 (U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientTryReconnectU3Ed__27_MoveNext_mB47375A816CB67E98FECFB906182A4B1CD669D19 (U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientTryReconnectU3Ed__27_SetStateMachine_mC0A05234CA8A02C3B62AFFEA4289E2BAC853BB8B (U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<WalletConnectSharp.Core.Models.NetworkMessage>(System.String)
inline NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* JsonConvert_DeserializeObject_TisNetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_m9F13E207DA4EA779BCAA8EF97DD055C1E5F0A8AE (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mC0B6F251342CF48343577DCDF87B0B1B4D43AC50_gshared)(___value0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Core.Network.MessageReceivedEventArgs::.ctor(WalletConnectSharp.Core.Models.NetworkMessage,WalletConnectSharp.Core.Network.ITransport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_m9A86F88E6743CC696C125737BAF71879D4061A29 (MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63* __this, NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___message0, RuntimeObject* ___source1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMessageReceivedU3Ed__29_MoveNext_m080904EFD7D6385918BA617A14A250BC7B9E319D (U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMessageReceivedU3Ed__29_SetStateMachine_m986851F7BBB47201406BA406D170E095A3778615 (U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m051BE16B74A02FA76B6B33E8E8AFBA7411F9177C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m8EF33167E215E9898AF33A787C3E9FABCBB789E3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__31_MoveNext_m2F2BFA6A71B8EA7EBA3D444E5F536BB7D61A9B59 (U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__31_SetStateMachine_m5DEF34E65FC404467EA37A1DBBD82DDD3E67DF7F (U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebSocketTransport_get_Connected_m1ED0964F9816EEACFEAA84B8A70E9F4ACEB1BA08 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mEF78C5DAFDB944E8E19657EB92F5394370B27CAF (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_MoveNext_mB45C6F87BC9B46488A45BEA129A8C1518F681E71 (U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_SetStateMachine_m4FBBAB1505DAC0E3698005E05E7B1D54D9E358ED (U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeU3Ed__33_MoveNext_mDA5DF08F857E8C9D8F8FCC5828CBEB10C0F40973 (U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeU3Ed__33_SetStateMachine_m33087F6658B3D12A795ED85D8FB71447DEDBD95A (U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Subscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Subscribe_m5A65E21D133CFF7452777CE8D6EBA666B80128FA (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___topic0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38_U3CU3Em__Finally1_m03016873D1F9C7FAA006C95EDA59D34ACE773B2A (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38_System_IDisposable_Dispose_m2A9F869BEC170463FAD11C79E10ACAE4A3592112 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Func`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___function0, const RuntimeMethod* method) ;
// System.Void DefaultNamespace.WaitForTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForTask__ctor_mA42F86B96F71AFC436CE0E714A2C11C377ED8D3A (WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m18CDE94269AC45E89B38D9DC37B9CD31A6B2DB66 (U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AesManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241 (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Core.Utils.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_m04EBA9AC775249FB6F6339AA71510118AE987250 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, bool ___prefix1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Models.EncryptedPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPayload__ctor_m1857544BF1B7F1C2EAAF8260762A17A5C2C80FCB (EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<WalletConnectSharp.Core.Models.EncryptedPayload>(TResult)
inline Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* Task_FromResult_TisEncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_m63B18E7C4B3CDBD7F86A7786F170107140652A73 (EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* (*) (EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// System.Byte[] WalletConnectSharp.Core.Utils.HexByteConvertorExtensions::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_FromHex_m54427A90622E7156868D3125ABCF28FC14DB61C5 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_gshared)(___first0, ___second1, method);
}
// System.Void System.IO.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532 (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.String>(TResult)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (String_t*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// T UnityEngine.GameObject::AddComponent<WalletConnectSharp.Unity.Models.MessageSigner>()
inline MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::Create()
inline AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::Start<WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m8DC9519479365A068AC741A6368DD7403B2BEEF8 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mE0623A67BF8BA4174D5367D5E622EE434DCC3394_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::get_Task()
inline Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::Start<WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m10A9112A5276EFB937E16DD493135226AFF7B177 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mB8B15615F32613969F9F42411BAB4B2731444AE8_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::.ctor()
inline void UnityEvent_1__ctor_mB61F0B2AA23A18B6005621B2B29231F7CF95668F (UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders::WaitForStart(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* MonoBehaviorAsyncBinders_WaitForStart_m8262EBCA4CCC0A614964BD38067E43DAA53B9709 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3D0A1093A5AFDB9A9F3898287B83F853100CD837 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mEB656F4B5F08AD008F49853F59D611573E20ADB5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner::SignMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* MessageSigner_SignMessage_mFBD237E8BEA3AD04374B19BE973ABCECE8F3359D (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::GetAwaiter()
inline TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC (Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF (*) (Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4 (TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned>,WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mFE02B8B1E9291A49EDB6EA231E8B5C0FAB3C3E70 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* ___awaiter0, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF*, U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3CE5A4665C74453C29E2E2EDEE6EADC0861AE9C1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::GetResult()
inline WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E (TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* __this, const RuntimeMethod* method)
{
	return ((  WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* (*) (TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndDisconnectU3Ed__1_MoveNext_mB3437EBEE0A9537FDAA57F1871C716371DCFBE26 (U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndDisconnectU3Ed__1_SetStateMachine_m69E9765BA44F3F8B7E9018E02691B5CA02504023 (U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Unity.Models.WCMessageSigned>,WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m24D19E1F9C07D0F3ADE948E8A067B8D02111DD69 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* ___awaiter0, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF*, U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m7ECF091E671D982688B0249F49F81E650042E47B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnClickSignMessageU3Ed__11_MoveNext_m57AD2B0874A91D8E1BB0147B356FD23A7274D0A2 (U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnClickSignMessageU3Ed__11_SetStateMachine_mEF61A6E80B45B7E4FE001B76318FD63AE390D93B (U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// WalletConnectSharp.Unity.WalletConnectUnitySession WalletConnectSharp.Unity.WalletConnect::get_ActiveSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* WalletConnect_get_ActiveSession_m71356F2E23A7220ABF8935C4D39763ECF83FEB57 (const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Core.WalletConnectProtocol::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WalletConnectProtocol_get_Connected_mD9C98FC48FD52B1C155A4A68FF8ECB1B7AB77D3C (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* __this, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String[] WalletConnectSharp.Core.WalletConnectSession::get_Accounts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* WalletConnectSession_get_Accounts_m371D32C25213EE6AF0883906A4BC1C56339EEA99_inline (WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> WalletConnectSharp.Core.WalletConnectSession::EthPersonalSign(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WalletConnectSession_EthPersonalSign_mDDA1A973E80DD3E5EA5638A186AD6936F60C988C (WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002* __this, String_t* ___address0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAE11FE45044A272AFB3BFB25BEA07F46CFA95AAA (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAA9942BF9A7A8F1107350FD1EC2446ABF8AF86AC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::.ctor(WalletConnectSharp.Unity.Models.MessageSigner,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCMessageSigned__ctor_mB872C71E5CC40FE217CB6E4497E01D46A854C4A5 (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___signer0, String_t* ___signedMessage1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m86A1A451731202E47455D9717BBEA60EFAB3260A_inline (EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* __this, RuntimeObject* ___sender0, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*, RuntimeObject*, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::Invoke(T0)
inline void UnityEvent_1_Invoke_m9266DE2BFA2650C8163EC5C8C157A7D4CD74ABD2 (UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0* __this, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9FD6B2DB712F87CDD44DC45BD7A4F70BA71826F0*, WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<WalletConnectSharp.Unity.Models.WCMessageSigned>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m8B76CB2EEE11FE77A1312F56F85C5725F088A715 (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m1CB5637C9FE1CFC1E99209D6E761834E2B7BBD7C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755 (U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignMessageU3Ed__12_SetStateMachine_mC51F982693FF5280BDBE8E3A46BDB3932F400788 (U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadImageSpriteU3Ed__6__ctor_m0408F1D3DA012ABA38C43119B8BC8C7FD410F5C9 (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m1FF74632D01EB259222C145B266A2CB56B70C553 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m3C0020931D97DCD43BC39A613C5066F340B22361 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m1660F4117168DDEF2698FEAF80595DDBE0F9216D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot2, float ___pixelsPerUnit3, const RuntimeMethod* method) ;
// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.WCMessageSigned::get_Signer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* WCMessageSigned_get_Signer_mA585F53E4F6AD3959FC5E55E2C993D1DDCD3B61C_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::set_Signer(WalletConnectSharp.Unity.Models.MessageSigner)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WCMessageSigned_set_Signer_m60075B6010A2AD49F27A65DFDEB52781C50C3055_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___value0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::set_SignedMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WCMessageSigned_set_SignedMessage_m86B88AB5DDFDE23222B645441C9E224B523BD56E_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions::CreateProvider(WalletConnectSharp.Core.WalletConnectProtocol,System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnectNEthereumExtensions_CreateProvider_m77A98F3A971732A25E14D3B008ADEE9875BFB79A (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___protocol0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url1, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authenticationHeader2, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,log4net.ILog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__ctor_m5505EAC86E35B8A1D9E75E5B5DD51227BD806259 (RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUrl0, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authHeaderValue1, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___jsonSerializerSettings2, HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ___httpClientHandler3, RuntimeObject* ___log4, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions::CreateProvider(WalletConnectSharp.Core.WalletConnectProtocol,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnectNEthereumExtensions_CreateProvider_mF8B03DFD892699923CC8E8D190F911ABAAC6F944 (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___protocol0, RuntimeObject* ___readClient1, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient::.ctor(WalletConnectSharp.Core.WalletConnectProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletConnectClient__ctor_m196DD3DDF9ED07F9741F9A2F13142F7D9540358B (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___provider0, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.NEthereum.Client.FallbackProvider::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackProvider__ctor_m162BA48469B4704D147B30D4148791BCC39B5053 (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, RuntimeObject* ___primary0, RuntimeObject* ___fallback1, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcRequest::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_m30837F6ECC3F08D06718AB89974F270C3D7D7C0B_inline (RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mC527057DCE4E20E8A7A0D06BAF111A7901007B24_gshared)(___source0, ___value1, method);
}
// System.Void Nethereum.JsonRpc.Client.ClientBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase__ctor_m4599D81890906D8474E0A903CE5A0235CECAB0AA (ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::Create()
inline AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC AsyncTaskMethodBuilder_1_Create_m001CFFC6CD8BE812321414602D6025B30E6AE9DE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::Start<WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mCE59A75369B47696B09F81CE1E119E33BCB23896 (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m0855F2FACA96F4F3A59F31DDA0CC29787A1D999B_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_Task()
inline Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* AsyncTaskMethodBuilder_1_get_Task_m787F0DABACF0A880D29205420FE2208EE558820F (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// T WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_Response()
inline RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* GenericEvent_1_get_Response_m092D0BEE2BE8450C892D2C59F7A15934EEA4A6A4_inline (GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F* __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* (*) (GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F*, const RuntimeMethod*))GenericEvent_1_get_Response_m5F46EDCD7C5C1FA4642A1D4CF3F29F797C3238B0_gshared_inline)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA7197B5674A493D0DE81B0D4F0551EB4943D1CE0 (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* __this, RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764*, RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m307E64BE2748DC6728D02B7CC70EFAD83B6FF282 (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* __this, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_RawParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_RawParameters_m6B2BBD691CE5952215954BB13BE1D5EA811A12B0_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) ;
// System.String Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_m783FBE1A1B47B3D11D3CC6D561B94B98C2FD812F_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_m2648ED11F5885089D08DBAAAAE0B6392AB80334D (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, RuntimeObject* ___id0, String_t* ___method1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameterMap2, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::.ctor(System.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestMessage__ctor_mB447FDC8941862A12AA56D0FEB6FD54F461B2DC9 (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, RuntimeObject* ___id0, String_t* ___method1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameterList2, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_mC57280D61E6B386CF1AB22FCF88ACFD56009716D (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* __this, int32_t ___creationOptions0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared)(__this, ___creationOptions0, method);
}
// WalletConnectSharp.Core.WalletConnectProtocol WalletConnectSharp.NEthereum.Client.WalletConnectClient::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* WalletConnectClient_get_Provider_mD7CFBCDA1C137CADDDDE24BF0463E99F3F72DAC2_inline (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, const RuntimeMethod* method) ;
// System.Object Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_Id_m91872CA0083E45AA8F39BF968A95A34A45FCF11A_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1EEE756D07F6CCADA6948E9CA79221607A223EDB (EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WalletConnectSharp.Core.Events.EventDelegator::ListenForGenericResponse<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>(System.Object,System.EventHandler`1<WalletConnectSharp.Core.Events.GenericEvent`1<T>>)
inline void EventDelegator_ListenForGenericResponse_TisRpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA_m6B50FFD5CF9DE5FC141A13605F99F1E1D1D0EF90 (EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* __this, RuntimeObject* ___id0, EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A* ___callback1, const RuntimeMethod* method)
{
	((  void (*) (EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820*, RuntimeObject*, EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A*, const RuntimeMethod*))EventDelegator_ListenForGenericResponse_TisRuntimeObject_mBAE74A27FC63DE124E1A7C9D822BBFC91ABC896F_gshared)(__this, ___id0, ___callback1, method);
}
// System.Threading.Tasks.Task WalletConnectSharp.Core.WalletConnectProtocol::SendRequest<Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage>(T,System.String,System.Nullable`1<System.Boolean>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WalletConnectProtocol_SendRequest_TisRpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_m1CEC550E53092A9E7403C3C2FE837CFE77F78479 (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* __this, RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* ___requestObject0, String_t* ___sendingTopic1, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___forcePushNotification2, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C*, RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6*, String_t*, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01, const RuntimeMethod*))WalletConnectProtocol_SendRequest_TisRuntimeObject_m640103E0EB8FBB20756D04BA43E3D5687087D559_gshared)(__this, ___requestObject0, ___sendingTopic1, ___forcePushNotification2, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m975E85E011F6D20D6A6E36588AD57DD8B2741FB3 (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mF7A07AD9941A385278B1E410FE0DC46528BC9C13_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_Task()
inline Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* TaskCompletionSource_1_get_Task_mE958505F35771F48CB8256E16F8B96D5E374C891_inline (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* (*) (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F Task_1_GetAwaiter_m35DF66167391E888B07562BE442E87CCE67CD923 (Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F (*) (Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m7DCAFA088811692A51071CA44AF85C49EBFD7FC5 (TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>,WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mAF41A0856EB4AF02F17762FAF431BC048611B5BA (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F* ___awaiter0, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F*, U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mD2CCE0999808B9A54991D6ABCF7DBFD1B2D58E38_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::GetResult()
inline RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* TaskAwaiter_1_GetResult_mBD15AF25F8380E4A25CB246082E940029E1584FD (TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F* __this, const RuntimeMethod* method)
{
	return ((  RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* (*) (TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m2FCA9EC8CAA996E5CB691158C1E40D90635DCBB3 (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m6C2817241D8745F94E5FF612EF1E4FEF61A2B68A (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__5_MoveNext_m8ED56AC81DC5F2B7153942063B306D7957586042 (U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mC94DBB72A68CF73183990F32B8A232898A0CC2DA (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__5_SetStateMachine_m84B9A47ADB7117BCE9BA3FE4F7175437B1A744BF (U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Utils.BindComponentsInChildren::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindComponentsInChildren__ctor_m88C22A21B78EBADA3A084C190C2523AFC8CB1873 (BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127* __this, String_t* ___fromObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string fromObject = "";
		__this->___fromObject_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fromObject_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public BindComponentsInChildren(string fromObject = "")
		Binder__ctor_mC0C9CBDDA523CF8C5ADA74CE1E0D60F5F7764C21(__this, NULL);
		// this.fromObject = fromObject;
		String_t* L_0 = ___fromObject0;
		__this->___fromObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fromObject_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Utils.BindComponentsInChildren::InjectInto(UnityEngine.Object,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindComponentsInChildren_InjectInto_m99D967832757D14AE95B6BBFD16C4FB2CC1C0572 (BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, FieldInfo_t* ___field1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D4F8C89C04E5D490713CFD062883F909EC4003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FEEA693D0DFAD56876EE65C61B5DCFE3A26EEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57FACC7277A0484A269F3C53B88AAC1C986466A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765F1770787C16CBA914882ACDB5A7440872F8AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral933294A52EA28B88ED45A93B4DF47D0E4AAEE243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DD084743153BCDD0AAC7FA2BA85FEDC1E9EEC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE69704AC0F43A33A8D7D88C9A18CB1C35EFBD52E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAED2CB9D7019C289109BDF59CC37081150F7AB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB8B3AC95CDD4618A8D7C1D04F29249F6230AF47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC97DACAA8A658AC40205A9080A54F97344077F4);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	Type_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_6 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_7 = NULL;
	MethodInfo_t* V_8 = NULL;
	MethodInfo_t* V_9 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Type_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	Type_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	String_t* G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	{
		// var injectArrayType = field.FieldType;
		FieldInfo_t* L_0 = ___field1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		V_0 = L_1;
		// bool isList = false;
		V_1 = (bool)0;
		// if (injectArrayType.IsArray)
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// injectType = injectArrayType.GetElementType();
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_4);
		V_2 = L_5;
		goto IL_0088;
	}

IL_001a:
	{
		// else if (injectArrayType.IsGenericType && injectArrayType.GetGenericTypeDefinition() == typeof(List<>))
		Type_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_6);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		// injectType = injectArrayType.GetGenericArguments()[0];
		Type_t* L_13 = V_0;
		NullCheck(L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14;
		L_14 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_13);
		NullCheck(L_14);
		int32_t L_15 = 0;
		Type_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// isList = true;
		V_1 = (bool)1;
		goto IL_0088;
	}

IL_0046:
	{
		// Debug.LogError("Could not find suitable type " + injectArrayType + " for field " + field.Name +
		//                ". Field must either be an Array or a List");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralFC97DACAA8A658AC40205A9080A54F97344077F4);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFC97DACAA8A658AC40205A9080A54F97344077F4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		Type_t* L_20 = V_0;
		Type_t* L_21 = L_20;
		G_B6_0 = L_21;
		G_B6_1 = 1;
		G_B6_2 = L_19;
		G_B6_3 = L_19;
		if (L_21)
		{
			G_B7_0 = L_21;
			G_B7_1 = 1;
			G_B7_2 = L_19;
			G_B7_3 = L_19;
			goto IL_005e;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0063;
	}

IL_005e:
	{
		NullCheck(G_B7_0);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_22;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0063:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = G_B8_3;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		FieldInfo_t* L_25 = ___field1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_24;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral57FACC7277A0484A269F3C53B88AAC1C986466A2);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral57FACC7277A0484A269F3C53B88AAC1C986466A2);
		String_t* L_28;
		L_28 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_28, NULL);
		// return;
		return;
	}

IL_0088:
	{
		// var unityCall = typeof(GameObject).GetMethod("GetComponentsInChildren", new Type[0]);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_30);
		MethodInfo_t* L_32;
		L_32 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_30, _stringLiteralC4DD084743153BCDD0AAC7FA2BA85FEDC1E9EEC3, L_31, NULL);
		V_3 = L_32;
		// if (unityCall == null)
		MethodInfo_t* L_33 = V_3;
		bool L_34;
		L_34 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_33, (MethodInfo_t*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00b7;
		}
	}
	{
		// Debug.LogError("Could not find method GetComponents !!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralEB8B3AC95CDD4618A8D7C1D04F29249F6230AF47, NULL);
		// return;
		return;
	}

IL_00b7:
	{
		// if (string.IsNullOrEmpty(fromObject))
		String_t* L_35 = __this->___fromObject_0;
		bool L_36;
		L_36 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_35, NULL);
		if (!L_36)
		{
			goto IL_00fc;
		}
	}
	{
		// var component = obj as Component;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_37 = ___obj0;
		V_6 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_37, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		// if (component != null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_38 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_00e1;
		}
	}
	{
		// fromObj = component.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_40 = V_6;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		V_4 = L_41;
		goto IL_014b;
	}

IL_00e1:
	{
		// Debug.LogError("fromObject empty for field " + field.Name +
		//                ", and no default gameObject could be found!");
		FieldInfo_t* L_42 = ___field1;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_42);
		String_t* L_44;
		L_44 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0FEEA693D0DFAD56876EE65C61B5DCFE3A26EEA8, L_43, _stringLiteral06D4F8C89C04E5D490713CFD062883F909EC4003, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_44, NULL);
		// return;
		return;
	}

IL_00fc:
	{
		// fromObj = GameObject.Find(fromObject);
		String_t* L_45 = __this->___fromObject_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_45, NULL);
		V_4 = L_46;
		// if (fromObj == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_48)
		{
			goto IL_014b;
		}
	}
	{
		// fromObj = UnityBinder.FindInActiveObjectByName(fromObject);
		String_t* L_49 = __this->___fromObject_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = UnityBinder_FindInActiveObjectByName_m7E1B1E84C2CC1DB55DF474BF90128F0A15C595D9(L_49, NULL);
		V_4 = L_50;
		// if (fromObj == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_014b;
		}
	}
	{
		// Debug.LogError("Could not find GameObject with name " + fromObject + " for field " +
		//                field.Name);
		String_t* L_53 = __this->___fromObject_0;
		FieldInfo_t* L_54 = ___field1;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_54);
		String_t* L_56;
		L_56 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralEAED2CB9D7019C289109BDF59CC37081150F7AB7, L_53, _stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619, L_55, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_56, NULL);
		// return;
		return;
	}

IL_014b:
	{
		// if (injectType == typeof(GameObject) && !string.IsNullOrEmpty(fromObject))
		Type_t* L_57 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0174;
		}
	}
	{
		String_t* L_61 = __this->___fromObject_0;
		bool L_62;
		L_62 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_61, NULL);
		if (L_62)
		{
			goto IL_0174;
		}
	}
	{
		// field.SetValue(obj, fromObj);
		FieldInfo_t* L_63 = ___field1;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_64 = ___obj0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_4;
		NullCheck(L_63);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_63, L_64, L_65, NULL);
		// return;
		return;
	}

IL_0174:
	{
		// var genericMethod = unityCall.MakeGenericMethod(injectType);
		MethodInfo_t* L_66 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_67 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_68 = L_67;
		Type_t* L_69 = V_2;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_69);
		NullCheck(L_66);
		MethodInfo_t* L_70;
		L_70 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(43 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_66, L_68);
		// var rawResult = genericMethod.Invoke(fromObj, null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_4;
		NullCheck(L_70);
		RuntimeObject* L_72;
		L_72 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_70, L_71, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_5 = L_72;
		// if (rawResult == null)
		RuntimeObject* L_73 = V_5;
		if (L_73)
		{
			goto IL_01ba;
		}
	}
	{
		// Debug.LogError("Could not find component of type " + injectType + " for field " + field.Name);
		Type_t* L_74 = V_2;
		Type_t* L_75 = L_74;
		G_B23_0 = L_75;
		G_B23_1 = _stringLiteralE69704AC0F43A33A8D7D88C9A18CB1C35EFBD52E;
		if (L_75)
		{
			G_B24_0 = L_75;
			G_B24_1 = _stringLiteralE69704AC0F43A33A8D7D88C9A18CB1C35EFBD52E;
			goto IL_019f;
		}
	}
	{
		G_B25_0 = ((String_t*)(NULL));
		G_B25_1 = G_B23_1;
		goto IL_01a4;
	}

IL_019f:
	{
		NullCheck(G_B24_0);
		String_t* L_76;
		L_76 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B24_0);
		G_B25_0 = L_76;
		G_B25_1 = G_B24_1;
	}

IL_01a4:
	{
		FieldInfo_t* L_77 = ___field1;
		NullCheck(L_77);
		String_t* L_78;
		L_78 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_77);
		String_t* L_79;
		L_79 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B25_1, G_B25_0, _stringLiteralB71A150468F2F7A9E65EC73793E9B0D8FE561619, L_78, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_79, NULL);
		return;
	}

IL_01ba:
	{
		// else if (rawResult is object[])
		RuntimeObject* L_80 = V_5;
		if (!((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_80, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)))
		{
			goto IL_0233;
		}
	}
	{
		// var result = rawResult as object[];
		RuntimeObject* L_81 = V_5;
		V_7 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_81, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// if (!isList)
		bool L_82 = V_1;
		if (L_82)
		{
			goto IL_01d9;
		}
	}
	{
		// field.SetValue(obj, result);
		FieldInfo_t* L_83 = ___field1;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_84 = ___obj0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = V_7;
		NullCheck(L_83);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_83, L_84, (RuntimeObject*)L_85, NULL);
		return;
	}

IL_01d9:
	{
		// MethodInfo convertMethod = typeof(BindComponentsInChildren).GetMethod("ConvertArray",
		//     BindingFlags.NonPublic | BindingFlags.Static);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (BindComponentsInChildren_t6F20079BE18515479490742CD5434DEA4526F127_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_86, NULL);
		NullCheck(L_87);
		MethodInfo_t* L_88;
		L_88 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_87, _stringLiteral765F1770787C16CBA914882ACDB5A7440872F8AE, ((int32_t)40), NULL);
		V_8 = L_88;
		// if (convertMethod != null)
		MethodInfo_t* L_89 = V_8;
		bool L_90;
		L_90 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_89, (MethodInfo_t*)NULL, NULL);
		if (!L_90)
		{
			goto IL_0229;
		}
	}
	{
		// MethodInfo generic = convertMethod.MakeGenericMethod(new[] {injectType});
		MethodInfo_t* L_91 = V_8;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_92 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_93 = L_92;
		Type_t* L_94 = V_2;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_94);
		NullCheck(L_91);
		MethodInfo_t* L_95;
		L_95 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(43 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_91, L_93);
		V_9 = L_95;
		// field.SetValue(obj, generic.Invoke(null, new object[] {rawResult}));
		FieldInfo_t* L_96 = ___field1;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_97 = ___obj0;
		MethodInfo_t* L_98 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = L_99;
		RuntimeObject* L_101 = V_5;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_101);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_101);
		NullCheck(L_98);
		RuntimeObject* L_102;
		L_102 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_98, NULL, L_100, NULL);
		NullCheck(L_96);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_96, L_97, L_102, NULL);
		return;
	}

IL_0229:
	{
		// Debug.LogError(
		//     "Fatel Error! Cannot make generic method call to BindComponentsInChildren.ConvertArray");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral933294A52EA28B88ED45A93B4DF47D0E4AAEE243, NULL);
	}

IL_0233:
	{
		// }
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
// System.Void WalletConnectSharp.Unity.Utils.BindableMonoBehavior::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableMonoBehavior_Awake_m22ECD25C604D6A04A726F412E8033D3F893B02B3 (BindableMonoBehavior_t6D53C580212A669130612338B85CE69E6EE9F535* __this, const RuntimeMethod* method) 
{
	{
		// UnityBinder.Inject(this);
		UnityBinder_Inject_m48DC9B28A1975DB5C3FAB962C55BE44530C37CEC(__this, NULL);
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Utils.BindableMonoBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableMonoBehavior__ctor_m54B75EC0161E8EBB0403C5A04D1C8CEB2157E941 (BindableMonoBehavior_t6D53C580212A669130612338B85CE69E6EE9F535* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourEvents_Start_m02F19CDAF31579E4A072165575185B69671F42AD (MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Action @delegate in delegates)
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->___delegates_4;
		NullCheck(L_0);
		Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D L_1;
		L_1 = List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254(L_0, List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B((&V_0), Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (Action @delegate in delegates)
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
				L_2 = Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline((&V_0), Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
				// @delegate();
				NullCheck(L_2);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (Action @delegate in delegates)
				bool L_3;
				L_3 = Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568((&V_0), Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// delegates.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->___delegates_4;
		NullCheck(L_4);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_4, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviourEvents::WaitForStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* MonoBehaviourEvents_WaitForStart_m8715E67D53191F678CB22376680C619DA0B337F0 (MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1(AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_m90E8095C26548D01255972F5F3A50620E4DFFDCD_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_2, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourEvents__ctor_m7CBF95079379CADB2F748C344051ABA168A36437 (MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Action> delegates = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___delegates_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___delegates_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m68AE3775428C01430DD8BF6185411A63C4F9554A (U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<>c__DisplayClass2_0::<WaitForStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CWaitForStartU3Eb__0_m1BB3ECA94F9D65192AB9FEDFF1774740CDF3D077 (U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventCompleted.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = __this->___eventCompleted_0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_0, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// });
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
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__2_MoveNext_m7B566A9FF52AD95A5F05A28E44AFA374B49AB3A4 (U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CWaitForStartU3Eb__0_m1BB3ECA94F9D65192AB9FEDFF1774740CDF3D077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* V_3 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0076_1;
			}
		}
		{
			U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* L_3 = (U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass2_0__ctor_m68AE3775428C01430DD8BF6185411A63C4F9554A(L_3, NULL);
			V_3 = L_3;
			// TaskCompletionSource<bool> eventCompleted = new TaskCompletionSource<bool>(TaskCreationOptions.None);
			U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* L_4 = V_3;
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_5 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A(L_5, 0, TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_RuntimeMethod_var);
			NullCheck(L_4);
			L_4->___eventCompleted_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___eventCompleted_0), (void*)L_5);
			// delegates.Add(delegate
			// {
			//     eventCompleted.SetResult(true);
			// });
			MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_6 = V_1;
			NullCheck(L_6);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = L_6->___delegates_4;
			U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* L_8 = V_3;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CWaitForStartU3Eb__0_m1BB3ECA94F9D65192AB9FEDFF1774740CDF3D077_RuntimeMethod_var), NULL);
			NullCheck(L_7);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_7, L_9, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// return await eventCompleted.Task;
			U3CU3Ec__DisplayClass2_0_t0BE2A6815D44BAF448CA8A606400F6E800C692AE* L_10 = V_3;
			NullCheck(L_10);
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_11 = L_10->___eventCompleted_0;
			NullCheck(L_11);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_12;
			L_12 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_11, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
			NullCheck(L_12);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_13;
			L_13 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_12, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_4 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_4), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = V_4;
			__this->___U3CU3Eu__1_3 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF_mBB42E9ACCD0BC60475C8649BA6B309DD48DEF5A6_RuntimeMethod_var);
			goto IL_00ca;
		}

IL_0076_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_18 = __this->___U3CU3Eu__1_3;
			V_4 = L_18;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_19 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_0093_1:
		{
			bool L_21;
			L_21 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_4), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			V_2 = L_21;
			goto IL_00b6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009d;
		}
		throw e;
	}

CATCH_009d:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ca;
	}// end catch (depth: 1)

IL_00b6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_24 = (&__this->___U3CU3Et__builder_1);
		bool L_25 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_24, L_25, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForStartU3Ed__2_MoveNext_m7B566A9FF52AD95A5F05A28E44AFA374B49AB3A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF*>(__this + _offset);
	U3CWaitForStartU3Ed__2_MoveNext_m7B566A9FF52AD95A5F05A28E44AFA374B49AB3A4(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviourEvents/<WaitForStart>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__2_SetStateMachine_m6EFF65BBBD1AE15A6D8661C714CC4C86590B6509 (U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForStartU3Ed__2_SetStateMachine_m6EFF65BBBD1AE15A6D8661C714CC4C86590B6509_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitForStartU3Ed__2_t1A8BF98B3883D1A393AA7FFB5E188337558DE5FF*>(__this + _offset);
	U3CWaitForStartU3Ed__2_SetStateMachine_m6EFF65BBBD1AE15A6D8661C714CC4C86590B6509(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<System.Boolean> WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders::WaitForStart(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* MonoBehaviorAsyncBinders_WaitForStart_m8262EBCA4CCC0A614964BD38067E43DAA53B9709 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1(AsyncTaskMethodBuilder_1_Create_m947F84E9E3C8ACB9A24160F6C3C33BF4D70F1AB1_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___gameObject0;
		(&V_0)->___gameObject_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___gameObject_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_mCBCB9E8C2C629F679B1901B0EAE5A71296B6C447_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_4;
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
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__0_MoveNext_mEEE01F88244357E36B048571E294208E40BCB95A (U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mF35706111A9643A5D5217D6DB7011E8D813E162B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mBAFAD812E77397FDEB5801F9283C950F504DEFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* V_2 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0060_1;
			}
		}
		{
			// var unityEvents = gameObject.GetComponent<MonoBehaviourEvents>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameObject_2;
			NullCheck(L_2);
			MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_3;
			L_3 = GameObject_GetComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mBAFAD812E77397FDEB5801F9283C950F504DEFDE(L_2, GameObject_GetComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mBAFAD812E77397FDEB5801F9283C950F504DEFDE_RuntimeMethod_var);
			V_2 = L_3;
			// if (unityEvents == null)
			MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_4 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_5)
			{
				goto IL_002b_1;
			}
		}
		{
			// unityEvents = gameObject.AddComponent<MonoBehaviourEvents>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___gameObject_2;
			NullCheck(L_6);
			MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_7;
			L_7 = GameObject_AddComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mF35706111A9643A5D5217D6DB7011E8D813E162B(L_6, GameObject_AddComponent_TisMonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6_mF35706111A9643A5D5217D6DB7011E8D813E162B_RuntimeMethod_var);
			V_2 = L_7;
		}

IL_002b_1:
		{
			// return await unityEvents.WaitForStart();
			MonoBehaviourEvents_t2251726142B94ABB6C2685DD01147F5CA4CC6EC6* L_8 = V_2;
			NullCheck(L_8);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9;
			L_9 = MonoBehaviourEvents_WaitForStart_m8715E67D53191F678CB22376680C619DA0B337F0(L_8, NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_10;
			L_10 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_9, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_13 = V_3;
			__this->___U3CU3Eu__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C(L_14, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D_m558CEFE7E26FCC32822B65F88AE8DB69C80C368C_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0060_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_15 = __this->___U3CU3Eu__1_3;
			V_3 = L_15;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_16 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_007c_1:
		{
			bool L_18;
			L_18 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			V_1 = L_18;
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b3;
	}// end catch (depth: 1)

IL_009f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_21 = (&__this->___U3CU3Et__builder_1);
		bool L_22 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForStartU3Ed__0_MoveNext_mEEE01F88244357E36B048571E294208E40BCB95A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D*>(__this + _offset);
	U3CWaitForStartU3Ed__0_MoveNext_mEEE01F88244357E36B048571E294208E40BCB95A(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Utils.MonoBehaviorAsyncBinders/<WaitForStart>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForStartU3Ed__0_SetStateMachine_mE69E6A8CA1A659272F2752F762506FC7D0D0C39C (U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CWaitForStartU3Ed__0_SetStateMachine_mE69E6A8CA1A659272F2752F762506FC7D0D0C39C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CWaitForStartU3Ed__0_t08B19FD537A47952468B310BCA6D10DE9389836D*>(__this + _offset);
	U3CWaitForStartU3Ed__0_SetStateMachine_mE69E6A8CA1A659272F2752F762506FC7D0D0C39C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseWalletScreen_Start_mCB7F2551BF5778224D615EC97F740952BAFEFE86 (ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseWalletScreen_Update_m73420A428B024A522E759F2C3D62878564EEC69D (ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m107E76A18E11D85ECC29641ACC12CEE735D59E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!walletButtonsCreated && WalletConnect.SupportedWallets != null && WalletConnect.SupportedWallets.Count > 1)
		bool L_0 = __this->___walletButtonsCreated_9;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_1 = __this->___WalletConnect_4;
		NullCheck(L_1);
		Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* L_2;
		L_2 = WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_3 = __this->___WalletConnect_4;
		NullCheck(L_3);
		Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* L_4;
		L_4 = WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m107E76A18E11D85ECC29641ACC12CEE735D59E32(L_4, Dictionary_2_get_Count_m107E76A18E11D85ECC29641ACC12CEE735D59E32_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		// walletButtonsCreated = true;
		__this->___walletButtonsCreated_9 = (bool)1;
		// StartCoroutine(BuildWalletButtons());
		RuntimeObject* L_6;
		L_6 = ChooseWalletScreen_BuildWalletButtons_m441E13FFA56A6DA3D56A35FB5CCE8E7BC00BC05E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator WalletConnectSharp.Unity.UI.ChooseWalletScreen::BuildWalletButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChooseWalletScreen_BuildWalletButtons_m441E13FFA56A6DA3D56A35FB5CCE8E7BC00BC05E (ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* L_0 = (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9*)il2cpp_codegen_object_new(U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBuildWalletButtonsU3Ed__8__ctor_m37D0A6FB268CFFF6E4BC8CADC38950C43BEC637D(L_0, 0, NULL);
		U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.Generic.List`1<WalletConnectSharp.Unity.WalletSelectItem> WalletConnectSharp.Unity.UI.ChooseWalletScreen::GetWalletNameList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0* ChooseWalletScreen_GetWalletNameList_mBE894B80DEAFEE6DFADD8CA1EA586C4E527EFB85 (const RuntimeMethod* method) 
{
	{
		// List<WalletSelectItem> result = SupportedWalletList.SupportedWalletNames();
		List_1_t4E82B71DCD8761A791D606F41D5E4206366B48F0* L_0;
		L_0 = SupportedWalletList_SupportedWalletNames_mF02B7DAEC7980E8F7BC9C41C75B19626C248282E(NULL);
		// return result;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseWalletScreen__ctor_mA789576DE01AF92DB8036DE53FF577A80D48DFDC (ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7DA4EB30083389CDC193FDCB16FB74B5E2D60E37 (U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<>c__DisplayClass8_0::<BuildWalletButtons>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CBuildWalletButtonsU3Eb__0_m6B14D80E7767BDEAAFE4B12F9A4EFDAB1DFF66BF (U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* __this, const RuntimeMethod* method) 
{
	{
		// WalletConnect.OpenDeepLink(walletData);
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_1 = L_0->___WalletConnect_4;
		AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* L_2 = __this->___walletData_0;
		NullCheck(L_1);
		WalletConnect_OpenDeepLink_m6C5E758EAC869DFF39A14BE19CD586C4A889C530(L_1, L_2, NULL);
		// gameObject.SetActive(false);
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_3 = __this->___U3CU3E4__this_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// statusText.gameObject.SetActive(true);
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = L_5->___statusText_7;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// });
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
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildWalletButtonsU3Ed__8__ctor_m37D0A6FB268CFFF6E4BC8CADC38950C43BEC637D (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildWalletButtonsU3Ed__8_System_IDisposable_Dispose_m8C8B81F9AA60CEA779147B0BBF41AC6757F20846 (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildWalletButtonsU3Ed__8_MoveNext_mEA5CB956BE34096F5C1BD6A262382A3A05D2B7DE (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF225D7F142C6B76677A13BC98CC114441088FA6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m82F135FE8C3604CD148A060C21508E0617862BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75F465782A5BDCF08F9FCB815DC5AE8DB3FAF6A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4896C623610D3ED595C221CDFD03D8D966E014FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDD9089D72DDF6789DA5F169713B400CD5AD32124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m5D4C6E4EEC27D70DCEC85BCF2F53209B35CDE67D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CBuildWalletButtonsU3Eb__0_m6B14D80E7767BDEAAFE4B12F9A4EFDAB1DFF66BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E4FEC19EFF45A773972B98F36B7BF9704AEC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCB505A35B4AD4FEEC0397829838616BE7C6DEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* V_5 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_6 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return WalletConnect.FetchWalletList();
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_4 = V_1;
		NullCheck(L_4);
		WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_5 = L_4->___WalletConnect_4;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = WalletConnect_FetchWalletList_m1AFCA2F8342728D200495A286CF7F3175BE2390D(L_5, (bool)1, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Building wallet buttons.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7FCB505A35B4AD4FEEC0397829838616BE7C6DEA, NULL);
		// GameObject buttonPrefab = new GameObject("buttonPrefab");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_7, _stringLiteral000E4FEC19EFF45A773972B98F36B7BF9704AEC1, NULL);
		V_2 = L_7;
		// buttonPrefab.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_8, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// buttonPrefab.AddComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC(L_10, GameObject_AddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m60FA17F75591FF93A15D1D1FE5969B8CB9E5FAAC_RuntimeMethod_var);
		// foreach (var walletId in WalletConnect.SupportedWallets.Keys)
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_12 = V_1;
		NullCheck(L_12);
		WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_13 = L_12->___WalletConnect_4;
		NullCheck(L_13);
		Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* L_14;
		L_14 = WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline(L_13, NULL);
		NullCheck(L_14);
		KeyCollection_t79BA7F568AB4B2DD48167F016C410809858762B7* L_15;
		L_15 = Dictionary_2_get_Keys_m82F135FE8C3604CD148A060C21508E0617862BCC(L_14, Dictionary_2_get_Keys_m82F135FE8C3604CD148A060C21508E0617862BCC_RuntimeMethod_var);
		NullCheck(L_15);
		Enumerator_t1CABC7E8F93E64C41497D20BA3FC4E9CBC681DD6 L_16;
		L_16 = KeyCollection_GetEnumerator_m5D4C6E4EEC27D70DCEC85BCF2F53209B35CDE67D(L_15, KeyCollection_GetEnumerator_m5D4C6E4EEC27D70DCEC85BCF2F53209B35CDE67D_RuntimeMethod_var);
		V_3 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m75F465782A5BDCF08F9FCB815DC5AE8DB3FAF6A3((&V_3), Enumerator_Dispose_m75F465782A5BDCF08F9FCB815DC5AE8DB3FAF6A3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ef_1;
			}

IL_007b_1:
			{
				// foreach (var walletId in WalletConnect.SupportedWallets.Keys)
				String_t* L_17;
				L_17 = Enumerator_get_Current_mDD9089D72DDF6789DA5F169713B400CD5AD32124_inline((&V_3), Enumerator_get_Current_mDD9089D72DDF6789DA5F169713B400CD5AD32124_RuntimeMethod_var);
				V_4 = L_17;
				U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* L_18 = (U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				U3CU3Ec__DisplayClass8_0__ctor_m7DA4EB30083389CDC193FDCB16FB74B5E2D60E37(L_18, NULL);
				V_5 = L_18;
				U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* L_19 = V_5;
				ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_20 = V_1;
				NullCheck(L_19);
				L_19->___U3CU3E4__this_1 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(&L_19->___U3CU3E4__this_1), (void*)L_20);
				// var walletData = WalletConnect.SupportedWallets[walletId];
				U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* L_21 = V_5;
				ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_22 = V_1;
				NullCheck(L_22);
				WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* L_23 = L_22->___WalletConnect_4;
				NullCheck(L_23);
				Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* L_24;
				L_24 = WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline(L_23, NULL);
				String_t* L_25 = V_4;
				NullCheck(L_24);
				AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* L_26;
				L_26 = Dictionary_2_get_Item_mF225D7F142C6B76677A13BC98CC114441088FA6D(L_24, L_25, Dictionary_2_get_Item_mF225D7F142C6B76677A13BC98CC114441088FA6D_RuntimeMethod_var);
				NullCheck(L_21);
				L_21->___walletData_0 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___walletData_0), (void*)L_26);
				// var walletObj = Instantiate(buttonPrefab, buttonGridTransform);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
				ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_28 = V_1;
				NullCheck(L_28);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___buttonGridTransform_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
				L_30 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_27, L_29, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
				// var walletImage = walletObj.GetComponent<Image>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30;
				NullCheck(L_31);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32;
				L_32 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_31, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
				V_6 = L_32;
				// var walletButton = walletObj.GetComponent<Button>();
				NullCheck(L_31);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33;
				L_33 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_31, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
				// walletImage.sprite = walletData.medimumIcon;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = V_6;
				U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* L_35 = V_5;
				NullCheck(L_35);
				AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* L_36 = L_35->___walletData_0;
				NullCheck(L_36);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = L_36->___medimumIcon_9;
				NullCheck(L_34);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_34, L_37, NULL);
				// walletButton.onClick.AddListener(delegate
				// {
				//     WalletConnect.OpenDeepLink(walletData);
				//     // hide wallets after
				//     gameObject.SetActive(false);
				//     // show status text
				//     statusText.gameObject.SetActive(true);
				// });
				NullCheck(L_33);
				ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_38;
				L_38 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_33, NULL);
				U3CU3Ec__DisplayClass8_0_tD6F86FB4DECC725A6F8ED0C5D2F0F1260BE106B6* L_39 = V_5;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_40 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
				NullCheck(L_40);
				UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_40, L_39, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CBuildWalletButtonsU3Eb__0_m6B14D80E7767BDEAAFE4B12F9A4EFDAB1DFF66BF_RuntimeMethod_var), NULL);
				NullCheck(L_38);
				UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_38, L_40, NULL);
			}

IL_00ef_1:
			{
				// foreach (var walletId in WalletConnect.SupportedWallets.Keys)
				bool L_41;
				L_41 = Enumerator_MoveNext_m4896C623610D3ED595C221CDFD03D8D966E014FE((&V_3), Enumerator_MoveNext_m4896C623610D3ED595C221CDFD03D8D966E014FE_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_007b_1;
				}
			}
			{
				goto IL_0108;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0108:
	{
		// Destroy(loadingText.gameObject);
		ChooseWalletScreen_t25F3EE5F022548EAB728E8B4252E882B80850664* L_42 = V_1;
		NullCheck(L_42);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = L_42->___loadingText_6;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_44, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildWalletButtonsU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A673010F0C3FA91994578369B249D4ED2774DA7 (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildWalletButtonsU3Ed__8_System_Collections_IEnumerator_Reset_mF02B38FBD56614C7245BB0C25D8AFEE4A597715B (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildWalletButtonsU3Ed__8_System_Collections_IEnumerator_Reset_mF02B38FBD56614C7245BB0C25D8AFEE4A597715B_RuntimeMethod_var)));
	}
}
// System.Object WalletConnectSharp.Unity.UI.ChooseWalletScreen/<BuildWalletButtons>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBuildWalletButtonsU3Ed__8_System_Collections_IEnumerator_get_Current_m5FFDD93585673A3E995B98A03391E7A79A6DA1DD (U3CBuildWalletButtonsU3Ed__8_t9EB6070D1BBFA310EDF90CE4A2A2F10F2B8133F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebSocketTransport_get_Connected_m1ED0964F9816EEACFEAA84B8A70E9F4ACEB1BA08 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// return client != null && client.State == WebSocketState.Open && opened;
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___client_7;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_1 = __this->___client_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->___opened_4;
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::AttachEventDelegator(WalletConnectSharp.Core.Events.EventDelegator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_AttachEventDelegator_m6F082754A33ADDA9EEA5754D9A83F8F6A48501CD (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* ___eventDelegator0, const RuntimeMethod* method) 
{
	{
		// this._eventDelegator = eventDelegator;
		EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* L_0 = ___eventDelegator0;
		__this->____eventDelegator_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventDelegator_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_Dispose_mDC0E8350638B74435E2239B56333D5446D979911 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// if (client != null)
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___client_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// client.CancelConnection();
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_1 = __this->___client_7;
		NullCheck(L_1);
		WebSocket_CancelConnection_mABA9078D10A52EC11D01A37C34216DF28DB2EC16(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::add_MessageReceived(System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_add_MessageReceived_mEED92D68BFFE1B4568A932FFFB2345536D338B31 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_0 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_1 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_2 = NULL;
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_0 = __this->___MessageReceived_13;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_2 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var));
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461** L_5 = (&__this->___MessageReceived_13);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_6 = V_2;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_7 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_9 = V_0;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_9) == ((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::remove_MessageReceived(System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_remove_MessageReceived_m2178FB1EFC69F3754B243F269CF0A083E6CE849B (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_0 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_1 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_2 = NULL;
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_0 = __this->___MessageReceived_13;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_2 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var));
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461** L_5 = (&__this->___MessageReceived_13);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_6 = V_2;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_7 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_9 = V_0;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_9) == ((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::add_OpenReceived(System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_add_OpenReceived_m4BAE3C9F412BE0A74DC8452A9B8652A6973325A4 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_0 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_1 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_2 = NULL;
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_0 = __this->___OpenReceived_14;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_2 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var));
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461** L_5 = (&__this->___OpenReceived_14);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_6 = V_2;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_7 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_9 = V_0;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_9) == ((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::remove_OpenReceived(System.EventHandler`1<WalletConnectSharp.Core.Network.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_remove_OpenReceived_mBBEC2E5BC239B865667F632C6493BD4210B7FE40 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_0 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_1 = NULL;
	EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* V_2 = NULL;
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_0 = __this->___OpenReceived_14;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_2 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461_il2cpp_TypeInfo_var));
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461** L_5 = (&__this->___OpenReceived_14);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_6 = V_2;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_7 = V_1;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_9 = V_0;
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_9) == ((RuntimeObject*)(EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String WalletConnectSharp.Unity.Network.NativeWebSocketTransport::get_URL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeWebSocketTransport_get_URL_m4BAEA115F75004653BBFB56C7AC4D00DB02CADD6 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// return currentUrl;
		String_t* L_0 = __this->___currentUrl_10;
		return L_0;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Open(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Open_m9D01A753E8C750EFB20686321D1604BFD9DE4F39 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___url0, bool ___clearSubscriptions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___url0;
		(&V_0)->___url_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_3), (void*)L_1);
		bool L_2 = ___clearSubscriptions1;
		(&V_0)->___clearSubscriptions_4 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_mD37A63CD606797DE204D731B5E5DCD1FC180867A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::_socketOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport__socketOpen_m1DB3F56D8363360099C6805E2E4678D5FC8A4366 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m052E8DBA22A2E405B7FD7F551213D0C5D3C6ED06_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::HandleError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_HandleError_m5FAAB76D1786478B98B4853FB95490F4A2B6F99E (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(e);
		Exception_t* L_0 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_0, NULL);
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::CompleteOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_CompleteOpen_m7D08955DEF7DFAEAF061EBB8B6BDD3F35CE8FBC2 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_m8E80E758B5A2591CFC1656D2FDCFCC91F4C7F791_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::FlushQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_FlushQueue_m0533EC65E1E6BBABE0DFAC5CF384E67934AE2D62 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m14CC1DDB1AFD9B6D3DA334A32E092FE50C2D65F5_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::QueueSubscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_QueueSubscriptions_m3BD72332851D2D7246495CFC06CD1C0B3C33DF5B (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// foreach (var topic in subscribedTopics)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___subscribedTopics_11;
		NullCheck(L_0);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_1;
		L_1 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_0, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000e_1:
			{
				// foreach (var topic in subscribedTopics)
				String_t* L_2;
				L_2 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_1 = L_2;
				// this._queuedMessages.Enqueue(GenerateSubscribeMessage(topic));
				Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_3 = __this->____queuedMessages_12;
				String_t* L_4 = V_1;
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_5;
				L_5 = NativeWebSocketTransport_GenerateSubscribeMessage_m341D621154AFA1B036F4902205E24E1A8ACE012A(__this, L_4, NULL);
				NullCheck(L_3);
				Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E(L_3, L_5, Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E_RuntimeMethod_var);
			}

IL_0028_1:
			{
				// foreach (var topic in subscribedTopics)
				bool L_6;
				L_6 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::ClientTryReconnect(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, int32_t ___closeCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m51CC5B2A6A02D842D352AD58A54E9C803F77BFE1_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_CancelConnection_mBB64CFFA20B70D4D268C3EE26364AB9E3CEC4D4D (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// client.CancelConnection();
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___client_7;
		NullCheck(L_0);
		WebSocket_CancelConnection_mABA9078D10A52EC11D01A37C34216DF28DB2EC16(L_0, NULL);
		// }
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::OnMessageReceived(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_OnMessageReceived_m0739F39BEE54D2930D6A8542401FFC04A532B290 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		(&V_0)->___bytes_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___bytes_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85(L_2, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m6E1423BAC3E9A3FFE05B901FBD5DE8253B614A85_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_Update_mAD9FE112CD1959AE692334A676883A59D2B32096 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// if (client != null && client.State == WebSocketState.Open)
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___client_7;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_1 = __this->___client_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// client.DispatchMessageQueue();
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = __this->___client_7;
		NullCheck(L_3);
		WebSocket_DispatchMessageQueue_mDA040E2402463DCE13B04120793B745AE72CC1D5(L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Close_m57040A18676B00E296CE2EC6321ECADDCDA30BB0 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_m016DECDE064BB2EEE4B16D45D44BC521312DC11B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::SendMessage(WalletConnectSharp.Core.Models.NetworkMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_SendMessage_m5CD29CD50C9957326C09C5F5B5DD813645F126DB (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_1 = ___message0;
		(&V_0)->___message_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___message_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_m3EDD2715EC902BA38B4FB3529DEAD77EE6D6A47A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::Subscribe(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_Subscribe_m5A65E21D133CFF7452777CE8D6EBA666B80128FA (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___topic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___topic0;
		(&V_0)->___topic_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___topic_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_mB5014710D8BAB92000F3A24AA64FA238A0CA5C46_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// WalletConnectSharp.Core.Models.NetworkMessage WalletConnectSharp.Unity.Network.NativeWebSocketTransport::GenerateSubscribeMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* NativeWebSocketTransport_GenerateSubscribeMessage_m341D621154AFA1B036F4902205E24E1A8ACE012A (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, String_t* ___topic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE09538204AD98EAB3D28D92042369A4AA98CF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NetworkMessage()
		// {
		//     Payload = "",
		//     Type = "sub",
		//     Silent = true,
		//     Topic = topic
		// };
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_0 = (NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3*)il2cpp_codegen_object_new(NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetworkMessage__ctor_m82EA0673F0DDD226712F479EC6BE3503A3BBA9BA(L_0, NULL);
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___Payload_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Payload_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_2 = L_1;
		NullCheck(L_2);
		L_2->___Type_1 = _stringLiteralCEE09538204AD98EAB3D28D92042369A4AA98CF2;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Type_1), (void*)_stringLiteralCEE09538204AD98EAB3D28D92042369A4AA98CF2);
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_3 = L_2;
		NullCheck(L_3);
		L_3->___Silent_3 = (bool)1;
		NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_4 = L_3;
		String_t* L_5 = ___topic0;
		NullCheck(L_4);
		L_4->___Topic_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Topic_0), (void*)L_5);
		return L_4;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::ClearSubscriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport_ClearSubscriptions_m6A394910292E2FD0BE220A6416291DD2BB673F61 (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m784739849C3EE5EEF0E81423B6333F99AEE6FEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subscribedTopics.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___subscribedTopics_11;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// _queuedMessages.Clear();
		Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_1 = __this->____queuedMessages_12;
		NullCheck(L_1);
		Queue_1_Clear_m784739849C3EE5EEF0E81423B6333F99AEE6FEE8(L_1, Queue_1_Clear_m784739849C3EE5EEF0E81423B6333F99AEE6FEE8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator WalletConnectSharp.Unity.Network.NativeWebSocketTransport::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeWebSocketTransport_OnApplicationPause_mE0B287CCCEBF5D774419E04CD92F6E3CFFEB35CD (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, bool ___pauseStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* L_0 = (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F*)il2cpp_codegen_object_new(U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnApplicationPauseU3Ed__38__ctor_mC79B24A79801862B3FC1F651AA3946D3F84ED781(L_0, 0, NULL);
		U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* L_2 = L_1;
		bool L_3 = ___pauseStatus0;
		NullCheck(L_2);
		L_2->___pauseStatus_2 = L_3;
		return L_2;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebSocketTransport__ctor_m1B8D7BB89140F6FDC85386306602D5106BA9700F (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m038F00DF41B8F71EE240AD5C93C84A0D319A9F35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> subscribedTopics = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___subscribedTopics_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subscribedTopics_11), (void*)L_0);
		// private Queue<NetworkMessage> _queuedMessages = new Queue<NetworkMessage>();
		Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_1 = (Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9*)il2cpp_codegen_object_new(Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_m038F00DF41B8F71EE240AD5C93C84A0D319A9F35(L_1, Queue_1__ctor_m038F00DF41B8F71EE240AD5C93C84A0D319A9F35_RuntimeMethod_var);
		__this->____queuedMessages_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queuedMessages_12), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport::<OnApplicationPause>b__38_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NativeWebSocketTransport_U3COnApplicationPauseU3Eb__38_0_mC0FE69B7053BB4976855FEFA35485EAD0170932F (NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* __this, const RuntimeMethod* method) 
{
	{
		// var openTask = Task.Run(() => Open(currentUrl, false));
		String_t* L_0 = __this->___currentUrl_10;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = NativeWebSocketTransport_Open_m9D01A753E8C750EFB20686321D1604BFD9DE4F39(__this, L_0, (bool)0, NULL);
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
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__21_MoveNext_mE8256587A0CB63687D9EA3FF7E172277240F48C1 (U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0072_1;
			}
		}
		{
			// if (currentUrl != url || clearSubscriptions)
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->___currentUrl_10;
			String_t* L_5 = __this->___url_3;
			bool L_6;
			L_6 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_4, L_5, NULL);
			bool L_7 = __this->___clearSubscriptions_4;
			if (!((int32_t)((int32_t)L_6|(int32_t)L_7)))
			{
				goto IL_0031_1;
			}
		}
		{
			// ClearSubscriptions();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_8 = V_1;
			NullCheck(L_8);
			NativeWebSocketTransport_ClearSubscriptions_m6A394910292E2FD0BE220A6416291DD2BB673F61(L_8, NULL);
		}

IL_0031_1:
		{
			// currentUrl = url;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_9 = V_1;
			String_t* L_10 = __this->___url_3;
			NullCheck(L_9);
			L_9->___currentUrl_10 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&L_9->___currentUrl_10), (void*)L_10);
			// await _socketOpen();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_11 = V_1;
			NullCheck(L_11);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
			L_12 = NativeWebSocketTransport__socketOpen_m1DB3F56D8363360099C6805E2E4678D5FC8A4366(L_11, NULL);
			NullCheck(L_12);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
			L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_14)
			{
				goto IL_008e_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = V_2;
			__this->___U3CU3Eu__1_5 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C(L_17, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58_m2E038B5821F2D3C9EC4AC49373EE4A4BD1945D6C_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_0072_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = __this->___U3CU3Eu__1_5;
			V_2 = L_18;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_19 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_008e_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00ae;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_21, L_22, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c1;
	}// end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_23, NULL);
	}

IL_00c1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenU3Ed__21_MoveNext_mE8256587A0CB63687D9EA3FF7E172277240F48C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58*>(__this + _offset);
	U3COpenU3Ed__21_MoveNext_mE8256587A0CB63687D9EA3FF7E172277240F48C1(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Open>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__21_SetStateMachine_mB72B5B0C7D178E8ACBC8CC76549978A7AF381425 (U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenU3Ed__21_SetStateMachine_mB72B5B0C7D178E8ACBC8CC76549978A7AF381425_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenU3Ed__21_tEE72919DD25238743EAC0376C72759FD64178B58*>(__this + _offset);
	U3COpenU3Ed__21_SetStateMachine_mB72B5B0C7D178E8ACBC8CC76549978A7AF381425(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m828A345B48DBAC1851DD6C64348A8ADF22573655 (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::<_socketOpen>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__0_m68AAD0A10FC7C990D9F3549F6E2B80D912F33B31 (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CompleteOpen();
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		NativeWebSocketTransport_CompleteOpen_m7D08955DEF7DFAEAF061EBB8B6BDD3F35CE8FBC2(L_0, NULL);
		// if (this.OpenReceived != null)
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_0;
		NullCheck(L_1);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_2 = L_1->___OpenReceived_14;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// OpenReceived(this, null);
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_4 = L_3->___OpenReceived_14;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_mD17D133C7F4385C9530E022382ED23916A8FDAA8_inline(L_4, L_5, (MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63*)NULL, NULL);
	}

IL_002f:
	{
		// eventCompleted.SetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_6 = __this->___eventCompleted_1;
		NullCheck(L_6);
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_6, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::<_socketOpen>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__1_mAFB55E8047265E92BB518ACA8D36C05E8734B1C7 (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* __this, String_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954E3EC4F00AF7CE85BDB2613E44373C1D66719A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("[WebSocket] OnError " + e);
		String_t* L_0 = ___e0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral954E3EC4F00AF7CE85BDB2613E44373C1D66719A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_1, NULL);
		// HandleError(new Exception(e));
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_2 = __this->___U3CU3E4__this_0;
		String_t* L_3 = ___e0;
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, L_3, NULL);
		NullCheck(L_2);
		NativeWebSocketTransport_HandleError_m5FAAB76D1786478B98B4853FB95490F4A2B6F99E(L_2, L_4, NULL);
		// };
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass22_0::<_socketOpen>b__2(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__2_m21D36030A562FD88E92243991806FC3AA2984A86 (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t0, const RuntimeMethod* method) 
{
	{
		// nextClient.Connect().ContinueWith(t => HandleError(t.Exception), TaskContinuationOptions.OnlyOnFaulted);
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_0 = __this->___U3CU3E4__this_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___t0;
		NullCheck(L_1);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2;
		L_2 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_1, NULL);
		NullCheck(L_0);
		NativeWebSocketTransport_HandleError_m5FAAB76D1786478B98B4853FB95490F4A2B6F99E(L_0, L_2, NULL);
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
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_socketOpenU3Ed__22_MoveNext_m4709729DBE41881C3C744FD6837FB9135AF1C521 (U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketTransport_OnMessageReceived_m0739F39BEE54D2930D6A8542401FFC04A532B290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__0_m68AAD0A10FC7C990D9F3549F6E2B80D912F33B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__1_mAFB55E8047265E92BB518ACA8D36C05E8734B1C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__2_m21D36030A562FD88E92243991806FC3AA2984A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* V_2 = NULL;
	String_t* V_3 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_014b_1;
			}
		}
		{
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_3 = (U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass22_0__ctor_m828A345B48DBAC1851DD6C64348A8ADF22573655(L_3, NULL);
			V_2 = L_3;
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_4 = V_2;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_4);
			L_4->___U3CU3E4__this_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_0), (void*)L_5);
			// if (nextClient != null)
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
			NullCheck(L_6);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_7 = L_6->___nextClient_6;
			if (!L_7)
			{
				goto IL_0033_1;
			}
		}
		{
			// return;
			goto IL_018b;
		}

IL_0033_1:
		{
			// string url = currentUrl;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___currentUrl_10;
			V_3 = L_9;
			// if (url.StartsWith("https"))
			String_t* L_10 = V_3;
			NullCheck(L_10);
			bool L_11;
			L_11 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_10, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, NULL);
			if (!L_11)
			{
				goto IL_005a_1;
			}
		}
		{
			// url = url.Replace("https", "wss");
			String_t* L_12 = V_3;
			NullCheck(L_12);
			String_t* L_13;
			L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
			V_3 = L_13;
			goto IL_0078_1;
		}

IL_005a_1:
		{
			// else if (url.StartsWith("http"))
			String_t* L_14 = V_3;
			NullCheck(L_14);
			bool L_15;
			L_15 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, NULL);
			if (!L_15)
			{
				goto IL_0078_1;
			}
		}
		{
			// url = url.Replace("http", "ws");
			String_t* L_16 = V_3;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_16, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
			V_3 = L_17;
		}

IL_0078_1:
		{
			// nextClient = new WebSocket(url);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_18 = V_1;
			String_t* L_19 = V_3;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_20 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)il2cpp_codegen_object_new(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24(L_20, L_19, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
			NullCheck(L_18);
			L_18->___nextClient_6 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&L_18->___nextClient_6), (void*)L_20);
			// TaskCompletionSource<bool> eventCompleted = new TaskCompletionSource<bool>(TaskCreationOptions.None);
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_21 = V_2;
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_22 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A(L_22, 0, TaskCompletionSource_1__ctor_m8B45657B899BBC1E2F287FC119B8EC38083EF30A_RuntimeMethod_var);
			NullCheck(L_21);
			L_21->___eventCompleted_1 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&L_21->___eventCompleted_1), (void*)L_22);
			// nextClient.OnOpen += () =>
			// {
			//     CompleteOpen();
			// 
			//     // subscribe now
			//     if (this.OpenReceived != null)
			//         OpenReceived(this, null);
			// 
			//     //Debug.Log("[WebSocket] Opened " + url);
			// 
			//     eventCompleted.SetResult(true);
			// };
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_23 = V_1;
			NullCheck(L_23);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_24 = L_23->___nextClient_6;
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_25 = V_2;
			WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_26 = (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)il2cpp_codegen_object_new(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__0_m68AAD0A10FC7C990D9F3549F6E2B80D912F33B31_RuntimeMethod_var), NULL);
			NullCheck(L_24);
			WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3(L_24, L_26, NULL);
			// nextClient.OnMessage += OnMessageReceived;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_27 = V_1;
			NullCheck(L_27);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_28 = L_27->___nextClient_6;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_29 = V_1;
			WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_30 = (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)il2cpp_codegen_object_new(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
			NullCheck(L_30);
			WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8(L_30, L_29, (intptr_t)((void*)NativeWebSocketTransport_OnMessageReceived_m0739F39BEE54D2930D6A8542401FFC04A532B290_RuntimeMethod_var), NULL);
			NullCheck(L_28);
			WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5(L_28, L_30, NULL);
			// nextClient.OnClose += ClientTryReconnect;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_31 = V_1;
			NullCheck(L_31);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_32 = L_31->___nextClient_6;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_33 = V_1;
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_34 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)il2cpp_codegen_object_new(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
			NullCheck(L_34);
			WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764(L_34, L_33, (intptr_t)((void*)NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5_RuntimeMethod_var), NULL);
			NullCheck(L_32);
			WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A(L_32, L_34, NULL);
			// nextClient.OnError += (e) => {
			// 
			//     Debug.LogError("[WebSocket] OnError " + e);
			//     HandleError(new Exception(e));
			// };
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_35 = V_1;
			NullCheck(L_35);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_36 = L_35->___nextClient_6;
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_37 = V_2;
			WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_38 = (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)il2cpp_codegen_object_new(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
			NullCheck(L_38);
			WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9(L_38, L_37, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__1_mAFB55E8047265E92BB518ACA8D36C05E8734B1C7_RuntimeMethod_var), NULL);
			NullCheck(L_36);
			WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0(L_36, L_38, NULL);
			// nextClient.Connect().ContinueWith(t => HandleError(t.Exception), TaskContinuationOptions.OnlyOnFaulted);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_39 = V_1;
			NullCheck(L_39);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_40 = L_39->___nextClient_6;
			NullCheck(L_40);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_41;
			L_41 = WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A(L_40, NULL);
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_42 = V_2;
			Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_43 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3C_socketOpenU3Eb__2_m21D36030A562FD88E92243991806FC3AA2984A86_RuntimeMethod_var), NULL);
			NullCheck(L_41);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_44;
			L_44 = Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF(L_41, L_43, ((int32_t)327680), NULL);
			// await eventCompleted.Task;
			U3CU3Ec__DisplayClass22_0_tB195F24135F7E21EE67594460D7A3D1AA51BFCD8* L_45 = V_2;
			NullCheck(L_45);
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_46 = L_45->___eventCompleted_1;
			NullCheck(L_46);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_47;
			L_47 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_46, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
			NullCheck(L_47);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_48;
			L_48 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_47, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_4 = L_48;
			bool L_49;
			L_49 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_4), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_0168_1;
			}
		}
		{
			int32_t L_50 = 0;
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_51 = V_4;
			__this->___U3CU3Eu__1_3 = L_51;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_52 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280(L_52, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F_m484AE29A56168C32465CD097870501A6E9CB7280_RuntimeMethod_var);
			goto IL_019e;
		}

IL_014b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_53 = __this->___U3CU3Eu__1_3;
			V_4 = L_53;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_54 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_55 = (-1);
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
		}

IL_0168_1:
		{
			bool L_56;
			L_56 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_4), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			goto IL_018b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0172;
		}
		throw e;
	}

CATCH_0172:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_57 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019e;
	}// end catch (depth: 1)

IL_018b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_59 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_59, NULL);
	}

IL_019e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_socketOpenU3Ed__22_MoveNext_m4709729DBE41881C3C744FD6837FB9135AF1C521_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F*>(__this + _offset);
	U3C_socketOpenU3Ed__22_MoveNext_m4709729DBE41881C3C744FD6837FB9135AF1C521(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<_socketOpen>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_socketOpenU3Ed__22_SetStateMachine_m2EC0FF989EA50191751C25FEABC81DBE10A9D552 (U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3C_socketOpenU3Ed__22_SetStateMachine_m2EC0FF989EA50191751C25FEABC81DBE10A9D552_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3C_socketOpenU3Ed__22_t5E4376D84D0088C1024C333F8BEC86FF809A6E6F*>(__this + _offset);
	U3C_socketOpenU3Ed__22_SetStateMachine_m2EC0FF989EA50191751C25FEABC81DBE10A9D552(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteOpenU3Ed__24_MoveNext_mA54A5EF32AE57457E61479C36BDB652C93F79735 (U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046_1;
			}
		}
		{
			// await Close();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = V_1;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = NativeWebSocketTransport_Close_m57040A18676B00E296CE2EC6321ECADDCDA30BB0(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_6)
			{
				goto IL_0062_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764(L_9, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC_mB243C24FEA5A466EB62F19DC5E64E3447681C764_RuntimeMethod_var);
			goto IL_00bb;
		}

IL_0046_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0062_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// this.client = this.nextClient;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_13 = V_1;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_14 = V_1;
			NullCheck(L_14);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_15 = L_14->___nextClient_6;
			NullCheck(L_13);
			L_13->___client_7 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&L_13->___client_7), (void*)L_15);
			// this.nextClient = null;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_16 = V_1;
			NullCheck(L_16);
			L_16->___nextClient_6 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_16->___nextClient_6), (void*)(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)NULL);
			// QueueSubscriptions();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_17 = V_1;
			NullCheck(L_17);
			NativeWebSocketTransport_QueueSubscriptions_m3BD72332851D2D7246495CFC06CD1C0B3C33DF5B(L_17, NULL);
			// opened = true;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_18 = V_1;
			NullCheck(L_18);
			L_18->___opened_4 = (bool)1;
			// FlushQueue();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_19 = V_1;
			NullCheck(L_19);
			NativeWebSocketTransport_FlushQueue_m0533EC65E1E6BBABE0DFAC5CF384E67934AE2D62(L_19, NULL);
			goto IL_00a8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bb;
	}// end catch (depth: 1)

IL_00a8:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00bb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCompleteOpenU3Ed__24_MoveNext_mA54A5EF32AE57457E61479C36BDB652C93F79735_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC*>(__this + _offset);
	U3CCompleteOpenU3Ed__24_MoveNext_mA54A5EF32AE57457E61479C36BDB652C93F79735(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<CompleteOpen>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompleteOpenU3Ed__24_SetStateMachine_mA8FF0B714762006027B2BBE16AF62F6F56DC6FBE (U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCompleteOpenU3Ed__24_SetStateMachine_mA8FF0B714762006027B2BBE16AF62F6F56DC6FBE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCompleteOpenU3Ed__24_t1FC7F29CF9C1E3DF91653D9CC8FA19ED8495B0EC*>(__this + _offset);
	U3CCompleteOpenU3Ed__24_SetStateMachine_mA8FF0B714762006027B2BBE16AF62F6F56DC6FBE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushQueueU3Ed__25_MoveNext_mBA201E8B6ABD91A1743B5388DE9D4CD82A01FDAA (U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m27DBC27F6D30BBA1CC6A682B521816A35BF0C7B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m48A5358CEEF237B942911132F4ECF31E6959C4D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055_1;
			}
		}
		{
			goto IL_0078_1;
		}

IL_0013_1:
		{
			// var msg = _queuedMessages.Dequeue();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = V_1;
			NullCheck(L_3);
			Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_4 = L_3->____queuedMessages_12;
			NullCheck(L_4);
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_5;
			L_5 = Queue_1_Dequeue_m27DBC27F6D30BBA1CC6A682B521816A35BF0C7B3(L_4, Queue_1_Dequeue_m27DBC27F6D30BBA1CC6A682B521816A35BF0C7B3_RuntimeMethod_var);
			V_2 = L_5;
			// await SendMessage(msg);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_7 = V_2;
			NullCheck(L_6);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = NativeWebSocketTransport_SendMessage_m5CD29CD50C9957326C09C5F5B5DD813645F126DB(L_6, L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_3 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_10)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_3;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307(L_13, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014_m1BF3AEB2C697B4E16B27807E89C6BB3EC39B5307_RuntimeMethod_var);
			goto IL_00b4;
		}

IL_0055_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
			V_3 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0071_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
		}

IL_0078_1:
		{
			// while (_queuedMessages.Count > 0)
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_17 = V_1;
			NullCheck(L_17);
			Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_18 = L_17->____queuedMessages_12;
			NullCheck(L_18);
			int32_t L_19;
			L_19 = Queue_1_get_Count_m48A5358CEEF237B942911132F4ECF31E6959C4D2_inline(L_18, Queue_1_get_Count_m48A5358CEEF237B942911132F4ECF31E6959C4D2_RuntimeMethod_var);
			if ((((int32_t)L_19) > ((int32_t)0)))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_00a1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		throw e;
	}

CATCH_0088:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	}// end catch (depth: 1)

IL_00a1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushQueueU3Ed__25_MoveNext_mBA201E8B6ABD91A1743B5388DE9D4CD82A01FDAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014*>(__this + _offset);
	U3CFlushQueueU3Ed__25_MoveNext_mBA201E8B6ABD91A1743B5388DE9D4CD82A01FDAA(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<FlushQueue>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlushQueueU3Ed__25_SetStateMachine_m235F4213A207670D1C4A8E2753D41DB25A4129A8 (U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFlushQueueU3Ed__25_SetStateMachine_m235F4213A207670D1C4A8E2753D41DB25A4129A8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFlushQueueU3Ed__25_t6A7F403846A7EEC0F422D34021A92D7FF51A8014*>(__this + _offset);
	U3CFlushQueueU3Ed__25_SetStateMachine_m235F4213A207670D1C4A8E2753D41DB25A4129A8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientTryReconnectU3Ed__27_MoveNext_mB47375A816CB67E98FECFB906182A4B1CD669D19 (U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057_1;
			}
		}
		{
			// if (wasPaused)
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___wasPaused_9;
			if (!L_4)
			{
				goto IL_001b_1;
			}
		}
		{
			// return;
			goto IL_0093;
		}

IL_001b_1:
		{
			// nextClient = null;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_5 = V_1;
			NullCheck(L_5);
			L_5->___nextClient_6 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___nextClient_6), (void*)(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)NULL);
			// await _socketOpen();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
			NullCheck(L_6);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
			L_7 = NativeWebSocketTransport__socketOpen_m1DB3F56D8363360099C6805E2E4678D5FC8A4366(L_6, NULL);
			NullCheck(L_7);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8;
			L_8 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_7, NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_9)
			{
				goto IL_0073_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806(L_12, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9_m4D396E1840E9870FCDEDFF54E2DB171C6138A806_RuntimeMethod_var);
			goto IL_00a6;
		}

IL_0057_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = __this->___U3CU3Eu__1_3;
			V_2 = L_13;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_14 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_0073_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0093;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a6;
	}// end catch (depth: 1)

IL_0093:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_18, NULL);
	}

IL_00a6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CClientTryReconnectU3Ed__27_MoveNext_mB47375A816CB67E98FECFB906182A4B1CD669D19_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9*>(__this + _offset);
	U3CClientTryReconnectU3Ed__27_MoveNext_mB47375A816CB67E98FECFB906182A4B1CD669D19(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<ClientTryReconnect>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClientTryReconnectU3Ed__27_SetStateMachine_mC0A05234CA8A02C3B62AFFEA4289E2BAC853BB8B (U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CClientTryReconnectU3Ed__27_SetStateMachine_mC0A05234CA8A02C3B62AFFEA4289E2BAC853BB8B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CClientTryReconnectU3Ed__27_tB14E286723E59545DF8948BE5600930DC794BDC9*>(__this + _offset);
	U3CClientTryReconnectU3Ed__27_SetStateMachine_mC0A05234CA8A02C3B62AFFEA4289E2BAC853BB8B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMessageReceivedU3Ed__29_MoveNext_m080904EFD7D6385918BA617A14A250BC7B9E319D (U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisNetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_m9F13E207DA4EA779BCAA8EF97DD055C1E5F0A8AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8451D28B929E6C023C5CF1726EC710BE6210ECC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			// string json = System.Text.Encoding.UTF8.GetString(bytes);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
			L_3 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___bytes_2;
			NullCheck(L_3);
			String_t* L_5;
			L_5 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
			V_2 = L_5;
		}

IL_0022_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_009a_2;
				}
			}
			{
				// var msg = JsonConvert.DeserializeObject<NetworkMessage>(json);
				String_t* L_7 = V_2;
				il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_8;
				L_8 = JsonConvert_DeserializeObject_TisNetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_m9F13E207DA4EA779BCAA8EF97DD055C1E5F0A8AE(L_7, JsonConvert_DeserializeObject_TisNetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_m9F13E207DA4EA779BCAA8EF97DD055C1E5F0A8AE_RuntimeMethod_var);
				__this->___U3CmsgU3E5__2_4 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsgU3E5__2_4), (void*)L_8);
				// await SendMessage(new NetworkMessage()
				// {
				//     Payload = "",
				//     Type = "ack",
				//     Silent = true,
				//     Topic = msg.Topic
				// });
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_9 = V_1;
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_10 = (NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3*)il2cpp_codegen_object_new(NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				NetworkMessage__ctor_m82EA0673F0DDD226712F479EC6BE3503A3BBA9BA(L_10, NULL);
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_11 = L_10;
				NullCheck(L_11);
				L_11->___Payload_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&L_11->___Payload_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_12 = L_11;
				NullCheck(L_12);
				L_12->___Type_1 = _stringLiteral8451D28B929E6C023C5CF1726EC710BE6210ECC3;
				Il2CppCodeGenWriteBarrier((void**)(&L_12->___Type_1), (void*)_stringLiteral8451D28B929E6C023C5CF1726EC710BE6210ECC3);
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_13 = L_12;
				NullCheck(L_13);
				L_13->___Silent_3 = (bool)1;
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_14 = L_13;
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_15 = __this->___U3CmsgU3E5__2_4;
				NullCheck(L_15);
				String_t* L_16 = L_15->___Topic_0;
				NullCheck(L_14);
				L_14->___Topic_0 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&L_14->___Topic_0), (void*)L_16);
				NullCheck(L_9);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
				L_17 = NativeWebSocketTransport_SendMessage_m5CD29CD50C9957326C09C5F5B5DD813645F126DB(L_9, L_14, NULL);
				NullCheck(L_17);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18;
				L_18 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_17, NULL);
				V_3 = L_18;
				bool L_19;
				L_19 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
				if (L_19)
				{
					goto IL_00b6_2;
				}
			}
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_21 = V_3;
				__this->___U3CU3Eu__1_5 = L_21;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7(L_22, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC_m0E39D785CFD20841F54C7E9054256F4159983AB7_RuntimeMethod_var);
				goto IL_0117;
			}

IL_009a_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23 = __this->___U3CU3Eu__1_5;
				V_3 = L_23;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_24 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state_0 = L_25;
			}

IL_00b6_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
				// if (this.MessageReceived != null)
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_26 = V_1;
				NullCheck(L_26);
				EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_27 = L_26->___MessageReceived_13;
				if (!L_27)
				{
					goto IL_00dd_2;
				}
			}
			{
				// MessageReceived(this, new MessageReceivedEventArgs(msg, this));
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_28 = V_1;
				NullCheck(L_28);
				EventHandler_1_t9D3E237636754844C4ECB9ED4A626736CA592461* L_29 = L_28->___MessageReceived_13;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_30 = V_1;
				NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_31 = __this->___U3CmsgU3E5__2_4;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_32 = V_1;
				MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63* L_33 = (MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63*)il2cpp_codegen_object_new(MessageReceivedEventArgs_tA2FF7D1FE312349DDF665CF1717564444A377B63_il2cpp_TypeInfo_var);
				NullCheck(L_33);
				MessageReceivedEventArgs__ctor_m9A86F88E6743CC696C125737BAF71879D4061A29(L_33, L_31, L_32, NULL);
				NullCheck(L_29);
				EventHandler_1_Invoke_mD17D133C7F4385C9530E022382ED23916A8FDAA8_inline(L_29, L_30, L_33, NULL);
			}

IL_00dd_2:
			{
				// }
				__this->___U3CmsgU3E5__2_4 = (NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmsgU3E5__2_4), (void*)(NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3*)NULL);
				goto IL_00e9_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e6_1;
			}
			throw e;
		}

CATCH_00e6_1:
		{// begin catch(System.Object)
			// catch
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e9_1;
		}// end catch (depth: 2)

IL_00e9_1:
		{
			goto IL_0104;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00eb;
		}
		throw e;
	}

CATCH_00eb:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0117;
	}// end catch (depth: 1)

IL_0104:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_36, NULL);
	}

IL_0117:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnMessageReceivedU3Ed__29_MoveNext_m080904EFD7D6385918BA617A14A250BC7B9E319D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC*>(__this + _offset);
	U3COnMessageReceivedU3Ed__29_MoveNext_m080904EFD7D6385918BA617A14A250BC7B9E319D(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnMessageReceived>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMessageReceivedU3Ed__29_SetStateMachine_m986851F7BBB47201406BA406D170E095A3778615 (U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnMessageReceivedU3Ed__29_SetStateMachine_m986851F7BBB47201406BA406D170E095A3778615_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnMessageReceivedU3Ed__29_t48859EFD3CD0288264B77D0DBDAE6DAFC8643EEC*>(__this + _offset);
	U3COnMessageReceivedU3Ed__29_SetStateMachine_m986851F7BBB47201406BA406D170E095A3778615(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__31_MoveNext_m2F2BFA6A71B8EA7EBA3D444E5F536BB7D61A9B59 (U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0074_2;
				}
			}
			{
				// if (client != null)
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_4 = V_1;
				NullCheck(L_4);
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_5 = L_4->___client_7;
				if (!L_5)
				{
					goto IL_0097_2;
				}
			}
			{
				// this.opened = false;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
				NullCheck(L_6);
				L_6->___opened_4 = (bool)0;
				// client.OnClose -= ClientTryReconnect;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_7 = V_1;
				NullCheck(L_7);
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_8 = L_7->___client_7;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_9 = V_1;
				WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_10 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)il2cpp_codegen_object_new(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764(L_10, L_9, (intptr_t)((void*)NativeWebSocketTransport_ClientTryReconnect_mD51A3996CB538EE389E1EE7602A517482F3250D5_RuntimeMethod_var), NULL);
				NullCheck(L_8);
				WebSocket_remove_OnClose_m051BE16B74A02FA76B6B33E8E8AFBA7411F9177C(L_8, L_10, NULL);
				// await client.Close();
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_11 = V_1;
				NullCheck(L_11);
				WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_12 = L_11->___client_7;
				NullCheck(L_12);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
				L_13 = WebSocket_Close_m8EF33167E215E9898AF33A787C3E9FABCBB789E3(L_12, NULL);
				NullCheck(L_13);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14;
				L_14 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_13, NULL);
				V_2 = L_14;
				bool L_15;
				L_15 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
				if (L_15)
				{
					goto IL_0090_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = V_2;
				__this->___U3CU3Eu__1_3 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B(L_18, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5_mBDEE9E3D3A0E18C6E2A2B5D1614E830D0D51E08B_RuntimeMethod_var);
				goto IL_00e6;
			}

IL_0074_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19 = __this->___U3CU3Eu__1_3;
				V_2 = L_19;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_20 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_0090_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			}

IL_0097_2:
			{
				// }
				goto IL_00ba_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0099_1;
			}
			throw e;
		}

CATCH_0099_1:
		{// begin catch(NativeWebSocket.WebSocketInvalidStateException)
			{
				// if (e.Message.Contains("WebSocket is not connected"))
				NullCheck(((WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)IL2CPP_GET_ACTIVE_EXCEPTION(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)));
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)IL2CPP_GET_ACTIVE_EXCEPTION(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)));
				NullCheck(L_22);
				bool L_23;
				L_23 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9A565AEC5649180CA5327D5F5FE3BBAD6154993)), NULL);
				if (!L_23)
				{
					goto IL_00b6_1;
				}
			}
			{
				// Debug.LogWarning("Tried to close a websocket when it's already closed");
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0F7C2070363DADAD05AA842852782AFBCCA72B)), NULL);
				goto IL_00b8_1;
			}

IL_00b6_1:
			{
				// throw;
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}

IL_00b8_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00ba_1;
			}
		}// end catch (depth: 2)

IL_00ba_1:
		{
			goto IL_00d3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_25 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_24, L_25, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e6;
	}// end catch (depth: 1)

IL_00d3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_26 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_26, NULL);
	}

IL_00e6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__31_MoveNext_m2F2BFA6A71B8EA7EBA3D444E5F536BB7D61A9B59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5*>(__this + _offset);
	U3CCloseU3Ed__31_MoveNext_m2F2BFA6A71B8EA7EBA3D444E5F536BB7D61A9B59(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Close>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__31_SetStateMachine_m5DEF34E65FC404467EA37A1DBBD82DDD3E67DF7F (U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__31_SetStateMachine_m5DEF34E65FC404467EA37A1DBBD82DDD3E67DF7F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseU3Ed__31_t5942E8191CAD8C88F42A4313E811A011419A26B5*>(__this + _offset);
	U3CCloseU3Ed__31_SetStateMachine_m5DEF34E65FC404467EA37A1DBBD82DDD3E67DF7F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_MoveNext_mB45C6F87BC9B46488A45BEA129A8C1518F681E71 (U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0069_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d5_1;
			}
		}
		{
			// if (!Connected)
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_4 = V_1;
			NullCheck(L_4);
			bool L_5;
			L_5 = NativeWebSocketTransport_get_Connected_m1ED0964F9816EEACFEAA84B8A70E9F4ACEB1BA08(L_4, NULL);
			if (L_5)
			{
				goto IL_008e_1;
			}
		}
		{
			// _queuedMessages.Enqueue(message);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
			NullCheck(L_6);
			Queue_1_tD7789FC4F78F7EC45C9A8F8C549B1A55920356C9* L_7 = L_6->____queuedMessages_12;
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_8 = __this->___message_3;
			NullCheck(L_7);
			Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E(L_7, L_8, Queue_1_Enqueue_m4D26FDF88F716279F88C5E20EBC155991ED6106E_RuntimeMethod_var);
			// await _socketOpen();
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_9 = V_1;
			NullCheck(L_9);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
			L_10 = NativeWebSocketTransport__socketOpen_m1DB3F56D8363360099C6805E2E4678D5FC8A4366(L_9, NULL);
			NullCheck(L_10);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11;
			L_11 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_10, NULL);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_12)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = V_2;
			__this->___U3CU3Eu__1_4 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291(L_15, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_RuntimeMethod_var);
			goto IL_0126;
		}

IL_0069_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = __this->___U3CU3Eu__1_4;
			V_2 = L_16;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_17 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0085_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00f8_1;
		}

IL_008e_1:
		{
			// string finalJson = JsonConvert.SerializeObject(message);
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_19 = __this->___message_3;
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			String_t* L_20;
			L_20 = JsonConvert_SerializeObject_mEF78C5DAFDB944E8E19657EB92F5394370B27CAF(L_19, NULL);
			V_3 = L_20;
			// await this.client.SendText(finalJson);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_21 = V_1;
			NullCheck(L_21);
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_22 = L_21->___client_7;
			String_t* L_23 = V_3;
			NullCheck(L_22);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_24;
			L_24 = WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C(L_22, L_23, NULL);
			NullCheck(L_24);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_25;
			L_25 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_24, NULL);
			V_2 = L_25;
			bool L_26;
			L_26 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_26)
			{
				goto IL_00f1_1;
			}
		}
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_28 = V_2;
			__this->___U3CU3Eu__1_4 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291(L_29, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8_mA5434B4EBE48967FAC90484F768568C00245F291_RuntimeMethod_var);
			goto IL_0126;
		}

IL_00d5_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_30 = __this->___U3CU3Eu__1_4;
			V_2 = L_30;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_31 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_31, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_00f1_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_00f8_1:
		{
			goto IL_0113;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fa;
		}
		throw e;
	}

CATCH_00fa:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_33 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_33, L_34, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0126;
	}// end catch (depth: 1)

IL_0113:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_35, NULL);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendMessageU3Ed__32_MoveNext_mB45C6F87BC9B46488A45BEA129A8C1518F681E71_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8*>(__this + _offset);
	U3CSendMessageU3Ed__32_MoveNext_mB45C6F87BC9B46488A45BEA129A8C1518F681E71(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<SendMessage>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendMessageU3Ed__32_SetStateMachine_m4FBBAB1505DAC0E3698005E05E7B1D54D9E358ED (U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendMessageU3Ed__32_SetStateMachine_m4FBBAB1505DAC0E3698005E05E7B1D54D9E358ED_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendMessageU3Ed__32_tF4E2AF2BAEC7C735A3CB58D89BDAE8D7C73BD2D8*>(__this + _offset);
	U3CSendMessageU3Ed__32_SetStateMachine_m4FBBAB1505DAC0E3698005E05E7B1D54D9E358ED(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeU3Ed__33_MoveNext_mDA5DF08F857E8C9D8F8FCC5828CBEB10C0F40973 (U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_1 = NULL;
	NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054_1;
			}
		}
		{
			// var msg = GenerateSubscribeMessage(topic);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_3 = V_1;
			String_t* L_4 = __this->___topic_3;
			NullCheck(L_3);
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_5;
			L_5 = NativeWebSocketTransport_GenerateSubscribeMessage_m341D621154AFA1B036F4902205E24E1A8ACE012A(L_3, L_4, NULL);
			V_2 = L_5;
			// await SendMessage(msg);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = V_1;
			NetworkMessage_t86539C72B28D11E302FDF30A10F0D4BAACF40FE3* L_7 = V_2;
			NullCheck(L_6);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = NativeWebSocketTransport_SendMessage_m5CD29CD50C9957326C09C5F5B5DD813645F126DB(L_6, L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_3 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_10)
			{
				goto IL_0070_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_3;
			__this->___U3CU3Eu__1_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F(L_13, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60_m8DEBB8BF6E247882227AD61D01CDD2DE68555F1F_RuntimeMethod_var);
			goto IL_00d0;
		}

IL_0054_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_4;
			V_3 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0070_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// if (!subscribedTopics.Contains(topic))
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_17 = V_1;
			NullCheck(L_17);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = L_17->___subscribedTopics_11;
			String_t* L_19 = __this->___topic_3;
			NullCheck(L_18);
			bool L_20;
			L_20 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_18, L_19, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_009b_1;
			}
		}
		{
			// subscribedTopics.Add(topic);
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_21 = V_1;
			NullCheck(L_21);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = L_21->___subscribedTopics_11;
			String_t* L_23 = __this->___topic_3;
			NullCheck(L_22);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, L_23, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		}

IL_009b_1:
		{
			// opened = true;
			NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_24 = V_1;
			NullCheck(L_24);
			L_24->___opened_4 = (bool)1;
			goto IL_00bd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d0;
	}// end catch (depth: 1)

IL_00bd:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSubscribeU3Ed__33_MoveNext_mDA5DF08F857E8C9D8F8FCC5828CBEB10C0F40973_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60*>(__this + _offset);
	U3CSubscribeU3Ed__33_MoveNext_mDA5DF08F857E8C9D8F8FCC5828CBEB10C0F40973(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<Subscribe>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeU3Ed__33_SetStateMachine_m33087F6658B3D12A795ED85D8FB71447DEDBD95A (U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSubscribeU3Ed__33_SetStateMachine_m33087F6658B3D12A795ED85D8FB71447DEDBD95A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSubscribeU3Ed__33_t1F18787993204671191F03012A8D2448440CEF60*>(__this + _offset);
	U3CSubscribeU3Ed__33_SetStateMachine_m33087F6658B3D12A795ED85D8FB71447DEDBD95A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m18CDE94269AC45E89B38D9DC37B9CD31A6B2DB66 (U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<>c__DisplayClass38_0::<OnApplicationPause>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass38_0_U3COnApplicationPauseU3Eb__1_mE7433FFC9366FC7E6E6DBBD8CFF2E1C8584B65D7 (U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* __this, const RuntimeMethod* method) 
{
	{
		// var subTask = Task.Run(() => Subscribe(topic));
		NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_0 = __this->___U3CU3E4__this_1;
		String_t* L_1 = __this->___topic_0;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = NativeWebSocketTransport_Subscribe_m5A65E21D133CFF7452777CE8D6EBA666B80128FA(L_0, L_1, NULL);
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
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38__ctor_mC79B24A79801862B3FC1F651AA3946D3F84ED781 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38_System_IDisposable_Dispose_m2A9F869BEC170463FAD11C79E10ACAE4A3592112 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3COnApplicationPauseU3Ed__38_U3CU3Em__Finally1_m03016873D1F9C7FAA006C95EDA59D34ACE773B2A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnApplicationPauseU3Ed__38_MoveNext_mB175A055D9EAB8149DA694727A63DF3E9346B355 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebSocketTransport_U3COnApplicationPauseU3Eb__38_0_mC0FE69B7053BB4976855FEFA35485EAD0170932F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_U3COnApplicationPauseU3Eb__1_mE7433FFC9366FC7E6E6DBBD8CFF2E1C8584B65D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* V_2 = NULL;
	WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* V_3 = NULL;
	WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* V_4 = NULL;
	WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* V_5 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0147:
			{// begin fault (depth: 1)
				U3COnApplicationPauseU3Ed__38_System_IDisposable_Dispose_m2A9F869BEC170463FAD11C79E10ACAE4A3592112(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_002b_1;
					}
					case 1:
					{
						goto IL_006e_1;
					}
					case 2:
					{
						goto IL_00b3_1;
					}
					case 3:
					{
						goto IL_011c_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_014e;
			}

IL_002b_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// if (pauseStatus)
				bool L_3 = __this->___pauseStatus_2;
				if (!L_3)
				{
					goto IL_007a_1;
				}
			}
			{
				// wasPaused = true;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_4 = V_2;
				NullCheck(L_4);
				L_4->___wasPaused_9 = (bool)1;
				// var closeTask = Task.Run(Close);
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_5 = V_2;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_6 = L_5;
				Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_7 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_7, L_6, (intptr_t)((void*)GetVirtualMethodInfo(L_6, 9)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
				L_8 = Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA(L_7, NULL);
				// var coroutineInstruction = new WaitForTask(closeTask);
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_9 = (WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0*)il2cpp_codegen_object_new(WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				WaitForTask__ctor_mA42F86B96F71AFC436CE0E714A2C11C377ED8D3A(L_9, L_8, NULL);
				V_3 = L_9;
				// yield return coroutineInstruction;
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_10 = V_3;
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_014e;
			}

IL_006e_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				goto IL_0143_1;
			}

IL_007a_1:
			{
				// else if (wasPaused)
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_11 = V_2;
				NullCheck(L_11);
				bool L_12 = L_11->___wasPaused_9;
				if (!L_12)
				{
					goto IL_0143_1;
				}
			}
			{
				// var openTask = Task.Run(() => Open(currentUrl, false));
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_13 = V_2;
				Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_14 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_14, L_13, (intptr_t)((void*)NativeWebSocketTransport_U3COnApplicationPauseU3Eb__38_0_mC0FE69B7053BB4976855FEFA35485EAD0170932F_RuntimeMethod_var), NULL);
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_15;
				L_15 = Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA(L_14, NULL);
				// var coroutineInstruction = new WaitForTask(openTask);
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_16 = (WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0*)il2cpp_codegen_object_new(WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				WaitForTask__ctor_mA42F86B96F71AFC436CE0E714A2C11C377ED8D3A(L_16, L_15, NULL);
				V_4 = L_16;
				// yield return coroutineInstruction;
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_17 = V_4;
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_014e;
			}

IL_00b3_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var topic in subscribedTopics)
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_18 = V_2;
				NullCheck(L_18);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = L_18->___subscribedTopics_11;
				NullCheck(L_19);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_20;
				L_20 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_19, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_20;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0124_1;
			}

IL_00d5_1:
			{
				U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* L_21 = (U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				U3CU3Ec__DisplayClass38_0__ctor_m18CDE94269AC45E89B38D9DC37B9CD31A6B2DB66(L_21, NULL);
				U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* L_22 = L_21;
				NativeWebSocketTransport_tE2710764F904BEED8F0F2B908D9803A24C2B6D4A* L_23 = V_2;
				NullCheck(L_22);
				L_22->___U3CU3E4__this_1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&L_22->___U3CU3E4__this_1), (void*)L_23);
				// foreach (var topic in subscribedTopics)
				U3CU3Ec__DisplayClass38_0_t4F1B0004BD9DDC8540A6D14BBA1BD79ED1B71097* L_24 = L_22;
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_25 = (&__this->___U3CU3E7__wrap1_4);
				String_t* L_26;
				L_26 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline(L_25, Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				NullCheck(L_24);
				L_24->___topic_0 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&L_24->___topic_0), (void*)L_26);
				// var subTask = Task.Run(() => Subscribe(topic));
				Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_27 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_27, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass38_0_U3COnApplicationPauseU3Eb__1_mE7433FFC9366FC7E6E6DBBD8CFF2E1C8584B65D7_RuntimeMethod_var), NULL);
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_28;
				L_28 = Task_Run_m00AF25E7892ACD3AEBBADB40560F59F2866DD3BA(L_27, NULL);
				// var coroutineSubInstruction = new WaitForTask(subTask);
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_29 = (WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0*)il2cpp_codegen_object_new(WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0_il2cpp_TypeInfo_var);
				NullCheck(L_29);
				WaitForTask__ctor_mA42F86B96F71AFC436CE0E714A2C11C377ED8D3A(L_29, L_28, NULL);
				V_5 = L_29;
				// yield return coroutineSubInstruction;
				WaitForTask_t69FDEE2AA44156FC18380B523CB9DF5A0A5CDBB0* L_30 = V_5;
				__this->___U3CU3E2__current_1 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_014e;
			}

IL_011c_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0124_1:
			{
				// foreach (var topic in subscribedTopics)
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_31 = (&__this->___U3CU3E7__wrap1_4);
				bool L_32;
				L_32 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED(L_31, Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_00d5_1;
				}
			}
			{
				U3COnApplicationPauseU3Ed__38_U3CU3Em__Finally1_m03016873D1F9C7FAA006C95EDA59D34ACE773B2A(__this, NULL);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_33 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_33, sizeof(Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1));
			}

IL_0143_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_014e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014e:
	{
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38_U3CU3Em__Finally1_m03016873D1F9C7FAA006C95EDA59D34ACE773B2A (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7(L_0, Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		return;
	}
}
// System.Object WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnApplicationPauseU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB9A2469B6676AEE2AB510E75B6EB6B9869AA5A11 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationPauseU3Ed__38_System_Collections_IEnumerator_Reset_mDF885A3750610260D428A34C8016A6C9014413CF (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnApplicationPauseU3Ed__38_System_Collections_IEnumerator_Reset_mDF885A3750610260D428A34C8016A6C9014413CF_RuntimeMethod_var)));
	}
}
// System.Object WalletConnectSharp.Unity.Network.NativeWebSocketTransport/<OnApplicationPause>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnApplicationPauseU3Ed__38_System_Collections_IEnumerator_get_Current_mB8BC3E16A8958CAA2E9A20D5CBC5A1890EA17F33 (U3COnApplicationPauseU3Ed__38_t54F5F5D7E7EA65D7D3CBCF1BA9A8B5B92284086F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Threading.Tasks.Task`1<WalletConnectSharp.Core.Models.EncryptedPayload> WalletConnectSharp.Unity.Network.WebGlAESCipher::EncryptWithKey(System.Byte[],System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* WebGlAESCipher_EncryptWithKey_m59DC255C7D050F1C0146892073AAEA15910B7151 (WebGlAESCipher_t2D11E7BFF8BCDA4928D3F6BEA87960D1028CE828* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, String_t* ___message1, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t8406844371043BD4B6A82EFFE5FA231B936DB309_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisEncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_m63B18E7C4B3CDBD7F86A7786F170107140652A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_5 = NULL;
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* V_11 = NULL;
	{
		// if (encoding == null)
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___encoding2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// encoding = Encoding.UTF8;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		___encoding2 = L_1;
	}

IL_000a:
	{
		// byte[] data = encoding.GetBytes(message);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding2;
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(21 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		// using (MemoryStream ms = new MemoryStream())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_5, NULL);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010e:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_1;
					if (!L_6)
					{
						goto IL_0117;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0117:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (AesManaged ciphor = new AesManaged())
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_8 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_8, NULL);
				V_2 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0104_1:
					{// begin finally (depth: 2)
						{
							AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_9 = V_2;
							if (!L_9)
							{
								goto IL_010d_1;
							}
						}
						{
							AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_10 = V_2;
							NullCheck(L_10);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
						}

IL_010d_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// ciphor.Mode = CipherMode.CBC;
						AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_11 = V_2;
						NullCheck(L_11);
						VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_11, 1);
						// ciphor.Padding = PaddingMode.PKCS7;
						AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_12 = V_2;
						NullCheck(L_12);
						VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_12, 2);
						// ciphor.KeySize = 256;
						AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_13 = V_2;
						NullCheck(L_13);
						VirtualActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_13, ((int32_t)256));
						// byte[] iv = ciphor.IV;
						AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_14 = V_2;
						NullCheck(L_14);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
						L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_14);
						V_3 = L_15;
						// using (CryptoStream cs = new CryptoStream(ms, ciphor.CreateEncryptor(key, iv),
						//     CryptoStreamMode.Write))
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = V_1;
						AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_17 = V_2;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___key0;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
						NullCheck(L_17);
						RuntimeObject* L_20;
						L_20 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_17, L_18, L_19);
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_21 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_21);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_21, L_16, L_20, 1, NULL);
						V_5 = L_21;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_005d_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_22 = V_5;
									if (!L_22)
									{
										goto IL_0068_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_23 = V_5;
									NullCheck(L_23);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
								}

IL_0068_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// cs.Write(data, 0, data.Length);
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_24 = V_5;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
							NullCheck(L_26);
							NullCheck(L_24);
							VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_24, L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)));
							// }
							goto IL_0069_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0069_2:
					{
						// byte[] encryptedContent = ms.ToArray();
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_1;
						NullCheck(L_27);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
						L_28 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_27);
						V_4 = L_28;
						// using (HMACSHA256 hmac = new HMACSHA256(key))
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___key0;
						HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_30 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
						NullCheck(L_30);
						HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_30, L_29, NULL);
						V_6 = L_30;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00f8_2:
							{// begin finally (depth: 3)
								{
									HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_31 = V_6;
									if (!L_31)
									{
										goto IL_0103_2;
									}
								}
								{
									HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_32 = V_6;
									NullCheck(L_32);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
								}

IL_0103_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// hmac.Initialize();
							HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_33 = V_6;
							NullCheck(L_33);
							VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_33);
							// byte[] toSign = new byte[iv.Length + encryptedContent.Length];
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_3;
							NullCheck(L_34);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_4;
							NullCheck(L_35);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)(((RuntimeArray*)L_35)->max_length)))));
							V_7 = L_36;
							// Buffer.BlockCopy(encryptedContent, 0, toSign, 0,encryptedContent.Length);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_4;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_7;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
							NullCheck(L_39);
							Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
							// Buffer.BlockCopy(iv, 0, toSign, encryptedContent.Length, iv.Length);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_3;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_7;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
							NullCheck(L_42);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_3;
							NullCheck(L_43);
							Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_40, 0, (RuntimeArray*)L_41, ((int32_t)(((RuntimeArray*)L_42)->max_length)), ((int32_t)(((RuntimeArray*)L_43)->max_length)), NULL);
							// byte[] signature = hmac.ComputeHash(toSign);
							HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_44 = V_6;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_7;
							NullCheck(L_44);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
							L_46 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_44, L_45, NULL);
							// string ivHex = iv.ToHex();
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_3;
							il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_t8406844371043BD4B6A82EFFE5FA231B936DB309_il2cpp_TypeInfo_var);
							String_t* L_48;
							L_48 = HexByteConvertorExtensions_ToHex_m04EBA9AC775249FB6F6339AA71510118AE987250(L_47, (bool)0, NULL);
							V_8 = L_48;
							// string dataHex = encryptedContent.ToHex();
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_4;
							String_t* L_50;
							L_50 = HexByteConvertorExtensions_ToHex_m04EBA9AC775249FB6F6339AA71510118AE987250(L_49, (bool)0, NULL);
							V_9 = L_50;
							// string hmacHex = signature.ToHex();
							String_t* L_51;
							L_51 = HexByteConvertorExtensions_ToHex_m04EBA9AC775249FB6F6339AA71510118AE987250(L_46, (bool)0, NULL);
							V_10 = L_51;
							// return Task.FromResult(new EncryptedPayload()
							// {
							//     data = dataHex,
							//     hmac = hmacHex,
							//     iv = ivHex
							// });
							EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_52 = (EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4*)il2cpp_codegen_object_new(EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_il2cpp_TypeInfo_var);
							NullCheck(L_52);
							EncryptedPayload__ctor_m1857544BF1B7F1C2EAAF8260762A17A5C2C80FCB(L_52, NULL);
							EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_53 = L_52;
							String_t* L_54 = V_9;
							NullCheck(L_53);
							L_53->___data_2 = L_54;
							Il2CppCodeGenWriteBarrier((void**)(&L_53->___data_2), (void*)L_54);
							EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_55 = L_53;
							String_t* L_56 = V_10;
							NullCheck(L_55);
							L_55->___hmac_1 = L_56;
							Il2CppCodeGenWriteBarrier((void**)(&L_55->___hmac_1), (void*)L_56);
							EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_57 = L_55;
							String_t* L_58 = V_8;
							NullCheck(L_57);
							L_57->___iv_0 = L_58;
							Il2CppCodeGenWriteBarrier((void**)(&L_57->___iv_0), (void*)L_58);
							il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
							Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* L_59;
							L_59 = Task_FromResult_TisEncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_m63B18E7C4B3CDBD7F86A7786F170107140652A73(L_57, Task_FromResult_TisEncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4_m63B18E7C4B3CDBD7F86A7786F170107140652A73_RuntimeMethod_var);
							V_11 = L_59;
							goto IL_0118;
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

IL_0118:
	{
		// }
		Task_1_t9FFC692FAA68D3BAAFAC6178E9AAF06EB49D3C6B* L_60 = V_11;
		return L_60;
	}
}
// System.Threading.Tasks.Task`1<System.String> WalletConnectSharp.Unity.Network.WebGlAESCipher::DecryptWithKey(System.Byte[],WalletConnectSharp.Core.Models.EncryptedPayload,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WebGlAESCipher_DecryptWithKey_mCB115C61F4B7E5ECF2056636DEB3CAE1BB9CA3C7 (WebGlAESCipher_t2D11E7BFF8BCDA4928D3F6BEA87960D1028CE828* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* ___encryptedData1, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_t8406844371043BD4B6A82EFFE5FA231B936DB309_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_7 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_8 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_9 = NULL;
	int32_t V_10 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_12 = NULL;
	{
		// if (encoding == null)
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___encoding2;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// encoding = Encoding.UTF8;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		___encoding2 = L_1;
	}

IL_000a:
	{
		// byte[] rawData = encryptedData.data.FromHex();
		EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_2 = ___encryptedData1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___data_2;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_t8406844371043BD4B6A82EFFE5FA231B936DB309_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HexByteConvertorExtensions_FromHex_m54427A90622E7156868D3125ABCF28FC14DB61C5(L_3, NULL);
		V_0 = L_4;
		// byte[] iv = encryptedData.iv.FromHex();
		EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_5 = ___encryptedData1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___iv_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_FromHex_m54427A90622E7156868D3125ABCF28FC14DB61C5(L_6, NULL);
		V_1 = L_7;
		// byte[] hmacReceived = encryptedData.hmac.FromHex();
		EncryptedPayload_t32682F5189701A18FD6BFD94076E2F0068731DC4* L_8 = ___encryptedData1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___hmac_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = HexByteConvertorExtensions_FromHex_m54427A90622E7156868D3125ABCF28FC14DB61C5(L_9, NULL);
		V_2 = L_10;
		// using (HMACSHA256 hmac = new HMACSHA256(key))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___key0;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_12 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_12, L_11, NULL);
		V_3 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				{
					HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_13 = V_3;
					if (!L_13)
					{
						goto IL_008b;
					}
				}
				{
					HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_14 = V_3;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_008b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// hmac.Initialize();
				HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_15 = V_3;
				NullCheck(L_15);
				VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_15);
				// byte[] toSign = new byte[iv.Length + rawData.Length];
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
				NullCheck(L_16);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
				NullCheck(L_17);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_16)->max_length)), ((int32_t)(((RuntimeArray*)L_17)->max_length)))));
				V_4 = L_18;
				// Buffer.BlockCopy(rawData, 0, toSign, 0,rawData.Length);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
				NullCheck(L_21);
				Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)), NULL);
				// Buffer.BlockCopy(iv, 0, toSign, rawData.Length, iv.Length);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
				NullCheck(L_24);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
				NullCheck(L_25);
				Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, ((int32_t)(((RuntimeArray*)L_24)->max_length)), ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
				// byte[] signature = hmac.ComputeHash(toSign);
				HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_26 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
				NullCheck(L_26);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
				L_28 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_26, L_27, NULL);
				// if (!signature.SequenceEqual(hmacReceived))
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
				bool L_30;
				L_30 = Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A((RuntimeObject*)L_28, (RuntimeObject*)L_29, Enumerable_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE13CC7123D383F5468FBBF472EC0997B0E93BC1A_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0080_1;
				}
			}
			{
				// throw new InvalidDataException("HMAC Provided does not match expected"); //Ignore
				InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1* L_31 = (InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_t9D62CAAA10DD31CCD9C0F92AA5729A05282F18A1_il2cpp_TypeInfo_var)));
				NullCheck(L_31);
				InvalidDataException__ctor_m514879053D89E3C8229A01AA8970237FA5409532(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral576FEAEE6C1D0A7A8F6D335BF0DC0ECBFA1221EB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebGlAESCipher_DecryptWithKey_mCB115C61F4B7E5ECF2056636DEB3CAE1BB9CA3C7_RuntimeMethod_var)));
			}

IL_0080_1:
			{
				// }
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// using (AesManaged cryptor = new AesManaged())
		AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_32 = (AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819*)il2cpp_codegen_object_new(AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		AesManaged__ctor_mDE017C6ECB4AF587B6C2A7A4BCBB2E0FA3E81241(L_32, NULL);
		V_5 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0167:
			{// begin finally (depth: 1)
				{
					AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_33 = V_5;
					if (!L_33)
					{
						goto IL_0172;
					}
				}
				{
					AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_34 = V_5;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_34);
				}

IL_0172:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// cryptor.Mode = CipherMode.CBC;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_35 = V_5;
				NullCheck(L_35);
				VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_35, 1);
				// cryptor.Padding = PaddingMode.PKCS7;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_36 = V_5;
				NullCheck(L_36);
				VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_36, 2);
				// cryptor.KeySize = 256;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_37 = V_5;
				NullCheck(L_37);
				VirtualActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_37, ((int32_t)256));
				// cryptor.IV = iv;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_38 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
				NullCheck(L_38);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_38, L_39);
				// cryptor.Key = key;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_40 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___key0;
				NullCheck(L_40);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_40, L_41);
				// ICryptoTransform decryptor = cryptor.CreateDecryptor(cryptor.Key, cryptor.IV);
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_42 = V_5;
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_43 = V_5;
				NullCheck(L_43);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
				L_44 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_43);
				AesManaged_t153AF8C6AF037AF4614B15A04CAD48A7F7DA0819* L_45 = V_5;
				NullCheck(L_45);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
				L_46 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_45);
				NullCheck(L_42);
				RuntimeObject* L_47;
				L_47 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_42, L_44, L_46);
				V_6 = L_47;
				// using (MemoryStream ms = new MemoryStream(rawData))
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_49 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_49);
				MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_49, L_48, NULL);
				V_7 = L_49;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015b_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_50 = V_7;
							if (!L_50)
							{
								goto IL_0166_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_51 = V_7;
							NullCheck(L_51);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_51);
						}

IL_0166_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (MemoryStream sink = new MemoryStream())
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_52 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
						NullCheck(L_52);
						MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_52, NULL);
						V_8 = L_52;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_014f_2:
							{// begin finally (depth: 3)
								{
									MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_53 = V_8;
									if (!L_53)
									{
										goto IL_015a_2;
									}
								}
								{
									MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_54 = V_8;
									NullCheck(L_54);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_54);
								}

IL_015a_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (CryptoStream cs = new CryptoStream(ms, decryptor, CryptoStreamMode.Read))
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_55 = V_7;
								RuntimeObject* L_56 = V_6;
								CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_57 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
								NullCheck(L_57);
								CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_57, L_55, L_56, 0, NULL);
								V_9 = L_57;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0143_3:
									{// begin finally (depth: 4)
										{
											CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_58 = V_9;
											if (!L_58)
											{
												goto IL_014e_3;
											}
										}
										{
											CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_59 = V_9;
											NullCheck(L_59);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_59);
										}

IL_014e_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										// int read = 0;
										V_10 = 0;
										// byte[] buffer = new byte[1024];
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
										V_11 = L_60;
									}

IL_0100_4:
									{
										// read = cs.Read(buffer, 0, buffer.Length);
										CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_61 = V_9;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_11;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_11;
										NullCheck(L_63);
										NullCheck(L_61);
										int32_t L_64;
										L_64 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_61, L_62, 0, ((int32_t)(((RuntimeArray*)L_63)->max_length)));
										V_10 = L_64;
										// if (read > 0)
										int32_t L_65 = V_10;
										if ((((int32_t)L_65) <= ((int32_t)0)))
										{
											goto IL_0121_4;
										}
									}
									{
										// sink.Write(buffer, 0, read);
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_66 = V_8;
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_11;
										int32_t L_68 = V_10;
										NullCheck(L_66);
										VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, L_68);
									}

IL_0121_4:
									{
										// } while (read > 0);
										int32_t L_69 = V_10;
										if ((((int32_t)L_69) > ((int32_t)0)))
										{
											goto IL_0100_4;
										}
									}
									{
										// cs.Flush();
										CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_70 = V_9;
										NullCheck(L_70);
										VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_70);
										// return Task.FromResult(encoding.GetString(sink.ToArray()));
										Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_71 = ___encoding2;
										MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_72 = V_8;
										NullCheck(L_72);
										ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73;
										L_73 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_72);
										NullCheck(L_71);
										String_t* L_74;
										L_74 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_71, L_73);
										il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
										Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_75;
										L_75 = Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C(L_74, Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var);
										V_12 = L_75;
										goto IL_0173;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
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

IL_0173:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_76 = V_12;
		return L_76;
	}
}
// System.Void WalletConnectSharp.Unity.Network.WebGlAESCipher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGlAESCipher__ctor_m0F5A67B636380FB31366A3E6D3D7080450DD1A17 (WebGlAESCipher_t2D11E7BFF8BCDA4928D3F6BEA87960D1028CE828* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.AppColors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppColors__ctor_m30926467BA63D0A030EBF3880DB3990A477B4740 (AppColors_t25E41C019661B082A0A8284B05D88D323080C69F* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.AppEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppEntry__ctor_m2FFF110F955F4BFC3348CE1264876C82A95CE1D6 (AppEntry_t11737D19B98FD7EFD15597513F75431A9D50690A* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.AppInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppInfo__ctor_m5674CFE316EF77CEA2F779DF04E62F990D8C02CF (AppInfo_t8B0A7091A30AE56D866EB3A946D208D12830990B* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.AppMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetadata__ctor_m93054D9CE691E636E4C751BEACC4834E3C6E242B (AppMetadata_t273528F18A12911293485B135FE92A6593BE0A41* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.MobileAppData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAppData__ctor_mB401C7481ED184C190079C61C7B5FA2F06B30BA4 (MobileAppData_tF87FB69989040F3A78792C84642364020CAC3071* __this, const RuntimeMethod* method) 
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
// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.MessageSigner::CreateMessageSigner(UnityEngine.GameObject,System.String,System.Int32,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* MessageSigner_CreateMessageSigner_m30B53CD3D3776738C862EE779CD4A5247E5EA632 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent0, String_t* ___messageToSign1, int32_t ___accountIndex2, bool ___disconnectOnSign3, String_t* ___addressToSign4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34B77BE9A39AB42588577893E193AE52D088B048);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("[WalletConnect] CreateMessageSigner is experimental, proceed with caution");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral34B77BE9A39AB42588577893E193AE52D088B048, NULL);
		// var signer = parent.AddComponent<MessageSigner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___parent0;
		NullCheck(L_0);
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_1;
		L_1 = GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17(L_0, GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17_RuntimeMethod_var);
		// signer.messageToSign = messageToSign;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_2 = L_1;
		String_t* L_3 = ___messageToSign1;
		NullCheck(L_2);
		L_2->___messageToSign_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___messageToSign_4), (void*)L_3);
		// signer.accountIndex = accountIndex;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_4 = L_2;
		int32_t L_5 = ___accountIndex2;
		NullCheck(L_4);
		L_4->___accountIndex_6 = L_5;
		// signer.disconnectOnSign = disconnectOnSign;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_6 = L_4;
		bool L_7 = ___disconnectOnSign3;
		NullCheck(L_6);
		L_6->___disconnectOnSign_7 = L_7;
		// signer.overrideAddressToSign = addressToSign;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_8 = L_6;
		String_t* L_9 = ___addressToSign4;
		NullCheck(L_8);
		L_8->___overrideAddressToSign_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___overrideAddressToSign_5), (void*)L_9);
		// return signer;
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner::SignAndDisconnect(UnityEngine.GameObject,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* MessageSigner_SignAndDisconnect_m67B326A4C66146030EC123AA149B23ADEE1AE110 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent0, String_t* ___messageToSign1, int32_t ___accountIndex2, String_t* ___addressToSign3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m8DC9519479365A068AC741A6368DD7403B2BEEF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8(AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___parent0;
		(&V_0)->___parent_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___parent_2), (void*)L_1);
		String_t* L_2 = ___messageToSign1;
		(&V_0)->___messageToSign_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___messageToSign_3), (void*)L_2);
		int32_t L_3 = ___accountIndex2;
		(&V_0)->___accountIndex_4 = L_3;
		String_t* L_4 = ___addressToSign3;
		(&V_0)->___addressToSign_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addressToSign_5), (void*)L_4);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m8DC9519479365A068AC741A6368DD7403B2BEEF8(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m8DC9519479365A068AC741A6368DD7403B2BEEF8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B(L_6, AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner::add_MessageSigned(System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner_add_MessageSigned_m8E93923601CFF9F774D54F0111EF852CE6803131 (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_0 = NULL;
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_1 = NULL;
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_2 = NULL;
	{
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_0 = __this->___MessageSigned_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_2 = V_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)Castclass((RuntimeObject*)L_4, EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335_il2cpp_TypeInfo_var));
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335** L_5 = (&__this->___MessageSigned_8);
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_6 = V_2;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_7 = V_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_9 = V_0;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)L_9) == ((RuntimeObject*)(EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner::remove_MessageSigned(System.EventHandler`1<WalletConnectSharp.Unity.Models.WCMessageSigned>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner_remove_MessageSigned_mB69FBAF344407380F533E010098A856853D5D3A5 (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_0 = NULL;
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_1 = NULL;
	EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* V_2 = NULL;
	{
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_0 = __this->___MessageSigned_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_2 = V_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)Castclass((RuntimeObject*)L_4, EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335_il2cpp_TypeInfo_var));
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335** L_5 = (&__this->___MessageSigned_8);
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_6 = V_2;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_7 = V_1;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_9 = V_0;
		EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)L_9) == ((RuntimeObject*)(EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner::OnClickSignMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner_OnClickSignMessage_m35A7D022528E00A8216C3D050E37995A40B52814 (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m28A95B4EC594B0BEA841AF87C19CB5E4D23C4E17_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<WalletConnectSharp.Unity.Models.WCMessageSigned> WalletConnectSharp.Unity.Models.MessageSigner::SignMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* MessageSigner_SignMessage_mFBD237E8BEA3AD04374B19BE973ABCECE8F3359D (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m10A9112A5276EFB937E16DD493135226AFF7B177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8(AsyncTaskMethodBuilder_1_Create_m176E900C4A615F4F18D6D34AC91142F7FDC817C8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m10A9112A5276EFB937E16DD493135226AFF7B177(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m10A9112A5276EFB937E16DD493135226AFF7B177_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B(L_2, AsyncTaskMethodBuilder_1_get_Task_mC7D5630574C2B900A2528AFD482CEC272C78C54B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner__ctor_m7B9C335D662D74E45A1D43397AF27BF3986395C0 (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/WCMessageSignedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCMessageSignedEvent__ctor_m9FF1FF7FE3772BABB4923982AA0E7BB2AC0ED5BE (WCMessageSignedEvent_t4B4ECB50D1DE7177CE0E32695B260D956F88DC76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB61F0B2AA23A18B6005621B2B29231F7CF95668F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB61F0B2AA23A18B6005621B2B29231F7CF95668F(__this, UnityEvent_1__ctor_mB61F0B2AA23A18B6005621B2B29231F7CF95668F_RuntimeMethod_var);
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
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndDisconnectU3Ed__1_MoveNext_mB3437EBEE0A9537FDAA57F1871C716371DCFBE26 (U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3D0A1093A5AFDB9A9F3898287B83F853100CD837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mFE02B8B1E9291A49EDB6EA231E8B5C0FAB3C3E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2FDD307A5C9EA7C093103C8089F7229092D715F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00b0_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_010e_1;
			}
		}
		{
			// Debug.LogWarning("[WalletConnect] SignAndDisconnect is experimental, proceed with caution");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralD2FDD307A5C9EA7C093103C8089F7229092D715F, NULL);
			// var signer = parent.AddComponent<MessageSigner>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___parent_2;
			NullCheck(L_3);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_4;
			L_4 = GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17(L_3, GameObject_AddComponent_TisMessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C_m0BC20253C11671EE8FB6CE98219C5B0DEEA4BF17_RuntimeMethod_var);
			__this->___U3CsignerU3E5__2_6 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignerU3E5__2_6), (void*)L_4);
			// signer.messageToSign = messageToSign;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_5 = __this->___U3CsignerU3E5__2_6;
			String_t* L_6 = __this->___messageToSign_3;
			NullCheck(L_5);
			L_5->___messageToSign_4 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___messageToSign_4), (void*)L_6);
			// signer.accountIndex = accountIndex;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_7 = __this->___U3CsignerU3E5__2_6;
			int32_t L_8 = __this->___accountIndex_4;
			NullCheck(L_7);
			L_7->___accountIndex_6 = L_8;
			// signer.disconnectOnSign = true;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_9 = __this->___U3CsignerU3E5__2_6;
			NullCheck(L_9);
			L_9->___disconnectOnSign_7 = (bool)1;
			// signer.overrideAddressToSign = addressToSign;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_10 = __this->___U3CsignerU3E5__2_6;
			String_t* L_11 = __this->___addressToSign_5;
			NullCheck(L_10);
			L_10->___overrideAddressToSign_5 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___overrideAddressToSign_5), (void*)L_11);
			// await signer.gameObject.WaitForStart();
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_12 = __this->___U3CsignerU3E5__2_6;
			NullCheck(L_12);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
			L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_14;
			L_14 = MonoBehaviorAsyncBinders_WaitForStart_m8262EBCA4CCC0A614964BD38067E43DAA53B9709(L_13, NULL);
			NullCheck(L_14);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_15;
			L_15 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_14, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_00cc_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_18 = V_2;
			__this->___U3CU3Eu__1_7 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3D0A1093A5AFDB9A9F3898287B83F853100CD837(L_19, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_m3D0A1093A5AFDB9A9F3898287B83F853100CD837_RuntimeMethod_var);
			goto IL_017a;
		}

IL_00b0_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_20 = __this->___U3CU3Eu__1_7;
			V_2 = L_20;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_21 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00cc_1:
		{
			bool L_23;
			L_23 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// var result = await signer.SignMessage();
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_24 = __this->___U3CsignerU3E5__2_6;
			NullCheck(L_24);
			Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* L_25;
			L_25 = MessageSigner_SignMessage_mFBD237E8BEA3AD04374B19BE973ABCECE8F3359D(L_24, NULL);
			NullCheck(L_25);
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_26;
			L_26 = Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC(L_25, Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC_RuntimeMethod_var);
			V_3 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4((&V_3), TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_012a_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_29 = V_3;
			__this->___U3CU3Eu__2_8 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mFE02B8B1E9291A49EDB6EA231E8B5C0FAB3C3E70(L_30, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364_mFE02B8B1E9291A49EDB6EA231E8B5C0FAB3C3E70_RuntimeMethod_var);
			goto IL_017a;
		}

IL_010e_1:
		{
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_31 = __this->___U3CU3Eu__2_8;
			V_3 = L_31;
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* L_32 = (&__this->___U3CU3Eu__2_8);
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_012a_1:
		{
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_34;
			L_34 = TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E((&V_3), TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E_RuntimeMethod_var);
			// Destroy(signer);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_35 = __this->___U3CsignerU3E5__2_6;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_35, NULL);
			// return result;
			V_1 = L_34;
			goto IL_015f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013f;
		}
		throw e;
	}

CATCH_013f:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CsignerU3E5__2_6 = (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignerU3E5__2_6), (void*)(MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C*)NULL);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_36 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_37 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB(L_36, L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017a;
	}// end catch (depth: 1)

IL_015f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CsignerU3E5__2_6 = (MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsignerU3E5__2_6), (void*)(MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C*)NULL);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_38 = (&__this->___U3CU3Et__builder_1);
		WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_39 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44(L_38, L_39, AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44_RuntimeMethod_var);
	}

IL_017a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndDisconnectU3Ed__1_MoveNext_mB3437EBEE0A9537FDAA57F1871C716371DCFBE26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364*>(__this + _offset);
	U3CSignAndDisconnectU3Ed__1_MoveNext_mB3437EBEE0A9537FDAA57F1871C716371DCFBE26(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignAndDisconnect>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndDisconnectU3Ed__1_SetStateMachine_m69E9765BA44F3F8B7E9018E02691B5CA02504023 (U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndDisconnectU3Ed__1_SetStateMachine_m69E9765BA44F3F8B7E9018E02691B5CA02504023_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignAndDisconnectU3Ed__1_t843D7EE61B2D13418D5CD77870CCF49279C87364*>(__this + _offset);
	U3CSignAndDisconnectU3Ed__1_SetStateMachine_m69E9765BA44F3F8B7E9018E02691B5CA02504023(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnClickSignMessageU3Ed__11_MoveNext_m57AD2B0874A91D8E1BB0147B356FD23A7274D0A2 (U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m24D19E1F9C07D0F3ADE948E8A067B8D02111DD69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* V_1 = NULL;
	TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046_1;
			}
		}
		{
			// await SignMessage();
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_3 = V_1;
			NullCheck(L_3);
			Task_1_t224155B2C0221779C5C2673DF2AE3C4E989562DF* L_4;
			L_4 = MessageSigner_SignMessage_mFBD237E8BEA3AD04374B19BE973ABCECE8F3359D(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_5;
			L_5 = Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC(L_4, Task_1_GetAwaiter_m4558B06DA7ECCEE0BD16081CD044DCB994AB24CC_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4((&V_2), TaskAwaiter_1_get_IsCompleted_m64AF75F20CF02ED863DB5F056D2A7B1EE67345F4_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0062_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m24D19E1F9C07D0F3ADE948E8A067B8D02111DD69(L_9, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF_TisU3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D_m24D19E1F9C07D0F3ADE948E8A067B8D02111DD69_RuntimeMethod_var);
			goto IL_0096;
		}

IL_0046_1:
		{
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t822FAFB0D063F63CA35CDB0AAF541D71ED5A5FAF));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0062_1:
		{
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_13;
			L_13 = TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E((&V_2), TaskAwaiter_1_GetResult_mAD3588F977880EBDBF1903911C94C4D8258E683E_RuntimeMethod_var);
			goto IL_0083;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006c;
		}
		throw e;
	}

CATCH_006c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0096;
	}// end catch (depth: 1)

IL_0083:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_0096:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnClickSignMessageU3Ed__11_MoveNext_m57AD2B0874A91D8E1BB0147B356FD23A7274D0A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D*>(__this + _offset);
	U3COnClickSignMessageU3Ed__11_MoveNext_m57AD2B0874A91D8E1BB0147B356FD23A7274D0A2(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<OnClickSignMessage>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnClickSignMessageU3Ed__11_SetStateMachine_mEF61A6E80B45B7E4FE001B76318FD63AE390D93B (U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnClickSignMessageU3Ed__11_SetStateMachine_mEF61A6E80B45B7E4FE001B76318FD63AE390D93B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnClickSignMessageU3Ed__11_t810EBBDA03E5BDAD9CA8915A895835E68DBA8B4D*>(__this + _offset);
	U3COnClickSignMessageU3Ed__11_SetStateMachine_mEF61A6E80B45B7E4FE001B76318FD63AE390D93B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755 (U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAE11FE45044A272AFB3BFB25BEA07F46CFA95AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m8B76CB2EEE11FE77A1312F56F85C5725F088A715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m9266DE2BFA2650C8163EC5C8C157A7D4CD74ABD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* V_1 = NULL;
	WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009d_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_013f_1;
			}
		}
		{
			// if (!WalletConnect.ActiveSession.Connected)
			WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* L_4;
			L_4 = WalletConnect_get_ActiveSession_m71356F2E23A7220ABF8935C4D39763ECF83FEB57(NULL);
			NullCheck(L_4);
			bool L_5;
			L_5 = WalletConnectProtocol_get_Connected_mD9C98FC48FD52B1C155A4A68FF8ECB1B7AB77D3C(L_4, NULL);
			if (L_5)
			{
				goto IL_0032_1;
			}
		}
		{
			// throw new IOException("[WalletConnect] No ActiveSession is connected to sign the message");
			IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_6 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
			NullCheck(L_6);
			IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FFFCB1525988144ADEEB48C587A02F0A6700E56)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755_RuntimeMethod_var)));
		}

IL_0032_1:
		{
			// var address = WalletConnect.ActiveSession.Accounts[accountIndex];
			WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* L_7;
			L_7 = WalletConnect_get_ActiveSession_m71356F2E23A7220ABF8935C4D39763ECF83FEB57(NULL);
			NullCheck(L_7);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
			L_8 = WalletConnectSession_get_Accounts_m371D32C25213EE6AF0883906A4BC1C56339EEA99_inline(L_7, NULL);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = L_9->___accountIndex_6;
			NullCheck(L_8);
			int32_t L_11 = L_10;
			String_t* L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_3 = L_12;
			// if (!string.IsNullOrEmpty(overrideAddressToSign))
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_13 = V_1;
			NullCheck(L_13);
			String_t* L_14 = L_13->___overrideAddressToSign_5;
			bool L_15;
			L_15 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_14, NULL);
			if (L_15)
			{
				goto IL_0058_1;
			}
		}
		{
			// address = overrideAddressToSign;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17 = L_16->___overrideAddressToSign_5;
			V_3 = L_17;
		}

IL_0058_1:
		{
			// var result = await WalletConnect.ActiveSession.EthPersonalSign(address, messageToSign);
			WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* L_18;
			L_18 = WalletConnect_get_ActiveSession_m71356F2E23A7220ABF8935C4D39763ECF83FEB57(NULL);
			String_t* L_19 = V_3;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_20 = V_1;
			NullCheck(L_20);
			String_t* L_21 = L_20->___messageToSign_4;
			NullCheck(L_18);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_22;
			L_22 = WalletConnectSession_EthPersonalSign_mDDA1A973E80DD3E5EA5638A186AD6936F60C988C(L_18, L_19, L_21, NULL);
			NullCheck(L_22);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_23;
			L_23 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_22, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_5 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_5), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00ba_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_26 = V_5;
			__this->___U3CU3Eu__1_4 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAE11FE45044A272AFB3BFB25BEA07F46CFA95AAA(L_27, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_mAE11FE45044A272AFB3BFB25BEA07F46CFA95AAA_RuntimeMethod_var);
			goto IL_01a7;
		}

IL_009d_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_28 = __this->___U3CU3Eu__1_4;
			V_5 = L_28;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_29 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00ba_1:
		{
			String_t* L_31;
			L_31 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_5), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_4 = L_31;
			// var eventData = new WCMessageSigned(this, result);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_32 = V_1;
			String_t* L_33 = V_4;
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_34 = (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*)il2cpp_codegen_object_new(WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0_il2cpp_TypeInfo_var);
			NullCheck(L_34);
			WCMessageSigned__ctor_mB872C71E5CC40FE217CB6E4497E01D46A854C4A5(L_34, L_32, L_33, NULL);
			__this->___U3CeventDataU3E5__2_3 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeventDataU3E5__2_3), (void*)L_34);
			// if (MessageSigned != null)
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_35 = V_1;
			NullCheck(L_35);
			EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_36 = L_35->___MessageSigned_8;
			if (!L_36)
			{
				goto IL_00eb_1;
			}
		}
		{
			// MessageSigned(this, eventData);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_37 = V_1;
			NullCheck(L_37);
			EventHandler_1_t23945476BF5C630F0DB39F0C2468031B81B1E335* L_38 = L_37->___MessageSigned_8;
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_39 = V_1;
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_40 = __this->___U3CeventDataU3E5__2_3;
			NullCheck(L_38);
			EventHandler_1_Invoke_m86A1A451731202E47455D9717BBEA60EFAB3260A_inline(L_38, L_39, L_40, NULL);
		}

IL_00eb_1:
		{
			// OnMessageSigned.Invoke(eventData);
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_41 = V_1;
			NullCheck(L_41);
			WCMessageSignedEvent_t4B4ECB50D1DE7177CE0E32695B260D956F88DC76* L_42 = L_41->___OnMessageSigned_9;
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_43 = __this->___U3CeventDataU3E5__2_3;
			NullCheck(L_42);
			UnityEvent_1_Invoke_m9266DE2BFA2650C8163EC5C8C157A7D4CD74ABD2(L_42, L_43, UnityEvent_1_Invoke_m9266DE2BFA2650C8163EC5C8C157A7D4CD74ABD2_RuntimeMethod_var);
			// if (disconnectOnSign)
			MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_44 = V_1;
			NullCheck(L_44);
			bool L_45 = L_44->___disconnectOnSign_7;
			if (!L_45)
			{
				goto IL_0163_1;
			}
		}
		{
			// await WalletConnect.ActiveSession.Disconnect();
			WalletConnectUnitySession_t67A5686043833C299E0A7C19513A48A63777ED52* L_46;
			L_46 = WalletConnect_get_ActiveSession_m71356F2E23A7220ABF8935C4D39763ECF83FEB57(NULL);
			NullCheck(L_46);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_47;
			L_47 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(7 /* System.Threading.Tasks.Task WalletConnectSharp.Core.WalletConnectProtocol::Disconnect() */, L_46);
			NullCheck(L_47);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_48;
			L_48 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_47, NULL);
			V_6 = L_48;
			bool L_49;
			L_49 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_6), NULL);
			if (L_49)
			{
				goto IL_015c_1;
			}
		}
		{
			int32_t L_50 = 1;
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51 = V_6;
			__this->___U3CU3Eu__2_5 = L_51;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_52 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m8B76CB2EEE11FE77A1312F56F85C5725F088A715(L_52, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833_m8B76CB2EEE11FE77A1312F56F85C5725F088A715_RuntimeMethod_var);
			goto IL_01a7;
		}

IL_013f_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_53 = __this->___U3CU3Eu__2_5;
			V_6 = L_53;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_54 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_55 = (-1);
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
		}

IL_015c_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_6), NULL);
		}

IL_0163_1:
		{
			// return eventData;
			WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_56 = __this->___U3CeventDataU3E5__2_3;
			V_2 = L_56;
			goto IL_018c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016c;
		}
		throw e;
	}

CATCH_016c:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeventDataU3E5__2_3 = (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeventDataU3E5__2_3), (void*)(WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*)NULL);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_57 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB(L_57, L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m648344720E8B6971D5F0ED84FF37AF6A53F075BB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01a7;
	}// end catch (depth: 1)

IL_018c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeventDataU3E5__2_3 = (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeventDataU3E5__2_3), (void*)(WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0*)NULL);
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_59 = (&__this->___U3CU3Et__builder_1);
		WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* L_60 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44(L_59, L_60, AsyncTaskMethodBuilder_1_SetResult_m205604A33C6CC5A54CA191BB18B76EB910EF2E44_RuntimeMethod_var);
	}

IL_01a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833*>(__this + _offset);
	U3CSignMessageU3Ed__12_MoveNext_m0FF4F94C2EA9C95A09FD66E410A434673DF60755(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Unity.Models.MessageSigner/<SignMessage>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignMessageU3Ed__12_SetStateMachine_mC51F982693FF5280BDBE8E3A46BDB3932F400788 (U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tE9F39BD18512F023FCAD10BB4FB8C02231EF6B62* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m8BBF7595BC44B1BFDAAC0F41B8F3E1502A6B1CAD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignMessageU3Ed__12_SetStateMachine_mC51F982693FF5280BDBE8E3A46BDB3932F400788_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignMessageU3Ed__12_t02DD71705D476FC5E9063D25FC9723F642C45833*>(__this + _offset);
	U3CSignMessageU3Ed__12_SetStateMachine_mC51F982693FF5280BDBE8E3A46BDB3932F400788(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Sprite WalletConnectSharp.Unity.Models.NFTTokenData::get_imageSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* NFTTokenData_get_imageSprite_m718706487DF03EA7727B00C2E1D2CF34A607F0B0 (NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_cache == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->____cache_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new IOException("You must run `yield return token.DownloadImageSprite()` first");
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14D0CC22C16B40FDD4513CCF61C98F5D95E9543F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NFTTokenData_get_imageSprite_m718706487DF03EA7727B00C2E1D2CF34A607F0B0_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return _cache;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->____cache_3;
		return L_3;
	}
}
// System.Collections.IEnumerator WalletConnectSharp.Unity.Models.NFTTokenData::DownloadImageSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NFTTokenData_DownloadImageSprite_m3CDFA6CE46C067B4A25A6F86E730B187ED6C6C60 (NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* L_0 = (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE*)il2cpp_codegen_object_new(U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadImageSpriteU3Ed__6__ctor_m0408F1D3DA012ABA38C43119B8BC8C7FD410F5C9(L_0, 0, NULL);
		U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WalletConnectSharp.Unity.Models.NFTTokenData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NFTTokenData__ctor_m72EF6F44F68046A8DF13EF721C1C28222EDAF6D3 (NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadImageSpriteU3Ed__6__ctor_m0408F1D3DA012ABA38C43119B8BC8C7FD410F5C9 (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadImageSpriteU3Ed__6_System_IDisposable_Dispose_m31981D0AFCD883D7A4CEAED84F950D14D3B7DCEC (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadImageSpriteU3Ed__6_MoveNext_mFCD86A041F025F220EDE82E2A23B48D721D0897A (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(image);
		NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___image_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequestTexture_GetTexture_m1FF74632D01EB259222C145B266A2CB56B70C553(L_5, NULL);
		__this->___U3CwwwU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)L_6);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8;
		L_8 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (www.isNetworkError)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(L_9, NULL);
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// throw new IOException(www.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_11, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_13 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadImageSpriteU3Ed__6_MoveNext_mFCD86A041F025F220EDE82E2A23B48D721D0897A_RuntimeMethod_var)));
	}

IL_006e:
	{
		// Texture2D imageTexture = DownloadHandlerTexture.GetContent(www);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwwwU3E5__2_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15;
		L_15 = DownloadHandlerTexture_GetContent_m3C0020931D97DCD43BC39A613C5066F340B22361(L_14, NULL);
		V_2 = L_15;
		// Rect rect = new Rect(0, 0, imageTexture.width, imageTexture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), (0.0f), (0.0f), ((float)L_17), ((float)L_19), NULL);
		// Sprite imageSprite = Sprite.Create(imageTexture, rect, new Vector2(0.5f, 0.5f), 100);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23;
		L_23 = Sprite_Create_m1660F4117168DDEF2698FEAF80595DDBE0F9216D(L_20, L_21, L_22, (100.0f), NULL);
		V_4 = L_23;
		// _cache = imageSprite;
		NFTTokenData_t56BE7E272133705DEA6EBA3DB6F3A67F5B11BCCB* L_24 = V_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = V_4;
		NullCheck(L_24);
		L_24->____cache_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____cache_3), (void*)L_25);
		// }
		return (bool)0;
	}
}
// System.Object WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadImageSpriteU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m343FF5CB3EFBC77B68590BC1C2BA9D065290D4E8 (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadImageSpriteU3Ed__6_System_Collections_IEnumerator_Reset_mC22618198057A273525013712A5BB39D6C60355B (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadImageSpriteU3Ed__6_System_Collections_IEnumerator_Reset_mC22618198057A273525013712A5BB39D6C60355B_RuntimeMethod_var)));
	}
}
// System.Object WalletConnectSharp.Unity.Models.NFTTokenData/<DownloadImageSprite>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadImageSpriteU3Ed__6_System_Collections_IEnumerator_get_Current_mE5ABFD17B2DADAC75570412261ED49C840939A58 (U3CDownloadImageSpriteU3Ed__6_tEF1660CC06B63E2AA75B5567268236F357B2DACE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// WalletConnectSharp.Unity.Models.MessageSigner WalletConnectSharp.Unity.Models.WCMessageSigned::get_Signer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* WCMessageSigned_get_Signer_mA585F53E4F6AD3959FC5E55E2C993D1DDCD3B61C (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, const RuntimeMethod* method) 
{
	{
		// public MessageSigner Signer { get; private set; }
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0 = __this->___U3CSignerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::set_Signer(WalletConnectSharp.Unity.Models.MessageSigner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCMessageSigned_set_Signer_m60075B6010A2AD49F27A65DFDEB52781C50C3055 (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___value0, const RuntimeMethod* method) 
{
	{
		// public MessageSigner Signer { get; private set; }
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0 = ___value0;
		__this->___U3CSignerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String WalletConnectSharp.Unity.Models.WCMessageSigned::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WCMessageSigned_get_Message_m31B7AA306D0F3EA524B434E370BC0800113D9DE6 (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, const RuntimeMethod* method) 
{
	{
		// return Signer.messageToSign;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0;
		L_0 = WCMessageSigned_get_Signer_mA585F53E4F6AD3959FC5E55E2C993D1DDCD3B61C_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___messageToSign_4;
		return L_1;
	}
}
// System.String WalletConnectSharp.Unity.Models.WCMessageSigned::get_SignedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WCMessageSigned_get_SignedMessage_mC723DD6549BFB5CFAA5FEA11021D0750F3324E5E (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, const RuntimeMethod* method) 
{
	{
		// public string SignedMessage { get; private set; }
		String_t* L_0 = __this->___U3CSignedMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::set_SignedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCMessageSigned_set_SignedMessage_m86B88AB5DDFDE23222B645441C9E224B523BD56E (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SignedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSignedMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignedMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void WalletConnectSharp.Unity.Models.WCMessageSigned::.ctor(WalletConnectSharp.Unity.Models.MessageSigner,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCMessageSigned__ctor_mB872C71E5CC40FE217CB6E4497E01D46A854C4A5 (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___signer0, String_t* ___signedMessage1, const RuntimeMethod* method) 
{
	{
		// public WCMessageSigned(MessageSigner signer, string signedMessage)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Signer = signer;
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0 = ___signer0;
		WCMessageSigned_set_Signer_m60075B6010A2AD49F27A65DFDEB52781C50C3055_inline(__this, L_0, NULL);
		// SignedMessage = signedMessage;
		String_t* L_1 = ___signedMessage1;
		WCMessageSigned_set_SignedMessage_m86B88AB5DDFDE23222B645441C9E224B523BD56E_inline(__this, L_1, NULL);
		// }
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
// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions::CreateProviderWithInfura(WalletConnectSharp.Core.WalletConnectProtocol,System.String,System.String,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnectNEthereumExtensions_CreateProviderWithInfura_m5214DF62157EF2094988C2243F0EA10A078EA496 (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___protocol0, String_t* ___infruaId1, String_t* ___network2, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authenticationHeader3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CF1C83199414A658EE26200129D72A52EE2A5FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string url = "https://" + network + ".infura.io/v3/" + infruaId;
		String_t* L_0 = ___network2;
		String_t* L_1 = ___infruaId1;
		String_t* L_2;
		L_2 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_0, _stringLiteral3CF1C83199414A658EE26200129D72A52EE2A5FD, L_1, NULL);
		V_0 = L_2;
		// return CreateProvider(protocol, new Uri(url), authenticationHeader);
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_3 = ___protocol0;
		String_t* L_4 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_5, L_4, NULL);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_6 = ___authenticationHeader3;
		RuntimeObject* L_7;
		L_7 = WalletConnectNEthereumExtensions_CreateProvider_m77A98F3A971732A25E14D3B008ADEE9875BFB79A(L_3, L_5, L_6, NULL);
		return L_7;
	}
}
// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions::CreateProvider(WalletConnectSharp.Core.WalletConnectProtocol,System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnectNEthereumExtensions_CreateProvider_m77A98F3A971732A25E14D3B008ADEE9875BFB79A (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___protocol0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url1, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___authenticationHeader2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateProvider(protocol,
		//     new RpcClient(url, authenticationHeader)
		// );
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_0 = ___protocol0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___url1;
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___authenticationHeader2;
		RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96* L_3 = (RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96*)il2cpp_codegen_object_new(RpcClient_tFBEB659183234DEB7351CE25C7E9A0536D542C96_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RpcClient__ctor_m5505EAC86E35B8A1D9E75E5B5DD51227BD806259(L_3, L_1, L_2, (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)NULL, (HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD*)NULL, (RuntimeObject*)NULL, NULL);
		RuntimeObject* L_4;
		L_4 = WalletConnectNEthereumExtensions_CreateProvider_mF8B03DFD892699923CC8E8D190F911ABAAC6F944(L_0, L_3, NULL);
		return L_4;
	}
}
// Nethereum.JsonRpc.Client.IClient WalletConnectSharp.NEthereum.WalletConnectNEthereumExtensions::CreateProvider(WalletConnectSharp.Core.WalletConnectProtocol,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WalletConnectNEthereumExtensions_CreateProvider_mF8B03DFD892699923CC8E8D190F911ABAAC6F944 (WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___protocol0, RuntimeObject* ___readClient1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!protocol.Connected)
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_0 = ___protocol0;
		NullCheck(L_0);
		bool L_1;
		L_1 = WalletConnectProtocol_get_Connected_mD9C98FC48FD52B1C155A4A68FF8ECB1B7AB77D3C(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("No connection has been made yet!");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BD763F104D3D29B952CFDC0BB5244CEC16CD953)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WalletConnectNEthereumExtensions_CreateProvider_mF8B03DFD892699923CC8E8D190F911ABAAC6F944_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new FallbackProvider(
		//     new WalletConnectClient(protocol),
		//     readClient
		// );
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_3 = ___protocol0;
		WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_4 = (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29*)il2cpp_codegen_object_new(WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WalletConnectClient__ctor_m196DD3DDF9ED07F9741F9A2F13142F7D9540358B(L_4, L_3, NULL);
		RuntimeObject* L_5 = ___readClient1;
		FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* L_6 = (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20*)il2cpp_codegen_object_new(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FallbackProvider__ctor_m162BA48469B4704D147B30D4148791BCC39B5053(L_6, L_4, L_5, NULL);
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
// System.Void WalletConnectSharp.NEthereum.Client.FallbackProvider::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackProvider__ctor_m162BA48469B4704D147B30D4148791BCC39B5053 (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, RuntimeObject* ___primary0, RuntimeObject* ___fallback1, const RuntimeMethod* method) 
{
	{
		// public FallbackProvider(IClient primary, IClient fallback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this._signer = primary;
		RuntimeObject* L_0 = ___primary0;
		__this->____signer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signer_2), (void*)L_0);
		// this._fallback = fallback;
		RuntimeObject* L_1 = ___fallback1;
		__this->____fallback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fallback_1), (void*)L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.NEthereum.Client.FallbackProvider::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FallbackProvider_SendRequestAsync_m52AB92D4A0399A16F55C742570A1366E27390549 (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* ___request0, String_t* ___route1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ValidMethods.Contains(request.Method) ? _signer.SendRequestAsync(request, route) : _fallback.SendRequestAsync(request, route);
		il2cpp_codegen_runtime_class_init_inline(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_StaticFields*)il2cpp_codegen_static_fields_for(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var))->___ValidMethods_0;
		RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* L_1 = ___request0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = RpcRequest_get_Method_m30837F6ECC3F08D06718AB89974F270C3D7D7C0B_inline(L_1, NULL);
		bool L_3;
		L_3 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_0, L_2, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = __this->____fallback_1;
		RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* L_5 = ___request0;
		String_t* L_6 = ___route1;
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = InterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task Nethereum.JsonRpc.Client.IBaseClient::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String) */, IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		return L_7;
	}

IL_0020:
	{
		RuntimeObject* L_8 = __this->____signer_2;
		RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* L_9 = ___request0;
		String_t* L_10 = ___route1;
		NullCheck(L_8);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = InterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task Nethereum.JsonRpc.Client.IBaseClient::SendRequestAsync(Nethereum.JsonRpc.Client.RpcRequest,System.String) */, IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.NEthereum.Client.FallbackProvider::SendRequestAsync(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FallbackProvider_SendRequestAsync_m2F730832C2560F1AE66131F08EDDC0EDF5E79E60 (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, String_t* ___method0, String_t* ___route1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___paramList2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ValidMethods.Contains(method) ? _signer.SendRequestAsync(method, route, paramList) : _fallback.SendRequestAsync(method, route, paramList);
		il2cpp_codegen_runtime_class_init_inline(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_StaticFields*)il2cpp_codegen_static_fields_for(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var))->___ValidMethods_0;
		String_t* L_1 = ___method0;
		bool L_2;
		L_2 = Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45((RuntimeObject*)L_0, L_1, Enumerable_Contains_TisString_t_mB597D95B9D1FDF1ACA18AC4907D6EA8850879D45_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = __this->____fallback_1;
		String_t* L_4 = ___method0;
		String_t* L_5 = ___route1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___paramList2;
		NullCheck(L_3);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(3 /* System.Threading.Tasks.Task Nethereum.JsonRpc.Client.IBaseClient::SendRequestAsync(System.String,System.String,System.Object[]) */, IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
		return L_7;
	}

IL_001c:
	{
		RuntimeObject* L_8 = __this->____signer_2;
		String_t* L_9 = ___method0;
		String_t* L_10 = ___route1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___paramList2;
		NullCheck(L_8);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
		L_12 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(3 /* System.Threading.Tasks.Task Nethereum.JsonRpc.Client.IBaseClient::SendRequestAsync(System.String,System.String,System.Object[]) */, IBaseClient_t44F5B794715CB13020BAA6B7A778B2A8B16AD6D6_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// Nethereum.JsonRpc.Client.RequestInterceptor WalletConnectSharp.NEthereum.Client.FallbackProvider::get_OverridingRequestInterceptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* FallbackProvider_get_OverridingRequestInterceptor_m9C6D785A54955909CE692B35C77C35051243B8DE (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, const RuntimeMethod* method) 
{
	{
		// public RequestInterceptor OverridingRequestInterceptor { get; set; }
		RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* L_0 = __this->___U3COverridingRequestInterceptorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void WalletConnectSharp.NEthereum.Client.FallbackProvider::set_OverridingRequestInterceptor(Nethereum.JsonRpc.Client.RequestInterceptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackProvider_set_OverridingRequestInterceptor_m37F38DFA454E778A421650D0C5280B713EA28A10 (FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20* __this, RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* ___value0, const RuntimeMethod* method) 
{
	{
		// public RequestInterceptor OverridingRequestInterceptor { get; set; }
		RequestInterceptor_t01C5D7F9F7A0907EB59A8F05CE67A8D386518A41* L_0 = ___value0;
		__this->___U3COverridingRequestInterceptorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COverridingRequestInterceptorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void WalletConnectSharp.NEthereum.Client.FallbackProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackProvider__cctor_m433DFFDB3146321BDB4B4DCF81C8F7ABEEF62278 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string[] ValidMethods = WalletConnectProtocol.SigningMethods;
		il2cpp_codegen_runtime_class_init_inline(WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_StaticFields*)il2cpp_codegen_static_fields_for(WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C_il2cpp_TypeInfo_var))->___SigningMethods_0;
		((FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_StaticFields*)il2cpp_codegen_static_fields_for(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var))->___ValidMethods_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_StaticFields*)il2cpp_codegen_static_fields_for(FallbackProvider_tD96ACEE4033E8857ED2BA8394B4FDAC0E6C63B20_il2cpp_TypeInfo_var))->___ValidMethods_0), (void*)L_0);
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
// WalletConnectSharp.Core.WalletConnectProtocol WalletConnectSharp.NEthereum.Client.WalletConnectClient::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* WalletConnectClient_get_Provider_mD7CFBCDA1C137CADDDDE24BF0463E99F3F72DAC2 (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, const RuntimeMethod* method) 
{
	{
		// public WalletConnectProtocol Provider { get; }
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_0 = __this->___U3CProviderU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient::.ctor(WalletConnectSharp.Core.WalletConnectProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WalletConnectClient__ctor_m196DD3DDF9ED07F9741F9A2F13142F7D9540358B (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WalletConnectClient(WalletConnectProtocol provider)
		il2cpp_codegen_runtime_class_init_inline(ClientBase_t85ABBD462642B1C35AA1B04305FB9912133E9F13_il2cpp_TypeInfo_var);
		ClientBase__ctor_m4599D81890906D8474E0A903CE5A0235CECAB0AA(__this, NULL);
		// this.Provider = provider;
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_0 = ___provider0;
		__this->___U3CProviderU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField_3), (void*)L_0);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> WalletConnectSharp.NEthereum.Client.WalletConnectClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* WalletConnectClient_SendAsync_mD7C37A64F7212D6E227E0D53B4A3616C7D071B38 (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* ___message0, String_t* ___route1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m001CFFC6CD8BE812321414602D6025B30E6AE9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mCE59A75369B47696B09F81CE1E119E33BCB23896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m787F0DABACF0A880D29205420FE2208EE558820F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m001CFFC6CD8BE812321414602D6025B30E6AE9DE(AsyncTaskMethodBuilder_1_Create_m001CFFC6CD8BE812321414602D6025B30E6AE9DE_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_1 = ___message0;
		(&V_0)->___message_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___message_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mCE59A75369B47696B09F81CE1E119E33BCB23896(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mCE59A75369B47696B09F81CE1E119E33BCB23896_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m787F0DABACF0A880D29205420FE2208EE558820F(L_3, AsyncTaskMethodBuilder_1_get_Task_m787F0DABACF0A880D29205420FE2208EE558820F_RuntimeMethod_var);
		return L_4;
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
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m307E64BE2748DC6728D02B7CC70EFAD83B6FF282 (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<>c__DisplayClass5_0::<SendAsync>b__0(System.Object,WalletConnectSharp.Core.Events.GenericEvent`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CSendAsyncU3Eb__0_m826DB0F55E6CDF958D51A7B5DA758EA5C3727BA2 (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* __this, RuntimeObject* ___sender0, GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericEvent_1_get_Response_m092D0BEE2BE8450C892D2C59F7A15934EEA4A6A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA7197B5674A493D0DE81B0D4F0551EB4943D1CE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventCompleted.SetResult(args.Response);
		TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* L_0 = __this->___eventCompleted_0;
		GenericEvent_1_t5B92B075A92BB0E2B88B5C42BFF4785633E6D55F* L_1 = ___args1;
		NullCheck(L_1);
		RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* L_2;
		L_2 = GenericEvent_1_get_Response_m092D0BEE2BE8450C892D2C59F7A15934EEA4A6A4_inline(L_1, GenericEvent_1_get_Response_m092D0BEE2BE8450C892D2C59F7A15934EEA4A6A4_RuntimeMethod_var);
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mA7197B5674A493D0DE81B0D4F0551EB4943D1CE0(L_0, L_2, TaskCompletionSource_1_SetResult_mA7197B5674A493D0DE81B0D4F0551EB4943D1CE0_RuntimeMethod_var);
		// });
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
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__5_MoveNext_m8ED56AC81DC5F2B7153942063B306D7957586042 (U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mAF41A0856EB4AF02F17762FAF431BC048611B5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m975E85E011F6D20D6A6E36588AD57DD8B2741FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m6C2817241D8745F94E5FF612EF1E4FEF61A2B68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventDelegator_ListenForGenericResponse_TisRpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA_m6B50FFD5CF9DE5FC141A13605F99F1E1D1D0EF90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mBD15AF25F8380E4A25CB246082E940029E1584FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m7DCAFA088811692A51071CA44AF85C49EBFD7FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mC57280D61E6B386CF1AB22FCF88ACFD56009716D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mE958505F35771F48CB8256E16F8B96D5E374C891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m35DF66167391E888B07562BE442E87CCE67CD923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CSendAsyncU3Eb__0_m826DB0F55E6CDF958D51A7B5DA758EA5C3727BA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectProtocol_SendRequest_TisRpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_m1CEC550E53092A9E7403C3C2FE837CFE77F78479_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* V_1 = NULL;
	RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* V_2 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* V_6 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_015a_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_01bf_1;
			}
		}
		{
			U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* L_4 = (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			U3CU3Ec__DisplayClass5_0__ctor_m307E64BE2748DC6728D02B7CC70EFAD83B6FF282(L_4, NULL);
			__this->___U3CU3E8__1_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
			// _id += 1;
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_5 = V_1;
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_6 = V_1;
			NullCheck(L_6);
			int64_t L_7 = L_6->____id_2;
			NullCheck(L_5);
			L_5->____id_2 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)1)));
			// var mapParameters = message.RawParameters as Dictionary<string, object>;
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_8 = __this->___message_3;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = RpcRequestMessage_get_RawParameters_m6B2BBD691CE5952215954BB13BE1D5EA811A12B0_inline(L_8, NULL);
			V_3 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_9, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
			// var arrayParameters = message.RawParameters as object[];
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_10 = __this->___message_3;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = RpcRequestMessage_get_RawParameters_m6B2BBD691CE5952215954BB13BE1D5EA811A12B0_inline(L_10, NULL);
			V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_11, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
			// var rawParameters = message.RawParameters;
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_12 = __this->___message_3;
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = RpcRequestMessage_get_RawParameters_m6B2BBD691CE5952215954BB13BE1D5EA811A12B0_inline(L_12, NULL);
			V_5 = L_13;
			// if (mapParameters != null)
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = V_3;
			if (!L_14)
			{
				goto IL_0088_1;
			}
		}
		{
			// rpcRequestMessage = new RpcRequestMessage(_id, message.Method, mapParameters);
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_15 = V_1;
			NullCheck(L_15);
			int64_t L_16 = L_15->____id_2;
			int64_t L_17 = L_16;
			RuntimeObject* L_18 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_17);
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_19 = __this->___message_3;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = RpcRequestMessage_get_Method_m783FBE1A1B47B3D11D3CC6D561B94B98C2FD812F_inline(L_19, NULL);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = V_3;
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_22 = (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6*)il2cpp_codegen_object_new(RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			RpcRequestMessage__ctor_m2648ED11F5885089D08DBAAAAE0B6392AB80334D(L_22, L_18, L_20, L_21, NULL);
			V_6 = L_22;
			goto IL_00d5_1;
		}

IL_0088_1:
		{
			// else if (arrayParameters != null)
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_4;
			if (!L_23)
			{
				goto IL_00ad_1;
			}
		}
		{
			// rpcRequestMessage = new RpcRequestMessage(_id, message.Method, arrayParameters);
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_24 = V_1;
			NullCheck(L_24);
			int64_t L_25 = L_24->____id_2;
			int64_t L_26 = L_25;
			RuntimeObject* L_27 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_26);
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_28 = __this->___message_3;
			NullCheck(L_28);
			String_t* L_29;
			L_29 = RpcRequestMessage_get_Method_m783FBE1A1B47B3D11D3CC6D561B94B98C2FD812F_inline(L_28, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_4;
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_31 = (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6*)il2cpp_codegen_object_new(RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			RpcRequestMessage__ctor_mB447FDC8941862A12AA56D0FEB6FD54F461B2DC9(L_31, L_27, L_29, L_30, NULL);
			V_6 = L_31;
			goto IL_00d5_1;
		}

IL_00ad_1:
		{
			// rpcRequestMessage = new RpcRequestMessage(_id, message.Method, rawParameters);
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_32 = V_1;
			NullCheck(L_32);
			int64_t L_33 = L_32->____id_2;
			int64_t L_34 = L_33;
			RuntimeObject* L_35 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_34);
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_36 = __this->___message_3;
			NullCheck(L_36);
			String_t* L_37;
			L_37 = RpcRequestMessage_get_Method_m783FBE1A1B47B3D11D3CC6D561B94B98C2FD812F_inline(L_36, NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_38;
			RuntimeObject* L_40 = V_5;
			NullCheck(L_39);
			ArrayElementTypeCheck (L_39, L_40);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_40);
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_41 = (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6*)il2cpp_codegen_object_new(RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_il2cpp_TypeInfo_var);
			NullCheck(L_41);
			RpcRequestMessage__ctor_mB447FDC8941862A12AA56D0FEB6FD54F461B2DC9(L_41, L_35, L_37, L_39, NULL);
			V_6 = L_41;
		}

IL_00d5_1:
		{
			// TaskCompletionSource<RpcResponseMessage> eventCompleted = new TaskCompletionSource<RpcResponseMessage>(TaskCreationOptions.None);
			U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* L_42 = __this->___U3CU3E8__1_4;
			TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* L_43 = (TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764*)il2cpp_codegen_object_new(TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			TaskCompletionSource_1__ctor_mC57280D61E6B386CF1AB22FCF88ACFD56009716D(L_43, 0, TaskCompletionSource_1__ctor_mC57280D61E6B386CF1AB22FCF88ACFD56009716D_RuntimeMethod_var);
			NullCheck(L_42);
			L_42->___eventCompleted_0 = L_43;
			Il2CppCodeGenWriteBarrier((void**)(&L_42->___eventCompleted_0), (void*)L_43);
			// Provider.Events.ListenForGenericResponse<RpcResponseMessage>(rpcRequestMessage.Id, (sender, args) =>
			// {
			//     eventCompleted.SetResult(args.Response);
			// });
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_44 = V_1;
			NullCheck(L_44);
			WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_45;
			L_45 = WalletConnectClient_get_Provider_mD7CFBCDA1C137CADDDDE24BF0463E99F3F72DAC2_inline(L_44, NULL);
			NullCheck(L_45);
			EventDelegator_t341DB86F9B6B2134DD5FF58339D147A7A7E54820* L_46 = L_45->___Events_1;
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_47 = V_6;
			NullCheck(L_47);
			RuntimeObject* L_48;
			L_48 = RpcRequestMessage_get_Id_m91872CA0083E45AA8F39BF968A95A34A45FCF11A_inline(L_47, NULL);
			U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* L_49 = __this->___U3CU3E8__1_4;
			EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A* L_50 = (EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A*)il2cpp_codegen_object_new(EventHandler_1_tCB799ED92DC10A30F6E34E484DF89E5E40D9517A_il2cpp_TypeInfo_var);
			NullCheck(L_50);
			EventHandler_1__ctor_m1EEE756D07F6CCADA6948E9CA79221607A223EDB(L_50, L_49, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CSendAsyncU3Eb__0_m826DB0F55E6CDF958D51A7B5DA758EA5C3727BA2_RuntimeMethod_var), NULL);
			NullCheck(L_46);
			EventDelegator_ListenForGenericResponse_TisRpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA_m6B50FFD5CF9DE5FC141A13605F99F1E1D1D0EF90(L_46, L_48, L_50, EventDelegator_ListenForGenericResponse_TisRpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA_m6B50FFD5CF9DE5FC141A13605F99F1E1D1D0EF90_RuntimeMethod_var);
			// await Provider.SendRequest(rpcRequestMessage);
			WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* L_51 = V_1;
			NullCheck(L_51);
			WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_52;
			L_52 = WalletConnectClient_get_Provider_mD7CFBCDA1C137CADDDDE24BF0463E99F3F72DAC2_inline(L_51, NULL);
			RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* L_53 = V_6;
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
			Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_54 = V_8;
			NullCheck(L_52);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_55;
			L_55 = WalletConnectProtocol_SendRequest_TisRpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_m1CEC550E53092A9E7403C3C2FE837CFE77F78479(L_52, L_53, (String_t*)NULL, L_54, WalletConnectProtocol_SendRequest_TisRpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6_m1CEC550E53092A9E7403C3C2FE837CFE77F78479_RuntimeMethod_var);
			NullCheck(L_55);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_56;
			L_56 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_55, NULL);
			V_7 = L_56;
			bool L_57;
			L_57 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_7), NULL);
			if (L_57)
			{
				goto IL_0177_1;
			}
		}
		{
			int32_t L_58 = 0;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_59 = V_7;
			__this->___U3CU3Eu__1_5 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_60 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m975E85E011F6D20D6A6E36588AD57DD8B2741FB3(L_60, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_m975E85E011F6D20D6A6E36588AD57DD8B2741FB3_RuntimeMethod_var);
			goto IL_0221;
		}

IL_015a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_61 = __this->___U3CU3Eu__1_5;
			V_7 = L_61;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_62 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_0177_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_7), NULL);
			// return await eventCompleted.Task;
			U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D* L_64 = __this->___U3CU3E8__1_4;
			NullCheck(L_64);
			TaskCompletionSource_1_t549CE2D3C4631A387156E6E8D768F149387FE764* L_65 = L_64->___eventCompleted_0;
			NullCheck(L_65);
			Task_1_tF6B089E5B72412DC0B1B476469363F1CA00195FC* L_66;
			L_66 = TaskCompletionSource_1_get_Task_mE958505F35771F48CB8256E16F8B96D5E374C891_inline(L_65, TaskCompletionSource_1_get_Task_mE958505F35771F48CB8256E16F8B96D5E374C891_RuntimeMethod_var);
			NullCheck(L_66);
			TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F L_67;
			L_67 = Task_1_GetAwaiter_m35DF66167391E888B07562BE442E87CCE67CD923(L_66, Task_1_GetAwaiter_m35DF66167391E888B07562BE442E87CCE67CD923_RuntimeMethod_var);
			V_9 = L_67;
			bool L_68;
			L_68 = TaskAwaiter_1_get_IsCompleted_m7DCAFA088811692A51071CA44AF85C49EBFD7FC5((&V_9), TaskAwaiter_1_get_IsCompleted_m7DCAFA088811692A51071CA44AF85C49EBFD7FC5_RuntimeMethod_var);
			if (L_68)
			{
				goto IL_01dc_1;
			}
		}
		{
			int32_t L_69 = 1;
			V_0 = L_69;
			__this->___U3CU3E1__state_0 = L_69;
			TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F L_70 = V_9;
			__this->___U3CU3Eu__2_6 = L_70;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_71 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mAF41A0856EB4AF02F17762FAF431BC048611B5BA(L_71, (&V_9), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F_TisU3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE_mAF41A0856EB4AF02F17762FAF431BC048611B5BA_RuntimeMethod_var);
			goto IL_0221;
		}

IL_01bf_1:
		{
			TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F L_72 = __this->___U3CU3Eu__2_6;
			V_9 = L_72;
			TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F* L_73 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_73, sizeof(TaskAwaiter_1_t76A9EB6D26E53B9413E621EE8AA0D175A59A458F));
			int32_t L_74 = (-1);
			V_0 = L_74;
			__this->___U3CU3E1__state_0 = L_74;
		}

IL_01dc_1:
		{
			RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* L_75;
			L_75 = TaskAwaiter_1_GetResult_mBD15AF25F8380E4A25CB246082E940029E1584FD((&V_9), TaskAwaiter_1_GetResult_mBD15AF25F8380E4A25CB246082E940029E1584FD_RuntimeMethod_var);
			V_2 = L_75;
			goto IL_0206;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e6;
		}
		throw e;
	}

CATCH_01e6:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D*)NULL);
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_76 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_77 = V_10;
		AsyncTaskMethodBuilder_1_SetException_m2FCA9EC8CAA996E5CB691158C1E40D90635DCBB3(L_76, L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m2FCA9EC8CAA996E5CB691158C1E40D90635DCBB3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0221;
	}// end catch (depth: 1)

IL_0206:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass5_0_tD16DA8EDC8517590789D27A5AD71BC4D6B053C3D*)NULL);
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_78 = (&__this->___U3CU3Et__builder_1);
		RpcResponseMessage_tE61353DE6D7F12ECE6DB8CBEE21E9BD2324458DA* L_79 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m6C2817241D8745F94E5FF612EF1E4FEF61A2B68A(L_78, L_79, AsyncTaskMethodBuilder_1_SetResult_m6C2817241D8745F94E5FF612EF1E4FEF61A2B68A_RuntimeMethod_var);
	}

IL_0221:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__5_MoveNext_m8ED56AC81DC5F2B7153942063B306D7957586042_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE*>(__this + _offset);
	U3CSendAsyncU3Ed__5_MoveNext_m8ED56AC81DC5F2B7153942063B306D7957586042(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.NEthereum.Client.WalletConnectClient/<SendAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendAsyncU3Ed__5_SetStateMachine_m84B9A47ADB7117BCE9BA3FE4F7175437B1A744BF (U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mC94DBB72A68CF73183990F32B8A232898A0CC2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t5A2FAD847F0705739C90E6EDDC108DA79B0C7ABC* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mC94DBB72A68CF73183990F32B8A232898A0CC2DA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mC94DBB72A68CF73183990F32B8A232898A0CC2DA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendAsyncU3Ed__5_SetStateMachine_m84B9A47ADB7117BCE9BA3FE4F7175437B1A744BF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendAsyncU3Ed__5_t68E86236A53121DAFC50894068434B6B6EA9A2DE*>(__this + _offset);
	U3CSendAsyncU3Ed__5_SetStateMachine_m84B9A47ADB7117BCE9BA3FE4F7175437B1A744BF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* WalletConnect_get_SupportedWallets_mBFC55B2EE181537CC68A0657AEF40DD0F25AFC1B_inline (WalletConnect_t5B9625CC4D9261DA716C0A4A2E1A523316EE4E63* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Dictionary_2_tF4DEA388F2C70EA733C7CB268F4D387550D7770B* L_0 = __this->___U3CSupportedWalletsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* WalletConnectSession_get_Accounts_m371D32C25213EE6AF0883906A4BC1C56339EEA99_inline (WalletConnectSession_t5615CE17232F822149607D4A9ABC36AD2D43B002* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Accounts { get; private set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CAccountsU3Ek__BackingField_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* WCMessageSigned_get_Signer_mA585F53E4F6AD3959FC5E55E2C993D1DDCD3B61C_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, const RuntimeMethod* method) 
{
	{
		// public MessageSigner Signer { get; private set; }
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0 = __this->___U3CSignerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WCMessageSigned_set_Signer_m60075B6010A2AD49F27A65DFDEB52781C50C3055_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* ___value0, const RuntimeMethod* method) 
{
	{
		// public MessageSigner Signer { get; private set; }
		MessageSigner_tF298FBD9DEFFF6D9AC544A16593642D6FC243A7C* L_0 = ___value0;
		__this->___U3CSignerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WCMessageSigned_set_SignedMessage_m86B88AB5DDFDE23222B645441C9E224B523BD56E_inline (WCMessageSigned_t886DD7B4651C313746F31F3165F72B0D56FC15F0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SignedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CSignedMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignedMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequest_get_Method_m30837F6ECC3F08D06718AB89974F270C3D7D7C0B_inline (RpcRequest_t5FD7946605DA961E0AF5427C39C81C95B8F17647* __this, const RuntimeMethod* method) 
{
	{
		// public string Method { get; private set; }
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_RawParameters_m6B2BBD691CE5952215954BB13BE1D5EA811A12B0_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) 
{
	{
		// public object RawParameters { get; private set; }
		RuntimeObject* L_0 = __this->___U3CRawParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RpcRequestMessage_get_Method_m783FBE1A1B47B3D11D3CC6D561B94B98C2FD812F_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) 
{
	{
		// public string Method { get; private set; }
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* WalletConnectClient_get_Provider_mD7CFBCDA1C137CADDDDE24BF0463E99F3F72DAC2_inline (WalletConnectClient_t1C45D99F8E13E6375BDB57A1AD6BDF405856EA29* __this, const RuntimeMethod* method) 
{
	{
		// public WalletConnectProtocol Provider { get; }
		WalletConnectProtocol_t1C320C1BF0F7D0ED3FBA71C3CDAEA623E30DE09C* L_0 = __this->___U3CProviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RpcRequestMessage_get_Id_m91872CA0083E45AA8F39BF968A95A34A45FCF11A_inline (RpcRequestMessage_tF41F67F372047663CE58D23AA1ACD07EA85E51D6* __this, const RuntimeMethod* method) 
{
	{
		// public object Id { get; private set; }
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GenericEvent_1_get_Response_m5F46EDCD7C5C1FA4642A1D4CF3F29F797C3238B0_gshared_inline (GenericEvent_1_t09B2460DA94D8C8A387BAF50C33B3A55B912B850* __this, const RuntimeMethod* method) 
{
	{
		// public T Response { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResponseU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
