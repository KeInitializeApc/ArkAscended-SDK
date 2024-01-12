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

// 0x28 (0x28 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BPOverrideEquippedDurabilityPercentage
struct UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params
{
public:
	float                                        OutDurabilityPercentageValue;                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_354E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x10(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x18(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_354F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast; // 0x1C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
struct UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3552[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
struct UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params
{
public:
	double                                       K2Node_VariableSet_SavedSaddleDurability_ImplicitCast; // 0x0(0x8)(BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3554[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


