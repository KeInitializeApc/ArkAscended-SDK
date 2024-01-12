#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEC0 - 0xEB0)
// BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
class UPrimalItem_WeaponMachinedSniper_C : public UPrimalItemWeaponGenericGun_C
{
public:
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinosNotAllowEquip;                                // 0xEB0(0x10)(Edit, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponMachinedSniper_C* GetDefaultObj();

	bool BPPreventWeaponEquip(class APrimalDinoCharacter** RiddenDino, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class APrimalDinoCharacter** CallFunc_GetRidingDino_ReturnValue, TSoftClassPtr<class APrimalDinoCharacter>* CallFunc_Array_Get_Item, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue, int32* CallFunc_Array_Length_ReturnValue);
};

}


