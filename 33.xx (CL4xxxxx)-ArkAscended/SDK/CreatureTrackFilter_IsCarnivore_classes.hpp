#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x70 - 0x59)
// BlueprintGeneratedClass CreatureTrackFilter_IsCarnivore.CreatureTrackFilter_IsCarnivore_C
class UCreatureTrackFilter_IsCarnivore_C : public UCreatureTrackFilter_ParentClass_C
{
public:
	uint8                                        Pad_545A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> ForceCarnivoresFilterDinoClasses;                  // 0x60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCreatureTrackFilter_IsCarnivore_C* GetDefaultObj();

	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool Temp_bool_True_if_break_was_hit_Variable, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item);
};

}


