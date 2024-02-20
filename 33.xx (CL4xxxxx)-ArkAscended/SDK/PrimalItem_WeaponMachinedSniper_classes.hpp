#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEE0 - 0xED0)
// BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
class UPrimalItem_WeaponMachinedSniper_C : public UPrimalItemWeaponGenericGun_C
{
public:
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinosNotAllowEquip;                                // 0xED0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponMachinedSniper_C* GetDefaultObj();

	bool BPPreventWeaponEquip(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


