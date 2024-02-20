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

// 0x68 (0x68 - 0x0)
// Function MainMenuUI.MainMenuUI_C.OverrideBGImage
struct UMainMenuUI_C_OverrideBGImage_Params
{
public:
	class UTexture2D*                            BGOverrideTexture;                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         InstantChange;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_397C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x18(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_397D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_GetMainMenuBackgroundTexture_ReturnValue; // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x31(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_397E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x40(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_BreakColor_R;                             // 0x48(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_G;                             // 0x4C(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_B;                             // 0x50(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_BreakColor_A;                             // 0x54(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x58(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x59(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_397F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
struct UMainMenuUI_C_UpdateLeftTextPosition_Params
{
public:
	bool                                         IsCTAVisible;                                      // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3981[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	struct FMargin                               K2Node_Select_Default;                             // 0x24(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3982[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
};

// 0xEE1 (0xEE1 - 0x0)
// Function MainMenuUI.MainMenuUI_C.ExecuteUbergraph_MainMenuUI
struct UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3994[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3996[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_GetMainMenuBackgroundTexture_ReturnValue; // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3999[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetUpsellIndex_ReturnValue;               // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_399A[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x40(0xD0)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetUpsellIndex_ReturnValue_1;             // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_399C[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x120(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x510(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_399E[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x520(0xD0)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x5F0(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_2;       // 0x9E0(0xD0)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_2;                   // 0xAB0(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_GetUpsellIndex_ReturnValue_2;             // 0xEA0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xEA4(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_39A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0xEA8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xEB8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0xEC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xEC8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xED0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_OpenUrl_ReturnValue;                      // 0xED1(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_OpenUrl_ReturnValue_1;                    // 0xED2(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_39A7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UCreditsUI_C*                          CallFunc_Create_ReturnValue;                       // 0xED8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Play_ReturnValue;                         // 0xEE0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


