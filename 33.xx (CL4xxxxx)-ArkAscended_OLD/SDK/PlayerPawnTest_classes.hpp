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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2950(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryImplantTPVSkeletalMesh;                   // 0x2958(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                ImplantTPVSkeletalMesh;                            // 0x2960(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot_FI;    // 0x2968(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot_FI;     // 0x2970(0x8)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso_FI;        // 0x2978(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot;       // 0x2980(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot;        // 0x2988(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightArm;        // 0x2990(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_Head;           // 0x2998(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_LeftArm;        // 0x29A0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso;           // 0x29A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UNS_DinoFootprint_BP_C*                NS_DinoFootprint_BP;                               // 0x29B0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandR_FPV;       // 0x29B8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandL_FPV;       // 0x29C0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_TorsoFPV;        // 0x29C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryMesh1P;                                   // 0x29D0(0x8)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x29D8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	class UPrimalInventoryComponent*             PrimalInventory1;                                  // 0x29E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensions;                                     // 0x29E8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_648[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV;                                // 0x29F0(0x10)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV;                                // 0x2A00(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	TArray<class UClass*>                        AlphaAscensionEngrams;                             // 0x2A10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsAb;                                   // 0x2A20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_64B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ab;                             // 0x2A28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ab;                             // 0x2A38(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  TestAscensionBossNameTag;                          // 0x2A48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ext;                            // 0x2A50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ext;                            // 0x2A60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsExt;                                  // 0x2A70(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_64C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CurrentDome;                                       // 0x2A78(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	class FString                                Current_Cruise_Missile_Message;                    // 0x2A80(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUps;                                  // 0x2A90(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsGenesis;                              // 0x2A94(0x4)(Edit, ConstParm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsGen2;                                 // 0x2A98(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x2A9C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bHasSetupMeshes;                                   // 0x2A9D(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_651[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2AA0(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x2AB0(0x10)(EditFixedSize, Transient, EditConst, SubobjectReference)
	int32                                        NumAscensionsScorched;                             // 0x2AC0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_653[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV;                        // 0x2AC8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_Ext;                    // 0x2AD8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_AB;                     // 0x2AE8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsCheatAscending;                                 // 0x2AF8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_658[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LastAscendIndex;                                   // 0x2AFC(0x4)(Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bLastAscendWasImmediate;                           // 0x2B00(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerPawnTest_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool* ReturnValue);
	void GetFXBloodColor(struct FLinearColor* ReturnValue);
	void DisableFluidInteraction();
	void EnableFluidInteraction();
	bool AssignAssetsFromVoiceCollection();
	void BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool* ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraPivotLocationInterpParams(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool* ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool* ReturnValue);
	double BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool* ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	bool DontCreateAnyMoreSpawnUIs();
	bool GetShooterHud(class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue);
	void SetGeneralizedUnlockedAchievementTags(const TArray<class FName>& GeneralizedUnlockedAchievementTags);
	bool HasEquipToHideImplant(bool ShouldHideImplant, bool Local_HideImplant, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue_1);
	void BPSetupFirstPersonHandsMesh();
	bool SetupMeshes(bool bForce, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_3, int32* CallFunc_Add_IntInt_ReturnValue_4, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_3, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue_4, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_4, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_4, int32* CallFunc_Add_IntInt_ReturnValue_5, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_5, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, int32 CallFunc_GetNumMaterials_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_5);
	bool BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int32* OutVal);
	bool SetNumChibiLevelUps(int32* NewNum);
	bool BPGetPlayerHexagonCount(int32* ReturnValue, int32* Ret_val, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue);
	bool BPSetPlayerHexagonCount(bool* ReturnValue, bool* Ret_val, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode);
	bool BPGetShowDebugAnimationComponents(bool* Temp_bool_Variable, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue_2, class USkeletalMeshComponent** K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed, double LocalDefaultTPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double* K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast);
	class USoundCue* ShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds);
	void TrySpawnMound();
	double TrySpawnMoundEx();
	class USkeletalMeshComponent* BPSetFirstPersonMasterPoseComponent();
	bool DefeatedBoss(class FName* BossTag, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue);
	bool ServerAscend(int32 DifficultyIndex, bool* bImmediateAscend, bool bSuppressAchievements, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* K2Node_SwitchName_CmpSuccess, class FString* K2Node_Select_Default, int32* CallFunc_Add_IntInt_ReturnValue, class AController** CallFunc_GetCharacterController_ReturnValue, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class APrimalWorldSettings** K2Node_DynamicCast_AsPrimal_World_Settings, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue, bool* CallFunc_GetServerSettingsFloat_ReturnValue_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue_2, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool CallFunc_IsLocalController_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast);
	void PlayerCommand(const class FString& TheCommand, class FString* ReturnValue, class FString* RetVal, class FString* CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	bool NetClientAscend(bool* bImmediateAscend);
	class USoundCue* ClientShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds);
	void NetClientPreLoadAcension();
	class FName BPSpawnAttackerDamageImpactFX(class APrimalCharacter** VictimChar);
	void AscensionCheck();
	double ExecuteUbergraph_PlayerPawnTest(int32* EntryPoint, bool* Temp_bool_Variable, int32 K2Node_CustomEvent_AscendIndex, bool K2Node_CustomEvent_bImmediateAscend, bool* K2Node_CustomEvent_bIsCheatAscend, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UShooterGameUserSettings* CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class UFinalCreditsUI_C* CallFunc_Create_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, struct FColor* CallFunc_Conv_LinearColorToColor_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool* Temp_bool_Variable_1, bool* Temp_bool_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class USceneComponent** K2Node_Select_Default, class USceneComponent** K2Node_Select_Default_1, double* CallFunc_SelectFloat_ReturnValue_1, class USceneComponent** K2Node_Select_Default_2, double* CallFunc_FMin_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Max_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, struct FLinearColor* K2Node_Select_Default_3, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


