#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Animate
struct Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2;
// HelloUnity
struct HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A;
// Home
struct Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// Rotate
struct Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,System.UInt32>[]
struct EntryU5BU5D_tBE9E5F60D24FF45BBFEEB82F9F6B794ACEAB5384;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,System.UInt32>
struct KeyCollection_t35E1902012CE996A527C97AE90BC3ED5D2CEF2C8;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.UInt32>
struct ValueCollection_tD8D7F29CF071CDA1CE252F6C23A29DC704513BDC;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>
struct Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>
struct Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tA583C071DBB4FFE6844A462DAB596DB2A3F14D24;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TTTRtcEngine.IRtcEngineVoice
struct IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0;
// TTTRtcEngine.IRtcEngineVoice/AudioMixingFinishedHandler
struct AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57;
// TTTRtcEngine.IRtcEngineVoice/AudioRouteChangedHandler
struct AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679;
// TTTRtcEngine.IRtcEngineVoice/ConnectionLostHandler
struct ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656;
// TTTRtcEngine.IRtcEngineVoice/JoinChannelSuccessHandler
struct JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4;
// TTTRtcEngine.IRtcEngineVoice/LeaveChannelHandler
struct LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4;
// TTTRtcEngine.IRtcEngineVoice/ReportAuidoLevelHandler
struct ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B;
// TTTRtcEngine.IRtcEngineVoice/RtcStatsHandler
struct RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8;
// TTTRtcEngine.IRtcEngineVoice/SDKErrorHandler
struct SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42;
// TTTRtcEngine.IRtcEngineVoice/UserJoinedHandler
struct UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870;
// TTTRtcEngine.IRtcEngineVoice/UserMutedHandler
struct UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12;
// TTTRtcEngine.IRtcEngineVoice/UserOfflineHandler
struct UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;

IL2CPP_EXTERN_C RuntimeClass* AUDIO_ROUTE_tBDFB0AE5F0AF58C0E78F5A59F26D66AFC28C5629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ERROR_CODE_t74F1EB1D9F763034C93203B83E1CD9AE22E3DDC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* USER_OFFLINE_REASON_t66B1E8C1CC8B45278911495F826EB9AF7F296CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0022020F2628DC9FD757B211AC969BFAD9AAE7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral07C88CF311C4C8651DAB8A1803603212512BFE97;
IL2CPP_EXTERN_C String_t* _stringLiteral111AE237E2275E4B66B33EE469BD1FE6B0992AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral165C51332252444354AEE69E6135D8CC126AC576;
IL2CPP_EXTERN_C String_t* _stringLiteral1B4FA87230C03E8DAB1743F4DB35DF0273AE9C56;
IL2CPP_EXTERN_C String_t* _stringLiteral2623221512D54F8BB2418C9BF984BE2214EAF14B;
IL2CPP_EXTERN_C String_t* _stringLiteral26CBAF14D2F386AD284A92F9F6D31D6ECACC5FEC;
IL2CPP_EXTERN_C String_t* _stringLiteral2B72B24E0F3227594AB6E29C83243A8CD286BA04;
IL2CPP_EXTERN_C String_t* _stringLiteral34C18E24D1DFBBB529FABA38B503601CB512F20E;
IL2CPP_EXTERN_C String_t* _stringLiteral39CCB32D95EDFDBCD882F2B01809724EC640EA16;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1C2E9D85C695E401ACE8B9BD80E50AB85D0DA9;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0F45430E7C5886CE48D1F8F3639BE751C6747E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B976B5DE40DF7C22D435DAD807B2E58A91AFE6E;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral528A35ABDE11001F52EA29C3EA8C337E4316AD50;
IL2CPP_EXTERN_C String_t* _stringLiteral52A651993401E6CF6A271B66D8A50C45879BCF4E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F76EDC5DE7B87A1A66E3CBB852F9F91695570BF;
IL2CPP_EXTERN_C String_t* _stringLiteral709A15826606275C4EDC819F876793675DACFAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral70B5231801B90DAE3E16E7654389124D275D7372;
IL2CPP_EXTERN_C String_t* _stringLiteral799E335F9DCB437AAF1EAB077CB7D1F3AD4A5015;
IL2CPP_EXTERN_C String_t* _stringLiteral7C142FEF1A2EF2CF013D59FA626258C385072DD4;
IL2CPP_EXTERN_C String_t* _stringLiteral7E01819E649C698F9904E7835EFEDB92ED9C474A;
IL2CPP_EXTERN_C String_t* _stringLiteral817B354DC01A34895EAB0C37E21AF38DC0850D08;
IL2CPP_EXTERN_C String_t* _stringLiteral8967E123B7E06FAC0F23B25831F52606C4638898;
IL2CPP_EXTERN_C String_t* _stringLiteral962C9D8E141A1C07339E61B07AA12BC4FC66D9FA;
IL2CPP_EXTERN_C String_t* _stringLiteral9655A4D3B22F5D73226691F207A80E8F2B1395EB;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA6A2951462F4A9626769B7A4250BF3C5C2580D;
IL2CPP_EXTERN_C String_t* _stringLiteralAFACD1C5478BC5B3DA40A84A6DE0B6CED2BE1397;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralB87EF45EC9DD079602A9F5A7CAAC1500200B4D4D;
IL2CPP_EXTERN_C String_t* _stringLiteralC58D74E9987D267995EF81EEAA600F427F86B44B;
IL2CPP_EXTERN_C String_t* _stringLiteralD800A54E59396E004BC0A0AD287EE19631FF4CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD933AFE5FC2C080CCD6655930F7F1585938A45B5;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC94E318767D6780E06FE39FC0A88DC7FAECEAF;
IL2CPP_EXTERN_C String_t* _stringLiteralE6007EDF54F28C4F977FDDF51FEB6A613176ED6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE660B31DE3AE307A8D89844447D213267CA581F0;
IL2CPP_EXTERN_C String_t* _stringLiteralE710068682342D450B7A22106AE599ADA0A02AE5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDB3A30D630135D0DA1BE3ECB32C2E11BB43BAE99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_t533609195B110760BCFF00B746C87D81969CB005_mA51516D144F85CAE471A6A68DF98CFB88FCE87AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloUnity_OnReportAuidoLevel_mEF1D1EA3D8A13E0B4636A0699DD4A29571596210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloUnity_OnUserJoined_m4CD740853264D2A3804D7F1B6DD9A0B42204A93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloUnity_OnUserOffline_mECA27CE90D175EC63ED93CF4817EBE772430DBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Home_OnError_m387558451FC2A6B0674A4F556B329A6529B22C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Home_OnJoinChannelSuccess_mC7350599E0AA3335799FD2A362544484A237B633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Animate_Update_m7350E88E2B612AD6B78063939D9AA624B640B29A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioRouteChangedHandler_BeginInvoke_mB72FB6344319A9883794C6EC7ACA089018AC4868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_OnHelloUnitySceneLoaded_mAA9494F9D1B592A79861F24B89C016E0E1477223_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_OnReportAuidoLevel_mEF1D1EA3D8A13E0B4636A0699DD4A29571596210_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_OnUserJoined_m4CD740853264D2A3804D7F1B6DD9A0B42204A93C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_OnUserOffline_mECA27CE90D175EC63ED93CF4817EBE772430DBD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity__ctor_mF1A609785110F01585257F148B7DFE28A6E2BC1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_getAvailableGameObject_mF592486C6701BED6D3F6CF329BA1EC52E97C59DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_joinChannel_mC9F29CDD951995116DBC7038C631A062B2FDF169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_leaveChannel_m02E113D1079105B6D1C65BB8624258AF96AD85B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_loadEngine_m42F32A4F0DCA04D4CED02640D09962E9F22CC587_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HelloUnity_unloadEngine_mDC8063FE13BEEC63E4182D66298DB3C4EC5D6B57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_OnError_m387558451FC2A6B0674A4F556B329A6529B22C42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_OnJoinButtonClicked_m46D8DA06647CE43D751EB7D521333898EBD5AF1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_OnJoinChannelSuccess_mC7350599E0AA3335799FD2A362544484A237B633_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_OnLeaveButtonClicked_m5FE82ABA9B6DFA35FDDF04921EF8512F78F1D6D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_Start_m6487793DB12B7C42CF1C9E3462921FA43D251389_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home_Update_mAC047D84EAB160A60617659E58910158BF6AA119_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Home__cctor_mE4E245407723B950E2341BAFEDBFBD19BD838332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_AdjustAudioMixingVolume_mC5E335D1F1AD8FD3332B1928E0210E18D1518009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_Destroy_m24E4F382821060984965BE14C3BB164BFE7633B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_EnableAudioVolumeIndication_m5EBCA7E7D2ED7B9AE4ED046A7C53078C34A2B7DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetAudioMixingCurrentPosition_mB704B147A5D9B7B0865450DF5F18AA973680DD1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetAudioMixingDuration_m7424C2B278A4C70189630302A5A8291F57E7229A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetEngine_m6A61D393969D869751575E00799E930CE0A3A71D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetErrorDescription_m3525329365C21E553D58A012FA4DC815FB709CF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetMessageCount_m84C91AF3263764C9A60F6B79BE59E74B6510FC26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_GetSdkVersion_m9C9DFCFD3E01C15CE0350485C21001D7601EE0C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_IsSpeakerphoneEnabled_m62F79E9D62F3C7134A68D9F2A702B83624613021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_JoinChannelByKey_m77DA8D80264864D6D39A13E0ECA08B576BFDA4BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_LeaveChannel_mBE8E2161E4F986E784FE8C1C880BCC26D7AC8E19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_MuteAllRemoteAudioStreams_m4F6EE3A6D434FD4007F4FD19FE1295607ABA4077_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_MuteLocalAudioStream_m4AE787FF1753F90D2083A35CCBF99E9F3ECE7F85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_MuteRemoteAudioStream_mDA8583F6EDFB9883CEC8D0293E2E228FC1A1B5D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_PauseAudioMixing_m9698C35C216C0E9E9B2723BA2E5DE89EE788678C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_Poll_m86DE9AFAC3F8062557B65A9DF3B824CDC4A8AA85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_QueryEngine_m4308BCDD92BFB0A4242AB76B9FA8AC363D24AAB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_ResumeAudioMixing_m40116489376EE76B4C54763D3D57E703C2B32307_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetAudioMixingPosition_m0873ECE7F9F3508A87FD307D504BDBD1233C7131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetChannelProfile_m6FD73D99AC30CB14D11B1516A11A31F78C2B4F71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetDefaultAudioRouteToSpeakerphone_m791868C61DB4905A5162FA8B55F59A1234263BB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetEnableSpeakerphone_mF905B525E9894A7018F6F9808F34AAF0C920416F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetHighQualityAudioParametersWithFullband_m7987F8E0E2A9B5C9D72B8C447F21343F34094C49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetLogFile_m8CB6371D6E88D18E8F8C4A8B6195E87FC4E5B5AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_SetLogFilter_m5F1904EE83969A8FE5D025FE3DEFE1C219F6B422_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_StartAudioMixing_mD66C8571E930727CF085561FA1DB27B4E5E700D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice_StopAudioMixing_m211859D9AE1E9D9EACAE0825871168F67687DBD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IRtcEngineVoice__ctor_mD6D724E68F551478C683AF300021A62858C6A371_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JoinChannelSuccessHandler_BeginInvoke_m4C3A8EB3829D09F1747B5DEF542E9B037E20D8BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeaveChannelHandler_BeginInvoke_m9ECF43D150950AC93D4354100DA935DF0E27D0F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_FixedUpdate_m910EBDB7E33512D30C25DC396E0B40702004145A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnTriggerEnter_m2B7207647B00457B55985261B3F98429928B223E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReportAuidoLevelHandler_BeginInvoke_m8D8ECE8D1B4D8CEF269224AA66B4523AD6503639_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RtcStatsHandler_BeginInvoke_mA0CFEE6CAFFDA4010B9604B2709EB1CD8A0F9E34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SDKErrorHandler_BeginInvoke_m0B0FE2ABE6C8DA8787979DBBCDE2E3344E9659DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserJoinedHandler_BeginInvoke_m5B33E3AFC03E76513074C5F5806CB221595259A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserMutedHandler_BeginInvoke_m7E526F7C32E08A8B8F3E393A0094E0D1450206F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserOfflineHandler_BeginInvoke_m9583A680B6A80306E48F4B4F089A3D6B772F6469_MetadataUsageId;
struct ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>
struct  Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBE9E5F60D24FF45BBFEEB82F9F6B794ACEAB5384* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t35E1902012CE996A527C97AE90BC3ED5D2CEF2C8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD8D7F29CF071CDA1CE252F6C23A29DC704513BDC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___entries_1)); }
	inline EntryU5BU5D_tBE9E5F60D24FF45BBFEEB82F9F6B794ACEAB5384* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBE9E5F60D24FF45BBFEEB82F9F6B794ACEAB5384** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBE9E5F60D24FF45BBFEEB82F9F6B794ACEAB5384* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___keys_7)); }
	inline KeyCollection_t35E1902012CE996A527C97AE90BC3ED5D2CEF2C8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t35E1902012CE996A527C97AE90BC3ED5D2CEF2C8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t35E1902012CE996A527C97AE90BC3ED5D2CEF2C8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ___values_8)); }
	inline ValueCollection_tD8D7F29CF071CDA1CE252F6C23A29DC704513BDC * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD8D7F29CF071CDA1CE252F6C23A29DC704513BDC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD8D7F29CF071CDA1CE252F6C23A29DC704513BDC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// TTTRtcEngine.IRtcEngineVoice
