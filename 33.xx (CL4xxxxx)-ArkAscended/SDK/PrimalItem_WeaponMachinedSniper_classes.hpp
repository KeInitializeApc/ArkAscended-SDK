#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEF0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
class UPrimalItem_WeaponMachinedSniper_C : public UPrimalItemWeaponGenericGun_C
{
public:
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinosNotAllowEquip;                                // 0xEE0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponMachinedSniper_C* GetDefaultObj();

	bool BPPreventWeaponEquip(class APrimalDinoCharacter* RiddenDino, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APrimalDinoCharacter* CallFunc_GetRidingDino_ReturnValue, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue);
};

}


