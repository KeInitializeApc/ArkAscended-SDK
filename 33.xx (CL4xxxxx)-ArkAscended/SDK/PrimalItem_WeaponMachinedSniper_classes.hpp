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
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinosNotAllowEquip;                                // 0xEB0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponMachinedSniper_C* GetDefaultObj();

	class APrimalDinoCharacter* BPPreventWeaponEquip(bool ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


