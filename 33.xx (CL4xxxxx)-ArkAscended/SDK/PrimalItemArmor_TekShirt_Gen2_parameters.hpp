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

// 0x9 (0x9 - 0x0)
// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
struct UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
struct UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1A1 (0x1A1 - 0x0)
// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
struct UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params
{
public:
	bool                                         IsUnequip;                                         // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_54B9[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FTransform                            CallFunc_SelectTransform_ReturnValue;              // 0x70(0x60)(ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xD0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0xD8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_54BA[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CallFunc_SelectTransform_ReturnValue_1;            // 0xF0(0x60)(ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x158(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x160(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_54BB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItemArmor_TekShirt_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt;  // 0x168(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x170(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_54BC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x178(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x188(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	uint8                                        Pad_54BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue_1;                    // 0x190(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor_1;             // 0x198(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1A0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
};

}
}


