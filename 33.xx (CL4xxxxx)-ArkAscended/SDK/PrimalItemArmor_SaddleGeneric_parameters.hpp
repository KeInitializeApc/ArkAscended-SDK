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
	float                                        OutDurabilityPercentageValue;                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x4(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x18(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_18E0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast; // 0x1C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x20(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
struct UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
struct UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params
{
public:
	double                                       K2Node_VariableSet_SavedSaddleDurability_ImplicitCast; // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
};

}
}


