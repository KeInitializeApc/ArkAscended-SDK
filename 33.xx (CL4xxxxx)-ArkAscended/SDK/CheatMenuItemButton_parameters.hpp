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
// Function CheatMenuItemButton.CheatMenuItemButton_C.SetItem
struct UCheatMenuItemButton_C_SetItem_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemDyeGeneric_C*               K2Node_DynamicCast_AsPrimal_Item_Dye_Generic;      // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_31C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x48(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetItemShortName_ReturnValue;             // 0x58(0x10)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1D4 (0x1D4 - 0x0)
// Function CheatMenuItemButton.CheatMenuItemButton_C.ExecuteUbergraph_CheatMenuItemButton
struct UCheatMenuItemButton_C_ExecuteUbergraph_CheatMenuItemButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_31DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_31DF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x18(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x48(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3202[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_2;                            // 0x50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                Temp_string_Variable_3;                            // 0x60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x90(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x91(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3205[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Select_Default;                             // 0x98(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FString                                K2Node_Select_Default_1;                           // 0xA8(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0xB8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0xE0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xF8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x100(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x120(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_320A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x128(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x138(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x148(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x158(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x168(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_320F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x170(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x180(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x190(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x1A0(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast; // 0x1D0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


