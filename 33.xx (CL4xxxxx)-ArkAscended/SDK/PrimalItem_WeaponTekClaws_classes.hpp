#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C
class UPrimalItem_WeaponTekClaws_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTekClaws_C* GetDefaultObj();

	void BPAddedAttachments(class AWeapTekClaws_Base_C** K2Node_DynamicCast_AsWeap_Tek_Claws_Base, bool* K2Node_DynamicCast_bSuccess);
	bool CanRunCosmeticEvents(bool* CanRun, bool* RetCanRun, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue);
	void BlueprintUnequipped();
	class AController* BlueprintOwnerPosssessed();
	bool BlueprintEquipped(class AWeapTekClaws_Base_C** K2Node_DynamicCast_AsWeap_Tek_Claws_Base, bool* K2Node_DynamicCast_bSuccess);
};

}


