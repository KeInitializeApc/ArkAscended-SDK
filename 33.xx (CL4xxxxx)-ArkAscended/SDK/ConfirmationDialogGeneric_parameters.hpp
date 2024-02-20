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

// 0x18 (0x18 - 0x0)
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
struct UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params
{
public:
	class FText                                  CancelText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
struct UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params
{
public:
	class FText                                  AcceptText;                                        // 0x0(0x18)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xA1 (0xA1 - 0x0)
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
struct UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_17B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x10(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_17C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FText                                  K2Node_Event_CancelText;                           // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	class FText                                  K2Node_Event_AcceptText;                           // 0x50(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x68(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_17E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetNumLocalPlayerControllers_ReturnValue; // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	int32                                        CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue; // 0x78(0x4)(Edit, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x7D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7E(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_185[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	class FString                                CallFunc_GetObjectName_ReturnValue_1;              // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x98(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xA0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
};

}
}


