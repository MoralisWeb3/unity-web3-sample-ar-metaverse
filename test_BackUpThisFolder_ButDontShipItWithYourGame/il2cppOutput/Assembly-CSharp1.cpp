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

// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<UnityEngine.Rect>
struct Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Action`1<UnityEngine.Vector4>
struct Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF;
// System.Collections.Generic.List`1<Pixelplacement.Spline/SplineReparam>
struct List_1_tBAE6FD5F824882F2802576C24FC9E2F94619FB54;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// Pixelplacement.SplineAnchor[]
struct SplineAnchorU5BU5D_t4BD6122203498ED7A7647BA78A618374BA57BEE1;
// Pixelplacement.SplineFollower[]
struct SplineFollowerU5BU5D_tC61E0BF82AE6EAC8052517C25E508134646E5310;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Pixelplacement.TweenSystem.Rotation
struct Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B;
// Pixelplacement.TweenSystem.ShaderColor
struct ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303;
// Pixelplacement.TweenSystem.ShaderFloat
struct ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1;
// Pixelplacement.TweenSystem.ShaderInt
struct ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8;
// Pixelplacement.TweenSystem.ShaderVector
struct ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B;
// Pixelplacement.TweenSystem.ShakePosition
struct ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542;
// Pixelplacement.TweenSystem.Size
struct Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E;
// Pixelplacement.Spline
struct Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7;
// Pixelplacement.TweenSystem.SplinePercentage
struct SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Pixelplacement.TweenSystem.SpriteRendererColor
struct SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Pixelplacement.TweenSystem.TextColor
struct TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// Pixelplacement.TweenSystem.TextMeshColor
struct TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Pixelplacement.TweenSystem.TweenBase
struct TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Pixelplacement.TweenSystem.ValueColor
struct ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3;
// Pixelplacement.TweenSystem.ValueFloat
struct ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3;
// Pixelplacement.TweenSystem.ValueInt
struct ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA;
// Pixelplacement.TweenSystem.ValueRect
struct ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD;
// Pixelplacement.TweenSystem.ValueVector2
struct ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70;
// Pixelplacement.TweenSystem.ValueVector3
struct ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D;
// Pixelplacement.TweenSystem.ValueVector4
struct ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Pixelplacement.TweenSystem.Volume
struct Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// Pixelplacement.TweenSystem.TweenBase
struct TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2  : public RuntimeObject
{
	// System.Int32 Pixelplacement.TweenSystem.TweenBase::targetInstanceID
	int32_t ___targetInstanceID_0;
	// Pixelplacement.Tween/TweenType Pixelplacement.TweenSystem.TweenBase::tweenType
	int32_t ___tweenType_1;
	// Pixelplacement.Tween/TweenStatus Pixelplacement.TweenSystem.TweenBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// System.Single Pixelplacement.TweenSystem.TweenBase::<Duration>k__BackingField
	float ___U3CDurationU3Ek__BackingField_3;
	// UnityEngine.AnimationCurve Pixelplacement.TweenSystem.TweenBase::<Curve>k__BackingField
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___U3CCurveU3Ek__BackingField_4;
	// UnityEngine.Keyframe[] Pixelplacement.TweenSystem.TweenBase::<CurveKeys>k__BackingField
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___U3CCurveKeysU3Ek__BackingField_5;
	// System.Boolean Pixelplacement.TweenSystem.TweenBase::<ObeyTimescale>k__BackingField
	bool ___U3CObeyTimescaleU3Ek__BackingField_6;
	// System.Action Pixelplacement.TweenSystem.TweenBase::<StartCallback>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CStartCallbackU3Ek__BackingField_7;
	// System.Action Pixelplacement.TweenSystem.TweenBase::<CompleteCallback>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CCompleteCallbackU3Ek__BackingField_8;
	// System.Single Pixelplacement.TweenSystem.TweenBase::<Delay>k__BackingField
	float ___U3CDelayU3Ek__BackingField_9;
	// Pixelplacement.Tween/LoopType Pixelplacement.TweenSystem.TweenBase::<LoopType>k__BackingField
	int32_t ___U3CLoopTypeU3Ek__BackingField_10;
	// System.Single Pixelplacement.TweenSystem.TweenBase::<Percentage>k__BackingField
	float ___U3CPercentageU3Ek__BackingField_11;
	// System.Single Pixelplacement.TweenSystem.TweenBase::elapsedTime
	float ___elapsedTime_12;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// Pixelplacement.TweenSystem.ShaderFloat
struct ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Single Pixelplacement.TweenSystem.ShaderFloat::<EndValue>k__BackingField
	float ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Material Pixelplacement.TweenSystem.ShaderFloat::_target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____target_14;
	// System.Single Pixelplacement.TweenSystem.ShaderFloat::_start
	float ____start_15;
	// System.String Pixelplacement.TweenSystem.ShaderFloat::_propertyName
	String_t* ____propertyName_16;
};

// Pixelplacement.TweenSystem.ShaderInt
struct ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Int32 Pixelplacement.TweenSystem.ShaderInt::<EndValue>k__BackingField
	int32_t ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Material Pixelplacement.TweenSystem.ShaderInt::_target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____target_14;
	// System.Int32 Pixelplacement.TweenSystem.ShaderInt::_start
	int32_t ____start_15;
	// System.String Pixelplacement.TweenSystem.ShaderInt::_propertyName
	String_t* ____propertyName_16;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Pixelplacement.TweenSystem.SplinePercentage
struct SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Single Pixelplacement.TweenSystem.SplinePercentage::<EndValue>k__BackingField
	float ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Transform Pixelplacement.TweenSystem.SplinePercentage::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_14;
	// Pixelplacement.Spline Pixelplacement.TweenSystem.SplinePercentage::_spline
	Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* ____spline_15;
	// System.Single Pixelplacement.TweenSystem.SplinePercentage::_startPercentage
	float ____startPercentage_16;
	// System.Boolean Pixelplacement.TweenSystem.SplinePercentage::_faceDirection
	bool ____faceDirection_17;
};

// Pixelplacement.TweenSystem.ValueFloat
struct ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Single Pixelplacement.TweenSystem.ValueFloat::<EndValue>k__BackingField
	float ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<System.Single> Pixelplacement.TweenSystem.ValueFloat::_valueUpdatedCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ____valueUpdatedCallback_14;
	// System.Single Pixelplacement.TweenSystem.ValueFloat::_start
	float ____start_15;
};

// Pixelplacement.TweenSystem.ValueInt
struct ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Single Pixelplacement.TweenSystem.ValueInt::<EndValue>k__BackingField
	float ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<System.Int32> Pixelplacement.TweenSystem.ValueInt::_valueUpdatedCallback
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ____valueUpdatedCallback_14;
	// System.Single Pixelplacement.TweenSystem.ValueInt::_start
	float ____start_15;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// Pixelplacement.TweenSystem.Volume
struct Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// System.Single Pixelplacement.TweenSystem.Volume::<EndValue>k__BackingField
	float ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.AudioSource Pixelplacement.TweenSystem.Volume::_target
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____target_14;
	// System.Single Pixelplacement.TweenSystem.Volume::_start
	float ____start_15;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Pixelplacement.TweenSystem.Rotation
struct Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.Rotation::<EndValue>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Transform Pixelplacement.TweenSystem.Rotation::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_14;
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.Rotation::_start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____start_15;
};

// Pixelplacement.TweenSystem.ShaderColor
struct ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Color Pixelplacement.TweenSystem.ShaderColor::<EndValue>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Material Pixelplacement.TweenSystem.ShaderColor::_target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____target_14;
	// UnityEngine.Color Pixelplacement.TweenSystem.ShaderColor::_start
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____start_15;
	// System.String Pixelplacement.TweenSystem.ShaderColor::_propertyName
	String_t* ____propertyName_16;
};

// Pixelplacement.TweenSystem.ShaderVector
struct ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector4 Pixelplacement.TweenSystem.ShaderVector::<EndValue>k__BackingField
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Material Pixelplacement.TweenSystem.ShaderVector::_target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____target_14;
	// UnityEngine.Vector4 Pixelplacement.TweenSystem.ShaderVector::_start
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____start_15;
	// System.String Pixelplacement.TweenSystem.ShaderVector::_propertyName
	String_t* ____propertyName_16;
};

// Pixelplacement.TweenSystem.ShakePosition
struct ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.ShakePosition::<EndValue>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.Transform Pixelplacement.TweenSystem.ShakePosition::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_14;
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.ShakePosition::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_15;
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.ShakePosition::_intensity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____intensity_16;
};

// Pixelplacement.TweenSystem.Size
struct Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector2 Pixelplacement.TweenSystem.Size::<EndValue>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.RectTransform Pixelplacement.TweenSystem.Size::_target
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____target_14;
	// UnityEngine.Vector2 Pixelplacement.TweenSystem.Size::_start
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____start_15;
};

// Pixelplacement.TweenSystem.SpriteRendererColor
struct SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Color Pixelplacement.TweenSystem.SpriteRendererColor::<EndValue>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.SpriteRenderer Pixelplacement.TweenSystem.SpriteRendererColor::_target
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____target_14;
	// UnityEngine.Color Pixelplacement.TweenSystem.SpriteRendererColor::_start
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____start_15;
};

// Pixelplacement.TweenSystem.TextColor
struct TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Color Pixelplacement.TweenSystem.TextColor::<EndValue>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.UI.Text Pixelplacement.TweenSystem.TextColor::_target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____target_14;
	// UnityEngine.Color Pixelplacement.TweenSystem.TextColor::_start
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____start_15;
};

