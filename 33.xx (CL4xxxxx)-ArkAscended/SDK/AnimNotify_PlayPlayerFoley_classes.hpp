#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C
class UAnimNotify_PlayPlayerFoley_C : public UAnimNotify
{
public:
	enum class Enum_FoleyCollection              FoleySoundToPlay;                                  // 0x40(0x1)(Edit, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_19C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       Volume_Multiplier;                                 // 0x48(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerFoley_C* GetDefaultObj();

	void SelectSound(class UPDA_FoleyCollection_C** FolleyColletion, class USoundBase** FoleySoundReferance, enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase** K2Node_Select_Default);
	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class UAudioComponent* Received_Notify(class UAnimSequenceBase* Animation, class USoundBase** FoleySound, class UPDA_FoleyCollection_C** Default_Collection, class AActor** CallFunc_GetOwner_ReturnValue, class USoundBase** CallFunc_SelectSound_FoleySoundReferance, bool* K2Node_DynamicCast_bSuccess, class UPrimalInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmorGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Generic, bool* K2Node_DynamicCast_bSuccess_1, class USoundBase** CallFunc_SelectSound_FoleySoundReferance_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
};

}


