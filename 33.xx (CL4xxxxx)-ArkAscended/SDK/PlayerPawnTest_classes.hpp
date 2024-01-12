#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B1 (0x2B01 - 0x2950)
// BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
class APlayerPawnTest_C : public AShooterCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2950(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryImplantTPVSkeletalMesh;                   // 0x2958(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                ImplantTPVSkeletalMesh;                            // 0x2960(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot_FI;    // 0x2968(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot_FI;     // 0x2970(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso_FI;        // 0x2978(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot;       // 0x2980(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot;        // 0x2988(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightArm;        // 0x2990(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_Head;           // 0x2998(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_LeftArm;        // 0x29A0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso;           // 0x29A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
	class UNS_DinoFootprint_BP_C*                NS_DinoFootprint_BP;                               // 0x29B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandR_FPV;       // 0x29B8(0x8)(ConstParm, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandL_FPV;       // 0x29C0(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_TorsoFPV;        // 0x29C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryMesh1P;                                   // 0x29D0(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x29D8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	class UPrimalInventoryComponent*             PrimalInventory1;                                  // 0x29E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensions;                                     // 0x29E8(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F03[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV;                                // 0x29F0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV;                                // 0x2A00(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class UClass*>                        AlphaAscensionEngrams;                             // 0x2A10(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsAb;                                   // 0x2A20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F04[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ab;                             // 0x2A28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ab;                             // 0x2A38(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  TestAscensionBossNameTag;                          // 0x2A48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ext;                            // 0x2A50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ext;                            // 0x2A60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsExt;                                  // 0x2A70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F05[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CurrentDome;                                       // 0x2A78(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                Current_Cruise_Missile_Message;                    // 0x2A80(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUps;                                  // 0x2A90(0x4)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsGenesis;                              // 0x2A94(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsGen2;                                 // 0x2A98(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x2A9C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bHasSetupMeshes;                                   // 0x2A9D(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F0A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2AA0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x2AB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsScorched;                             // 0x2AC0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F0B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV;                        // 0x2AC8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_Ext;                    // 0x2AD8(0x10)(ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_AB;                     // 0x2AE8(0x10)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsCheatAscending;                                 // 0x2AF8(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3F0D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastAscendIndex;                                   // 0x2AFC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bLastAscendWasImmediate;                           // 0x2B00(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerPawnTest_C* GetDefaultObj();

	bool BPOverrideCameraDesiredPivotLocation();
	struct FLinearColor GetFXBloodColor();
	void DisableFluidInteraction();
	void EnableFluidInteraction();
	class UPDA_VoiceCollection_C* AssignAssetsFromVoiceCollection(bool* K2Node_DynamicCast_bSuccess);
	bool BPOverrideCameraDesiredPivotRotation(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	bool BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams);
	bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	void DontCreateAnyMoreSpawnUIs(class AShooterHUD** CallFunc_GetShooterHud_ShooterHud, bool* CallFunc_IsValid_ReturnValue);
	class AShooterPlayerController* GetShooterHud(class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue);
	TArray<class FName> SetGeneralizedUnlockedAchievementTags();
	bool HasEquipToHideImplant(bool* Local_HideImplant, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	void BPSetupFirstPersonHandsMesh();
	bool SetupMeshes(bool* bForce, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_1, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32* Temp_int_Variable_1, int32* CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32* Temp_int_Variable_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32* Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32* Temp_int_Variable_4, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_2, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_4, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_3, int32* Temp_int_Variable_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_4);
	bool BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int32 OutVal);
	bool SetNumChibiLevelUps(int32* NewNum);
	class UPrimalPlayerDataBP_Base_C* BPGetPlayerHexagonCount(int32 Ret_val, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	bool BPSetPlayerHexagonCount(int32 NewHexagonCount, bool Ret_val, bool* CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	bool BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents, TArray<class USkeletalMeshComponent*>* Comps, bool Temp_bool_Variable, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent** K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3);
	double BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double* K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast);
	class FString ShowHUDNotification(struct FLinearColor* Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay);
	void TrySpawnMound();
	double TrySpawnMoundEx(double Range);
	class USkeletalMeshComponent* BPSetFirstPersonMasterPoseComponent();
	class UPrimalPlayerDataBP_Base_C* DefeatedBoss(class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2);
	double ServerAscend(int32 DifficultyIndex, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_K2_TeleportTo_ReturnValue, int32* Temp_int_Variable, class FString* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_2, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, bool* K2Node_DynamicCast_bSuccess_5, bool* CallFunc_K2_TeleportTo_ReturnValue_1, class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_6);
	bool PlayerCommand(const class FString& TheCommand, const class FString& CallFunc_PlayerCommand_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	bool NetClientAscend();
	class FString ClientShowHUDNotification(struct FLinearColor* Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay);
	void NetClientPreLoadAcension();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX(class FName* SocketName);
	void AscensionCheck();
	double ExecuteUbergraph_PlayerPawnTest(bool Temp_bool_Variable, int32 K2Node_CustomEvent_AscendIndex, bool K2Node_CustomEvent_bImmediateAscend, bool K2Node_CustomEvent_bIsCheatAscend, const class FString& CallFunc_Conv_NameToString_ReturnValue, class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_Text, class AController** CallFunc_GetController_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, int32* Temp_int_Variable, bool Temp_bool_Variable_2, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class USceneComponent** K2Node_Select_Default, class USceneComponent** K2Node_Select_Default_1, class USceneComponent** K2Node_Select_Default_2, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, struct FLinearColor* K2Node_Select_Default_3, class AController** CallFunc_GetController_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


