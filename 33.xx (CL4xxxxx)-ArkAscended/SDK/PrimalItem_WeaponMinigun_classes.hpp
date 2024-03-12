#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C
class UPrimalItem_WeaponMinigun_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponMinigun_C* GetDefaultObj();

	bool BPTributeItemDownloaded(TSoftClassPtr<class AShooterWeapon> WeapMinigunClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_ObjectIsChildOf_ReturnValue, TArray<class UObject*>* K2Node_MakeArray_Array, TArray<class FName>* K2Node_MakeArray_Array_1, TArray<class UClass*>* K2Node_MakeArray_Array_2, TArray<class FString>* K2Node_MakeArray_Array_3, TArray<float>* K2Node_MakeArray_Array_4, struct FCustomItemData* K2Node_MakeStruct_CustomItemData);
};

}


