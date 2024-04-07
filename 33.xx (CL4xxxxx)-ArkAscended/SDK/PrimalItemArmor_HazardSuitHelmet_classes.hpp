#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF18 - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C
class UPrimalItemArmor_HazardSuitHelmet_C : public UPrimalItemArmor_BaseHelmet_C
{
public:
	TSoftClassPtr<class APrimalBuff>             BuffWhileEquipped;                                 // 0xEE8(0x30)(Edit, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_HazardSuitHelmet_C* GetDefaultObj();

	class APrimalBuff* BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	void EquippedBlueprintTick(float* DeltaSeconds, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	void SetForceGainOxygen(bool* Enabled, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool BlueprintUnequipped(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


