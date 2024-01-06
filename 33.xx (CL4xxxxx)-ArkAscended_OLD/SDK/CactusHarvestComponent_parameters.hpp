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

// 0x60 (0x60 - 0x0)
// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
struct UCactusHarvestComponent_C_BPCustomHarvestResource_Params
{
public:
	class UPrimalInventoryComponent*             InvComp;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumToGive;                                         // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E02[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DamageTypeClass;                                   // 0x10(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class AActor*                                ToActor;                                           // 0x18(0x8)(Edit, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E04[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ACamelsaurus_Character_Base_BP_C*      K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP; // 0x28(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2E06[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x38(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_2E07[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_AddWater_NewWaterAmount;                  // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_AddStatusValueModifier_Speed_ImplicitCast; // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_AddStatusValueModifier_Amount_ImplicitCast; // 0x5C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)
};

}
}