// Pixelplacement.TweenSystem.TextMeshColor
struct TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Color Pixelplacement.TweenSystem.TextMeshColor::<EndValue>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CEndValueU3Ek__BackingField_13;
	// UnityEngine.TextMesh Pixelplacement.TweenSystem.TextMeshColor::_target
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ____target_14;
	// UnityEngine.Color Pixelplacement.TweenSystem.TextMeshColor::_start
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____start_15;
};

// Pixelplacement.TweenSystem.ValueColor
struct ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Color Pixelplacement.TweenSystem.ValueColor::<EndValue>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Color> Pixelplacement.TweenSystem.ValueColor::_valueUpdatedCallback
	Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ____valueUpdatedCallback_14;
	// UnityEngine.Color Pixelplacement.TweenSystem.ValueColor::_start
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____start_15;
};

// Pixelplacement.TweenSystem.ValueRect
struct ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Rect Pixelplacement.TweenSystem.ValueRect::<EndValue>k__BackingField
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Rect> Pixelplacement.TweenSystem.ValueRect::_valueUpdatedCallback
	Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* ____valueUpdatedCallback_14;
	// UnityEngine.Rect Pixelplacement.TweenSystem.ValueRect::_start
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____start_15;
};

// Pixelplacement.TweenSystem.ValueVector2
struct ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector2 Pixelplacement.TweenSystem.ValueVector2::<EndValue>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector2> Pixelplacement.TweenSystem.ValueVector2::_valueUpdatedCallback
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ____valueUpdatedCallback_14;
	// UnityEngine.Vector2 Pixelplacement.TweenSystem.ValueVector2::_start
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____start_15;
};

// Pixelplacement.TweenSystem.ValueVector3
struct ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.ValueVector3::<EndValue>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector3> Pixelplacement.TweenSystem.ValueVector3::_valueUpdatedCallback
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ____valueUpdatedCallback_14;
	// UnityEngine.Vector3 Pixelplacement.TweenSystem.ValueVector3::_start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____start_15;
};

