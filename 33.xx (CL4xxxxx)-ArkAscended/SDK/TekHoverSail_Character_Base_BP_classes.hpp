#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3538 - 0x34F8)
// BlueprintGeneratedClass TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C
class ATekHoverSail_Character_Base_BP_C : public ADino_Character_BP_C
{
public:
	bool                                         Destroyed_by_item;                                 // 0x34F8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_298B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CurrentFuelUnitPercent;                            // 0x3500(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       SkiffDeathDropInventoryLifetime;                   // 0x3508(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Has_set_item_ref;                                  // 0x3510(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_298C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalItem*                           Spawned_item_ref;                                  // 0x3518(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       PassedMinusin_follow_distance_to_stop_within;      // 0x3520(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APlayerController*                     Spawning_character;                                // 0x3528(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                Hoversail_Class;                                   // 0x3530(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ATekHoverSail_Character_Base_BP_C* GetDefaultObj();

	bool Destroy_itself(double CallFunc_Conv_FloatToDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast);
};

}


