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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2950(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryImplantTPVSkeletalMesh;                   // 0x2958(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                ImplantTPVSkeletalMesh;                            // 0x2960(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot_FI;    // 0x2968(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot_FI;     // 0x2970(0x8)(Net, OutParm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso_FI;        // 0x2978(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot;       // 0x2980(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot;        // 0x2988(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightArm;        // 0x2990(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_Head;           // 0x2998(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_LeftArm;        // 0x29A0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso;           // 0x29A8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UNS_DinoFootprint_BP_C*                NS_DinoFootprint_BP;                               // 0x29B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, InstancedReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandR_FPV;       // 0x29B8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandL_FPV;       // 0x29C0(0x8)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_TorsoFPV;        // 0x29C8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryMesh1P;                                   // 0x29D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x29D8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	class UPrimalInventoryComponent*             PrimalInventory1;                                  // 0x29E0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, Config, EditConst, SubobjectReference)
	int32                                        NumAscensions;                                     // 0x29E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3148[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV;                                // 0x29F0(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV;                                // 0x2A00(0x10)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UClass*>                        AlphaAscensionEngrams;                             // 0x2A10(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	int32                                        NumAscensionsAb;                                   // 0x2A20(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_314A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ab;                             // 0x2A28(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ab;                             // 0x2A38(0x10)(ConstParm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FName                                  TestAscensionBossNameTag;                          // 0x2A48(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ext;                            // 0x2A50(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ext;                            // 0x2A60(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumAscensionsExt;                                  // 0x2A70(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_314D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CurrentDome;                                       // 0x2A78(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                Current_Cruise_Missile_Message;                    // 0x2A80(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUps;                                  // 0x2A90(0x4)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	int32                                        NumAscensionsGenesis;                              // 0x2A94(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumAscensionsGen2;                                 // 0x2A98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x2A9C(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         bHasSetupMeshes;                                   // 0x2A9D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_314F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2AA0(0x10)(Edit, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x2AB0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	int32                                        NumAscensionsScorched;                             // 0x2AC0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3152[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV;                        // 0x2AC8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_Ext;                    // 0x2AD8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_AB;                     // 0x2AE8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bIsCheatAscending;                                 // 0x2AF8(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3155[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastAscendIndex;                                   // 0x2AFC(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bLastAscendWasImmediate;                           // 0x2B00(0x1)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerPawnTest_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(struct FVector* CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation, bool* ReturnValue);
	void GetFXBloodColor(struct FLinearColor* ReturnValue);
	void DisableFluidInteraction();
	void EnableFluidInteraction();
	bool AssignAssetsFromVoiceCollection(class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection);
	void BPOverrideCameraDesiredPivotRotation(struct FRotator* CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation, bool* ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraDesiredPivotOffset(struct FVector* DesiredCameraOffset, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraPivotLocationInterpParams(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastInterpParamsX, struct FPrimalCameraInterpParams* LastInterpParamsY, struct FPrimalCameraInterpParams* LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool* ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	bool DontCreateAnyMoreSpawnUIs();
	bool GetShooterHud(class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue);
	TArray<class FName> SetGeneralizedUnlockedAchievementTags();
	bool HasEquipToHideImplant(bool ShouldHideImplant, bool Local_HideImplant, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	void BPSetupFirstPersonHandsMesh();
	bool SetupMeshes(bool bForce, int32 CallFunc_GetNumMaterials_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32* CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32* CallFunc_Subtract_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_3, int32* CallFunc_Add_IntInt_ReturnValue_4, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_3, int32* CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue_4, int32* CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_4, int32* CallFunc_Add_IntInt_ReturnValue_5, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_5, int32 CallFunc_GetNumMaterials_ReturnValue_5, int32* CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_5);
	bool BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int32* OutVal);
	bool SetNumChibiLevelUps(int32 NewNum);
	bool BPGetPlayerHexagonCount(int32* ReturnValue, int32* Ret_val, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	bool BPSetPlayerHexagonCount(bool* ReturnValue, bool* Ret_val, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	class USkeletalMeshComponent* BPGetShowDebugAnimationComponents(bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
	void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed, double LocalDefaultTPVOffsetInterpSpeed, bool* CallFunc_HasBuff_ReturnValue, double K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast);
	class USoundCue* ShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds);
	void TrySpawnMound();
	double TrySpawnMoundEx(double Angle);
	class USkeletalMeshComponent* BPSetFirstPersonMasterPoseComponent();
	bool DefeatedBoss(class FName BossTag, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AGameModeBase** CallFunc_GetGameMode_ReturnValue);
	bool ServerAscend(int32 DifficultyIndex, bool bImmediateAscend, int32 Temp_int_Array_Index_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue, bool CallFunc_GetServerSettingsFloat_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast);
	bool PlayerCommand(const class FString& TheCommand, class FString* ReturnValue, const class FString& RetVal, class FString* CallFunc_PlayerCommand_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	bool NetClientAscend(bool bImmediateAscend);
	class USoundCue* ClientShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds);
	void NetClientPreLoadAcension();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX();
	void AscensionCheck();
	double ExecuteUbergraph_PlayerPawnTest(int32 EntryPoint, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, bool* K2Node_CustomEvent_bIsCheatAscend, class FName CallFunc_MakeLiteralName_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class UShooterGameUserSettings* CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class FString* K2Node_CustomEvent_Text, const struct FLinearColor& K2Node_CustomEvent_Color, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_FMin_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


