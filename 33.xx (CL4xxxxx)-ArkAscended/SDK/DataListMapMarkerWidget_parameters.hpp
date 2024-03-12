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

// 0x1 (0x1 - 0x0)
// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.OnConfirmationDialogClosedBP
struct UDataListMapMarkerWidget_C_OnConfirmationDialogClosedBP_Params
{
public:
	bool                                         bAccept;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x79 (0x79 - 0x0)
// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshData
struct UDataListMapMarkerWidget_C_RefreshData_Params
{
public:
	struct FMinimapMark                          NewMark;                                           // 0x0(0x78)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanEdit;                                           // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x11C (0x11C - 0x0)
// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.ExecuteUbergraph_DataListMapMarkerWidget
struct UDataListMapMarkerWidget_C_ExecuteUbergraph_DataListMapMarkerWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_59D2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x20(0x4)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_59D4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_Event_bAccept;                              // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_59D6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FMinimapMark                          K2Node_CustomEvent_NewMark;                        // 0x68(0x78)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_CustomEvent_CanEdit;                        // 0xE0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_59D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xE8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue;                      // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0xF8(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x100(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x104(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x108(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_59DB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x10C(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.EditWaypoint__DelegateSignature
struct UDataListMapMarkerWidget_C_EditWaypoint__DelegateSignature_Params
{
public:
	struct FMinimapMark                          EditMark;                                          // 0x0(0x78)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


