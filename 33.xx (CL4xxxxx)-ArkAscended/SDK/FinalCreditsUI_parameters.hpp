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

// 0x13 (0x13 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
struct UFinalCreditsUI_C_Play_Credits_Music_Params
{
public:
	class FString                                CallFunc_GetLastMapPlayed_ReturnValue;             // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x10(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x11(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x12(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
};

// 0x30 (0x30 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
struct UFinalCreditsUI_C_OnMoviePlaybackFinished_Params
{
public:
	class FString                                MoviePath;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bPlaybackWasCancelled;                             // 0x10(0x1)(OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D8A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.Tick
struct UFinalCreditsUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
struct UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DB5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x58(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x68(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x70(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DB6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x78(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UPrimalGlobalsBlueprint_C*             K2Node_DynamicCast_AsPrimal_Globals_Blueprint;     // 0x88(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2DB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0xA0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAA(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAB(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DB9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class AWorldSettings*                        CallFunc_GetWorldSettings_ReturnValue;             // 0xB8(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0xD0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xDA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xDB(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xDC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xDD(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsClient_ReturnValue;                     // 0xDE(0x1)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_PlayMovie_ReturnValue;                    // 0xDF(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xF8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


