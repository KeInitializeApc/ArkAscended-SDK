#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF10 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_Pliers.PrimalItem_Pliers_C
class UPrimalItem_Pliers_C : public UPrimalItem_GenericMisc_C
{
public:
	double                                       DurabilityLossForMaxRepair;                        // 0xEE0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        AllowRepairingForInventoryClasses;                 // 0xEE8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFoundClass;                                       // 0xEF8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RepairToPercent;                                   // 0xF00(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       RepairSpeedMult;                                   // 0xF08(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_Pliers_C* GetDefaultObj();

	double BPUsedOntoItem(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, float* CallFunc_ServerRepairItem_RepairSpeedMultiplier_ImplicitCast, float* CallFunc_ServerRepairItem_RepairPercentage_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
	class UClass* BPSupportUseOntoItem(bool* RetVal, bool* CallFunc_MeetRepairingRequirements_ReturnValue, bool* CallFunc_CanRepair_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, TSoftClassPtr<class UPrimalInventoryComponent> CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_IsBroken_ReturnValue, int32* CallFunc_IsChildOfClasses_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
};

}