struct  IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0  : public RuntimeObject
{
public:
	// TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler TTTRtcEngine.IRtcEngineVoice::OnJoinChannelSuccess
	JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * ___OnJoinChannelSuccess_1;
	// TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler TTTRtcEngine.IRtcEngineVoice::OnConnectionLost
	ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * ___OnConnectionLost_2;
	// TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler TTTRtcEngine.IRtcEngineVoice::OnUserJoined
	UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * ___OnUserJoined_3;
	// TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler TTTRtcEngine.IRtcEngineVoice::OnUserOffline
	UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * ___OnUserOffline_4;
	// TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler TTTRtcEngine.IRtcEngineVoice::OnLeaveChannel
	LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * ___OnLeaveChannel_5;
	// TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler TTTRtcEngine.IRtcEngineVoice::OnReportAuidoLevel
	ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * ___OnReportAuidoLevel_6;
	// TTTRtcEngine.IRtcEngineVoice_UserMutedHandler TTTRtcEngine.IRtcEngineVoice::OnUserMuted
	UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * ___OnUserMuted_7;
	// TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler TTTRtcEngine.IRtcEngineVoice::OnError
	SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * ___OnError_8;
	// TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler TTTRtcEngine.IRtcEngineVoice::OnRtcStats
	RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * ___OnRtcStats_9;
	// TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler TTTRtcEngine.IRtcEngineVoice::OnAudioMixingFinished
	AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * ___OnAudioMixingFinished_10;
	// TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler TTTRtcEngine.IRtcEngineVoice::OnAudioRouteChanged
	AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * ___OnAudioRouteChanged_11;

public:
	inline static int32_t get_offset_of_OnJoinChannelSuccess_1() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnJoinChannelSuccess_1)); }
	inline JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * get_OnJoinChannelSuccess_1() const { return ___OnJoinChannelSuccess_1; }
	inline JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 ** get_address_of_OnJoinChannelSuccess_1() { return &___OnJoinChannelSuccess_1; }
	inline void set_OnJoinChannelSuccess_1(JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * value)
	{
		___OnJoinChannelSuccess_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnJoinChannelSuccess_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnConnectionLost_2() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnConnectionLost_2)); }
	inline ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * get_OnConnectionLost_2() const { return ___OnConnectionLost_2; }
	inline ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 ** get_address_of_OnConnectionLost_2() { return &___OnConnectionLost_2; }
	inline void set_OnConnectionLost_2(ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * value)
	{
		___OnConnectionLost_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnConnectionLost_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserJoined_3() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnUserJoined_3)); }
	inline UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * get_OnUserJoined_3() const { return ___OnUserJoined_3; }
	inline UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 ** get_address_of_OnUserJoined_3() { return &___OnUserJoined_3; }
	inline void set_OnUserJoined_3(UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * value)
	{
		___OnUserJoined_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserJoined_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserOffline_4() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnUserOffline_4)); }
	inline UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * get_OnUserOffline_4() const { return ___OnUserOffline_4; }
	inline UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E ** get_address_of_OnUserOffline_4() { return &___OnUserOffline_4; }
	inline void set_OnUserOffline_4(UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * value)
	{
		___OnUserOffline_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserOffline_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnLeaveChannel_5() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnLeaveChannel_5)); }
	inline LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * get_OnLeaveChannel_5() const { return ___OnLeaveChannel_5; }
	inline LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 ** get_address_of_OnLeaveChannel_5() { return &___OnLeaveChannel_5; }
	inline void set_OnLeaveChannel_5(LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * value)
	{
		___OnLeaveChannel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLeaveChannel_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnReportAuidoLevel_6() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnReportAuidoLevel_6)); }
	inline ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * get_OnReportAuidoLevel_6() const { return ___OnReportAuidoLevel_6; }
	inline ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B ** get_address_of_OnReportAuidoLevel_6() { return &___OnReportAuidoLevel_6; }
	inline void set_OnReportAuidoLevel_6(ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * value)
	{
		___OnReportAuidoLevel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnReportAuidoLevel_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserMuted_7() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnUserMuted_7)); }
	inline UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * get_OnUserMuted_7() const { return ___OnUserMuted_7; }
	inline UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 ** get_address_of_OnUserMuted_7() { return &___OnUserMuted_7; }
	inline void set_OnUserMuted_7(UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * value)
	{
		___OnUserMuted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserMuted_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_8() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnError_8)); }
	inline SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * get_OnError_8() const { return ___OnError_8; }
	inline SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 ** get_address_of_OnError_8() { return &___OnError_8; }
	inline void set_OnError_8(SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * value)
	{
		___OnError_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnRtcStats_9() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnRtcStats_9)); }
	inline RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * get_OnRtcStats_9() const { return ___OnRtcStats_9; }
	inline RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 ** get_address_of_OnRtcStats_9() { return &___OnRtcStats_9; }
	inline void set_OnRtcStats_9(RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * value)
	{
		___OnRtcStats_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRtcStats_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioMixingFinished_10() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnAudioMixingFinished_10)); }
	inline AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * get_OnAudioMixingFinished_10() const { return ___OnAudioMixingFinished_10; }
	inline AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 ** get_address_of_OnAudioMixingFinished_10() { return &___OnAudioMixingFinished_10; }
	inline void set_OnAudioMixingFinished_10(AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * value)
	{
		___OnAudioMixingFinished_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioMixingFinished_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnAudioRouteChanged_11() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0, ___OnAudioRouteChanged_11)); }
	inline AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * get_OnAudioRouteChanged_11() const { return ___OnAudioRouteChanged_11; }
	inline AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 ** get_address_of_OnAudioRouteChanged_11() { return &___OnAudioRouteChanged_11; }
	inline void set_OnAudioRouteChanged_11(AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * value)
	{
		___OnAudioRouteChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioRouteChanged_11), (void*)value);
	}
};

struct IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields
{
public:
	// TTTRtcEngine.IRtcEngineVoice TTTRtcEngine.IRtcEngineVoice::instance
	IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * ___instance_12;

public:
	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields, ___instance_12)); }
	inline IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * get_instance_12() const { return ___instance_12; }
	inline IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_12), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
struct  KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.UInt32>
struct  KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093, ___key_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_key_0() const { return ___key_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// TTTRtcEngine.AudioVolumeInfo
struct  AudioVolumeInfo_t24129B64FDCE073142D691F233CA2A22CF7A7C87 
{
public:
	// System.UInt32 TTTRtcEngine.AudioVolumeInfo::uid
	uint32_t ___uid_0;
	// System.UInt32 TTTRtcEngine.AudioVolumeInfo::volume
	uint32_t ___volume_1;

public:
	inline static int32_t get_offset_of_uid_0() { return static_cast<int32_t>(offsetof(AudioVolumeInfo_t24129B64FDCE073142D691F233CA2A22CF7A7C87, ___uid_0)); }
	inline uint32_t get_uid_0() const { return ___uid_0; }
	inline uint32_t* get_address_of_uid_0() { return &___uid_0; }
	inline void set_uid_0(uint32_t value)
	{
		___uid_0 = value;
	}

	inline static int32_t get_offset_of_volume_1() { return static_cast<int32_t>(offsetof(AudioVolumeInfo_t24129B64FDCE073142D691F233CA2A22CF7A7C87, ___volume_1)); }
	inline uint32_t get_volume_1() const { return ___volume_1; }
	inline uint32_t* get_address_of_volume_1() { return &___volume_1; }
	inline void set_volume_1(uint32_t value)
	{
		___volume_1 = value;
	}
};


// TTTRtcEngine.RtcStats
struct  RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 
{
public:
	// System.UInt32 TTTRtcEngine.RtcStats::duration
	uint32_t ___duration_0;
	// System.UInt16 TTTRtcEngine.RtcStats::txAudioKBitRate
	uint16_t ___txAudioKBitRate_1;
	// System.UInt16 TTTRtcEngine.RtcStats::rxAudioKBitRate
	uint16_t ___rxAudioKBitRate_2;
	// System.UInt32 TTTRtcEngine.RtcStats::users
	uint32_t ___users_3;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8, ___duration_0)); }
	inline uint32_t get_duration_0() const { return ___duration_0; }
	inline uint32_t* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(uint32_t value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_txAudioKBitRate_1() { return static_cast<int32_t>(offsetof(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8, ___txAudioKBitRate_1)); }
	inline uint16_t get_txAudioKBitRate_1() const { return ___txAudioKBitRate_1; }
	inline uint16_t* get_address_of_txAudioKBitRate_1() { return &___txAudioKBitRate_1; }
	inline void set_txAudioKBitRate_1(uint16_t value)
	{
		___txAudioKBitRate_1 = value;
	}

	inline static int32_t get_offset_of_rxAudioKBitRate_2() { return static_cast<int32_t>(offsetof(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8, ___rxAudioKBitRate_2)); }
	inline uint16_t get_rxAudioKBitRate_2() const { return ___rxAudioKBitRate_2; }
	inline uint16_t* get_address_of_rxAudioKBitRate_2() { return &___rxAudioKBitRate_2; }
	inline void set_rxAudioKBitRate_2(uint16_t value)
	{
		___rxAudioKBitRate_2 = value;
	}

	inline static int32_t get_offset_of_users_3() { return static_cast<int32_t>(offsetof(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8, ___users_3)); }
	inline uint32_t get_users_3() const { return ___users_3; }
	inline uint32_t* get_address_of_users_3() { return &___users_3; }
	inline void set_users_3(uint32_t value)
	{
		___users_3 = value;
	}
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.UInt32>
struct  Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4, ___dictionary_0)); }
	inline Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4, ___current_3)); }
	inline KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.GameObject,System.UInt32>
struct  Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3, ___dictionary_0)); }
	inline Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3, ___current_3)); }
	inline KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// TTTRtcEngine.AUDIO_ROUTE
struct  AUDIO_ROUTE_tBDFB0AE5F0AF58C0E78F5A59F26D66AFC28C5629 
{
public:
	// System.Int32 TTTRtcEngine.AUDIO_ROUTE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AUDIO_ROUTE_tBDFB0AE5F0AF58C0E78F5A59F26D66AFC28C5629, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TTTRtcEngine.CHANNEL_PROFILE
struct  CHANNEL_PROFILE_tF8CF39C239FEDF188B3C5C539530A222F8F0B70B 
{
public:
	// System.Int32 TTTRtcEngine.CHANNEL_PROFILE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CHANNEL_PROFILE_tF8CF39C239FEDF188B3C5C539530A222F8F0B70B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TTTRtcEngine.ERROR_CODE
struct  ERROR_CODE_t74F1EB1D9F763034C93203B83E1CD9AE22E3DDC6 
{
public:
	// System.Int32 TTTRtcEngine.ERROR_CODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ERROR_CODE_t74F1EB1D9F763034C93203B83E1CD9AE22E3DDC6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TTTRtcEngine.LOG_FILTER
struct  LOG_FILTER_t57389618E3E3E34AB60663A7FF910194312A4098 
{
public:
	// System.Int32 TTTRtcEngine.LOG_FILTER::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LOG_FILTER_t57389618E3E3E34AB60663A7FF910194312A4098, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TTTRtcEngine.USER_OFFLINE_REASON
struct  USER_OFFLINE_REASON_t66B1E8C1CC8B45278911495F826EB9AF7F296CA1 
{
public:
	// System.Int32 TTTRtcEngine.USER_OFFLINE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(USER_OFFLINE_REASON_t66B1E8C1CC8B45278911495F826EB9AF7F296CA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct  Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Impulse_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_RelativeVelocity_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Rigidbody_2)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Collider_3)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.InputField_CharacterValidation
struct  CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E 
{
public:
	// System.Int32 UnityEngine.UI.InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_ContentType
struct  ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048 
{
public:
	// System.Int32 UnityEngine.UI.InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_InputType
struct  InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A 
{
public:
	// System.Int32 UnityEngine.UI.InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField_LineType
struct  LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6 
{
public:
	// System.Int32 UnityEngine.UI.InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_t806752C775BA713A91B6588A07CA98417CABC003 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler
struct  AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler
struct  AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler
struct  ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler
struct  JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler
struct  LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler
struct  ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler
struct  RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler
struct  SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler
struct  UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_UserMutedHandler
struct  UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12  : public MulticastDelegate_t
{
public:

public:
};


// TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler
struct  UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Animate
struct  Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Animate::i
	int32_t ___i_4;
	// System.Boolean Animate::speak
	bool ___speak_5;
	// System.Boolean Animate::isOnLine
	bool ___isOnLine_6;

public:
	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_speak_5() { return static_cast<int32_t>(offsetof(Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2, ___speak_5)); }
	inline bool get_speak_5() const { return ___speak_5; }
	inline bool* get_address_of_speak_5() { return &___speak_5; }
	inline void set_speak_5(bool value)
	{
		___speak_5 = value;
	}

	inline static int32_t get_offset_of_isOnLine_6() { return static_cast<int32_t>(offsetof(Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2, ___isOnLine_6)); }
	inline bool get_isOnLine_6() const { return ___isOnLine_6; }
	inline bool* get_address_of_isOnLine_6() { return &___isOnLine_6; }
	inline void set_isOnLine_6(bool value)
	{
		___isOnLine_6 = value;
	}
};


// HelloUnity
struct  HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String HelloUnity::AppID
	String_t* ___AppID_4;
	// System.UInt32 HelloUnity::MyUserID
	uint32_t ___MyUserID_5;
	// TTTRtcEngine.IRtcEngineVoice HelloUnity::RtcEngine
	IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * ___RtcEngine_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32> HelloUnity::UsersDictionary
	Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * ___UsersDictionary_7;

public:
	inline static int32_t get_offset_of_AppID_4() { return static_cast<int32_t>(offsetof(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A, ___AppID_4)); }
	inline String_t* get_AppID_4() const { return ___AppID_4; }
	inline String_t** get_address_of_AppID_4() { return &___AppID_4; }
	inline void set_AppID_4(String_t* value)
	{
		___AppID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppID_4), (void*)value);
	}

	inline static int32_t get_offset_of_MyUserID_5() { return static_cast<int32_t>(offsetof(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A, ___MyUserID_5)); }
	inline uint32_t get_MyUserID_5() const { return ___MyUserID_5; }
	inline uint32_t* get_address_of_MyUserID_5() { return &___MyUserID_5; }
	inline void set_MyUserID_5(uint32_t value)
	{
		___MyUserID_5 = value;
	}

	inline static int32_t get_offset_of_RtcEngine_6() { return static_cast<int32_t>(offsetof(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A, ___RtcEngine_6)); }
	inline IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * get_RtcEngine_6() const { return ___RtcEngine_6; }
	inline IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 ** get_address_of_RtcEngine_6() { return &___RtcEngine_6; }
	inline void set_RtcEngine_6(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * value)
	{
		___RtcEngine_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RtcEngine_6), (void*)value);
	}

	inline static int32_t get_offset_of_UsersDictionary_7() { return static_cast<int32_t>(offsetof(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A, ___UsersDictionary_7)); }
	inline Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * get_UsersDictionary_7() const { return ___UsersDictionary_7; }
	inline Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE ** get_address_of_UsersDictionary_7() { return &___UsersDictionary_7; }
	inline void set_UsersDictionary_7(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * value)
	{
		___UsersDictionary_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UsersDictionary_7), (void*)value);
	}
};


// Home
struct  Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text Home::MessageText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___MessageText_6;
	// UnityEngine.UI.InputField Home::ChannelInputField
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___ChannelInputField_7;
	// UnityEngine.UI.Button Home::JoinButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___JoinButton_8;
	// UnityEngine.UI.Button Home::LeaveButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___LeaveButton_9;
	// System.Boolean Home::IsPausingPoll
	bool ___IsPausingPoll_10;
	// System.Boolean Home::IsJoiningChannel
	bool ___IsJoiningChannel_11;

public:
	inline static int32_t get_offset_of_MessageText_6() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___MessageText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_MessageText_6() const { return ___MessageText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_MessageText_6() { return &___MessageText_6; }
	inline void set_MessageText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___MessageText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageText_6), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelInputField_7() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___ChannelInputField_7)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_ChannelInputField_7() const { return ___ChannelInputField_7; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_ChannelInputField_7() { return &___ChannelInputField_7; }
	inline void set_ChannelInputField_7(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___ChannelInputField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelInputField_7), (void*)value);
	}

	inline static int32_t get_offset_of_JoinButton_8() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___JoinButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_JoinButton_8() const { return ___JoinButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_JoinButton_8() { return &___JoinButton_8; }
	inline void set_JoinButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___JoinButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JoinButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_LeaveButton_9() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___LeaveButton_9)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_LeaveButton_9() const { return ___LeaveButton_9; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_LeaveButton_9() { return &___LeaveButton_9; }
	inline void set_LeaveButton_9(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___LeaveButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeaveButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_IsPausingPoll_10() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___IsPausingPoll_10)); }
	inline bool get_IsPausingPoll_10() const { return ___IsPausingPoll_10; }
	inline bool* get_address_of_IsPausingPoll_10() { return &___IsPausingPoll_10; }
	inline void set_IsPausingPoll_10(bool value)
	{
		___IsPausingPoll_10 = value;
	}

	inline static int32_t get_offset_of_IsJoiningChannel_11() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469, ___IsJoiningChannel_11)); }
	inline bool get_IsJoiningChannel_11() const { return ___IsJoiningChannel_11; }
	inline bool* get_address_of_IsJoiningChannel_11() { return &___IsJoiningChannel_11; }
	inline void set_IsJoiningChannel_11(bool value)
	{
		___IsJoiningChannel_11 = value;
	}
};

