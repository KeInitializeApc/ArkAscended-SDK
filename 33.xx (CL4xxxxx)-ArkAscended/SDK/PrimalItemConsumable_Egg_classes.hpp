#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xEE0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
{
public:
	struct FVector                               IncubatorDisplay3DScale;                           // 0xEB0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               IncubatorLocationOffset;                           // 0xEC8(0x18)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Egg_C* GetDefaultObj();

	bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent** InvComp, class AShooterPlayerController* ByPC, bool bEggAllowed, class AActor** CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool* CallFunc_IsEggItemAllowed_IsAllowed);
	class FString BPGetCustomInventoryWidgetText(class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C>* K2Node_DynamicCast_AsEgg_Incubator_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


