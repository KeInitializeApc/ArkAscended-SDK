#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF1 (0x1151 - 0x1060)
// BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C
class UPrimalItem_Spawner_HoverSail_Parent_C : public UPrimalItem_DinoSpawner_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1060(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        NumSpawnAttempts;                                  // 0x1068(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5934[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CraftingShooterChar;                               // 0x1070(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5935[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            SpawnTransform;                                    // 0x1080(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SkiffSpawnString;                                  // 0x10E0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class APrimalDinoCharacter*                  Spawned_dino;                                      // 0x10F0(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       Allowed_distance_to_despawn_hoversail;             // 0x10F8(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Should_have_a_spawned_dino;                        // 0x1100(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5937[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Lost_reference_string;                             // 0x1108(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Could_find_a_valid_location_next_to_target;        // 0x1118(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5938[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Usetofollowstring;                                 // 0x1120(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                Use_to_deploy_string;                              // 0x1130(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                Use_to_put_away_string;                            // 0x1140(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Show_appropriate_item_description_based_on_state_Minus_not_working_on_dedi; // 0x1150(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_Spawner_HoverSail_Parent_C* GetDefaultObj();

	bool BPGetItemDescription(class AShooterPlayerController** ForPC, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	bool Notify_hoversail_destroyed(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	bool Delaymount(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue);
	double BPCanUse(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_2, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void SpawnCraftedSkiff();
	struct FRotator ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent(int32* EntryPoint, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, int32* CallFunc_MakeLiteralInt_ReturnValue, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** CallFunc_SpawnCustomDino_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


