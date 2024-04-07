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

// 0x8 (0x8 - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.OnFail_B8687F5A48265CFC0EB678AEAD6BCBCC
struct UUI_ShowcaseSlot_C_OnFail_B8687F5A48265CFC0EB678AEAD6BCBCC_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.OnSuccess_B8687F5A48265CFC0EB678AEAD6BCBCC
struct UUI_ShowcaseSlot_C_OnSuccess_B8687F5A48265CFC0EB678AEAD6BCBCC_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
};

// 0x3C (0x3C - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.Tick
struct UUI_ShowcaseSlot_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1C8 (0x1C8 - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.SuccessIGuess
struct UUI_ShowcaseSlot_C_SuccessIGuess_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x1C8)(Edit, ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.How could we possibly ever fail
struct UUI_ShowcaseSlot_C_How_could_we_possibly_ever_fail_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x9C4 (0x9C4 - 0x0)
// Function UI_ShowcaseSlot.UI_ShowcaseSlot_C.ExecuteUbergraph_UI_ShowcaseSlot
struct UUI_ShowcaseSlot_C_ExecuteUbergraph_UI_ShowcaseSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_5DC[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x10(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5DE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5DF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x28(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x30(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x48(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x60(0xD0)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x130(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x148(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x180(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x184(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_5EC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x198(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x1A0(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x1A8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B8(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5EE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x1C0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x1C8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference, Interp)
	struct FCFCoreMod                            K2Node_CustomEvent_mod;                            // 0x1D0(0x1C8)(BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, DuplicateTransient, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x398(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_5EF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_MakeFInstallProgressMod_ReturnValue;      // 0x3A0(0x4C0)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient, SubobjectReference)
	struct FModAsset                             CallFunc_Array_Get_Item;                           // 0x860(0x58)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8B8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x8C0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8C8(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8C9(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x8CA(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F4[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x8D0(0x38)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x908(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x909(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_5F8[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x910(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x918(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x919(0x1)(BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_5F9[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x920(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	struct FCategory                             CallFunc_Array_Get_Item_1;                         // 0x928(0x78)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x9A0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x9B8(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x9C0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
};

}
}