struct Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields
{
public:
	// HelloUnity Home::app
	HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * ___app_4;
	// System.String Home::ChannelName
	String_t* ___ChannelName_5;

public:
	inline static int32_t get_offset_of_app_4() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields, ___app_4)); }
	inline HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * get_app_4() const { return ___app_4; }
	inline HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A ** get_address_of_app_4() { return &___app_4; }
	inline void set_app_4(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * value)
	{
		___app_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_4), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelName_5() { return static_cast<int32_t>(offsetof(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields, ___ChannelName_5)); }
	inline String_t* get_ChannelName_5() const { return ___ChannelName_5; }
	inline String_t** get_address_of_ChannelName_5() { return &___ChannelName_5; }
	inline void set_ChannelName_5(String_t* value)
	{
		___ChannelName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelName_5), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Player::force
	int32_t ___force_4;
	// UnityEngine.UI.Text Player::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_5;
	// UnityEngine.GameObject Player::winText
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___winText_6;
	// UnityEngine.Rigidbody Player::rd
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rd_7;
	// System.Int32 Player::score
	int32_t ___score_8;

public:
	inline static int32_t get_offset_of_force_4() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___force_4)); }
	inline int32_t get_force_4() const { return ___force_4; }
	inline int32_t* get_address_of_force_4() { return &___force_4; }
	inline void set_force_4(int32_t value)
	{
		___force_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___text_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_5() const { return ___text_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_winText_6() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___winText_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_winText_6() const { return ___winText_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_winText_6() { return &___winText_6; }
	inline void set_winText_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___winText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winText_6), (void*)value);
	}

	inline static int32_t get_offset_of_rd_7() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___rd_7)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rd_7() const { return ___rd_7; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rd_7() { return &___rd_7; }
	inline void set_rd_7(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rd_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rd_7), (void*)value);
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___score_8)); }
	inline int32_t get_score_8() const { return ___score_8; }
	inline int32_t* get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(int32_t value)
	{
		___score_8 = value;
	}
};


