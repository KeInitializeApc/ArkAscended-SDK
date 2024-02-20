#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF00 - 0xED0)
// BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
{
public:
	struct FVector                               IncubatorDisplay3DScale;                           // 0xED0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, SubobjectReference)
	struct FVector                               IncubatorLocationOffset;                           // 0xEE8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Egg_C* GetDefaultObj();

	bool BPAllowRemoteAddToInventory(class AShooterPlayerController** ByPC, bool bRequestedByPlayer, bool ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, bool CallFunc_IsEggItemAllowed_IsAllowed);
	class FString BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool* CallFunc_IsValid_ReturnValue, TScriptInterface<class IEggIncubatorInterface_C> K2Node_DynamicCast_AsEgg_Incubator_Interface, int32 CallFunc_GetItemDisplaySlot_InSlot, bool CallFunc_GetItemDisplaySlot_SlotFound, bool* CallFunc_IsValid_ReturnValue_1);
};

}


