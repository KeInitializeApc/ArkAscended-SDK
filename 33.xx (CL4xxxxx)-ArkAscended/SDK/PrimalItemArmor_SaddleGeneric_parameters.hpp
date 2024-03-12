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
	float                                        OutDurabilityPercentageValue;                      // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_225D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2260[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast; // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x20(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
struct UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2265[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x4(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
struct UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params
{
public:
	double                                       K2Node_VariableSet_SavedSaddleDurability_ImplicitCast; // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2286[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BPPostConstructAttachment
struct UPrimalItemArmor_SaddleGeneric_C_BPPostConstructAttachment_Params
{
public:
	int32                                        AttachmentIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_228A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UActorComponent*                       AttachedComponent;                                 // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x32 (0x32 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric
struct UPrimalItemArmor_SaddleGeneric_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        K2Node_Event_AttachmentIndex;                      // 0x4(0x4)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UActorComponent*                       K2Node_Event_AttachedComponent;                    // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_229A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x31(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


