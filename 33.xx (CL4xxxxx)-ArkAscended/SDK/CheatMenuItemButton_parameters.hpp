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
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4129[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemDyeGeneric_C*               K2Node_DynamicCast_AsPrimal_Item_Dye_Generic;      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_412A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x48(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_412B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetItemShortName_ReturnValue;             // 0x58(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x1D4 (0x1D4 - 0x0)
// Function CheatMenuItemButton.CheatMenuItemButton_C.ExecuteUbergraph_CheatMenuItemButton
struct UCheatMenuItemButton_C_ExecuteUbergraph_CheatMenuItemButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_412C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_412D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x18(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_412E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x48(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_412F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_2;                            // 0x50(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	class FString                                Temp_string_Variable_3;                            // 0x60(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x91(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_4131[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Select_Default;                             // 0x98(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                K2Node_Select_Default_1;                           // 0xA8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0xB8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0xE0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x100(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x110(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x120(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4135[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x138(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x158(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x168(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4136[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x170(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x180(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x190(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x1A0(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast; // 0x1D0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
};

}
}


