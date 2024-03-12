#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x57 - 0x53)
// BlueprintGeneratedClass CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C
class UCharacterTrackFilter_SearchName_C : public UCharacterTrackFilter_Base_C
{
public:
	bool                                         Allow_search_to_query_tribe_name;                  // 0x53(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Allow_search_to_query_imprinter_name;              // 0x54(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Allow_search_to_query_owning_player_name;          // 0x55(0x1)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Allow_search_to_query_gender;                      // 0x56(0x1)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCharacterTrackFilter_SearchName_C* GetDefaultObj();

	bool Is_Found_Substring(class FString* InputPin, const class FString& SubString, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, class ADino_Character_BP_C** K2Node_DynamicCast_AsDino_Character_BP, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
};

}


