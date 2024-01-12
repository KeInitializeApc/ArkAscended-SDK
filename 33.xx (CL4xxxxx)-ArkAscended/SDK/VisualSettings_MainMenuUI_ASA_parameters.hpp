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

// 0x30 (0x30 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupGettHdrValue
struct UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_47A2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MinValue;                                          // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       MaxValue;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       RealValue;                                         // 0x18(0x8)(Edit, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x20(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x28(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
struct UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params
{
public:
	class UDataListValueGeneric*                 Self2;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_47A5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MinValue;                                          // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       MaxValue;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x20(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x28(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x30(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0x38(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_SetFloatValue_Value_ImplicitCast;         // 0x4C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get HDRMid Luminence B Is Enabled
struct UVisualSettings_MainMenuUI_ASA_C_Get_HDRMid_Luminence_B_Is_Enabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue_1;               // 0x2(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x3(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_47A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x19(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
struct UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params
{
public:
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	uint8                                        Pad_47AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47AB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x14(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_47AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Index;                                             // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x2AC (0x2AC - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ExecuteUbergraph_VisualSettings_MainMenuUI_ASA
struct UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_47B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_3;          // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_47B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_4;          // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_GetCurrentHDRDisplayNits_ReturnValue;     // 0x4C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x58(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x60(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue;     // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_47B2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue_1;               // 0x78(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue_1;   // 0x80(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_47B3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_1;                      // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x90(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_47B4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_2; // 0xA0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0xA8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0xAC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_3; // 0xB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	float                                        CallFunc_GetFloatValue_ReturnValue_2;              // 0xB8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_47B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_2;          // 0xC0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0xD8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_47B6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_1;          // 0xE0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0xF8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_47B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue;            // 0x100(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x118(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_4; // 0x120(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_5; // 0x128(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_6; // 0x130(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_7; // 0x138(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	double                                       CallFunc_SetupGettHdrValue_RealValue;              // 0x140(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_8; // 0x148(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	double                                       CallFunc_SetupGettHdrValue_RealValue_1;            // 0x150(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_9; // 0x158(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	double                                       CallFunc_SetupGettHdrValue_RealValue_2;            // 0x160(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_10; // 0x168(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_11; // 0x170(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
	float                                        CallFunc_GetFloatValue_ReturnValue_3;              // 0x178(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, NonTransactional)
	float                                        CallFunc_GetFloatValue_ReturnValue_4;              // 0x17C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_12; // 0x180(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	float                                        CallFunc_GetFloatValue_ReturnValue_5;              // 0x188(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_47BA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_13; // 0x190(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_14; // 0x198(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	double                                       CallFunc_SetupGettHdrValue_RealValue_3;            // 0x1A0(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_RealValue_4;            // 0x1A8(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_15; // 0x1B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
	double                                       CallFunc_SetupGettHdrValue_RealValue_5;            // 0x1B8(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	float                                        CallFunc_SetFloatValue_Value_ImplicitCast;         // 0x1C0(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47BD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast;   // 0x1C8(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast;   // 0x1D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1; // 0x1D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1; // 0x1E0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2; // 0x1E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2; // 0x1F0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast;  // 0x1F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast;  // 0x200(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast; // 0x208(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1; // 0x210(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1; // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast; // 0x220(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2; // 0x228(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2; // 0x230(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast; // 0x238(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_47C1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3; // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3; // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4; // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4; // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5; // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5; // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3; // 0x270(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3; // 0x278(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4; // 0x280(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4; // 0x288(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	float                                        K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1; // 0x290(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1; // 0x294(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5; // 0x298(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5; // 0x2A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	float                                        K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1; // 0x2A8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