// Pixelplacement.TweenSystem.ValueVector4
struct ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95  : public TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2
{
	// UnityEngine.Vector4 Pixelplacement.TweenSystem.ValueVector4::<EndValue>k__BackingField
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___U3CEndValueU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector4> Pixelplacement.TweenSystem.ValueVector4::_valueUpdatedCallback
	Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* ____valueUpdatedCallback_14;
	// UnityEngine.Vector4 Pixelplacement.TweenSystem.ValueVector4::_start
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____start_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Action`1<UnityEngine.Color>
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Rect>
struct Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector2>
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Vector4>
struct Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF  : public MulticastDelegate_t
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

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Pixelplacement.Spline
struct Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Pixelplacement.Spline::OnSplineChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSplineChanged_4;
	// UnityEngine.Color Pixelplacement.Spline::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	// System.Single Pixelplacement.Spline::toolScale
	float ___toolScale_6;
	// Pixelplacement.TangentMode Pixelplacement.Spline::defaultTangentMode
	int32_t ___defaultTangentMode_7;
	// Pixelplacement.SplineDirection Pixelplacement.Spline::direction
	int32_t ___direction_8;
	// System.Boolean Pixelplacement.Spline::loop
	bool ___loop_9;
	// Pixelplacement.SplineFollower[] Pixelplacement.Spline::followers
	SplineFollowerU5BU5D_tC61E0BF82AE6EAC8052517C25E508134646E5310* ___followers_10;
	// Pixelplacement.SplineAnchor[] Pixelplacement.Spline::_anchors
	SplineAnchorU5BU5D_t4BD6122203498ED7A7647BA78A618374BA57BEE1* ____anchors_11;
	// System.Int32 Pixelplacement.Spline::_curveCount
	int32_t ____curveCount_12;
	// System.Int32 Pixelplacement.Spline::_previousAnchorCount
	int32_t ____previousAnchorCount_13;
	// System.Int32 Pixelplacement.Spline::_previousChildCount
	int32_t ____previousChildCount_14;
	// System.Boolean Pixelplacement.Spline::_wasLooping
	bool ____wasLooping_15;
	// System.Boolean Pixelplacement.Spline::_previousLoopChoice
	bool ____previousLoopChoice_16;
	// System.Boolean Pixelplacement.Spline::_anchorsChanged
	bool ____anchorsChanged_17;
	// Pixelplacement.SplineDirection Pixelplacement.Spline::_previousDirection
	int32_t ____previousDirection_18;
	// System.Single Pixelplacement.Spline::_curvePercentage
	float ____curvePercentage_19;
	// System.Int32 Pixelplacement.Spline::_operatingCurve
	int32_t ____operatingCurve_20;
	// System.Single Pixelplacement.Spline::_currentCurve
	float ____currentCurve_21;
	// System.Int32 Pixelplacement.Spline::_previousLength
	int32_t ____previousLength_22;
	// System.Int32 Pixelplacement.Spline::_slicesPerCurve
	int32_t ____slicesPerCurve_23;
	// System.Collections.Generic.List`1<Pixelplacement.Spline/SplineReparam> Pixelplacement.Spline::_splineReparams
	List_1_tBAE6FD5F824882F2802576C24FC9E2F94619FB54* ____splineReparams_24;
	// System.Boolean Pixelplacement.Spline::_lengthDirty
	bool ____lengthDirty_25;
	// System.Single Pixelplacement.Spline::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_26;
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


// System.Void System.Action`1<UnityEngine.Color>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mB242D744D5F7C07844DD56B501228FA7FBA46E52_gshared_inline (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Rect>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8B62C5CC91BE7EA3B50F580F956EEF269D571622_gshared_inline (Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9293612C0DEA13BB9B5CADE956F799DE325BBD4B_gshared_inline (Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method) ;

// System.Void Pixelplacement.TweenSystem.TweenBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1 (TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.TweenBase::SetEssentials(Pixelplacement.Tween/TweenType,System.Int32,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081 (TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2* __this, int32_t ___tweenType0, int32_t ___targetInstanceID1, float ___duration2, float ___delay3, bool ___obeyTimeScale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.Rotation::set_EndValue(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rotation_set_EndValue_m42592099FAB5E1731C86CF82CE70A0CE70A1CADE_inline (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.TweenSystem.Rotation::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rotation_get_EndValue_m24E6EB1C2FF7DAA4325C699EFBCDC4A67D3B4D28_inline (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolateRotational(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TweenUtilities_LinearInterpolateRotational_m33F91062910C961D870D83BC83C36DF119B8F007 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, float ___percentage2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.TweenBase::ResetStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94 (TweenBase_t706A1CE98FE63D8BF390CCF91106D89CDF50D6F2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.ShaderColor::set_EndValue(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderColor_set_EndValue_m7C27E614217B0E6852ACE6E25F7F15E30AD23A9E_inline (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.ShaderColor::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderColor_get_EndValue_m9E05549771C698BDE80B64AB5BD09A34C3CD3A6D_inline (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___from0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.ShaderFloat::set_EndValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderFloat_set_EndValue_mBDEF4C2AA3B57DA352D20D6EFE9CD16348C2C257_inline (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.ShaderFloat::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ShaderFloat_get_EndValue_m1A8903A787923034EF082318D9A48E542AC55B2F_inline (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA (float ___from0, float ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.ShaderInt::set_EndValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderInt_set_EndValue_m49E6DCBB96C188A2378C2A8A36D91D5DFF29713B_inline (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 Pixelplacement.TweenSystem.ShaderInt::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShaderInt_get_EndValue_m869220ED5A401EC975269881484D8A222942973A_inline (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.ShaderVector::set_EndValue(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderVector_set_EndValue_m1DB327179840788C1518B048655323A22411436B_inline (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Pixelplacement.TweenSystem.ShaderVector::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShaderVector_get_EndValue_mF6AC1996239D5EBF0BC5F9C861CB951BDC168010_inline (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TweenUtilities_LinearInterpolate_m2C7D17B85BBE39629A84E30E05417C5F4776B5B4 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___from0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.Size::set_EndValue(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Size_set_EndValue_m8BF2BECDE489A34521CED010357B5B6C9B1432EE_inline (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Pixelplacement.TweenSystem.Size::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Size_get_EndValue_m956E6CB2D0C50B209221F0BA1729019DC04F7C53_inline (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TweenUtilities_LinearInterpolate_mE63EAA0109B45EE02496090962F6442C06597A4D (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.SplinePercentage::set_EndValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplinePercentage_set_EndValue_mE2E92D2C37E2078CDED1B53766A72A6D42C0ABF8_inline (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.SplinePercentage::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SplinePercentage_get_EndValue_m302501A69777A838ADA241D322CFE9A34161EB9D_inline (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.Spline::GetPosition(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spline_GetPosition_m40A2A1D52E9EAABD317C440C117F7CADF6D00129 (Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* __this, float ___percentage0, bool ___normalized1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.Spline::GetDirection(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spline_GetDirection_m09B1E270699ACD622AE9B142D64684FC2062119F (Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* __this, float ___percentage0, bool ___normalized1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::set_EndValue(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteRendererColor_set_EndValue_m249DD966AE319D4BE482939A350A27B3999ECA91_inline (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.SpriteRendererColor::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRendererColor_get_EndValue_mDA5552134C7EFB53A278DB853A1ABFE434DE134E_inline (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.TextColor::set_EndValue(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextColor_set_EndValue_m43C97404BA031A412CA9141130C78F5205A9D8CA_inline (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.TextColor::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextColor_get_EndValue_m948807B2FA200649CB15347179A4985B3CE4EBEB_inline (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.TextMeshColor::set_EndValue(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextMeshColor_set_EndValue_mAA5EC3856175298FFF301AF53D725EE16FA490B4_inline (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.TextMesh::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextMesh_get_color_m128E5D16AA72D5284C70957253DEAEE4FBEB023E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.TextMeshColor::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextMeshColor_get_EndValue_mFF77DE757427AB19CC141EECB001CB4C46C6C247_inline (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void Pixelplacement.TweenSystem.ValueColor::set_EndValue(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueColor_set_EndValue_m32F3B24E978B1776AF6700A95E02811E1F19CA9F_inline (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Pixelplacement.TweenSystem.ValueColor::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ValueColor_get_EndValue_mDE9F5C978D990A796735798D0B9FD7E911844148_inline (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Color>::Invoke(T)
inline void Action_1_Invoke_mB242D744D5F7C07844DD56B501228FA7FBA46E52_inline (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Action_1_Invoke_mB242D744D5F7C07844DD56B501228FA7FBA46E52_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::set_EndValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueFloat_set_EndValue_m41E8CA9652B898332DE7997D367447AA6B965BB8_inline (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.ValueFloat::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueFloat_get_EndValue_m3EB25AABDFE9F4B6E74CA462A133427AA0342DC6_inline (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueInt::set_EndValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueInt_set_EndValue_m69944E770F9DEB9DA4FCCAC0DE7C51CC63E75D5B_inline (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.ValueInt::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueInt_get_EndValue_m60FE2A6B05C282CF3B90EC37CAA8222DEA4E87EB_inline (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueRect::set_EndValue(UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueRect_set_EndValue_m5C6300BD2F5CA990F22068EF818FEE67C2A787F9_inline (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect Pixelplacement.TweenSystem.ValueRect::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ValueRect_get_EndValue_mDA7C66F83C6FB292DADC8DFF4F8A03D188DCCB9C_inline (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TweenUtilities_LinearInterpolate_m32388C9E27FACF5204A732D1CB983549AF5C7AB8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___from0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Rect>::Invoke(T)
inline void Action_1_Invoke_m8B62C5CC91BE7EA3B50F580F956EEF269D571622_inline (Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*))Action_1_Invoke_m8B62C5CC91BE7EA3B50F580F956EEF269D571622_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::set_EndValue(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector2_set_EndValue_mD91A69DFE8364F24E7B05FCF125E4000F5244456_inline (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Pixelplacement.TweenSystem.ValueVector2::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ValueVector2_get_EndValue_mF8E813A329208289D4D311839F48E24887B5B89B_inline (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector2>::Invoke(T)
inline void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::set_EndValue(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector3_set_EndValue_m2A4C36D20A72453B23C50B70050137901E970D53_inline (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.TweenSystem.ValueVector3::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ValueVector3_get_EndValue_m136902BBE88386B48D1A3DB6BA3D4E921DEEC933_inline (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Pixelplacement.TweenSystem.TweenUtilities::LinearInterpolate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TweenUtilities_LinearInterpolate_mFCBDA02AD4CD718FED44A8C131D60840830FA571 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
inline void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::set_EndValue(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector4_set_EndValue_mC88FBD5FDA89788F63D5904568F9B418959E458E_inline (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Pixelplacement.TweenSystem.ValueVector4::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ValueVector4_get_EndValue_mACEA7BDA2B035D9F9EEDD73F1104EA3E62DFD7AD_inline (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector4>::Invoke(T)
inline void Action_1_Invoke_m9293612C0DEA13BB9B5CADE956F799DE325BBD4B_inline (Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Action_1_Invoke_m9293612C0DEA13BB9B5CADE956F799DE325BBD4B_gshared_inline)(__this, ___obj0, method);
}
// System.Void Pixelplacement.TweenSystem.Volume::set_EndValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_EndValue_mEC25EBA5AB3A1CCC43A3AF64CFC5F00082791E13_inline (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single Pixelplacement.TweenSystem.Volume::get_EndValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Volume_get_EndValue_m09B5F138A306129FBB52925B136377FC443EDEEB_inline (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Pixelplacement.TweenSystem.Rotation::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rotation_get_EndValue_m24E6EB1C2FF7DAA4325C699EFBCDC4A67D3B4D28 (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.Rotation::set_EndValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_set_EndValue_m42592099FAB5E1731C86CF82CE70A0CE70A1CADE (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Rotation::.ctor(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation__ctor_mE15EC338E8565D857FEDAE4660C4F2F21098CFC7 (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public Rotation (Transform target, Vector3 endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Rotation, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, 1, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___endValue1;
		Rotation_set_EndValue_m42592099FAB5E1731C86CF82CE70A0CE70A1CADE_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.Rotation::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rotation_SetStartValue_m24C701D5818C822670A9082FFF20B9AA6F5B3B6C (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____target_14;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.Rotation::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_Operation_m8A6F1D7E80743CCB5F88AA0AF2E303D5342793C3 (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion calculatedValue = Quaternion.Euler (TweenUtilities.LinearInterpolateRotational (_start, EndValue, percentage));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____start_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rotation_get_EndValue_m24E6EB1C2FF7DAA4325C699EFBCDC4A67D3B4D28_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = TweenUtilities_LinearInterpolateRotational_m33F91062910C961D870D83BC83C36DF119B8F007(L_0, L_1, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_3, NULL);
		V_0 = L_4;
		// _target.rotation = calculatedValue;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____target_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Rotation::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_Loop_mA32598BAE16F38B7C87A00F643675D0DB5E8329A (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.eulerAngles = _start;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____start_15;
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Rotation::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_PingPong_m67E1C15F919246330F4E03068224CF3F5DA7B3B7 (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.eulerAngles = EndValue;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rotation_get_EndValue_m24E6EB1C2FF7DAA4325C699EFBCDC4A67D3B4D28_inline(__this, NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// EndValue = _start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____start_15;
		Rotation_set_EndValue_m42592099FAB5E1731C86CF82CE70A0CE70A1CADE_inline(__this, L_2, NULL);
		// _start = _target.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____target_14;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		__this->____start_15 = L_4;
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
// UnityEngine.Color Pixelplacement.TweenSystem.ShaderColor::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderColor_get_EndValue_m9E05549771C698BDE80B64AB5BD09A34C3CD3A6D (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderColor::set_EndValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderColor_set_EndValue_m7C27E614217B0E6852ACE6E25F7F15E30AD23A9E (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderColor::.ctor(UnityEngine.Material,System.String,UnityEngine.Color,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderColor__ctor_m5819484398276C91F95BDFAAAB1FF75BD7F58AF2 (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, String_t* ___propertyName1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ShaderColor (Material target, string propertyName, Color endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.ShaderColor, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration3;
		float L_3 = ___delay4;
		bool L_4 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve6;
		int32_t L_6 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)16), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// _propertyName = propertyName;
		String_t* L_10 = ___propertyName1;
		__this->____propertyName_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)L_10);
		// EndValue = endValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___endValue2;
		ShaderColor_set_EndValue_m7C27E614217B0E6852ACE6E25F7F15E30AD23A9E_inline(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ShaderColor::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderColor_SetStartValue_m2988D9CD2EE9F4B2F77A4871D1F00EF164FE9E97 (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _start = _target.GetColor (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_0, L_1, NULL);
		__this->____start_15 = L_2;
		// if (_target == null) return false;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderColor::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderColor_Operation_mDD5A3E4E29B0D1404CA29838481923F0D1AF32FD (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ShaderColor_get_EndValue_m9E05549771C698BDE80B64AB5BD09A34C3CD3A6D_inline(__this, NULL);
		float L_2 = ___percentage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.SetColor (_propertyName, calculatedValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_4);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderColor::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderColor_Loop_m46C6190A3A9766DE37AECAE0D2C46CD8716CE77D (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetColor (_propertyName, _start);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____start_15;
		NullCheck(L_0);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderColor::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderColor_PingPong_m8706B4C290006DBDCBB0D146F24959421E51E7BF (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetColor (_propertyName, EndValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = ShaderColor_get_EndValue_m9E05549771C698BDE80B64AB5BD09A34C3CD3A6D_inline(__this, NULL);
		NullCheck(L_0);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_0, L_1, L_2, NULL);
		// EndValue = _start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->____start_15;
		ShaderColor_set_EndValue_m7C27E614217B0E6852ACE6E25F7F15E30AD23A9E_inline(__this, L_3, NULL);
		// _start = _target.GetColor (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_4, L_5, NULL);
		__this->____start_15 = L_6;
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
// System.Single Pixelplacement.TweenSystem.ShaderFloat::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShaderFloat_get_EndValue_m1A8903A787923034EF082318D9A48E542AC55B2F (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderFloat::set_EndValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderFloat_set_EndValue_mBDEF4C2AA3B57DA352D20D6EFE9CD16348C2C257 (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderFloat::.ctor(UnityEngine.Material,System.String,System.Single,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderFloat__ctor_mC5EE577FDFECE90A9C880C6E2F8640F12275F74C (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, String_t* ___propertyName1, float ___endValue2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ShaderFloat (Material target, string propertyName, float endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.ShaderFloat, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration3;
		float L_3 = ___delay4;
		bool L_4 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve6;
		int32_t L_6 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)15), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// _propertyName = propertyName;
		String_t* L_10 = ___propertyName1;
		__this->____propertyName_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)L_10);
		// EndValue = endValue;
		float L_11 = ___endValue2;
		ShaderFloat_set_EndValue_mBDEF4C2AA3B57DA352D20D6EFE9CD16348C2C257_inline(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ShaderFloat::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderFloat_SetStartValue_m06CC4A0912632133C5ACC2392E9B5A9B5062BD42 (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _start = _target.GetFloat (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		NullCheck(L_0);
		float L_2;
		L_2 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_0, L_1, NULL);
		__this->____start_15 = L_2;
		// if (_target == null) return false;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderFloat::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderFloat_Operation_mBDEAFDF2D01A906F7E211E24A48D787FF260C392 (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		float L_0 = __this->____start_15;
		float L_1;
		L_1 = ShaderFloat_get_EndValue_m1A8903A787923034EF082318D9A48E542AC55B2F_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.SetFloat (_propertyName, calculatedValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		float L_6 = V_0;
		NullCheck(L_4);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderFloat::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderFloat_Loop_m02885B4D30A580F1F126E76621A577B870C69BAB (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetFloat (_propertyName, _start);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		float L_2 = __this->____start_15;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderFloat::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderFloat_PingPong_m1D462D16462B327E194964FD2943A9B3D0420F0B (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetFloat (_propertyName, EndValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		float L_2;
		L_2 = ShaderFloat_get_EndValue_m1A8903A787923034EF082318D9A48E542AC55B2F_inline(__this, NULL);
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, L_1, L_2, NULL);
		// EndValue = _start;
		float L_3 = __this->____start_15;
		ShaderFloat_set_EndValue_mBDEF4C2AA3B57DA352D20D6EFE9CD16348C2C257_inline(__this, L_3, NULL);
		// _start = _target.GetFloat (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		NullCheck(L_4);
		float L_6;
		L_6 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_4, L_5, NULL);
		__this->____start_15 = L_6;
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
// System.Int32 Pixelplacement.TweenSystem.ShaderInt::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShaderInt_get_EndValue_m869220ED5A401EC975269881484D8A222942973A (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) 
{
	{
		// public int EndValue {get; private set;}
		int32_t L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderInt::set_EndValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInt_set_EndValue_m49E6DCBB96C188A2378C2A8A36D91D5DFF29713B (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int EndValue {get; private set;}
		int32_t L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderInt::.ctor(UnityEngine.Material,System.String,System.Int32,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInt__ctor_m4DDF194136E917ED7E71384142037F1E85E8048C (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, String_t* ___propertyName1, int32_t ___endValue2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ShaderInt (Material target, string propertyName, int endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.ShaderInt, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration3;
		float L_3 = ___delay4;
		bool L_4 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve6;
		int32_t L_6 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)17), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// _propertyName = propertyName;
		String_t* L_10 = ___propertyName1;
		__this->____propertyName_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)L_10);
		// EndValue = endValue;
		int32_t L_11 = ___endValue2;
		ShaderInt_set_EndValue_m49E6DCBB96C188A2378C2A8A36D91D5DFF29713B_inline(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ShaderInt::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInt_SetStartValue_m65950500C5783ED4ADEA3C220E5F2AB6B6AE17FA (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _start = _target.GetInt (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_0, L_1, NULL);
		__this->____start_15 = L_2;
		// if (_target == null) return false;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0027:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderInt::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInt_Operation_m166E53B5C59584555294B2EEB7DE206732FCD5F9 (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		int32_t L_0 = __this->____start_15;
		int32_t L_1;
		L_1 = ShaderInt_get_EndValue_m869220ED5A401EC975269881484D8A222942973A_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(((float)L_0), ((float)L_1), L_2, NULL);
		V_0 = L_3;
		// _target.SetInt (_propertyName, (int)calculatedValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		float L_6 = V_0;
		NullCheck(L_4);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_4, L_5, il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderInt::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInt_Loop_mDB1856E05A78FCF79B11D5810DBC839FCA98207F (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetInt (_propertyName, _start);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		int32_t L_2 = __this->____start_15;
		NullCheck(L_0);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderInt::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInt_PingPong_m42E9ABEA3824A6613355F653A4CFC5F85A89102B (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetInt (_propertyName, EndValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		int32_t L_2;
		L_2 = ShaderInt_get_EndValue_m869220ED5A401EC975269881484D8A222942973A_inline(__this, NULL);
		NullCheck(L_0);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_0, L_1, L_2, NULL);
		// EndValue = _start;
		int32_t L_3 = __this->____start_15;
		ShaderInt_set_EndValue_m49E6DCBB96C188A2378C2A8A36D91D5DFF29713B_inline(__this, L_3, NULL);
		// _start = _target.GetInt (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_4, L_5, NULL);
		__this->____start_15 = L_6;
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
// UnityEngine.Vector4 Pixelplacement.TweenSystem.ShaderVector::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShaderVector_get_EndValue_mF6AC1996239D5EBF0BC5F9C861CB951BDC168010 (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderVector::set_EndValue(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVector_set_EndValue_m1DB327179840788C1518B048655323A22411436B (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderVector::.ctor(UnityEngine.Material,System.String,UnityEngine.Vector4,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVector__ctor_m92D2777AE77C32CE9CD87ACEB6209AFCB095EFAE (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, String_t* ___propertyName1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___endValue2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ShaderVector (Material target, string propertyName, Vector4 endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.ShaderVector, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration3;
		float L_3 = ___delay4;
		bool L_4 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve6;
		int32_t L_6 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)18), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// _propertyName = propertyName;
		String_t* L_10 = ___propertyName1;
		__this->____propertyName_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)L_10);
		// EndValue = endValue;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___endValue2;
		ShaderVector_set_EndValue_m1DB327179840788C1518B048655323A22411436B_inline(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ShaderVector::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderVector_SetStartValue_m1202E8778A7499F37A5476CC358C9A1550FC63A8 (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.GetVector (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____target_14;
		String_t* L_3 = __this->____propertyName_16;
		NullCheck(L_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_2, L_3, NULL);
		__this->____start_15 = L_4;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderVector::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVector_Operation_mFF1BCC41393DDF29FC3120F14AE3687442F968FC (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector4 calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->____start_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = ShaderVector_get_EndValue_mF6AC1996239D5EBF0BC5F9C861CB951BDC168010_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = TweenUtilities_LinearInterpolate_m2C7D17B85BBE39629A84E30E05417C5F4776B5B4(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.SetVector (_propertyName, calculatedValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_0;
		NullCheck(L_4);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderVector::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVector_Loop_m74375D48D56857B0EED8153DDF7DA8EE561260DC (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetVector (_propertyName, _start);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = __this->____start_15;
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShaderVector::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderVector_PingPong_m25F0868831047B2091E3829B78AF44AEC41FFD9F (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.SetVector (_propertyName, EndValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____target_14;
		String_t* L_1 = __this->____propertyName_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = ShaderVector_get_EndValue_mF6AC1996239D5EBF0BC5F9C861CB951BDC168010_inline(__this, NULL);
		NullCheck(L_0);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_0, L_1, L_2, NULL);
		// EndValue = _start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = __this->____start_15;
		ShaderVector_set_EndValue_m1DB327179840788C1518B048655323A22411436B_inline(__this, L_3, NULL);
		// _start = _target.GetVector (_propertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->____target_14;
		String_t* L_5 = __this->____propertyName_16;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_4, L_5, NULL);
		__this->____start_15 = L_6;
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
// UnityEngine.Vector3 Pixelplacement.TweenSystem.ShakePosition::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ShakePosition_get_EndValue_m8B659B72DCB845A4727FCD1D9846B26A741DCD2A (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ShakePosition::set_EndValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakePosition_set_EndValue_m10AC771A21D10E12CA1FFB02422C2BDC33D7AC71 (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShakePosition::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.AnimationCurve,System.Action,System.Action,Pixelplacement.Tween/LoopType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakePosition__ctor_mE1C1423432B975952FABA081C02A97DA0EE08869 (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___intensity2, float ___duration3, float ___delay4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback7, int32_t ___loop8, bool ___obeyTimescale9, const RuntimeMethod* method) 
{
	{
		// public ShakePosition (Transform target, Vector3 initialPosition, Vector3 intensity, float duration, float delay, AnimationCurve curve, Action startCallback, Action completeCallback, Tween.LoopType loop, bool obeyTimescale)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Position, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration3;
		float L_3 = ___delay4;
		bool L_4 = ___obeyTimescale9;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback7;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, 0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// _initialPosition = initialPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___initialPosition1;
		__this->____initialPosition_15 = L_10;
		// _intensity = intensity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___intensity2;
		__this->____intensity_16 = L_11;
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ShakePosition::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShakePosition_SetStartValue_m22F803ADC98E53B5AA30B45BBCF23B1D0CAF4BD0 (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ShakePosition::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakePosition_Operation_m403A7C995168D5309BDA0230A786704C9752F095 (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (percentage == 0)
		float L_0 = ___percentage0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// _target.localPosition = _initialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____initialPosition_15;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
	}

IL_0019:
	{
		// percentage = 1 - percentage;
		float L_3 = ___percentage0;
		___percentage0 = ((float)il2cpp_codegen_subtract((1.0f), L_3));
		// Vector3 amount = _intensity * percentage;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->____intensity_16;
		float L_5 = ___percentage0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// amount.x = UnityEngine.Random.Range (-amount.x, amount.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		float L_11;
		L_11 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_8)), L_10, NULL);
		(&V_0)->___x_2 = L_11;
		// amount.y = UnityEngine.Random.Range (-amount.y, amount.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_13)), L_15, NULL);
		(&V_0)->___y_3 = L_16;
		// amount.z = UnityEngine.Random.Range (-amount.z, amount.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___z_4;
		float L_21;
		L_21 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_18)), L_20, NULL);
		(&V_0)->___z_4 = L_21;
		// _target.localPosition = _initialPosition + amount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____initialPosition_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_24, NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_25, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShakePosition::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakePosition_Loop_mB33272F7D2CADB282FC1F72919ABC47D56A44BBD (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.localPosition = _initialPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____initialPosition_15;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ShakePosition::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakePosition_PingPong_mE6DA4788E4E12F7DD4E5D28729B56DA31F518855 (ShakePosition_t09449C14CA2BCEAC324679D45490F6B27E8A3542* __this, const RuntimeMethod* method) 
{
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
// UnityEngine.Vector2 Pixelplacement.TweenSystem.Size::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Size_get_EndValue_m956E6CB2D0C50B209221F0BA1729019DC04F7C53 (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.Size::set_EndValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size_set_EndValue_m8BF2BECDE489A34521CED010357B5B6C9B1432EE (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Size::.ctor(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_mA6D409BC7047E36E05542E186AF5EDECCFC0194E (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public Size (RectTransform target, Vector2 endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Size, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)11), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___endValue1;
		Size_set_EndValue_m8BF2BECDE489A34521CED010357B5B6C9B1432EE_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.Size::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_SetStartValue_m1437366BC7432F785541117F1137C4B4FADD3A8A (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->____target_14;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.Size::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size_Operation_mA1951256351DAD90CC6901893A7137A930DCE031 (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____start_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Size_get_EndValue_m956E6CB2D0C50B209221F0BA1729019DC04F7C53_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TweenUtilities_LinearInterpolate_mE63EAA0109B45EE02496090962F6442C06597A4D(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.sizeDelta = calculatedValue;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____target_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_4);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Size::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size_Loop_mD7ADF022B99BD8B0CA42D791F7EC79BEC9984C3E (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.sizeDelta = _start;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____target_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->____start_15;
		NullCheck(L_0);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Size::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size_PingPong_m0D3FB82232FA7A0C0C7FBEF1D2E42C64C51311AA (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.sizeDelta = EndValue;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____target_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Size_get_EndValue_m956E6CB2D0C50B209221F0BA1729019DC04F7C53_inline(__this, NULL);
		NullCheck(L_0);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_0, L_1, NULL);
		// EndValue = _start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->____start_15;
		Size_set_EndValue_m8BF2BECDE489A34521CED010357B5B6C9B1432EE_inline(__this, L_2, NULL);
		// _start = _target.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->____target_14;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_3, NULL);
		__this->____start_15 = L_4;
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
// System.Single Pixelplacement.TweenSystem.SplinePercentage::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplinePercentage_get_EndValue_m302501A69777A838ADA241D322CFE9A34161EB9D (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.SplinePercentage::set_EndValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePercentage_set_EndValue_mE2E92D2C37E2078CDED1B53766A72A6D42C0ABF8 (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SplinePercentage::.ctor(Pixelplacement.Spline,UnityEngine.Transform,System.Single,System.Single,System.Boolean,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePercentage__ctor_m748369F132541BB23F3E518AA97EAEA47758D1E5 (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* ___spline0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target1, float ___startPercentage2, float ___endPercentage3, bool ___faceDirection4, float ___duration5, float ___delay6, bool ___obeyTimescale7, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve8, int32_t ___loop9, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback10, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback11, const RuntimeMethod* method) 
{
	{
		// public SplinePercentage (Spline spline, Transform target, float startPercentage, float endPercentage, bool faceDirection, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// if (!spline.loop)
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_0 = ___spline0;
		NullCheck(L_0);
		bool L_1 = L_0->___loop_9;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// startPercentage = Mathf.Clamp01 (startPercentage);
		float L_2 = ___startPercentage2;
		float L_3;
		L_3 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_2, NULL);
		___startPercentage2 = L_3;
		// endPercentage = Mathf.Clamp01 (endPercentage);
		float L_4 = ___endPercentage3;
		float L_5;
		L_5 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_4, NULL);
		___endPercentage3 = L_5;
	}

IL_001f:
	{
		// SetEssentials (Tween.TweenType.Spline, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___target1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_6, NULL);
		float L_8 = ___duration5;
		float L_9 = ___delay6;
		bool L_10 = ___obeyTimescale7;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = ___curve8;
		int32_t L_12 = ___loop9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___startCallback10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___completeCallback11;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)21), L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		// _spline = spline;
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_15 = ___spline0;
		__this->____spline_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spline_15), (void*)L_15);
		// _target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___target1;
		__this->____target_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_16);
		// EndValue = endPercentage;
		float L_17 = ___endPercentage3;
		SplinePercentage_set_EndValue_mE2E92D2C37E2078CDED1B53766A72A6D42C0ABF8_inline(__this, L_17, NULL);
		// _startPercentage = startPercentage;
		float L_18 = ___startPercentage2;
		__this->____startPercentage_16 = L_18;
		// _faceDirection = faceDirection;
		bool L_19 = ___faceDirection4;
		__this->____faceDirection_17 = L_19;
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.SplinePercentage::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePercentage_SetStartValue_mBB6E5F772E463DD2D05E4057350538E7EECC76CA (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.SplinePercentage::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePercentage_Operation_m7899C74D421D45758339CCF9F1C5B0EF9ECB4392 (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_startPercentage, EndValue, percentage);
		float L_0 = __this->____startPercentage_16;
		float L_1;
		L_1 = SplinePercentage_get_EndValue_m302501A69777A838ADA241D322CFE9A34161EB9D_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.position = _spline.GetPosition (calculatedValue);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____target_14;
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_5 = __this->____spline_15;
		float L_6 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Spline_GetPosition_m40A2A1D52E9EAABD317C440C117F7CADF6D00129(L_5, L_6, (bool)1, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		// if (_faceDirection)
		bool L_8 = __this->____faceDirection_17;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// if (_spline.direction == SplineDirection.Forward)
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_9 = __this->____spline_15;
		NullCheck(L_9);
		int32_t L_10 = L_9->___direction_8;
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		// _target.LookAt (_target.position + _spline.GetDirection (calculatedValue));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____target_14;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_14 = __this->____spline_15;
		float L_15 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Spline_GetDirection_m09B1E270699ACD622AE9B142D64684FC2062119F(L_14, L_15, (bool)1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		NullCheck(L_11);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_11, L_17, NULL);
		return;
	}

IL_0069:
	{
		// _target.LookAt (_target.position - _spline.GetDirection (calculatedValue));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->____target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____target_14;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_21 = __this->____spline_15;
		float L_22 = V_0;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Spline_GetDirection_m09B1E270699ACD622AE9B142D64684FC2062119F(L_21, L_22, (bool)1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_23, NULL);
		NullCheck(L_18);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_18, L_24, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SplinePercentage::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePercentage_Loop_m1B4B72A91AB5B3E0CB15D3316DEC117BE14A22CC (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.position = _spline.GetPosition (_startPercentage);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_14;
		Spline_t76FF1642F98894C43DC7054E5D9402C72C180AC7* L_1 = __this->____spline_15;
		float L_2 = __this->____startPercentage_16;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Spline_GetPosition_m40A2A1D52E9EAABD317C440C117F7CADF6D00129(L_1, L_2, (bool)1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SplinePercentage::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePercentage_PingPong_mF6F8208BA9273DF45DEF75E0D4891E67E23388E8 (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// float temp = EndValue;
		float L_0;
		L_0 = SplinePercentage_get_EndValue_m302501A69777A838ADA241D322CFE9A34161EB9D_inline(__this, NULL);
		V_0 = L_0;
		// EndValue = _startPercentage;
		float L_1 = __this->____startPercentage_16;
		SplinePercentage_set_EndValue_mE2E92D2C37E2078CDED1B53766A72A6D42C0ABF8_inline(__this, L_1, NULL);
		// _startPercentage = temp;
		float L_2 = V_0;
		__this->____startPercentage_16 = L_2;
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
// UnityEngine.Color Pixelplacement.TweenSystem.SpriteRendererColor::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRendererColor_get_EndValue_mDA5552134C7EFB53A278DB853A1ABFE434DE134E (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::set_EndValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererColor_set_EndValue_m249DD966AE319D4BE482939A350A27B3999ECA91 (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::.ctor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererColor__ctor_m36DE435A414B4C9C27DDA9D404AA6FA07408E146 (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public SpriteRendererColor (SpriteRenderer target, Color endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.SpriteRendererColor, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, 8, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		SpriteRendererColor_set_EndValue_m249DD966AE319D4BE482939A350A27B3999ECA91_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.SpriteRendererColor::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererColor_SetStartValue_m6080B4DFDFBC1532A5F9D9CA05D9F03BEDE5BC2B (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->____target_14;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_2, NULL);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererColor_Operation_mCE7453683784117D833CBF6B309DCE736B26236F (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = SpriteRendererColor_get_EndValue_mDA5552134C7EFB53A278DB853A1ABFE434DE134E_inline(__this, NULL);
		float L_2 = ___percentage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.color = calculatedValue;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererColor_Loop_mDF22780685999EAB739356CF8CF4C162BA651E6D (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = _start;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____start_15;
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.SpriteRendererColor::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererColor_PingPong_mF3AB1B5019B2F9FC81A9555AE1D47DA97A063548 (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = EndValue;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = SpriteRendererColor_get_EndValue_mDA5552134C7EFB53A278DB853A1ABFE434DE134E_inline(__this, NULL);
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_1, NULL);
		// EndValue = _start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____start_15;
		SpriteRendererColor_set_EndValue_m249DD966AE319D4BE482939A350A27B3999ECA91_inline(__this, L_2, NULL);
		// _start = _target.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->____target_14;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_3, NULL);
		__this->____start_15 = L_4;
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
// UnityEngine.Color Pixelplacement.TweenSystem.TextColor::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextColor_get_EndValue_m948807B2FA200649CB15347179A4985B3CE4EBEB (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.TextColor::set_EndValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextColor_set_EndValue_m43C97404BA031A412CA9141130C78F5205A9D8CA (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextColor::.ctor(UnityEngine.UI.Text,UnityEngine.Color,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextColor__ctor_mF027DCEFA4E4F8FEC09B233B904D11A4E7B9D6AE (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public TextColor (Text target, Color endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.TextColor, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)22), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		TextColor_set_EndValue_m43C97404BA031A412CA9141130C78F5205A9D8CA_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.TextColor::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextColor_SetStartValue_m713D509BBC157C86EA0886713C1338CAA79AD8EA (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____target_14;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.TextColor::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextColor_Operation_mFECB77F4F8259EBA51926D1954C5C3085515348B (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = TextColor_get_EndValue_m948807B2FA200649CB15347179A4985B3CE4EBEB_inline(__this, NULL);
		float L_2 = ___percentage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.color = calculatedValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextColor::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextColor_Loop_m54FA24CDCF840806588574C9E36653137A94B550 (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = _start;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____start_15;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextColor::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextColor_PingPong_m7B64E12AD3C9E0B921F8AF602AF78F26384919C3 (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = EndValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = TextColor_get_EndValue_m948807B2FA200649CB15347179A4985B3CE4EBEB_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// EndValue = _start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____start_15;
		TextColor_set_EndValue_m43C97404BA031A412CA9141130C78F5205A9D8CA_inline(__this, L_2, NULL);
		// _start = _target.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____target_14;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->____start_15 = L_4;
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
// UnityEngine.Color Pixelplacement.TweenSystem.TextMeshColor::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextMeshColor_get_EndValue_mFF77DE757427AB19CC141EECB001CB4C46C6C247 (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.TextMeshColor::set_EndValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshColor_set_EndValue_mAA5EC3856175298FFF301AF53D725EE16FA490B4 (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextMeshColor::.ctor(UnityEngine.TextMesh,UnityEngine.Color,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshColor__ctor_mA7A9180E425A687A98BB9C5895EEE5801DC2E788 (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public TextMeshColor (TextMesh target, Color endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.TextMeshColor, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)25), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___endValue1;
		TextMeshColor_set_EndValue_mAA5EC3856175298FFF301AF53D725EE16FA490B4_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.TextMeshColor::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextMeshColor_SetStartValue_m6E3E88ED61B9C24AC48CC449E70DE6B6E46F39A2 (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.color;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->____target_14;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TextMesh_get_color_m128E5D16AA72D5284C70957253DEAEE4FBEB023E(L_2, NULL);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.TextMeshColor::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshColor_Operation_m0AAAFE67772F137FA970E244BF5718B36C576807 (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = TextMeshColor_get_EndValue_mFF77DE757427AB19CC141EECB001CB4C46C6C247_inline(__this, NULL);
		float L_2 = ___percentage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.color = calculatedValue;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_4 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextMeshColor::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshColor_Loop_m3E81EDBF331030CEE84D30B4874EC92D6FFB417D (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = _start;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____start_15;
		NullCheck(L_0);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.TextMeshColor::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshColor_PingPong_m88E9EA8325EC0525CD8D0457E54246BF691C996C (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.color = EndValue;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->____target_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = TextMeshColor_get_EndValue_mFF77DE757427AB19CC141EECB001CB4C46C6C247_inline(__this, NULL);
		NullCheck(L_0);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_0, L_1, NULL);
		// EndValue = _start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____start_15;
		TextMeshColor_set_EndValue_mAA5EC3856175298FFF301AF53D725EE16FA490B4_inline(__this, L_2, NULL);
		// _start = _target.color;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_3 = __this->____target_14;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = TextMesh_get_color_m128E5D16AA72D5284C70957253DEAEE4FBEB023E(L_3, NULL);
		__this->____start_15 = L_4;
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
// UnityEngine.Color Pixelplacement.TweenSystem.ValueColor::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ValueColor_get_EndValue_mDE9F5C978D990A796735798D0B9FD7E911844148 (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueColor::set_EndValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueColor_set_EndValue_m32F3B24E978B1776AF6700A95E02811E1F19CA9F (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueColor::.ctor(UnityEngine.Color,UnityEngine.Color,System.Action`1<UnityEngine.Color>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueColor__ctor_m795587EF7FA6D5AA6AF6B9CCF082A6C503ABA3EF (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueColor (Color startValue, Color endValue, Action<Color> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___endValue1;
		ValueColor_set_EndValue_m32F3B24E978B1776AF6700A95E02811E1F19CA9F_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueColor::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueColor_SetStartValue_m39DBCA9CA8B92F512778BB1F3CE64E9FFBA43D0C (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueColor::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueColor_Operation_mE341A4E90BF9E4D6D5F199FB151076473F4F3F8D (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ValueColor_get_EndValue_mDE9F5C978D990A796735798D0B9FD7E911844148_inline(__this, NULL);
		float L_2 = ___percentage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenUtilities_LinearInterpolate_m15D7C9F7FD49147DC75AE20C621085E78E960183(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* L_4 = __this->____valueUpdatedCallback_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mB242D744D5F7C07844DD56B501228FA7FBA46E52_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueColor::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueColor_Loop_mDEBCFBC5EC71B33C7CF3B5006390BF661AE280AB (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueColor::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueColor_PingPong_m1A0D4E4B16FC4279F14A97D141B9C6D48DA5234C (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// Color temp = _start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ValueColor_get_EndValue_mDE9F5C978D990A796735798D0B9FD7E911844148_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		ValueColor_set_EndValue_m32F3B24E978B1776AF6700A95E02811E1F19CA9F_inline(__this, L_2, NULL);
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
// System.Single Pixelplacement.TweenSystem.ValueFloat::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ValueFloat_get_EndValue_m3EB25AABDFE9F4B6E74CA462A133427AA0342DC6 (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::set_EndValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueFloat_set_EndValue_m41E8CA9652B898332DE7997D367447AA6B965BB8 (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::.ctor(System.Single,System.Single,System.Action`1<System.Single>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueFloat__ctor_mC5D399F1ECEFB32041755E09D5921D84DDA293CF (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, float ___startValue0, float ___endValue1, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueFloat (float startValue, float endValue, Action<float> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		float L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		float L_9 = ___endValue1;
		ValueFloat_set_EndValue_m41E8CA9652B898332DE7997D367447AA6B965BB8_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueFloat::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueFloat_SetStartValue_mB32FF7A2636CEB112A89430E91B00D833235836C (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueFloat_Operation_m75632B7F5F79F952C78DC66DF302822FFD3306BE (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		float L_0 = __this->____start_15;
		float L_1;
		L_1 = ValueFloat_get_EndValue_m3EB25AABDFE9F4B6E74CA462A133427AA0342DC6_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_4 = __this->____valueUpdatedCallback_14;
		float L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueFloat_Loop_m1230DA6A998C27278E20B0777729865622BEF2D1 (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueFloat::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueFloat_PingPong_m3473A63CA64A91266753F58630928A16447DB572 (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// float temp = _start;
		float L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		float L_1;
		L_1 = ValueFloat_get_EndValue_m3EB25AABDFE9F4B6E74CA462A133427AA0342DC6_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		float L_2 = V_0;
		ValueFloat_set_EndValue_m41E8CA9652B898332DE7997D367447AA6B965BB8_inline(__this, L_2, NULL);
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
// System.Single Pixelplacement.TweenSystem.ValueInt::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ValueInt_get_EndValue_m60FE2A6B05C282CF3B90EC37CAA8222DEA4E87EB (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueInt::set_EndValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInt_set_EndValue_m69944E770F9DEB9DA4FCCAC0DE7C51CC63E75D5B (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueInt::.ctor(System.Int32,System.Int32,System.Action`1<System.Int32>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInt__ctor_m1004FD334554141D458D3D180CD69E2CB65BFFF8 (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, int32_t ___startValue0, int32_t ___endValue1, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueInt (int startValue, int endValue, Action<int> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		int32_t L_8 = ___startValue0;
		__this->____start_15 = ((float)L_8);
		// EndValue = endValue;
		int32_t L_9 = ___endValue1;
		ValueInt_set_EndValue_m69944E770F9DEB9DA4FCCAC0DE7C51CC63E75D5B_inline(__this, ((float)L_9), NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueInt::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueInt_SetStartValue_m588A9662A84860466C976F9F644F0712A7C5027A (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueInt::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInt_Operation_mC073E69E71A5B4FF6B48A9B41342A4D2EB387B3D (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		float L_0 = __this->____start_15;
		float L_1;
		L_1 = ValueInt_get_EndValue_m60FE2A6B05C282CF3B90EC37CAA8222DEA4E87EB_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback ((int)calculatedValue);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = __this->____valueUpdatedCallback_14;
		float L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueInt::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInt_Loop_m125F2873DE9B7205197919200D735923391EB48F (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueInt::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueInt_PingPong_m14720C9470E77E09B1C68E57170646010006261E (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// float temp = _start;
		float L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		float L_1;
		L_1 = ValueInt_get_EndValue_m60FE2A6B05C282CF3B90EC37CAA8222DEA4E87EB_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		float L_2 = V_0;
		ValueInt_set_EndValue_m69944E770F9DEB9DA4FCCAC0DE7C51CC63E75D5B_inline(__this, L_2, NULL);
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
// UnityEngine.Rect Pixelplacement.TweenSystem.ValueRect::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ValueRect_get_EndValue_mDA7C66F83C6FB292DADC8DFF4F8A03D188DCCB9C (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) 
{
	{
		// public Rect EndValue {get; private set;}
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueRect::set_EndValue(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRect_set_EndValue_m5C6300BD2F5CA990F22068EF818FEE67C2A787F9 (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) 
{
	{
		// public Rect EndValue {get; private set;}
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueRect::.ctor(UnityEngine.Rect,UnityEngine.Rect,System.Action`1<UnityEngine.Rect>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRect__ctor_mE3DAC6C7784E5CA1EF76E98C707975CAF62F8721 (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___startValue0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueRect (Rect startValue, Rect endValue, Action<Rect> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___endValue1;
		ValueRect_set_EndValue_m5C6300BD2F5CA990F22068EF818FEE67C2A787F9_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueRect::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueRect_SetStartValue_m974A1860438A6E455C70DA091170068F487782C4 (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueRect::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRect_Operation_m0A150C7FA30B9AE48499EBA58BC779A047B399AD (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->____start_15;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = ValueRect_get_EndValue_mDA7C66F83C6FB292DADC8DFF4F8A03D188DCCB9C_inline(__this, NULL);
		float L_2 = ___percentage0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = TweenUtilities_LinearInterpolate_m32388C9E27FACF5204A732D1CB983549AF5C7AB8(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* L_4 = __this->____valueUpdatedCallback_14;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m8B62C5CC91BE7EA3B50F580F956EEF269D571622_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueRect::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRect_Loop_m7CE27808AB4A36B11B39E94A677B68A4A2D70099 (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueRect::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRect_PingPong_mEC75A443AF7FA333BA9C740C55FA93AA6D1EE2A3 (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// Rect temp = _start;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = ValueRect_get_EndValue_mDA7C66F83C6FB292DADC8DFF4F8A03D188DCCB9C_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		ValueRect_set_EndValue_m5C6300BD2F5CA990F22068EF818FEE67C2A787F9_inline(__this, L_2, NULL);
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
// UnityEngine.Vector2 Pixelplacement.TweenSystem.ValueVector2::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ValueVector2_get_EndValue_mF8E813A329208289D4D311839F48E24887B5B89B (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::set_EndValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector2_set_EndValue_mD91A69DFE8364F24E7B05FCF125E4000F5244456 (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Action`1<UnityEngine.Vector2>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector2__ctor_m1A51B67C0358672D68F68094B5B34723C810ECF5 (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueVector2 (Vector2 startValue, Vector2 endValue, Action<Vector2> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___endValue1;
		ValueVector2_set_EndValue_mD91A69DFE8364F24E7B05FCF125E4000F5244456_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueVector2::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueVector2_SetStartValue_mF01B7EDB132B8E08C1641B0B92BECB65FDB79D8C (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector2_Operation_mBD4A48C70C1101907AC4C6C873454311B4529AD6 (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____start_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = ValueVector2_get_EndValue_mF8E813A329208289D4D311839F48E24887B5B89B_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TweenUtilities_LinearInterpolate_mE63EAA0109B45EE02496090962F6442C06597A4D(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* L_4 = __this->____valueUpdatedCallback_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector2_Loop_m8EDA37E85CC600889E43DD1B4EF5D0370F47859C (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector2::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector2_PingPong_m517D8786F44CABCE946F16344073A391FA38D299 (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// Vector2 temp = _start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = ValueVector2_get_EndValue_mF8E813A329208289D4D311839F48E24887B5B89B_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		ValueVector2_set_EndValue_mD91A69DFE8364F24E7B05FCF125E4000F5244456_inline(__this, L_2, NULL);
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
// UnityEngine.Vector3 Pixelplacement.TweenSystem.ValueVector3::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ValueVector3_get_EndValue_m136902BBE88386B48D1A3DB6BA3D4E921DEEC933 (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::set_EndValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector3_set_EndValue_m2A4C36D20A72453B23C50B70050137901E970D53 (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Action`1<UnityEngine.Vector3>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector3__ctor_m4FE53E31651977E56331E658D7EA1DB33A07CA32 (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueVector3 (Vector3 startValue, Vector3 endValue, Action<Vector3> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___endValue1;
		ValueVector3_set_EndValue_m2A4C36D20A72453B23C50B70050137901E970D53_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueVector3::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueVector3_SetStartValue_mA4DADB12551618833DFF81F10960ED241F28E7C5 (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector3_Operation_m169271BAF99BF4AC98F425BA442074457616F41B (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____start_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = ValueVector3_get_EndValue_m136902BBE88386B48D1A3DB6BA3D4E921DEEC933_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = TweenUtilities_LinearInterpolate_mFCBDA02AD4CD718FED44A8C131D60840830FA571(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_4 = __this->____valueUpdatedCallback_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector3_Loop_m3337FF7F0B82CCB5DACD481F5DB6ABC13A180C10 (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector3::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector3_PingPong_mB9E9D64E1627653135C6012E81891F785771C9EF (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// Vector3 temp = _start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = ValueVector3_get_EndValue_m136902BBE88386B48D1A3DB6BA3D4E921DEEC933_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		ValueVector3_set_EndValue_m2A4C36D20A72453B23C50B70050137901E970D53_inline(__this, L_2, NULL);
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
// UnityEngine.Vector4 Pixelplacement.TweenSystem.ValueVector4::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ValueVector4_get_EndValue_mACEA7BDA2B035D9F9EEDD73F1104EA3E62DFD7AD (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::set_EndValue(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector4_set_EndValue_mC88FBD5FDA89788F63D5904568F9B418959E458E (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,System.Action`1<UnityEngine.Vector4>,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector4__ctor_mC85CF47AA114126D6DF576BE9E285F71E1B1C9FC (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___startValue0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___endValue1, Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* ___valueUpdatedCallback2, float ___duration3, float ___delay4, bool ___obeyTimescale5, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve6, int32_t ___loop7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback8, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback9, const RuntimeMethod* method) 
{
	{
		// public ValueVector4 (Vector4 startValue, Vector4 endValue, Action<Vector4> valueUpdatedCallback, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Value, -1, duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		float L_0 = ___duration3;
		float L_1 = ___delay4;
		bool L_2 = ___obeyTimescale5;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___curve6;
		int32_t L_4 = ___loop7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___startCallback8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___completeCallback9;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)19), (-1), L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// _valueUpdatedCallback = valueUpdatedCallback;
		Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* L_7 = ___valueUpdatedCallback2;
		__this->____valueUpdatedCallback_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueUpdatedCallback_14), (void*)L_7);
		// _start = startValue;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___startValue0;
		__this->____start_15 = L_8;
		// EndValue = endValue;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___endValue1;
		ValueVector4_set_EndValue_mC88FBD5FDA89788F63D5904568F9B418959E458E_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.ValueVector4::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueVector4_SetStartValue_mD024E94E9CF4DBF97228FC4609F709B4DDEA181A (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector4_Operation_m59290B8E5DBB5422262782BC4ADC54087B3C0F29 (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, float ___percentage0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector4 calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->____start_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = ValueVector4_get_EndValue_mACEA7BDA2B035D9F9EEDD73F1104EA3E62DFD7AD_inline(__this, NULL);
		float L_2 = ___percentage0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = TweenUtilities_LinearInterpolate_m2C7D17B85BBE39629A84E30E05417C5F4776B5B4(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _valueUpdatedCallback (calculatedValue);
		Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* L_4 = __this->____valueUpdatedCallback_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m9293612C0DEA13BB9B5CADE956F799DE325BBD4B_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector4_Loop_m377727CCB147F0672188D132ABDBC0A0BE8E7245 (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.ValueVector4::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVector4_PingPong_m2004BAAEEDA42D8CC5A4CCD9B39E0C34620AF74C (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// Vector4 temp = _start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->____start_15;
		V_0 = L_0;
		// _start = EndValue;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = ValueVector4_get_EndValue_mACEA7BDA2B035D9F9EEDD73F1104EA3E62DFD7AD_inline(__this, NULL);
		__this->____start_15 = L_1;
		// EndValue = temp;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		ValueVector4_set_EndValue_mC88FBD5FDA89788F63D5904568F9B418959E458E_inline(__this, L_2, NULL);
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
// System.Single Pixelplacement.TweenSystem.Volume::get_EndValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Volume_get_EndValue_m09B5F138A306129FBB52925B136377FC443EDEEB (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Pixelplacement.TweenSystem.Volume::set_EndValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_set_EndValue_mEC25EBA5AB3A1CCC43A3AF64CFC5F00082791E13 (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Volume::.ctor(UnityEngine.AudioSource,System.Single,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve,Pixelplacement.Tween/LoopType,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume__ctor_m046B0771AE36059FF8EF5FE7DC46E6940FAE7294 (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___target0, float ___endValue1, float ___duration2, float ___delay3, bool ___obeyTimescale4, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve5, int32_t ___loop6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___startCallback7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___completeCallback8, const RuntimeMethod* method) 
{
	{
		// public Volume (AudioSource target, float endValue, float duration, float delay, bool obeyTimescale, AnimationCurve curve, Tween.LoopType loop, Action startCallback, Action completeCallback)
		TweenBase__ctor_m9904F1ACFDB3B81331A8AFEC20972A3F7100FDD1(__this, NULL);
		// SetEssentials (Tween.TweenType.Volume, target.GetInstanceID (), duration, delay, obeyTimescale, curve, loop, startCallback, completeCallback);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___target0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		float L_2 = ___duration2;
		float L_3 = ___delay3;
		bool L_4 = ___obeyTimescale4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___curve5;
		int32_t L_6 = ___loop6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___startCallback7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___completeCallback8;
		TweenBase_SetEssentials_m2C1298E229810D4661038595A0A5EF0E8875C081(__this, ((int32_t)12), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// _target = target;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = ___target0;
		__this->____target_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_14), (void*)L_9);
		// EndValue = endValue;
		float L_10 = ___endValue1;
		Volume_set_EndValue_mEC25EBA5AB3A1CCC43A3AF64CFC5F00082791E13_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Pixelplacement.TweenSystem.Volume::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Volume_SetStartValue_mAFEF08BF9973FFB37C912C0632DC1F96152CDC7C (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target == null) return false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (_target == null) return false;
		return (bool)0;
	}

IL_0010:
	{
		// _start = _target.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____target_14;
		NullCheck(L_2);
		float L_3;
		L_3 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_2, NULL);
		__this->____start_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Void Pixelplacement.TweenSystem.Volume::Operation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_Operation_m2D17979FD934FD2A8A72492D5164D79EC13EC70F (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, float ___percentage0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float calculatedValue = TweenUtilities.LinearInterpolate (_start, EndValue, percentage);
		float L_0 = __this->____start_15;
		float L_1;
		L_1 = Volume_get_EndValue_m09B5F138A306129FBB52925B136377FC443EDEEB_inline(__this, NULL);
		float L_2 = ___percentage0;
		float L_3;
		L_3 = TweenUtilities_LinearInterpolate_m67D5FEBE959602306D67308E8326ED116251ECEA(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// _target.volume = calculatedValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____target_14;
		float L_5 = V_0;
		NullCheck(L_4);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Volume::Loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_Loop_mCA7097E430BCE822AAF90BD620A1DF57710E4595 (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.volume = _start;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____target_14;
		float L_1 = __this->____start_15;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pixelplacement.TweenSystem.Volume::PingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volume_PingPong_mF7FDB85F17195AFA91B10F910B4B9193D260E606 (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) 
{
	{
		// ResetStartTime ();
		TweenBase_ResetStartTime_mCD26863A234ACA8EB2AB6579C62C23700F7E1B94(__this, NULL);
		// _target.volume = EndValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____target_14;
		float L_1;
		L_1 = Volume_get_EndValue_m09B5F138A306129FBB52925B136377FC443EDEEB_inline(__this, NULL);
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_1, NULL);
		// EndValue = _start;
		float L_2 = __this->____start_15;
		Volume_set_EndValue_mEC25EBA5AB3A1CCC43A3AF64CFC5F00082791E13_inline(__this, L_2, NULL);
		// _start = _target.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____target_14;
		NullCheck(L_3);
		float L_4;
		L_4 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_3, NULL);
		__this->____start_15 = L_4;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Rotation_set_EndValue_m42592099FAB5E1731C86CF82CE70A0CE70A1CADE_inline (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rotation_get_EndValue_m24E6EB1C2FF7DAA4325C699EFBCDC4A67D3B4D28_inline (Rotation_tFC8E33866D090ABF8843E7FE84C2D5774F63E59B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderColor_set_EndValue_m7C27E614217B0E6852ACE6E25F7F15E30AD23A9E_inline (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ShaderColor_get_EndValue_m9E05549771C698BDE80B64AB5BD09A34C3CD3A6D_inline (ShaderColor_tE31B068C943F76921E770E8EFB052BF314E7B303* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderFloat_set_EndValue_mBDEF4C2AA3B57DA352D20D6EFE9CD16348C2C257_inline (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ShaderFloat_get_EndValue_m1A8903A787923034EF082318D9A48E542AC55B2F_inline (ShaderFloat_t0C1A950575861C6FB5442801346F7888E53D7DD1* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderInt_set_EndValue_m49E6DCBB96C188A2378C2A8A36D91D5DFF29713B_inline (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int EndValue {get; private set;}
		int32_t L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShaderInt_get_EndValue_m869220ED5A401EC975269881484D8A222942973A_inline (ShaderInt_tC964FDC978A860A42025E7E012F4D688298476D8* __this, const RuntimeMethod* method) 
{
	{
		// public int EndValue {get; private set;}
		int32_t L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShaderVector_set_EndValue_m1DB327179840788C1518B048655323A22411436B_inline (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ShaderVector_get_EndValue_mF6AC1996239D5EBF0BC5F9C861CB951BDC168010_inline (ShaderVector_t90FEB31B7FF0CECB044C8F264D0DC95733A8D01B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Size_set_EndValue_m8BF2BECDE489A34521CED010357B5B6C9B1432EE_inline (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Size_get_EndValue_m956E6CB2D0C50B209221F0BA1729019DC04F7C53_inline (Size_t967017E7F4A5DB3D82B713EFC3764E41C55FD62E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplinePercentage_set_EndValue_mE2E92D2C37E2078CDED1B53766A72A6D42C0ABF8_inline (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SplinePercentage_get_EndValue_m302501A69777A838ADA241D322CFE9A34161EB9D_inline (SplinePercentage_t1976B3588BE73288EDBD3EFF0181DDFE9CEEDAF4* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteRendererColor_set_EndValue_m249DD966AE319D4BE482939A350A27B3999ECA91_inline (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRendererColor_get_EndValue_mDA5552134C7EFB53A278DB853A1ABFE434DE134E_inline (SpriteRendererColor_tA3C8DB669D66E296A752C920E2465C15023EC83F* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextColor_set_EndValue_m43C97404BA031A412CA9141130C78F5205A9D8CA_inline (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextColor_get_EndValue_m948807B2FA200649CB15347179A4985B3CE4EBEB_inline (TextColor_t3EC25FB3BB30616AE40B75C6224DCF5C05D7EE55* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextMeshColor_set_EndValue_mAA5EC3856175298FFF301AF53D725EE16FA490B4_inline (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TextMeshColor_get_EndValue_mFF77DE757427AB19CC141EECB001CB4C46C6C247_inline (TextMeshColor_tA41E8F3E8B8BC118714FF148D2701C699E697171* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueColor_set_EndValue_m32F3B24E978B1776AF6700A95E02811E1F19CA9F_inline (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ValueColor_get_EndValue_mDE9F5C978D990A796735798D0B9FD7E911844148_inline (ValueColor_tEC1FDBC71DC1838266D1EC519A44824FBA2E81C3* __this, const RuntimeMethod* method) 
{
	{
		// public Color EndValue {get; private set;}
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueFloat_set_EndValue_m41E8CA9652B898332DE7997D367447AA6B965BB8_inline (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueFloat_get_EndValue_m3EB25AABDFE9F4B6E74CA462A133427AA0342DC6_inline (ValueFloat_t98CFBF00DC6E56822E699B363784B017B82D00D3* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueInt_set_EndValue_m69944E770F9DEB9DA4FCCAC0DE7C51CC63E75D5B_inline (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueInt_get_EndValue_m60FE2A6B05C282CF3B90EC37CAA8222DEA4E87EB_inline (ValueInt_tE7DBF107279F415A203B746D30A34B35901942CA* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueRect_set_EndValue_m5C6300BD2F5CA990F22068EF818FEE67C2A787F9_inline (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) 
{
	{
		// public Rect EndValue {get; private set;}
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ValueRect_get_EndValue_mDA7C66F83C6FB292DADC8DFF4F8A03D188DCCB9C_inline (ValueRect_t622D3167FFD41D1F62D96FB202BD1B59F76921BD* __this, const RuntimeMethod* method) 
{
	{
		// public Rect EndValue {get; private set;}
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector2_set_EndValue_mD91A69DFE8364F24E7B05FCF125E4000F5244456_inline (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ValueVector2_get_EndValue_mF8E813A329208289D4D311839F48E24887B5B89B_inline (ValueVector2_tE23DC0B829E09651B3767D666CD849DB24234E70* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 EndValue {get; private set;}
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector3_set_EndValue_m2A4C36D20A72453B23C50B70050137901E970D53_inline (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ValueVector3_get_EndValue_m136902BBE88386B48D1A3DB6BA3D4E921DEEC933_inline (ValueVector3_tFF4E0E3E8B0DAEBD3A3174B6FA3D1D37175BF31D* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 EndValue {get; private set;}
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueVector4_set_EndValue_mC88FBD5FDA89788F63D5904568F9B418959E458E_inline (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ValueVector4_get_EndValue_mACEA7BDA2B035D9F9EEDD73F1104EA3E62DFD7AD_inline (ValueVector4_tD3E1ABD676457904921CCC77EEA5412F70D93A95* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 EndValue {get; private set;}
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Volume_set_EndValue_mEC25EBA5AB3A1CCC43A3AF64CFC5F00082791E13_inline (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = ___value0;
		__this->___U3CEndValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Volume_get_EndValue_m09B5F138A306129FBB52925B136377FC443EDEEB_inline (Volume_t89263B814DF4C48A811C721FDCFB0E0321C61044* __this, const RuntimeMethod* method) 
{
	{
		// public float EndValue {get; private set;}
		float L_0 = __this->___U3CEndValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mB242D744D5F7C07844DD56B501228FA7FBA46E52_gshared_inline (Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8B62C5CC91BE7EA3B50F580F956EEF269D571622_gshared_inline (Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m3C60C84018CAD36C0EC956A14935394A7DD116C6_gshared_inline (Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9293612C0DEA13BB9B5CADE956F799DE325BBD4B_gshared_inline (Action_1_t84D0CA347FC997E1202ECA3ED828B057841444EF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