// Rotate
struct  Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct  InputField_t533609195B110760BCFF00B746C87D81969CB005  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField_ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField_InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField_LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField_CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField_SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField_OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField_OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_43;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_44;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_45;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_InputTextCache_46;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_47;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_48;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_49;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_50;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_51;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_52;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_53;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_57;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_58;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_61;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_62;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_63;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_64;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_65;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_66;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_68;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TextComponent_22)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Placeholder_23)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnEndEdit_32)); }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretColor_35)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_SelectionColor_37)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_42() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretPosition_42)); }
	inline int32_t get_m_CaretPosition_42() const { return ___m_CaretPosition_42; }
	inline int32_t* get_address_of_m_CaretPosition_42() { return &___m_CaretPosition_42; }
	inline void set_m_CaretPosition_42(int32_t value)
	{
		___m_CaretPosition_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_43() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretSelectPosition_43)); }
	inline int32_t get_m_CaretSelectPosition_43() const { return ___m_CaretSelectPosition_43; }
	inline int32_t* get_address_of_m_CaretSelectPosition_43() { return &___m_CaretSelectPosition_43; }
	inline void set_m_CaretSelectPosition_43(int32_t value)
	{
		___m_CaretSelectPosition_43 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_44() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___caretRectTrans_44)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_44() const { return ___caretRectTrans_44; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_44() { return &___caretRectTrans_44; }
	inline void set_caretRectTrans_44(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_45() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CursorVerts_45)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_45() const { return ___m_CursorVerts_45; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_45() { return &___m_CursorVerts_45; }
	inline void set_m_CursorVerts_45(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_46() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputTextCache_46)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_InputTextCache_46() const { return ___m_InputTextCache_46; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_InputTextCache_46() { return &___m_InputTextCache_46; }
	inline void set_m_InputTextCache_46(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_InputTextCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_47() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CachedInputRenderer_47)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_47() const { return ___m_CachedInputRenderer_47; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_47() { return &___m_CachedInputRenderer_47; }
	inline void set_m_CachedInputRenderer_47(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_48() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_PreventFontCallback_48)); }
	inline bool get_m_PreventFontCallback_48() const { return ___m_PreventFontCallback_48; }
	inline bool* get_address_of_m_PreventFontCallback_48() { return &___m_PreventFontCallback_48; }
	inline void set_m_PreventFontCallback_48(bool value)
	{
		___m_PreventFontCallback_48 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_49() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Mesh_49)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_49() const { return ___m_Mesh_49; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_49() { return &___m_Mesh_49; }
	inline void set_m_Mesh_49(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_50() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AllowInput_50)); }
	inline bool get_m_AllowInput_50() const { return ___m_AllowInput_50; }
	inline bool* get_address_of_m_AllowInput_50() { return &___m_AllowInput_50; }
	inline void set_m_AllowInput_50(bool value)
	{
		___m_AllowInput_50 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_51() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ShouldActivateNextUpdate_51)); }
	inline bool get_m_ShouldActivateNextUpdate_51() const { return ___m_ShouldActivateNextUpdate_51; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_51() { return &___m_ShouldActivateNextUpdate_51; }
	inline void set_m_ShouldActivateNextUpdate_51(bool value)
	{
		___m_ShouldActivateNextUpdate_51 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_52() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_UpdateDrag_52)); }
	inline bool get_m_UpdateDrag_52() const { return ___m_UpdateDrag_52; }
	inline bool* get_address_of_m_UpdateDrag_52() { return &___m_UpdateDrag_52; }
	inline void set_m_UpdateDrag_52(bool value)
	{
		___m_UpdateDrag_52 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_53() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragPositionOutOfBounds_53)); }
	inline bool get_m_DragPositionOutOfBounds_53() const { return ___m_DragPositionOutOfBounds_53; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_53() { return &___m_DragPositionOutOfBounds_53; }
	inline void set_m_DragPositionOutOfBounds_53(bool value)
	{
		___m_DragPositionOutOfBounds_53 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_56() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretVisible_56)); }
	inline bool get_m_CaretVisible_56() const { return ___m_CaretVisible_56; }
	inline bool* get_address_of_m_CaretVisible_56() { return &___m_CaretVisible_56; }
	inline void set_m_CaretVisible_56(bool value)
	{
		___m_CaretVisible_56 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkCoroutine_57)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_57() const { return ___m_BlinkCoroutine_57; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_57() { return &___m_BlinkCoroutine_57; }
	inline void set_m_BlinkCoroutine_57(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_58() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkStartTime_58)); }
	inline float get_m_BlinkStartTime_58() const { return ___m_BlinkStartTime_58; }
	inline float* get_address_of_m_BlinkStartTime_58() { return &___m_BlinkStartTime_58; }
	inline void set_m_BlinkStartTime_58(float value)
	{
		___m_BlinkStartTime_58 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_59() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawStart_59)); }
	inline int32_t get_m_DrawStart_59() const { return ___m_DrawStart_59; }
	inline int32_t* get_address_of_m_DrawStart_59() { return &___m_DrawStart_59; }
	inline void set_m_DrawStart_59(int32_t value)
	{
		___m_DrawStart_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_60() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawEnd_60)); }
	inline int32_t get_m_DrawEnd_60() const { return ___m_DrawEnd_60; }
	inline int32_t* get_address_of_m_DrawEnd_60() { return &___m_DrawEnd_60; }
	inline void set_m_DrawEnd_60(int32_t value)
	{
		___m_DrawEnd_60 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_61() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragCoroutine_61)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_61() const { return ___m_DragCoroutine_61; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_61() { return &___m_DragCoroutine_61; }
	inline void set_m_DragCoroutine_61(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_62() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OriginalText_62)); }
	inline String_t* get_m_OriginalText_62() const { return ___m_OriginalText_62; }
	inline String_t** get_address_of_m_OriginalText_62() { return &___m_OriginalText_62; }
	inline void set_m_OriginalText_62(String_t* value)
	{
		___m_OriginalText_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_63() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WasCanceled_63)); }
	inline bool get_m_WasCanceled_63() const { return ___m_WasCanceled_63; }
	inline bool* get_address_of_m_WasCanceled_63() { return &___m_WasCanceled_63; }
	inline void set_m_WasCanceled_63(bool value)
	{
		___m_WasCanceled_63 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_64() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HasDoneFocusTransition_64)); }
	inline bool get_m_HasDoneFocusTransition_64() const { return ___m_HasDoneFocusTransition_64; }
	inline bool* get_address_of_m_HasDoneFocusTransition_64() { return &___m_HasDoneFocusTransition_64; }
	inline void set_m_HasDoneFocusTransition_64(bool value)
	{
		___m_HasDoneFocusTransition_64 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_65() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WaitForSecondsRealtime_65)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_65() const { return ___m_WaitForSecondsRealtime_65; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_65() { return &___m_WaitForSecondsRealtime_65; }
	inline void set_m_WaitForSecondsRealtime_65(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TouchKeyboardAllowsInPlaceEditing_66)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_66() const { return ___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_66() { return &___m_TouchKeyboardAllowsInPlaceEditing_66; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_66(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_66 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_68() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ProcessingEvent_68)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_68() const { return ___m_ProcessingEvent_68; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_68() { return &___m_ProcessingEvent_68; }
	inline void set_m_ProcessingEvent_68(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_68), (void*)value);
	}
};

struct InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5CCAB53CD25E7C51CFFB64E4859FFAA9B77DD55_gshared (Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0653DEECCAF6A7F995C5EEEEC6D5E881E0629989_gshared (Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4  Dictionary_2_GetEnumerator_m949C3D28BCA4E1776473FD6C5ED1ECB58CB84B22_gshared (Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819  Enumerator_get_Current_m165B6F39FBA70A3575DC48071DD048AA174ECBCA_gshared (Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m9A9DD16628330FBB742F2BE4D7E08DB3DD92AF2D_gshared (KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mAF31C0DF02CDCDB1D77A9D47E24A2CB0C31919EB_gshared (KeyValuePair_2_tA04C5FB1F29CC4A6389D57942D8EA9726F157819 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC376BF9DBDD93EF143B223CD7901F3D13D33605A_gshared (Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m688718E937F8A013599E1639DC10C172FB54C5E3_gshared (Enumerator_t83D691B76F08F7D7DD96FDA69E9FFA3D70A3FAF4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7686C95CBE1718ECB0D22D4BC2DBABD75DE057FA_gshared (Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * __this, RuntimeObject * p0, uint32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m65AA54277A9AE22D4969B58F63AA45B4296A45CE_gshared (Dictionary_2_tE5429B176CF2F50ED9FDDCE67E6E34DA2061E839 * __this, RuntimeObject * p0, uint32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7A6442C74537CB34212426734073E9DBE87E7FE5_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>::.ctor()
inline void Dictionary_2__ctor_mDB3A30D630135D0DA1BE3ECB32C2E11BB43BAE99 (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *, const RuntimeMethod*))Dictionary_2__ctor_mA5CCAB53CD25E7C51CFFB64E4859FFAA9B77DD55_gshared)(__this, method);
}
// TTTRtcEngine.IRtcEngineVoice TTTRtcEngine.IRtcEngineVoice::GetEngine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * IRtcEngineVoice_GetEngine_m6A61D393969D869751575E00799E930CE0A3A71D (String_t* ___appId0, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_Destroy_m24E4F382821060984965BE14C3BB164BFE7633B6 (const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/ReportAuidoLevelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAuidoLevelHandler__ctor_m726E50ACB424AE9D72A102FE7D6ADEA967B9EB44 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/UserJoinedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserJoinedHandler__ctor_m496F599C4C07C40163EA432175A06E5293F2CA6C (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/UserOfflineHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOfflineHandler__ctor_m25259F0DB922F9ADA16A079B458A30B3FF6032F2 (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::JoinChannel(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_JoinChannel_m26E7BDD2CABDCBCC9F1F96F074B783C33C177FD3 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___channelName0, uint32_t ___uid1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>::Clear()
inline void Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4 (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *, const RuntimeMethod*))Dictionary_2_Clear_m0653DEECCAF6A7F995C5EEEEC6D5E881E0629989_gshared)(__this, method);
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::LeaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_LeaveChannel_mBE8E2161E4F986E784FE8C1C880BCC26D7AC8E19 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>::GetEnumerator()
inline Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5 (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  (*) (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m949C3D28BCA4E1776473FD6C5ED1ECB58CB84B22_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.UInt32>::get_Current()
inline KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314 (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  (*) (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *, const RuntimeMethod*))Enumerator_get_Current_m165B6F39FBA70A3575DC48071DD048AA174ECBCA_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F (KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9A9DD16628330FBB742F2BE4D7E08DB3DD92AF2D_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.UInt32>::get_Key()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249 (KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mAF31C0DF02CDCDB1D77A9D47E24A2CB0C31919EB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.UInt32>::MoveNext()
inline bool Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75 (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *, const RuntimeMethod*))Enumerator_MoveNext_mC376BF9DBDD93EF143B223CD7901F3D13D33605A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.GameObject,System.UInt32>::Dispose()
inline void Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764 (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *, const RuntimeMethod*))Enumerator_Dispose_m688718E937F8A013599E1639DC10C172FB54C5E3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>::Add(!0,!1)
inline void Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75 (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, uint32_t, const RuntimeMethod*))Dictionary_2_Add_m7686C95CBE1718ECB0D22D4BC2DBABD75DE057FA_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Animate>()
inline Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.GameObject HelloUnity::getAvailableGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HelloUnity_getAvailableGameObject_mF592486C6701BED6D3F6CF329BA1EC52E97C59DB (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.UInt32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, uint32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m65AA54277A9AE22D4969B58F63AA45B4296A45CE_gshared)(__this, p0, p1, method);
}
// UnityEngine.GameObject HelloUnity::getGameObjectWithUserID(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, uint32_t ___uid0, const RuntimeMethod* method);
// System.Void HelloUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity__ctor_mF1A609785110F01585257F148B7DFE28A6E2BC1B (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// TTTRtcEngine.IRtcEngineVoice HelloUnity::loadEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * HelloUnity_loadEngine_m42F32A4F0DCA04D4CED02640D09962E9F22CC587 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/SDKErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKErrorHandler__ctor_m0BA6534C917CBC238EF8FDDCCB8FD1478F544518 (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/JoinChannelSuccessHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinChannelSuccessHandler__ctor_mBA2407E277A88F861B369D8C8F4B9DB5AB8E64D0 (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * GameObject_GetComponent_TisInputField_t533609195B110760BCFF00B746C87D81969CB005_mA51516D144F85CAE471A6A68DF98CFB88FCE87AA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  InputField_t533609195B110760BCFF00B746C87D81969CB005 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_mB4B4573F3DD8E2D1430A09E42B1777AC4A94AA2B (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.String TTTRtcEngine.IRtcEngineVoice::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngineVoice_Poll_m86DE9AFAC3F8062557B65A9DF3B824CDC4A8AA85 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::GetMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_GetMessageCount_m84C91AF3263764C9A60F6B79BE59E74B6510FC26 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7 (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method);
// System.Void HelloUnity::joinChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_joinChannel_mC9F29CDD951995116DBC7038C631A062B2FDF169 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, String_t* ___channel0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Home>()
inline Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void HelloUnity::leaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_leaveChannel_m02E113D1079105B6D1C65BB8624258AF96AD85B7 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// System.Void HelloUnity::unloadEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_unloadEngine_mDC8063FE13BEEC63E4182D66298DB3C4EC5D6B57 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115 (String_t* p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7A6442C74537CB34212426734073E9DBE87E7FE5_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mB72463B21F0D89F168C58E994356298D0E38A4F7 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * p0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void HelloUnity::OnHelloUnitySceneLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_OnHelloUnitySceneLoaded_mAA9494F9D1B592A79861F24B89C016E0E1477223 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m894CC4AE20DC49FF43CF6B2A614877F50D707C92 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t806752C775BA713A91B6588A07CA98417CABC003  Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313 (int32_t p0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice::createEngine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_createEngine_m71909CB9E01F9F436D8814AA0938EF03428E7143 (String_t* ___appId0, const RuntimeMethod* method);
// System.IntPtr TTTRtcEngine.IRtcEngineVoice::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IRtcEngineVoice_getSdkVersion_m36C9EAACDE5A642256960979FFAEF783E5C84C63 (const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5 (intptr_t p0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setChannelProfile(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setChannelProfile_m52381A23E3DAFC3A7C545091EE5C8FE1AAA9A645 (int32_t ___profile0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setLogFilter(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setLogFilter_m290CCBD3F86949D42C18FC5FA0884A95398C5567 (uint32_t ___filter0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setLogFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setLogFile_mD8D4BB3A2A7F9673F1ECE16576FFE260C63D602B (String_t* ___filePath0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::JoinChannelByKey(System.String,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_JoinChannelByKey_m77DA8D80264864D6D39A13E0ECA08B576BFDA4BB (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___channelKey0, String_t* ___channelName1, uint32_t ___uid2, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::joinChannel(System.String,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_joinChannel_m4473A2204F22BA5F27A263F82234F583FC37A828 (String_t* ___channelKey0, String_t* ___channelName1, uint32_t ___uid2, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::leaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_leaveChannel_mF381D0720182CAA5E030DC731BDDDBEAB52BED62 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getMessageCount_mB53715CE1F43E7D8D1D085EC1EDDA7595705D871 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteLocalAudioStream(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteLocalAudioStream_m10FBF590E64409A5D4993585246304F55BEF2B31 (int32_t ___mute0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteAllRemoteAudioStreams(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteAllRemoteAudioStreams_mD1540D07BC7AACF8640F3A7F8C2B8C97D887E1C6 (int32_t ___mute0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteRemoteAudioStream(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteRemoteAudioStream_mDDBC1B5A38E8659B316F940DB961273DA060EB52 (int32_t ___uid0, int32_t ___mute1, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setEnableSpeakerphone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setEnableSpeakerphone_m6FB22410FC841A5C8A366C4655CF1CF60C5E8233 (int32_t ___enabled0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setDefaultAudioRoutetoSpeakerphone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setDefaultAudioRoutetoSpeakerphone_m7ECA233C7E7CC0E640961274D8A173EDC9095D82 (int32_t ___enabled0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::isSpeakerphoneEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_isSpeakerphoneEnabled_m3CB66B1C7B3A74F9140DF5159C10586E49037C39 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setHighQualityAudioParametersWithFullband(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setHighQualityAudioParametersWithFullband_mEC25FA34143186D9A091E17B4D7101B8B664953C (int32_t ___fullband0, int32_t ___stereo1, int32_t ___fullBitrate2, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setAudioMixingPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setAudioMixingPosition_m94726BD5B31F2DA4538F2EDA41DB860533B88795 (int32_t ___pos0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::enableAudioVolumeIndication(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_enableAudioVolumeIndication_m06ED92E9F4E7433916023280D1A1A53B9F777B7B (int32_t ___interval0, int32_t ___smooth1, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::startAudioMixing(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_startAudioMixing_m35EE7B1412B3A88BB75520BD07FFBCC8B2CD3464 (String_t* ___filePath0, int32_t ___loopBack1, int32_t ___replace2, int32_t ___cycle3, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::stopAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_stopAudioMixing_m6FE75312328E9E61977F15E6A6357CAEED0A2273 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::pauseAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_pauseAudioMixing_m068ADB3FC65B42752DC585B7E70C7B8ED59D4872 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::resumeAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_resumeAudioMixing_mF26496D0FF7ADC1FF0525D4C7213677F484F5906 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::adjustAudioMixingVolume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_adjustAudioMixingVolume_m8E4501302CF16B00B6EA853EBC763B97D88B874B (int32_t ___volume0, const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getAudioMixingDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getAudioMixingDuration_mA3E47335B7FDD77E49578D02A8EA24E54A50BB64 (const RuntimeMethod* method);
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getAudioMixingCurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getAudioMixingCurrentPosition_mCFAE326354A00C248EF3FD9A4CD7DC514C1564FF (const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice__ctor_mD6D724E68F551478C683AF300021A62858C6A371 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___appId0, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice::deleteEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_deleteEngine_mB15DA6B2152BFF30171F9188D56DC88C269B958D (const RuntimeMethod* method);
// System.IntPtr TTTRtcEngine.IRtcEngineVoice::getMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IRtcEngineVoice_getMessage_mE802BD44EB1397E4B0B77A61DB94CD49F42DAF2D (const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice::freeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_freeObject_mE91F968AB1135503F403FD7EDEDAD16CA8545AE4 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String TTTRtcEngine.IRtcEngineVoice::GetErrorDescription(TTTRtcEngine.ERROR_CODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngineVoice_GetErrorDescription_m3525329365C21E553D58A012FA4DC815FB709CF3 (int32_t ___code0, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/SDKErrorHandler::Invoke(TTTRtcEngine.ERROR_CODE,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKErrorHandler_Invoke_m6826871305B96365456FA7089F3CE717EA1BEF65 (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/ConnectionLostHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionLostHandler_Invoke_m5C184484CB476D1834E8B6ED1E248E400D943BFD (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/JoinChannelSuccessHandler::Invoke(System.String,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinChannelSuccessHandler_Invoke_m73C4DEC2DAAFEDCB6F80FCB86A608B50010A7E5E (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, String_t* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/LeaveChannelHandler::Invoke(TTTRtcEngine.RtcStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveChannelHandler_Invoke_m3FFC6A826F01C8607514B4DAF65DE05C59458DCB (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/UserJoinedHandler::Invoke(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserJoinedHandler_Invoke_mE61B33348A104F981B0EEE82E3A4D6A91D53A2A5 (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, uint32_t ___uid0, int32_t ___elapsed1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/UserOfflineHandler::Invoke(System.UInt32,TTTRtcEngine.USER_OFFLINE_REASON)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOfflineHandler_Invoke_mDD2C07AEEB5E487C48981F5A0B0C93B5A5A34D53 (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, uint32_t ___uid0, int32_t ___reason1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/AudioRouteChangedHandler::Invoke(TTTRtcEngine.AUDIO_ROUTE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioRouteChangedHandler_Invoke_m5FDF63E1FDE552E3E6BC0C7475FF4EC5967B1C02 (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, int32_t ___route0, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/ReportAuidoLevelHandler::Invoke(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAuidoLevelHandler_Invoke_m0EF2C475E8296E1BD08CB5E435438D3EB524F105 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, uint32_t ___uid0, int32_t ___audioLevel1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/UserMutedHandler::Invoke(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMutedHandler_Invoke_mA8E14367AAFBA68BB531B42B46C501950641BBA5 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, uint32_t ___uid0, bool ___muted1, const RuntimeMethod* method);
// System.Void TTTRtcEngine.IRtcEngineVoice/RtcStatsHandler::Invoke(TTTRtcEngine.RtcStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcStatsHandler_Invoke_m676C8315595B3E21B185AE45016C45934424C5AB (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method);
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
// System.Void Animate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animate_Start_m8B7EE00729FB3D555FA1B1FE1B8BCF9B5B502F72 (Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Animate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animate_Update_m7350E88E2B612AD6B78063939D9AA624B640B29A (Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animate_Update_m7350E88E2B612AD6B78063939D9AA624B640B29A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * V_0 = NULL;
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get_isOnLine_6();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = V_0;
		NullCheck(L_2);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_3, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		bool L_4 = __this->get_speak_5();
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = V_0;
		NullCheck(L_5);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_5, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_7 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralAFA6A2951462F4A9626769B7A4250BF3C5C2580D, /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_6, ((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)CastclassSealed((RuntimeObject*)L_7, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_003f:
	{
		int32_t L_8 = __this->get_i_4();
		__this->set_i_4(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = __this->get_i_4();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = V_0;
		NullCheck(L_10);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_10, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_12 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralAFA6A2951462F4A9626769B7A4250BF3C5C2580D, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_11, ((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)CastclassSealed((RuntimeObject*)L_12, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		int32_t L_13 = __this->get_i_4();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0095;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = V_0;
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_14, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_16 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral2B72B24E0F3227594AB6E29C83243A8CD286BA04, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_15, ((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)CastclassSealed((RuntimeObject*)L_16, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_0095:
	{
		__this->set_i_4(0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_17 = V_0;
		NullCheck(L_17);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_18 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_17, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_19 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral2623221512D54F8BB2418C9BF984BE2214EAF14B, /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_set_mainTexture_m0742CFF768E9701618DA07C71F009239AB31EB41(L_18, ((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)CastclassSealed((RuntimeObject*)L_19, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Animate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animate__ctor_m6B80057CA37ACCDE76F37CACC24126FA1E75A01E (Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HelloUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity__ctor_mF1A609785110F01585257F148B7DFE28A6E2BC1B (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity__ctor_mF1A609785110F01585257F148B7DFE28A6E2BC1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_AppID_4(_stringLiteral26CBAF14D2F386AD284A92F9F6D31D6ECACC5FEC);
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(1, ((int32_t)1000000), /*hidden argument*/NULL);
		__this->set_MyUserID_5(L_0);
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_1 = (Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE *)il2cpp_codegen_object_new(Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDB3A30D630135D0DA1BE3ECB32C2E11BB43BAE99(L_1, /*hidden argument*/Dictionary_2__ctor_mDB3A30D630135D0DA1BE3ECB32C2E11BB43BAE99_RuntimeMethod_var);
		__this->set_UsersDictionary_7(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		__this->set_RtcEngine_6((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 *)NULL);
		return;
	}
}
// TTTRtcEngine.IRtcEngineVoice HelloUnity::loadEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * HelloUnity_loadEngine_m42F32A4F0DCA04D4CED02640D09962E9F22CC587 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_loadEngine_m42F32A4F0DCA04D4CED02640D09962E9F22CC587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = __this->get_RtcEngine_6();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_1 = __this->get_RtcEngine_6();
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = __this->get_AppID_4();
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_3 = IRtcEngineVoice_GetEngine_m6A61D393969D869751575E00799E930CE0A3A71D(L_2, /*hidden argument*/NULL);
		__this->set_RtcEngine_6(L_3);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_4 = __this->get_RtcEngine_6();
		return L_4;
	}
}
// System.Void HelloUnity::unloadEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_unloadEngine_mDC8063FE13BEEC63E4182D66298DB3C4EC5D6B57 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_unloadEngine_mDC8063FE13BEEC63E4182D66298DB3C4EC5D6B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = __this->get_RtcEngine_6();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_Destroy_m24E4F382821060984965BE14C3BB164BFE7633B6(/*hidden argument*/NULL);
		__this->set_RtcEngine_6((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 *)NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void HelloUnity::joinChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_joinChannel_mC9F29CDD951995116DBC7038C631A062B2FDF169 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, String_t* ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_joinChannel_mC9F29CDD951995116DBC7038C631A062B2FDF169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = __this->get_RtcEngine_6();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_1 = __this->get_RtcEngine_6();
		ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * L_2 = (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B *)il2cpp_codegen_object_new(ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B_il2cpp_TypeInfo_var);
		ReportAuidoLevelHandler__ctor_m726E50ACB424AE9D72A102FE7D6ADEA967B9EB44(L_2, __this, (intptr_t)((intptr_t)HelloUnity_OnReportAuidoLevel_mEF1D1EA3D8A13E0B4636A0699DD4A29571596210_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_OnReportAuidoLevel_6(L_2);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_3 = __this->get_RtcEngine_6();
		UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * L_4 = (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 *)il2cpp_codegen_object_new(UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870_il2cpp_TypeInfo_var);
		UserJoinedHandler__ctor_m496F599C4C07C40163EA432175A06E5293F2CA6C(L_4, __this, (intptr_t)((intptr_t)HelloUnity_OnUserJoined_m4CD740853264D2A3804D7F1B6DD9A0B42204A93C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_OnUserJoined_3(L_4);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_5 = __this->get_RtcEngine_6();
		UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * L_6 = (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E *)il2cpp_codegen_object_new(UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E_il2cpp_TypeInfo_var);
		UserOfflineHandler__ctor_m25259F0DB922F9ADA16A079B458A30B3FF6032F2(L_6, __this, (intptr_t)((intptr_t)HelloUnity_OnUserOffline_mECA27CE90D175EC63ED93CF4817EBE772430DBD1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_OnUserOffline_4(L_6);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_7 = __this->get_RtcEngine_6();
		String_t* L_8 = ___channel0;
		uint32_t L_9 = __this->get_MyUserID_5();
		NullCheck(L_7);
		IRtcEngineVoice_JoinChannel_m26E7BDD2CABDCBCC9F1F96F074B783C33C177FD3(L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelloUnity::leaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_leaveChannel_m02E113D1079105B6D1C65BB8624258AF96AD85B7 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_leaveChannel_m02E113D1079105B6D1C65BB8624258AF96AD85B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_0 = __this->get_UsersDictionary_7();
		NullCheck(L_0);
		Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4(L_0, /*hidden argument*/Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4_RuntimeMethod_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_1 = __this->get_RtcEngine_6();
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_2 = __this->get_RtcEngine_6();
		NullCheck(L_2);
		IRtcEngineVoice_LeaveChannel_mBE8E2161E4F986E784FE8C1C880BCC26D7AC8E19(L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// UnityEngine.GameObject HelloUnity::getAvailableGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HelloUnity_getAvailableGameObject_mF592486C6701BED6D3F6CF329BA1EC52E97C59DB (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_getAvailableGameObject_mF592486C6701BED6D3F6CF329BA1EC52E97C59DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_0 = __this->get_UsersDictionary_7();
		NullCheck(L_0);
		Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  L_1 = Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_000e:
		{
			KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  L_2 = Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314_RuntimeMethod_var);
			V_1 = L_2;
			uint32_t L_3 = KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F((KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_001f:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249((KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249_RuntimeMethod_var);
			V_2 = L_4;
			IL2CPP_LEAVE(0x44, FINALLY_0034);
		}

IL_0029:
		{
			bool L_5 = Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0044:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.GameObject HelloUnity::getGameObjectWithUserID(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, uint32_t ___uid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_0 = __this->get_UsersDictionary_7();
		NullCheck(L_0);
		Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3  L_1 = Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mEBA5F0E22684963DA0B4E84B66FA0A949C609ED5_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000e:
		{
			KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093  L_2 = Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA80DF41BB510E194496CFB604968504215554314_RuntimeMethod_var);
			V_1 = L_2;
			uint32_t L_3 = KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F((KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mC15FDD30ACFCA300D419C4221B4BE3462268BB4F_RuntimeMethod_var);
			uint32_t L_4 = ___uid0;
			if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
			{
				goto IL_002a;
			}
		}

IL_0020:
		{
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249((KeyValuePair_2_t372CA57D8FF579FD93D06C8DD511278BEEDFC093 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD7C51B9927E33C734F19BE9D5D811C7F81D3D249_RuntimeMethod_var);
			V_2 = L_5;
			IL2CPP_LEAVE(0x45, FINALLY_0035);
		}

IL_002a:
		{
			bool L_6 = Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0653A656398D8FD787D83ADF37D92B3846D0BD75_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764((Enumerator_tE68CD829F0E2673458BC3280118619D858B74BD3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m43F3884B969DFF5FF532DA1F07563631A1783764_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_0045:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_2;
		return L_7;
	}
}
// System.Void HelloUnity::OnHelloUnitySceneLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_OnHelloUnitySceneLoaded_mAA9494F9D1B592A79861F24B89C016E0E1477223 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_OnHelloUnitySceneLoaded_mAA9494F9D1B592A79861F24B89C016E0E1477223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_0 = __this->get_UsersDictionary_7();
		NullCheck(L_0);
		Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4(L_0, /*hidden argument*/Dictionary_2_Clear_m471BB6FB15A1E9E51173199B5F169F0FE1F27FD4_RuntimeMethod_var);
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_1 = __this->get_UsersDictionary_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral817B354DC01A34895EAB0C37E21AF38DC0850D08, /*hidden argument*/NULL);
		uint32_t L_3 = __this->get_MyUserID_5();
		NullCheck(L_1);
		Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75_RuntimeMethod_var);
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_4 = __this->get_UsersDictionary_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral165C51332252444354AEE69E6135D8CC126AC576, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75(L_4, L_5, 0, /*hidden argument*/Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75_RuntimeMethod_var);
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_6 = __this->get_UsersDictionary_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral7E01819E649C698F9904E7835EFEDB92ED9C474A, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75(L_6, L_7, 0, /*hidden argument*/Dictionary_2_Add_m5CD637EF91FCC85C079B0B981AB203CD63AFAA75_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral817B354DC01A34895EAB0C37E21AF38DC0850D08, /*hidden argument*/NULL);
		NullCheck(L_8);
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_9 = GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_isOnLine_6((bool)1);
		return;
	}
}
// System.Void HelloUnity::OnUserJoined(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_OnUserJoined_m4CD740853264D2A3804D7F1B6DD9A0B42204A93C (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, uint32_t ___uid0, int32_t ___elapsed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_OnUserJoined_m4CD740853264D2A3804D7F1B6DD9A0B42204A93C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = HelloUnity_getAvailableGameObject_mF592486C6701BED6D3F6CF329BA1EC52E97C59DB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_2 = __this->get_UsersDictionary_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		uint32_t L_4 = ___uid0;
		NullCheck(L_2);
		Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		NullCheck(L_5);
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_6 = GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232(L_5, /*hidden argument*/GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_isOnLine_6((bool)1);
		return;
	}
}
// System.Void HelloUnity::OnUserOffline(System.UInt32,TTTRtcEngine.USER_OFFLINE_REASON)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_OnUserOffline_mECA27CE90D175EC63ED93CF4817EBE772430DBD1 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, uint32_t ___uid0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_OnUserOffline_mECA27CE90D175EC63ED93CF4817EBE772430DBD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		uint32_t L_0 = ___uid0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_4 = GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_isOnLine_6((bool)0);
		Dictionary_2_t84739C7AEC7AFF9A87621F478A6B5BA0A7FD94FE * L_5 = __this->get_UsersDictionary_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_5);
		Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D(L_5, L_6, 0, /*hidden argument*/Dictionary_2_set_Item_m043A953D5C3AC68C948AD699468D22CC0FCB916D_RuntimeMethod_var);
	}

IL_0024:
	{
		return;
	}
}
// System.Void HelloUnity::OnReportAuidoLevel(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloUnity_OnReportAuidoLevel_mEF1D1EA3D8A13E0B4636A0699DD4A29571596210 (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * __this, uint32_t ___uid0, int32_t ___audioLevel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelloUnity_OnReportAuidoLevel_mEF1D1EA3D8A13E0B4636A0699DD4A29571596210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * V_1 = NULL;
	{
		uint32_t L_0 = ___uid0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = HelloUnity_getGameObjectWithUserID_m4DBE59FD725C2AA21C4F2AF594E4C7013C6DCEAC(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_4 = GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2_m3B183AD8234D8816AE8BEBF6E6974B8113CD0232_RuntimeMethod_var);
		V_1 = L_4;
		int32_t L_5 = ___audioLevel1;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_speak_5((bool)1);
		return;
	}

IL_001e:
	{
		Animate_tD92ABEC11A99543F4728F9CDCC68EAC8DA1216D2 * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_speak_5((bool)0);
	}

IL_0025:
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
// System.Void Home::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_Start_m6487793DB12B7C42CF1C9E3462921FA43D251389 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_Start_m6487793DB12B7C42CF1C9E3462921FA43D251389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_0 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_1 = (HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A *)il2cpp_codegen_object_new(HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A_il2cpp_TypeInfo_var);
		HelloUnity__ctor_mF1A609785110F01585257F148B7DFE28A6E2BC1B(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_app_4(L_1);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_2 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_2);
		HelloUnity_loadEngine_m42F32A4F0DCA04D4CED02640D09962E9F22CC587(L_2, /*hidden argument*/NULL);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_3 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_3);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_4 = L_3->get_RtcEngine_6();
		SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * L_5 = (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 *)il2cpp_codegen_object_new(SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42_il2cpp_TypeInfo_var);
		SDKErrorHandler__ctor_m0BA6534C917CBC238EF8FDDCCB8FD1478F544518(L_5, __this, (intptr_t)((intptr_t)Home_OnError_m387558451FC2A6B0674A4F556B329A6529B22C42_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_OnError_8(L_5);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_6 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_6);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_7 = L_6->get_RtcEngine_6();
		JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * L_8 = (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 *)il2cpp_codegen_object_new(JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4_il2cpp_TypeInfo_var);
		JoinChannelSuccessHandler__ctor_mBA2407E277A88F861B369D8C8F4B9DB5AB8E64D0(L_8, __this, (intptr_t)((intptr_t)Home_OnJoinChannelSuccess_mC7350599E0AA3335799FD2A362544484A237B633_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_OnJoinChannelSuccess_1(L_8);
	}

IL_0052:
	{
		String_t* L_9 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_9, _stringLiteralB87EF45EC9DD079602A9F5A7CAAC1500200B4D4D, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00ff;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral0022020F2628DC9FD757B211AC969BFAD9AAE7D4, /*hidden argument*/NULL);
		NullCheck(L_11);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_11, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		__this->set_MessageText_6(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralDAC94E318767D6780E06FE39FC0A88DC7FAECEAF, /*hidden argument*/NULL);
		NullCheck(L_13);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_14 = GameObject_GetComponent_TisInputField_t533609195B110760BCFF00B746C87D81969CB005_mA51516D144F85CAE471A6A68DF98CFB88FCE87AA(L_13, /*hidden argument*/GameObject_GetComponent_TisInputField_t533609195B110760BCFF00B746C87D81969CB005_mA51516D144F85CAE471A6A68DF98CFB88FCE87AA_RuntimeMethod_var);
		__this->set_ChannelInputField_7(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralB87EF45EC9DD079602A9F5A7CAAC1500200B4D4D, /*hidden argument*/NULL);
		NullCheck(L_15);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_16 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_15, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		__this->set_JoinButton_8(L_16);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_17 = __this->get_MessageText_6();
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		String_t* L_19 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_ChannelName_5();
		int32_t L_20 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_21 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(1, ((int32_t)1000000), /*hidden argument*/NULL);
		V_0 = L_21;
		String_t* L_22 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_ChannelName_5(L_22);
	}

IL_00db:
	{
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_23 = __this->get_ChannelInputField_7();
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		String_t* L_24 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_ChannelName_5();
		NullCheck(L_23);
		InputField_set_text_mB4B4573F3DD8E2D1430A09E42B1777AC4A94AA2B(L_23, L_24, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_25 = __this->get_JoinButton_8();
		NullCheck(L_25);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_25, (bool)1, /*hidden argument*/NULL);
		__this->set_IsJoiningChannel_11((bool)0);
		return;
	}

IL_00ff:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral709A15826606275C4EDC819F876793675DACFAC0, /*hidden argument*/NULL);
		NullCheck(L_26);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_27 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_26, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		__this->set_LeaveButton_9(L_27);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_28 = __this->get_LeaveButton_9();
		NullCheck(L_28);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_28, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Home::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_Update_mAC047D84EAB160A60617659E58910158BF6AA119 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_Update_mAC047D84EAB160A60617659E58910158BF6AA119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_0 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_0);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_1 = L_0->get_RtcEngine_6();
		if (L_1)
		{
			goto IL_004e;
		}
	}
	{
		return;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_2 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_2);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_3 = L_2->get_RtcEngine_6();
		NullCheck(L_3);
		String_t* L_4 = IRtcEngineVoice_Poll_m86DE9AFAC3F8062557B65A9DF3B824CDC4A8AA85(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteral3F0F45430E7C5886CE48D1F8F3639BE751C6747E, L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_10, _stringLiteral70B5231801B90DAE3E16E7654389124D275D7372, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_IsPausingPoll_10((bool)1);
	}

IL_004e:
	{
		bool L_12 = __this->get_IsPausingPoll_10();
		if (L_12)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_13 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_13);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_14 = L_13->get_RtcEngine_6();
		NullCheck(L_14);
		int32_t L_15 = IRtcEngineVoice_GetMessageCount_m84C91AF3263764C9A60F6B79BE59E74B6510FC26(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_0068:
	{
		return;
	}
}
// System.Void Home::OnJoinButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_OnJoinButtonClicked_m46D8DA06647CE43D751EB7D521333898EBD5AF1D (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_OnJoinButtonClicked_m46D8DA06647CE43D751EB7D521333898EBD5AF1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_IsJoiningChannel_11();
		if (L_0)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_IsJoiningChannel_11((bool)1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_MessageText_6();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral3C1C2E9D85C695E401ACE8B9BD80E50AB85D0DA9);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_MessageText_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_MessageText_6();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_6 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_7 = __this->get_ChannelInputField_7();
		NullCheck(L_7);
		String_t* L_8 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		HelloUnity_joinChannel_mC9F29CDD951995116DBC7038C631A062B2FDF169(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void Home::OnLeaveButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_OnLeaveButtonClicked_m5FE82ABA9B6DFA35FDDF04921EF8512F78F1D6D5 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_OnLeaveButtonClicked_m5FE82ABA9B6DFA35FDDF04921EF8512F78F1D6D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_LeaveButton_9();
		NullCheck(L_0);
		Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * L_1 = Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE(L_0, /*hidden argument*/Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_1, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_2 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_3 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_3);
		HelloUnity_leaveChannel_m02E113D1079105B6D1C65BB8624258AF96AD85B7(L_3, /*hidden argument*/NULL);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_4 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_4);
		HelloUnity_unloadEngine_mDC8063FE13BEEC63E4182D66298DB3C4EC5D6B57(L_4, /*hidden argument*/NULL);
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_app_4((HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A *)NULL);
		SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115(_stringLiteral52A651993401E6CF6A271B66D8A50C45879BCF4E, 0, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Home::OnError(TTTRtcEngine.ERROR_CODE,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_OnError_m387558451FC2A6B0674A4F556B329A6529B22C42 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_OnError_m387558451FC2A6B0674A4F556B329A6529B22C42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_0, _stringLiteralB87EF45EC9DD079602A9F5A7CAAC1500200B4D4D, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		__this->set_IsJoiningChannel_11((bool)0);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_MessageText_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_MessageText_6();
		String_t* L_5 = ___msg1;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Home::OnJoinChannelSuccess(System.String,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_OnJoinChannelSuccess_mC7350599E0AA3335799FD2A362544484A237B633 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, String_t* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_OnJoinChannelSuccess_mC7350599E0AA3335799FD2A362544484A237B633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_JoinButton_8();
		NullCheck(L_0);
		Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * L_1 = Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE(L_0, /*hidden argument*/Component_GetComponent_TisHome_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_mC6D3FEB248E1288F327ACD147C7AAB8083B935BE_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_1, (bool)0, /*hidden argument*/NULL);
		String_t* L_2 = ___channelName0;
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_ChannelName_5(L_2);
		UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * L_3 = (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *)il2cpp_codegen_object_new(UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407(L_3, __this, (intptr_t)((intptr_t)Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var);
		SceneManager_add_sceneLoaded_mB72463B21F0D89F168C58E994356298D0E38A4F7(L_3, /*hidden argument*/NULL);
		SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115(_stringLiteral111AE237E2275E4B66B33EE469BD1FE6B0992AC4, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Home::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&___scene0), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_0, _stringLiteral111AE237E2275E4B66B33EE469BD1FE6B0992AC4, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_IsJoiningChannel_11((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_2 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var);
		HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A * L_3 = ((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->get_app_4();
		NullCheck(L_3);
		HelloUnity_OnHelloUnitySceneLoaded_mAA9494F9D1B592A79861F24B89C016E0E1477223(L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * L_4 = (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *)il2cpp_codegen_object_new(UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407(L_4, __this, (intptr_t)((intptr_t)Home_OnSceneLoaded_mC15AF46E8038399A5C74BB9913CFA36E331D21D6_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var);
		SceneManager_remove_sceneLoaded_m894CC4AE20DC49FF43CF6B2A614877F50D707C92(L_4, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Home::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home__ctor_mE24C331CEC63FCE0B4EF88F7CE076F19B4AFF0D7 (Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Home::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Home__cctor_mE4E245407723B950E2341BAFEDBFBD19BD838332 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Home__cctor_mE4E245407723B950E2341BAFEDBFBD19BD838332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_app_4((HelloUnity_tFB6E871497BF4D36F164CB225A7A2B622DBFAC0A *)NULL);
		((Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_StaticFields*)il2cpp_codegen_static_fields_for(Home_tED22FD77956A0EFD04DBD0544D176EF1C77D6469_il2cpp_TypeInfo_var))->set_ChannelName_5(_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rd_7(L_0);
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_0 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Touch_get_phase_m667014ED67F37A6EB459FB904D2041E270995419((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		NullCheck(L_2);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_m910EBDB7E33512D30C25DC396E0B40702004145A (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_FixedUpdate_m910EBDB7E33512D30C25DC396E0B40702004145A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		V_1 = L_1;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = __this->get_rd_7();
		float L_3 = V_0;
		float L_4 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_3, (0.0f), L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_force_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, (((float)((float)L_6))), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38(L_2, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter_m729F3FE9F87395E7EC8F27EB566BEBA0C9992767 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * ___collision0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Player::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter_m2B7207647B00457B55985261B3F98429928B223E (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter_m2B7207647B00457B55985261B3F98429928B223E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___collider0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_1, _stringLiteral39CCB32D95EDFDBCD882F2B01809724EC640EA16, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = ___collider0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_score_8();
		__this->set_score_8(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = __this->get_text_5();
		int32_t* L_7 = __this->get_address_of_score_8();
		String_t* L_8 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral528A35ABDE11001F52EA29C3EA8C337E4316AD50, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		int32_t L_10 = __this->get_score_8();
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_winText_6();
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		__this->set_force_4(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_m0C36379106B8F7DD309CAC5E6D720D811129FA07 (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m7EECA0DFF07C6BCA773478F66A949EE038D28330 (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mC70374AA84BC2CA04CA039D1B56F5AF1B95D42CF (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL getMessageCount();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getMessageCount_mB53715CE1F43E7D8D1D085EC1EDDA7595705D871 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(getMessageCount)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL getMessage();
#endif
// System.IntPtr TTTRtcEngine.IRtcEngineVoice::getMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IRtcEngineVoice_getMessage_mE802BD44EB1397E4B0B77A61DB94CD49F42DAF2D (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(getMessage)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL freeObject(intptr_t);
#endif
// System.Void TTTRtcEngine.IRtcEngineVoice::freeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_freeObject_mE91F968AB1135503F403FD7EDEDAD16CA8545AE4 (intptr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(freeObject)(___obj0);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL createEngine(char*);
#endif
// System.Void TTTRtcEngine.IRtcEngineVoice::createEngine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_createEngine_m71909CB9E01F9F436D8814AA0938EF03428E7143 (String_t* ___appId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___appId0' to native representation
	char* ____appId0_marshaled = NULL;
	____appId0_marshaled = il2cpp_codegen_marshal_string(___appId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(createEngine)(____appId0_marshaled);

	// Marshaling cleanup of parameter '___appId0' native representation
	il2cpp_codegen_marshal_free(____appId0_marshaled);
	____appId0_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL deleteEngine();
#endif
// System.Void TTTRtcEngine.IRtcEngineVoice::deleteEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_deleteEngine_mB15DA6B2152BFF30171F9188D56DC88C269B958D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(deleteEngine)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL getSdkVersion();
#endif
// System.IntPtr TTTRtcEngine.IRtcEngineVoice::getSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IRtcEngineVoice_getSdkVersion_m36C9EAACDE5A642256960979FFAEF783E5C84C63 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(getSdkVersion)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL joinChannel(char*, char*, uint32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::joinChannel(System.String,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_joinChannel_m4473A2204F22BA5F27A263F82234F583FC37A828 (String_t* ___channelKey0, String_t* ___channelName1, uint32_t ___uid2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, uint32_t);

	// Marshaling of parameter '___channelKey0' to native representation
	char* ____channelKey0_marshaled = NULL;
	____channelKey0_marshaled = il2cpp_codegen_marshal_string(___channelKey0);

	// Marshaling of parameter '___channelName1' to native representation
	char* ____channelName1_marshaled = NULL;
	____channelName1_marshaled = il2cpp_codegen_marshal_string(___channelName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(joinChannel)(____channelKey0_marshaled, ____channelName1_marshaled, ___uid2);

	// Marshaling cleanup of parameter '___channelKey0' native representation
	il2cpp_codegen_marshal_free(____channelKey0_marshaled);
	____channelKey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___channelName1' native representation
	il2cpp_codegen_marshal_free(____channelName1_marshaled);
	____channelName1_marshaled = NULL;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL leaveChannel();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::leaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_leaveChannel_mF381D0720182CAA5E030DC731BDDDBEAB52BED62 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(leaveChannel)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setEnableSpeakerphone(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setEnableSpeakerphone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setEnableSpeakerphone_m6FB22410FC841A5C8A366C4655CF1CF60C5E8233 (int32_t ___enabled0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setEnableSpeakerphone)(___enabled0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isSpeakerphoneEnabled();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::isSpeakerphoneEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_isSpeakerphoneEnabled_m3CB66B1C7B3A74F9140DF5159C10586E49037C39 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isSpeakerphoneEnabled)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setDefaultAudioRoutetoSpeakerphone(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setDefaultAudioRoutetoSpeakerphone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setDefaultAudioRoutetoSpeakerphone_m7ECA233C7E7CC0E640961274D8A173EDC9095D82 (int32_t ___enabled0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setDefaultAudioRoutetoSpeakerphone)(___enabled0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL enableAudioVolumeIndication(int32_t, int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::enableAudioVolumeIndication(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_enableAudioVolumeIndication_m06ED92E9F4E7433916023280D1A1A53B9F777B7B (int32_t ___interval0, int32_t ___smooth1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(enableAudioVolumeIndication)(___interval0, ___smooth1);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL startAudioMixing(char*, int32_t, int32_t, int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::startAudioMixing(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_startAudioMixing_m35EE7B1412B3A88BB75520BD07FFBCC8B2CD3464 (String_t* ___filePath0, int32_t ___loopBack1, int32_t ___replace2, int32_t ___cycle3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___filePath0' to native representation
	char* ____filePath0_marshaled = NULL;
	____filePath0_marshaled = il2cpp_codegen_marshal_string(___filePath0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(startAudioMixing)(____filePath0_marshaled, ___loopBack1, ___replace2, ___cycle3);

	// Marshaling cleanup of parameter '___filePath0' native representation
	il2cpp_codegen_marshal_free(____filePath0_marshaled);
	____filePath0_marshaled = NULL;

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL stopAudioMixing();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::stopAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_stopAudioMixing_m6FE75312328E9E61977F15E6A6357CAEED0A2273 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(stopAudioMixing)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL pauseAudioMixing();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::pauseAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_pauseAudioMixing_m068ADB3FC65B42752DC585B7E70C7B8ED59D4872 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(pauseAudioMixing)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL resumeAudioMixing();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::resumeAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_resumeAudioMixing_mF26496D0FF7ADC1FF0525D4C7213677F484F5906 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(resumeAudioMixing)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL adjustAudioMixingVolume(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::adjustAudioMixingVolume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_adjustAudioMixingVolume_m8E4501302CF16B00B6EA853EBC763B97D88B874B (int32_t ___volume0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(adjustAudioMixingVolume)(___volume0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL getAudioMixingDuration();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getAudioMixingDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getAudioMixingDuration_mA3E47335B7FDD77E49578D02A8EA24E54A50BB64 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(getAudioMixingDuration)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL getAudioMixingCurrentPosition();
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::getAudioMixingCurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_getAudioMixingCurrentPosition_mCFAE326354A00C248EF3FD9A4CD7DC514C1564FF (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(getAudioMixingCurrentPosition)();

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setAudioMixingPosition(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setAudioMixingPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setAudioMixingPosition_m94726BD5B31F2DA4538F2EDA41DB860533B88795 (int32_t ___pos0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setAudioMixingPosition)(___pos0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL muteLocalAudioStream(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteLocalAudioStream(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteLocalAudioStream_m10FBF590E64409A5D4993585246304F55BEF2B31 (int32_t ___mute0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(muteLocalAudioStream)(___mute0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL muteAllRemoteAudioStreams(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteAllRemoteAudioStreams(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteAllRemoteAudioStreams_mD1540D07BC7AACF8640F3A7F8C2B8C97D887E1C6 (int32_t ___mute0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(muteAllRemoteAudioStreams)(___mute0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL muteRemoteAudioStream(int32_t, int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::muteRemoteAudioStream(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_muteRemoteAudioStream_mDDBC1B5A38E8659B316F940DB961273DA060EB52 (int32_t ___uid0, int32_t ___mute1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(muteRemoteAudioStream)(___uid0, ___mute1);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setChannelProfile(int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setChannelProfile(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setChannelProfile_m52381A23E3DAFC3A7C545091EE5C8FE1AAA9A645 (int32_t ___profile0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setChannelProfile)(___profile0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setHighQualityAudioParametersWithFullband(int32_t, int32_t, int32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setHighQualityAudioParametersWithFullband(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setHighQualityAudioParametersWithFullband_mEC25FA34143186D9A091E17B4D7101B8B664953C (int32_t ___fullband0, int32_t ___stereo1, int32_t ___fullBitrate2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setHighQualityAudioParametersWithFullband)(___fullband0, ___stereo1, ___fullBitrate2);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setLogFilter(uint32_t);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setLogFilter(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setLogFilter_m290CCBD3F86949D42C18FC5FA0884A95398C5567 (uint32_t ___filter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setLogFilter)(___filter0);

	return returnValue;
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL setLogFile(char*);
#endif
// System.Int32 TTTRtcEngine.IRtcEngineVoice::setLogFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_setLogFile_mD8D4BB3A2A7F9673F1ECE16576FFE260C63D602B (String_t* ___filePath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___filePath0' to native representation
	char* ____filePath0_marshaled = NULL;
	____filePath0_marshaled = il2cpp_codegen_marshal_string(___filePath0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setLogFile)(____filePath0_marshaled);

	// Marshaling cleanup of parameter '___filePath0' native representation
	il2cpp_codegen_marshal_free(____filePath0_marshaled);
	____filePath0_marshaled = NULL;

	return returnValue;
}
// System.Void TTTRtcEngine.IRtcEngineVoice::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice__ctor_mD6D724E68F551478C683AF300021A62858C6A371 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice__ctor_mD6D724E68F551478C683AF300021A62858C6A371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___appId0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_createEngine_m71909CB9E01F9F436D8814AA0938EF03428E7143(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String TTTRtcEngine.IRtcEngineVoice::GetSdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngineVoice_GetSdkVersion_m9C9DFCFD3E01C15CE0350485C21001D7601EE0C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetSdkVersion_m9C9DFCFD3E01C15CE0350485C21001D7601EE0C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		intptr_t L_0 = IRtcEngineVoice_getSdkVersion_m36C9EAACDE5A642256960979FFAEF783E5C84C63(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String TTTRtcEngine.IRtcEngineVoice::GetErrorDescription(TTTRtcEngine.ERROR_CODE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngineVoice_GetErrorDescription_m3525329365C21E553D58A012FA4DC815FB709CF3 (int32_t ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetErrorDescription_m3525329365C21E553D58A012FA4DC815FB709CF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		int32_t L_1 = ___code0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)9000))))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_002c:
	{
		V_0 = _stringLiteralAFACD1C5478BC5B3DA40A84A6DE0B6CED2BE1397;
		goto IL_005a;
	}

IL_0034:
	{
		V_0 = _stringLiteralE710068682342D450B7A22106AE599ADA0A02AE5;
		goto IL_005a;
	}

IL_003c:
	{
		V_0 = _stringLiteralD933AFE5FC2C080CCD6655930F7F1585938A45B5;
		goto IL_005a;
	}

IL_0044:
	{
		V_0 = _stringLiteral7C142FEF1A2EF2CF013D59FA626258C385072DD4;
		goto IL_005a;
	}

IL_004c:
	{
		V_0 = _stringLiteralD800A54E59396E004BC0A0AD287EE19631FF4CAE;
		goto IL_005a;
	}

IL_0054:
	{
		V_0 = _stringLiteral5F76EDC5DE7B87A1A66E3CBB852F9F91695570BF;
	}

IL_005a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetChannelProfile(TTTRtcEngine.CHANNEL_PROFILE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetChannelProfile_m6FD73D99AC30CB14D11B1516A11A31F78C2B4F71 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, int32_t ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetChannelProfile_m6FD73D99AC30CB14D11B1516A11A31F78C2B4F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setChannelProfile_m52381A23E3DAFC3A7C545091EE5C8FE1AAA9A645(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetLogFilter(TTTRtcEngine.LOG_FILTER)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetLogFilter_m5F1904EE83969A8FE5D025FE3DEFE1C219F6B422 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, int32_t ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetLogFilter_m5F1904EE83969A8FE5D025FE3DEFE1C219F6B422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___filter0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setLogFilter_m290CCBD3F86949D42C18FC5FA0884A95398C5567(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetLogFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetLogFile_m8CB6371D6E88D18E8F8C4A8B6195E87FC4E5B5AB (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetLogFile_m8CB6371D6E88D18E8F8C4A8B6195E87FC4E5B5AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filePath0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setLogFile_mD8D4BB3A2A7F9673F1ECE16576FFE260C63D602B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::JoinChannel(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_JoinChannel_m26E7BDD2CABDCBCC9F1F96F074B783C33C177FD3 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___channelName0, uint32_t ___uid1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___channelName0;
		uint32_t L_1 = ___uid1;
		int32_t L_2 = IRtcEngineVoice_JoinChannelByKey_m77DA8D80264864D6D39A13E0ECA08B576BFDA4BB(__this, (String_t*)NULL, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::JoinChannelByKey(System.String,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_JoinChannelByKey_m77DA8D80264864D6D39A13E0ECA08B576BFDA4BB (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___channelKey0, String_t* ___channelName1, uint32_t ___uid2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_JoinChannelByKey_m77DA8D80264864D6D39A13E0ECA08B576BFDA4BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channelKey0;
		String_t* L_1 = ___channelName1;
		uint32_t L_2 = ___uid2;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_3 = IRtcEngineVoice_joinChannel_m4473A2204F22BA5F27A263F82234F583FC37A828(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::LeaveChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_LeaveChannel_mBE8E2161E4F986E784FE8C1C880BCC26D7AC8E19 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_LeaveChannel_mBE8E2161E4F986E784FE8C1C880BCC26D7AC8E19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_leaveChannel_mF381D0720182CAA5E030DC731BDDDBEAB52BED62(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::GetMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_GetMessageCount_m84C91AF3263764C9A60F6B79BE59E74B6510FC26 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetMessageCount_m84C91AF3263764C9A60F6B79BE59E74B6510FC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_getMessageCount_mB53715CE1F43E7D8D1D085EC1EDDA7595705D871(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::MuteLocalAudioStream(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_MuteLocalAudioStream_m4AE787FF1753F90D2083A35CCBF99E9F3ECE7F85 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, bool ___mute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_MuteLocalAudioStream_m4AE787FF1753F90D2083A35CCBF99E9F3ECE7F85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___mute0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_muteLocalAudioStream_m10FBF590E64409A5D4993585246304F55BEF2B31(G_B3_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::MuteAllRemoteAudioStreams(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_MuteAllRemoteAudioStreams_m4F6EE3A6D434FD4007F4FD19FE1295607ABA4077 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, bool ___mute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_MuteAllRemoteAudioStreams_m4F6EE3A6D434FD4007F4FD19FE1295607ABA4077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___mute0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_muteAllRemoteAudioStreams_mD1540D07BC7AACF8640F3A7F8C2B8C97D887E1C6(G_B3_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::MuteRemoteAudioStream(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_MuteRemoteAudioStream_mDA8583F6EDFB9883CEC8D0293E2E228FC1A1B5D0 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, uint32_t ___uid0, bool ___mute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_MuteRemoteAudioStream_mDA8583F6EDFB9883CEC8D0293E2E228FC1A1B5D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	{
		uint32_t L_0 = ___uid0;
		bool L_1 = ___mute1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_2 = IRtcEngineVoice_muteRemoteAudioStream_mDDBC1B5A38E8659B316F940DB961273DA060EB52(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetEnableSpeakerphone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetEnableSpeakerphone_mF905B525E9894A7018F6F9808F34AAF0C920416F (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, bool ___speakerphone0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetEnableSpeakerphone_mF905B525E9894A7018F6F9808F34AAF0C920416F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___speakerphone0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setEnableSpeakerphone_m6FB22410FC841A5C8A366C4655CF1CF60C5E8233(G_B3_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetDefaultAudioRouteToSpeakerphone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetDefaultAudioRouteToSpeakerphone_m791868C61DB4905A5162FA8B55F59A1234263BB4 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, bool ___speakerphone0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetDefaultAudioRouteToSpeakerphone_m791868C61DB4905A5162FA8B55F59A1234263BB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___speakerphone0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setDefaultAudioRoutetoSpeakerphone_m7ECA233C7E7CC0E640961274D8A173EDC9095D82(G_B3_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TTTRtcEngine.IRtcEngineVoice::IsSpeakerphoneEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IRtcEngineVoice_IsSpeakerphoneEnabled_m62F79E9D62F3C7134A68D9F2A702B83624613021 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_IsSpeakerphoneEnabled_m62F79E9D62F3C7134A68D9F2A702B83624613021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_isSpeakerphoneEnabled_m3CB66B1C7B3A74F9140DF5159C10586E49037C39(/*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetHighQualityAudioParametersWithFullband(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetHighQualityAudioParametersWithFullband_m7987F8E0E2A9B5C9D72B8C447F21343F34094C49 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, bool ___fullband0, bool ___stereo1, bool ___fullBitrate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetHighQualityAudioParametersWithFullband_m7987F8E0E2A9B5C9D72B8C447F21343F34094C49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	{
		bool L_0 = ___fullband0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		bool L_1 = ___stereo1;
		G_B4_0 = G_B3_0;
		if (L_1)
		{
			G_B5_0 = G_B3_0;
			goto IL_000d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_000e:
	{
		bool L_2 = ___fullBitrate2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if (L_2)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_0014;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_3 = IRtcEngineVoice_setHighQualityAudioParametersWithFullband_mEC25FA34143186D9A091E17B4D7101B8B664953C(G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::SetAudioMixingPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_SetAudioMixingPosition_m0873ECE7F9F3508A87FD307D504BDBD1233C7131 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_SetAudioMixingPosition_m0873ECE7F9F3508A87FD307D504BDBD1233C7131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___pos0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_setAudioMixingPosition_m94726BD5B31F2DA4538F2EDA41DB860533B88795(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::EnableAudioVolumeIndication(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_EnableAudioVolumeIndication_m5EBCA7E7D2ED7B9AE4ED046A7C53078C34A2B7DC (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, int32_t ___interval0, int32_t ___smooth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_EnableAudioVolumeIndication_m5EBCA7E7D2ED7B9AE4ED046A7C53078C34A2B7DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___interval0;
		int32_t L_1 = ___smooth1;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_2 = IRtcEngineVoice_enableAudioVolumeIndication_m06ED92E9F4E7433916023280D1A1A53B9F777B7B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::StartAudioMixing(System.String,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_StartAudioMixing_mD66C8571E930727CF085561FA1DB27B4E5E700D9 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, String_t* ___filePath0, bool ___loopback1, bool ___replace2, int32_t ___cycle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_StartAudioMixing_mD66C8571E930727CF085561FA1DB27B4E5E700D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	String_t* G_B6_2 = NULL;
	{
		String_t* L_0 = ___filePath0;
		bool L_1 = ___loopback1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		bool L_2 = ___replace2;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_2)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_000e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_000f:
	{
		int32_t L_3 = ___cycle3;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_4 = IRtcEngineVoice_startAudioMixing_m35EE7B1412B3A88BB75520BD07FFBCC8B2CD3464(G_B6_2, G_B6_1, G_B6_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::StopAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_StopAudioMixing_m211859D9AE1E9D9EACAE0825871168F67687DBD0 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_StopAudioMixing_m211859D9AE1E9D9EACAE0825871168F67687DBD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_stopAudioMixing_m6FE75312328E9E61977F15E6A6357CAEED0A2273(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::PauseAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_PauseAudioMixing_m9698C35C216C0E9E9B2723BA2E5DE89EE788678C (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_PauseAudioMixing_m9698C35C216C0E9E9B2723BA2E5DE89EE788678C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_pauseAudioMixing_m068ADB3FC65B42752DC585B7E70C7B8ED59D4872(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::ResumeAudioMixing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_ResumeAudioMixing_m40116489376EE76B4C54763D3D57E703C2B32307 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_ResumeAudioMixing_m40116489376EE76B4C54763D3D57E703C2B32307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_resumeAudioMixing_mF26496D0FF7ADC1FF0525D4C7213677F484F5906(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::AdjustAudioMixingVolume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_AdjustAudioMixingVolume_mC5E335D1F1AD8FD3332B1928E0210E18D1518009 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, int32_t ___volume0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_AdjustAudioMixingVolume_mC5E335D1F1AD8FD3332B1928E0210E18D1518009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___volume0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_1 = IRtcEngineVoice_adjustAudioMixingVolume_m8E4501302CF16B00B6EA853EBC763B97D88B874B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::GetAudioMixingDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_GetAudioMixingDuration_m7424C2B278A4C70189630302A5A8291F57E7229A (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetAudioMixingDuration_m7424C2B278A4C70189630302A5A8291F57E7229A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_getAudioMixingDuration_mA3E47335B7FDD77E49578D02A8EA24E54A50BB64(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TTTRtcEngine.IRtcEngineVoice::GetAudioMixingCurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IRtcEngineVoice_GetAudioMixingCurrentPosition_mB704B147A5D9B7B0865450DF5F18AA973680DD1B (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetAudioMixingCurrentPosition_mB704B147A5D9B7B0865450DF5F18AA973680DD1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		int32_t L_0 = IRtcEngineVoice_getAudioMixingCurrentPosition_mCFAE326354A00C248EF3FD9A4CD7DC514C1564FF(/*hidden argument*/NULL);
		return L_0;
	}
}
// TTTRtcEngine.IRtcEngineVoice TTTRtcEngine.IRtcEngineVoice::GetEngine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * IRtcEngineVoice_GetEngine_m6A61D393969D869751575E00799E930CE0A3A71D (String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_GetEngine_m6A61D393969D869751575E00799E930CE0A3A71D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = ((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->get_instance_12();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___appId0;
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_2 = (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 *)il2cpp_codegen_object_new(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice__ctor_mD6D724E68F551478C683AF300021A62858C6A371(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->set_instance_12(L_2);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_3 = ((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->get_instance_12();
		return L_3;
	}
}
// System.Void TTTRtcEngine.IRtcEngineVoice::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice_Destroy_m24E4F382821060984965BE14C3BB164BFE7633B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_Destroy_m24E4F382821060984965BE14C3BB164BFE7633B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = ((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->get_instance_12();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_deleteEngine_mB15DA6B2152BFF30171F9188D56DC88C269B958D(/*hidden argument*/NULL);
		((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->set_instance_12((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 *)NULL);
	}

IL_0012:
	{
		return;
	}
}
// TTTRtcEngine.IRtcEngineVoice TTTRtcEngine.IRtcEngineVoice::QueryEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * IRtcEngineVoice_QueryEngine_m4308BCDD92BFB0A4242AB76B9FA8AC363D24AAB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_QueryEngine_m4308BCDD92BFB0A4242AB76B9FA8AC363D24AAB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * L_0 = ((IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_StaticFields*)il2cpp_codegen_static_fields_for(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var))->get_instance_12();
		return L_0;
	}
}
// System.String TTTRtcEngine.IRtcEngineVoice::Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngineVoice_Poll_m86DE9AFAC3F8062557B65A9DF3B824CDC4A8AA85 (IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRtcEngineVoice_Poll_m86DE9AFAC3F8062557B65A9DF3B824CDC4A8AA85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  V_9;
	memset((&V_9), 0, sizeof(V_9));
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	uint32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  V_24;
	memset((&V_24), 0, sizeof(V_24));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		intptr_t L_0 = IRtcEngineVoice_getMessage_mE802BD44EB1397E4B0B77A61DB94CD49F42DAF2D(/*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_2 = Marshal_PtrToStringAnsi_mA5D5D1AA7C0EB6A96F92454A8AF9C266E2DF5DA5((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		IRtcEngineVoice_freeObject_mE91F968AB1135503F403FD7EDEDAD16CA8545AE4((intptr_t)L_1, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_5;
	}

IL_001f:
	{
		String_t* L_6 = V_0;
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral07C88CF311C4C8651DAB8A1803603212512BFE97, L_6, _stringLiteralE660B31DE3AE307A8D89844447D213267CA581F0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)9));
		NullCheck(L_8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 0;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_14, _stringLiteral34C18E24D1DFBBB529FABA38B503601CB512F20E, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0080;
		}
	}
	{
		SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * L_16 = __this->get_OnError_8();
		if (!L_16)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * L_21 = __this->get_OnError_8();
		int32_t L_22 = V_2;
		int32_t L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngineVoice_t324BAC50DEE7635C07B95373622A5BB49AA2BCA0_il2cpp_TypeInfo_var);
		String_t* L_24 = IRtcEngineVoice_GetErrorDescription_m3525329365C21E553D58A012FA4DC815FB709CF3(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		SDKErrorHandler_Invoke_m6826871305B96365456FA7089F3CE717EA1BEF65(L_21, L_22, L_24, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_0080:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = 0;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_27, _stringLiteral8967E123B7E06FAC0F23B25831F52606C4638898, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00aa;
		}
	}
	{
		ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * L_29 = __this->get_OnConnectionLost_2();
		if (!L_29)
		{
			goto IL_0335;
		}
	}
	{
		ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * L_30 = __this->get_OnConnectionLost_2();
		NullCheck(L_30);
		ConnectionLostHandler_Invoke_m5C184484CB476D1834E8B6ED1E248E400D943BFD(L_30, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_00aa:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = 0;
		String_t* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		int32_t L_34 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_33, _stringLiteral70B5231801B90DAE3E16E7654389124D275D7372, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00ed;
		}
	}
	{
		JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * L_35 = __this->get_OnJoinChannelSuccess_1();
		if (!L_35)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = 2;
		String_t* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = 3;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_42, /*hidden argument*/NULL);
		V_4 = L_43;
		JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * L_44 = __this->get_OnJoinChannelSuccess_1();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = 1;
		String_t* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		uint32_t L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_44);
		JoinChannelSuccessHandler_Invoke_m73C4DEC2DAAFEDCB6F80FCB86A608B50010A7E5E(L_44, L_47, L_48, L_49, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_00ed:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = 0;
		String_t* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		int32_t L_53 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_52, _stringLiteral962C9D8E141A1C07339E61B07AA12BC4FC66D9FA, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0167;
		}
	}
	{
		LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * L_54 = __this->get_OnLeaveChannel_5();
		if (!L_54)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = 1;
		String_t* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_57, /*hidden argument*/NULL);
		V_5 = L_58;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 4;
		String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_61, /*hidden argument*/NULL);
		V_6 = L_62;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 5;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_65, /*hidden argument*/NULL);
		V_7 = L_66;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_67 = V_1;
		NullCheck(L_67);
		int32_t L_68 = 8;
		String_t* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_69, /*hidden argument*/NULL);
		V_8 = L_70;
		int32_t L_71 = V_5;
		(&V_9)->set_duration_0(L_71);
		int32_t L_72 = V_6;
		(&V_9)->set_txAudioKBitRate_1((uint16_t)(((int32_t)((uint16_t)L_72))));
		int32_t L_73 = V_7;
		(&V_9)->set_rxAudioKBitRate_2((uint16_t)(((int32_t)((uint16_t)L_73))));
		int32_t L_74 = V_8;
		(&V_9)->set_users_3(L_74);
		LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * L_75 = __this->get_OnLeaveChannel_5();
		RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  L_76 = V_9;
		NullCheck(L_75);
		LeaveChannelHandler_Invoke_m3FFC6A826F01C8607514B4DAF65DE05C59458DCB(L_75, L_76, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_0167:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78 = 0;
		String_t* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		int32_t L_80 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_79, _stringLiteralC58D74E9987D267995EF81EEAA600F427F86B44B, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_01a9;
		}
	}
	{
		UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * L_81 = __this->get_OnUserJoined_3();
		if (!L_81)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 1;
		String_t* L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_84, /*hidden argument*/NULL);
		V_10 = L_85;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_86 = V_1;
		NullCheck(L_86);
		int32_t L_87 = 2;
		String_t* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_88, /*hidden argument*/NULL);
		V_11 = L_89;
		UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * L_90 = __this->get_OnUserJoined_3();
		uint32_t L_91 = V_10;
		int32_t L_92 = V_11;
		NullCheck(L_90);
		UserJoinedHandler_Invoke_mE61B33348A104F981B0EEE82E3A4D6A91D53A2A5(L_90, L_91, L_92, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_01a9:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_93 = V_1;
		NullCheck(L_93);
		int32_t L_94 = 0;
		String_t* L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		int32_t L_96 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_95, _stringLiteral1B4FA87230C03E8DAB1743F4DB35DF0273AE9C56, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_01eb;
		}
	}
	{
		UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * L_97 = __this->get_OnUserOffline_4();
		if (!L_97)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_98 = V_1;
		NullCheck(L_98);
		int32_t L_99 = 1;
		String_t* L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_100, /*hidden argument*/NULL);
		V_12 = L_101;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_102 = V_1;
		NullCheck(L_102);
		int32_t L_103 = 2;
		String_t* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		int32_t L_105 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_104, /*hidden argument*/NULL);
		V_13 = L_105;
		UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * L_106 = __this->get_OnUserOffline_4();
		uint32_t L_107 = V_12;
		int32_t L_108 = V_13;
		NullCheck(L_106);
		UserOfflineHandler_Invoke_mDD2C07AEEB5E487C48981F5A0B0C93B5A5A34D53(L_106, L_107, L_108, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_01eb:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_109 = V_1;
		NullCheck(L_109);
		int32_t L_110 = 0;
		String_t* L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		int32_t L_112 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_111, _stringLiteral4B976B5DE40DF7C22D435DAD807B2E58A91AFE6E, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_0221;
		}
	}
	{
		AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * L_113 = __this->get_OnAudioRouteChanged_11();
		if (!L_113)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_114 = V_1;
		NullCheck(L_114);
		int32_t L_115 = 1;
		String_t* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_116, /*hidden argument*/NULL);
		V_14 = L_117;
		AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * L_118 = __this->get_OnAudioRouteChanged_11();
		int32_t L_119 = V_14;
		NullCheck(L_118);
		AudioRouteChangedHandler_Invoke_m5FDF63E1FDE552E3E6BC0C7475FF4EC5967B1C02(L_118, L_119, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_0221:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_120 = V_1;
		NullCheck(L_120);
		int32_t L_121 = 0;
		String_t* L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		int32_t L_123 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_122, _stringLiteral799E335F9DCB437AAF1EAB077CB7D1F3AD4A5015, /*hidden argument*/NULL);
		if (L_123)
		{
			goto IL_0263;
		}
	}
	{
		ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * L_124 = __this->get_OnReportAuidoLevel_6();
		if (!L_124)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_125 = V_1;
		NullCheck(L_125);
		int32_t L_126 = 1;
		String_t* L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_127, /*hidden argument*/NULL);
		V_15 = L_128;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 2;
		String_t* L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		int32_t L_132 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_131, /*hidden argument*/NULL);
		V_16 = L_132;
		ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * L_133 = __this->get_OnReportAuidoLevel_6();
		uint32_t L_134 = V_15;
		int32_t L_135 = V_16;
		NullCheck(L_133);
		ReportAuidoLevelHandler_Invoke_m0EF2C475E8296E1BD08CB5E435438D3EB524F105(L_133, L_134, L_135, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_0263:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_136 = V_1;
		NullCheck(L_136);
		int32_t L_137 = 0;
		String_t* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		int32_t L_139 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_138, _stringLiteralE6007EDF54F28C4F977FDDF51FEB6A613176ED6B, /*hidden argument*/NULL);
		if (L_139)
		{
			goto IL_02a8;
		}
	}
	{
		UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * L_140 = __this->get_OnUserMuted_7();
		if (!L_140)
		{
			goto IL_0335;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_141 = V_1;
		NullCheck(L_141);
		int32_t L_142 = 1;
		String_t* L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		int32_t L_144 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_143, /*hidden argument*/NULL);
		V_17 = L_144;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_145 = V_1;
		NullCheck(L_145);
		int32_t L_146 = 2;
		String_t* L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_147, /*hidden argument*/NULL);
		V_18 = (bool)((!(((uint32_t)L_148) <= ((uint32_t)0)))? 1 : 0);
		UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * L_149 = __this->get_OnUserMuted_7();
		uint32_t L_150 = V_17;
		bool L_151 = V_18;
		NullCheck(L_149);
		UserMutedHandler_Invoke_mA8E14367AAFBA68BB531B42B46C501950641BBA5(L_149, L_150, L_151, /*hidden argument*/NULL);
		goto IL_0335;
	}

IL_02a8:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_152 = V_1;
		NullCheck(L_152);
		int32_t L_153 = 0;
		String_t* L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_154);
		int32_t L_155 = String_CompareTo_m9FAB33E920810E148EDAA4F64E37F231412312AB(L_154, _stringLiteral9655A4D3B22F5D73226691F207A80E8F2B1395EB, /*hidden argument*/NULL);
		if (L_155)
		{
			goto IL_0335;
		}
	}
	{
		RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * L_156 = __this->get_OnRtcStats_9();
		if (!L_156)
		{
			goto IL_0335;
		}
	}
	{
		V_19 = 1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_157 = V_1;
		int32_t L_158 = V_19;
		int32_t L_159 = L_158;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
		NullCheck(L_157);
		int32_t L_160 = L_159;
		String_t* L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		int32_t L_162 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_161, /*hidden argument*/NULL);
		V_20 = L_162;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_163 = V_1;
		int32_t L_164 = V_19;
		int32_t L_165 = L_164;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)1));
		NullCheck(L_163);
		int32_t L_166 = L_165;
		String_t* L_167 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		int32_t L_168 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_167, /*hidden argument*/NULL);
		V_21 = L_168;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_169 = V_1;
		int32_t L_170 = V_19;
		int32_t L_171 = L_170;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
		NullCheck(L_169);
		int32_t L_172 = L_171;
		String_t* L_173 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_173, /*hidden argument*/NULL);
		V_22 = L_174;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_175 = V_1;
		int32_t L_176 = V_19;
		int32_t L_177 = L_176;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
		NullCheck(L_175);
		int32_t L_178 = L_177;
		String_t* L_179 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_179, /*hidden argument*/NULL);
		V_23 = L_180;
		int32_t L_181 = V_20;
		(&V_24)->set_duration_0(L_181);
		int32_t L_182 = V_21;
		(&V_24)->set_txAudioKBitRate_1((uint16_t)(((int32_t)((uint16_t)L_182))));
		int32_t L_183 = V_22;
		(&V_24)->set_rxAudioKBitRate_2((uint16_t)(((int32_t)((uint16_t)L_183))));
		int32_t L_184 = V_23;
		(&V_24)->set_users_3(L_184);
		RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * L_185 = __this->get_OnRtcStats_9();
		RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  L_186 = V_24;
		NullCheck(L_185);
		RtcStatsHandler_Invoke_m676C8315595B3E21B185AE45016C45934424C5AB(L_185, L_186, /*hidden argument*/NULL);
	}

IL_0335:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_187 = V_1;
		NullCheck(L_187);
		int32_t L_188 = 0;
		String_t* L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		return L_189;
	}
}
// System.Void TTTRtcEngine.IRtcEngineVoice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IRtcEngineVoice__cctor_m7E664A31A63E4771A3A243264D481E256CB0CFCB (const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 (AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixingFinishedHandler__ctor_mB066908C65E821B7DBD77EE17464D1FCCC9802C1 (AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixingFinishedHandler_Invoke_mCD97B825340A82EAEBEAA2E8B217216525649094 (AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioMixingFinishedHandler_BeginInvoke_m487BDFF6C78D54DFEA6CC7B41E5B1BA181EC0558 (AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioMixingFinishedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixingFinishedHandler_EndInvoke_m9554B99613E6D4769E041CEC1929B694876A28AD (AudioMixingFinishedHandler_t3E7EE9F12F9BEAD2149773726A2CCEDD7D06CB57 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, int32_t ___route0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___route0);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioRouteChangedHandler__ctor_m43C22607233E5BC3E7153A351526A1E9CE37D47F (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler::Invoke(TTTRtcEngine.AUDIO_ROUTE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioRouteChangedHandler_Invoke_m5FDF63E1FDE552E3E6BC0C7475FF4EC5967B1C02 (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, int32_t ___route0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___route0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___route0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___route0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___route0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___route0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___route0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___route0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___route0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler::BeginInvoke(TTTRtcEngine.AUDIO_ROUTE,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioRouteChangedHandler_BeginInvoke_mB72FB6344319A9883794C6EC7ACA089018AC4868 (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, int32_t ___route0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioRouteChangedHandler_BeginInvoke_mB72FB6344319A9883794C6EC7ACA089018AC4868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(AUDIO_ROUTE_tBDFB0AE5F0AF58C0E78F5A59F26D66AFC28C5629_il2cpp_TypeInfo_var, &___route0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_AudioRouteChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioRouteChangedHandler_EndInvoke_m9120308587DF6C46281BA73571C82D5B206138AB (AudioRouteChangedHandler_t2F29CD8A53ACBBBF4CCB50ED8C73AE8698C3D679 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionLostHandler__ctor_mE3E5C6419BD3FD9DA240AC70C31404251458CA26 (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionLostHandler_Invoke_m5C184484CB476D1834E8B6ED1E248E400D943BFD (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionLostHandler_BeginInvoke_m6CBE023387A107F259600F099D0483F5179EA3DE (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_ConnectionLostHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionLostHandler_EndInvoke_mA532FCA66511B0A2C682B6AD8B03468972F43AE5 (ConnectionLostHandler_t785C1565F1BD84E773C267D38552CD384723E656 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, String_t* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, uint32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___channelName0' to native representation
	char* ____channelName0_marshaled = NULL;
	____channelName0_marshaled = il2cpp_codegen_marshal_string(___channelName0);

	// Native function invocation
	il2cppPInvokeFunc(____channelName0_marshaled, ___uid1, ___elapsed2);

	// Marshaling cleanup of parameter '___channelName0' native representation
	il2cpp_codegen_marshal_free(____channelName0_marshaled);
	____channelName0_marshaled = NULL;

}
// System.Void TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinChannelSuccessHandler__ctor_mBA2407E277A88F861B369D8C8F4B9DB5AB8E64D0 (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler::Invoke(System.String,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinChannelSuccessHandler_Invoke_m73C4DEC2DAAFEDCB6F80FCB86A608B50010A7E5E (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, String_t* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelName0, ___uid1, ___elapsed2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelName0, ___uid1, ___elapsed2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, ___channelName0, ___uid1, ___elapsed2);
					else
						GenericVirtActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, ___channelName0, ___uid1, ___elapsed2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___channelName0, ___uid1, ___elapsed2);
					else
						VirtActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___channelName0, ___uid1, ___elapsed2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelName0, ___uid1, ___elapsed2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, uint32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___channelName0, ___uid1, ___elapsed2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___channelName0, ___uid1, ___elapsed2);
					else
						GenericVirtActionInvoker3< String_t*, uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___channelName0, ___uid1, ___elapsed2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channelName0, ___uid1, ___elapsed2);
					else
						VirtActionInvoker3< String_t*, uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channelName0, ___uid1, ___elapsed2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelName0, ___uid1, ___elapsed2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler::BeginInvoke(System.String,System.UInt32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JoinChannelSuccessHandler_BeginInvoke_m4C3A8EB3829D09F1747B5DEF542E9B037E20D8BE (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, String_t* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinChannelSuccessHandler_BeginInvoke_m4C3A8EB3829D09F1747B5DEF542E9B037E20D8BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___channelName0;
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___elapsed2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_JoinChannelSuccessHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinChannelSuccessHandler_EndInvoke_mA60999A241EE8495E3AFECDCEAE291D7827ED575 (JoinChannelSuccessHandler_t01EA7594CDD924C602A8DF0CC6386C62B82A62C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___stats0);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveChannelHandler__ctor_m33840F4BA35392228403ACE99299040791250F22 (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler::Invoke(TTTRtcEngine.RtcStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveChannelHandler_Invoke_m3FFC6A826F01C8607514B4DAF65DE05C59458DCB (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stats0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stats0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___stats0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(targetMethod, targetThis, ___stats0);
					else
						GenericVirtActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(targetMethod, targetThis, ___stats0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___stats0);
					else
						VirtActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___stats0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stats0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler::BeginInvoke(TTTRtcEngine.RtcStats,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaveChannelHandler_BeginInvoke_m9ECF43D150950AC93D4354100DA935DF0E27D0F6 (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeaveChannelHandler_BeginInvoke_m9ECF43D150950AC93D4354100DA935DF0E27D0F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8_il2cpp_TypeInfo_var, &___stats0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_LeaveChannelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveChannelHandler_EndInvoke_mAA36F705C027DC1250FB6E128F63BEB56F3827DD (LeaveChannelHandler_t8986DDB8D4C19E9559643EE0B2FCA2174888DBB4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, uint32_t ___uid0, int32_t ___audioLevel1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___uid0, ___audioLevel1);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAuidoLevelHandler__ctor_m726E50ACB424AE9D72A102FE7D6ADEA967B9EB44 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler::Invoke(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAuidoLevelHandler_Invoke_m0EF2C475E8296E1BD08CB5E435438D3EB524F105 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, uint32_t ___uid0, int32_t ___audioLevel1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___audioLevel1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___audioLevel1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___uid0, ___audioLevel1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___audioLevel1);
					else
						GenericVirtActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___audioLevel1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___audioLevel1);
					else
						VirtActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___audioLevel1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___audioLevel1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler::BeginInvoke(System.UInt32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReportAuidoLevelHandler_BeginInvoke_m8D8ECE8D1B4D8CEF269224AA66B4523AD6503639 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, uint32_t ___uid0, int32_t ___audioLevel1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReportAuidoLevelHandler_BeginInvoke_m8D8ECE8D1B4D8CEF269224AA66B4523AD6503639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___audioLevel1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_ReportAuidoLevelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportAuidoLevelHandler_EndInvoke_mA0EDEED0644A818DFF686129D60CC5920DB4CF12 (ReportAuidoLevelHandler_t8C521D054B4CBFA0B2649B01E917EFB001320A0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___stats0);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcStatsHandler__ctor_mE3A2971F998FBA459907233EC2094188BA390354 (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler::Invoke(TTTRtcEngine.RtcStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcStatsHandler_Invoke_m676C8315595B3E21B185AE45016C45934424C5AB (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stats0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stats0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___stats0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(targetMethod, targetThis, ___stats0);
					else
						GenericVirtActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(targetMethod, targetThis, ___stats0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___stats0);
					else
						VirtActionInvoker1< RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___stats0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stats0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler::BeginInvoke(TTTRtcEngine.RtcStats,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RtcStatsHandler_BeginInvoke_mA0CFEE6CAFFDA4010B9604B2709EB1CD8A0F9E34 (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8  ___stats0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RtcStatsHandler_BeginInvoke_mA0CFEE6CAFFDA4010B9604B2709EB1CD8A0F9E34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(RtcStats_t20A4A3B93026E5F3675DBE17C65F4F8671C664B8_il2cpp_TypeInfo_var, &___stats0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_RtcStatsHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcStatsHandler_EndInvoke_m05C3DC0910C41A3D0C61B85C1DDF88E3F670D57B (RtcStatsHandler_tD5EB5ED6E5C89ECA54180EA19B9E34AF7D98B9C8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	il2cppPInvokeFunc(___error0, ____msg1_marshaled);

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.Void TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKErrorHandler__ctor_m0BA6534C917CBC238EF8FDDCCB8FD1478F544518 (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler::Invoke(TTTRtcEngine.ERROR_CODE,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKErrorHandler_Invoke_m6826871305B96365456FA7089F3CE717EA1BEF65 (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___msg1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___error0, ___msg1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___error0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___msg1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler::BeginInvoke(TTTRtcEngine.ERROR_CODE,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SDKErrorHandler_BeginInvoke_m0B0FE2ABE6C8DA8787979DBBCDE2E3344E9659DA (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, int32_t ___error0, String_t* ___msg1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SDKErrorHandler_BeginInvoke_m0B0FE2ABE6C8DA8787979DBBCDE2E3344E9659DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ERROR_CODE_t74F1EB1D9F763034C93203B83E1CD9AE22E3DDC6_il2cpp_TypeInfo_var, &___error0);
	__d_args[1] = ___msg1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_SDKErrorHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKErrorHandler_EndInvoke_m87919BD2335BBFA44E5533B64D6FD2CBDA14EF1E (SDKErrorHandler_t99F1DFC798D9CDF5673357F70FA3120AFA098A42 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, uint32_t ___uid0, int32_t ___elapsed1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___uid0, ___elapsed1);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserJoinedHandler__ctor_m496F599C4C07C40163EA432175A06E5293F2CA6C (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler::Invoke(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserJoinedHandler_Invoke_mE61B33348A104F981B0EEE82E3A4D6A91D53A2A5 (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, uint32_t ___uid0, int32_t ___elapsed1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___elapsed1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___elapsed1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___uid0, ___elapsed1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___elapsed1);
					else
						GenericVirtActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___elapsed1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___elapsed1);
					else
						VirtActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___elapsed1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___elapsed1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler::BeginInvoke(System.UInt32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserJoinedHandler_BeginInvoke_m5B33E3AFC03E76513074C5F5806CB221595259A4 (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, uint32_t ___uid0, int32_t ___elapsed1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserJoinedHandler_BeginInvoke_m5B33E3AFC03E76513074C5F5806CB221595259A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___elapsed1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserJoinedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserJoinedHandler_EndInvoke_mE76247B97B115FDA6AE5DDD2A0D41C05A11E02FC (UserJoinedHandler_t190885E73EB423016AD0D731B53C184E23780870 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, uint32_t ___uid0, bool ___muted1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___uid0, static_cast<int32_t>(___muted1));

}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserMutedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMutedHandler__ctor_m554D930280B956BD97447D8F93339A20A1E2F271 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserMutedHandler::Invoke(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMutedHandler_Invoke_mA8E14367AAFBA68BB531B42B46C501950641BBA5 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, uint32_t ___uid0, bool ___muted1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___muted1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___muted1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint32_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___uid0, ___muted1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, bool >::Invoke(targetMethod, targetThis, ___uid0, ___muted1);
					else
						GenericVirtActionInvoker2< uint32_t, bool >::Invoke(targetMethod, targetThis, ___uid0, ___muted1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___muted1);
					else
						VirtActionInvoker2< uint32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___muted1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___muted1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_UserMutedHandler::BeginInvoke(System.UInt32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserMutedHandler_BeginInvoke_m7E526F7C32E08A8B8F3E393A0094E0D1450206F0 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, uint32_t ___uid0, bool ___muted1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserMutedHandler_BeginInvoke_m7E526F7C32E08A8B8F3E393A0094E0D1450206F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___muted1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserMutedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMutedHandler_EndInvoke_m69528E627F8E93CB1447CC2D919994AC2F70DD13 (UserMutedHandler_tF8B410DB15A9B486B7D65C64B9C388F834032B12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, uint32_t ___uid0, int32_t ___reason1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___uid0, ___reason1);

}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOfflineHandler__ctor_m25259F0DB922F9ADA16A079B458A30B3FF6032F2 (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler::Invoke(System.UInt32,TTTRtcEngine.USER_OFFLINE_REASON)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOfflineHandler_Invoke_mDD2C07AEEB5E487C48981F5A0B0C93B5A5A34D53 (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, uint32_t ___uid0, int32_t ___reason1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___reason1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___reason1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___uid0, ___reason1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___reason1);
					else
						GenericVirtActionInvoker2< uint32_t, int32_t >::Invoke(targetMethod, targetThis, ___uid0, ___reason1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___reason1);
					else
						VirtActionInvoker2< uint32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___reason1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___reason1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler::BeginInvoke(System.UInt32,TTTRtcEngine.USER_OFFLINE_REASON,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserOfflineHandler_BeginInvoke_m9583A680B6A80306E48F4B4F089A3D6B772F6469 (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, uint32_t ___uid0, int32_t ___reason1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserOfflineHandler_BeginInvoke_m9583A680B6A80306E48F4B4F089A3D6B772F6469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(USER_OFFLINE_REASON_t66B1E8C1CC8B45278911495F826EB9AF7F296CA1_il2cpp_TypeInfo_var, &___reason1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void TTTRtcEngine.IRtcEngineVoice_UserOfflineHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOfflineHandler_EndInvoke_m386045BB0C3F4B0F31B361665C1B493A2CE4314F (UserOfflineHandler_t127194F24606223CE84E786578D13F8F28F40B8E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
