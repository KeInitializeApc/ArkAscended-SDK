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
	struct FVector                               IncubatorDisplay3DScale;                           // 0xEB0(0x18)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               IncubatorLocationOffset;                           // 0xEC8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Egg_C* GetDefaultObj();

	bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* InvComp, class AShooterPlayerController** ByPC, bool* ReturnValue, bool* bEggAllowed);
	class FString BPGetCustomInventoryWidgetText(class FString* ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue);
};

}


