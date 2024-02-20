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
	class UPrimalInventoryComponent*             InvComp;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumToGive;                                         // 0x8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_36A5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DamageTypeClass;                                   // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                ToActor;                                           // 0x18(0x8)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_36A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ACamelsaurus_Character_Base_BP_C*      K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP; // 0x28(0x8)(Edit, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_36AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_AddWater_NewWaterAmount;                  // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x50(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_AddStatusValueModifier_Speed_ImplicitCast; // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_AddStatusValueModifier_Amount_ImplicitCast; // 0x5C(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


