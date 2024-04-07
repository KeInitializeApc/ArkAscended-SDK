#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x10F0 - 0x1060)
// BlueprintGeneratedClass PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C
class UPrimalItem_Spawner_HoverSkiff_C : public UPrimalItem_DinoSpawner_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1060(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        NumSpawnAttempts;                                  // 0x1068(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_352A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CraftingShooterChar;                               // 0x1070(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_352B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            SpawnTransform;                                    // 0x1080(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SkiffSpawnString;                                  // 0x10E0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_Spawner_HoverSkiff_C* GetDefaultObj();

	bool BPAllowCrafting(class AShooterPlayerController** ForPC, const class FString& RetString, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FTransform& CallFunc_GetValidSpawnTransform_SpawnTransform, bool CallFunc_GetValidSpawnTransform_SpawnValid, class UPrimalItem* CallFunc_Array_Get_Item);
	bool GetValidSpawnTransform(struct FTransform* SpawnTransform, bool SpawnValid, bool RetValid, const struct FTransform& RetTransform, bool Temp_bool_Variable, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_VTraceSphereBP_HitOut, bool CallFunc_VTraceSphereBP_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActors_ReturnValue, class APhysicsVolume** CallFunc_GetPhysicsVolumeAtLocation_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float* CallFunc_MakeRotator_Yaw_ImplicitCast, float* CallFunc_MakeRotator_Yaw_ImplicitCast_1);
	bool BPCrafted(class AActor* RetActor);
	void SpawnCraftedSkiff();
	bool ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff(int32* EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32* CallFunc_MakeLiteralInt_ReturnValue, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** CallFunc_SpawnCustomDino_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


