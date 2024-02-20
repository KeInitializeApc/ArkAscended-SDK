#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x149 (0x149 - 0x0)
// Function UI_Verification.UI_Verification_C.OnKeyDown
struct UUI_Verification_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function UI_Verification.UI_Verification_C.OnPreviewKeyDown
struct UUI_Verification_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature
struct UUI_Verification_C_BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_Verification.UI_Verification_C.Event Bind On Input Device Changed
struct UUI_Verification_C_Event_Bind_On_Input_Device_Changed_Params
{
public:
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Verification.UI_Verification_C.Event On Input Device Changed
struct UUI_Verification_C_Event_On_Input_Device_Changed_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Verification.UI_Verification_C.PreConstruct
struct UUI_Verification_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_Verification.UI_Verification_C.Event On Failed To Generate Auth Code
struct UUI_Verification_C_Event_On_Failed_To_Generate_Auth_Code_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x19C (0x19C - 0x0)
// Function UI_Verification.UI_Verification_C.ExecuteUbergraph_UI_Verification
struct UUI_Verification_C_ExecuteUbergraph_UI_Verification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x2C(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x40(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x54(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x68(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	enum class ENUM_InputDevices                 Temp_byte_Variable;                                // 0x7C(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_11D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x90(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x91(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_11F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                K2Node_ComponentBoundEvent_Digits;                 // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       K2Node_CustomEvent_StoreMenuRef;                   // 0xD0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_InputDevices                 K2Node_CustomEvent_Device;                         // 0xD8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xD9(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xDA(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class ENUM_InputDevices                 CallFunc_CheckPlayerInputDevices_UsingGamepad_;    // 0xDB(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_124[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0xE8(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_125[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x100(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x138(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_GetDigits_Digits;                         // 0x148(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x158(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x15C(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_127[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x160(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, EditorOnly)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_8;                    // 0x174(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_9;                    // 0x188(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp, EditorOnly)
};

}
}


