#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C
class UPrimalItem_WeaponTekSword_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTekSword_C* GetDefaultObj();

	void BlueprintUnequipped();
	class AController* BlueprintOwnerPosssessed();
	class APrimalBuff* InitBuff(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	bool BlueprintEquipped();
};

}


