#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B1 (0x2B11 - 0x2960)
// BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
class APlayerPawnTest_C : public AShooterCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2960(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryImplantTPVSkeletalMesh;                   // 0x2968(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class USkeletalMeshComponent*                ImplantTPVSkeletalMesh;                            // 0x2970(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot_FI;    // 0x2978(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot_FI;     // 0x2980(0x8)(Edit, BlueprintVisible, Parm, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso_FI;        // 0x2988(0x8)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot;       // 0x2990(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot;        // 0x2998(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightArm;        // 0x29A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_Head;           // 0x29A8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_LeftArm;        // 0x29B0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso;           // 0x29B8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UNS_DinoFootprint_BP_C*                NS_DinoFootprint_BP;                               // 0x29C0(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandR_FPV;       // 0x29C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandL_FPV;       // 0x29D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_TorsoFPV;        // 0x29D8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryMesh1P;                                   // 0x29E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x29E8(0x8)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	class UPrimalInventoryComponent*             PrimalInventory1;                                  // 0x29F0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        NumAscensions;                                     // 0x29F8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_32B5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV;                                // 0x2A00(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV;                                // 0x2A10(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UClass*>                        AlphaAscensionEngrams;                             // 0x2A20(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	int32                                        NumAscensionsAb;                                   // 0x2A30(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, SubobjectReference)
	uint8                                        Pad_32B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ab;                             // 0x2A38(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ab;                             // 0x2A48(0x10)(Edit, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  TestAscensionBossNameTag;                          // 0x2A58(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ext;                            // 0x2A60(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ext;                            // 0x2A70(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        NumAscensionsExt;                                  // 0x2A80(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, SubobjectReference)
	uint8                                        Pad_32B9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CurrentDome;                                       // 0x2A88(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                Current_Cruise_Missile_Message;                    // 0x2A90(0x10)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        NumChibiLevelUps;                                  // 0x2AA0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        NumAscensionsGenesis;                              // 0x2AA4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        NumAscensionsGen2;                                 // 0x2AA8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x2AAC(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         bHasSetupMeshes;                                   // 0x2AAD(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_32BA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2AB0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x2AC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	int32                                        NumAscensionsScorched;                             // 0x2AD0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_32BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV;                        // 0x2AD8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_Ext;                    // 0x2AE8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_AB;                     // 0x2AF8(0x10)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         bIsCheatAscending;                                 // 0x2B08(0x1)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_32BD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastAscendIndex;                                   // 0x2B0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         bLastAscendWasImmediate;                           // 0x2B10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerPawnTest_C* GetDefaultObj();

	struct FVector BPOverrideCameraDesiredPivotLocation(bool ReturnValue);
	void GetFXBloodColor(const struct FLinearColor& ReturnValue);
	void DisableFluidInteraction();
	void EnableFluidInteraction();
	bool AssignAssetsFromVoiceCollection(class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection);
	struct FRotator BPOverrideCameraDesiredPivotRotation(bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue);
	struct FVector BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	struct FPrimalCameraInterpParams BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	struct FPrimalCameraInterpParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue);
	float BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, bool ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast);
	void DontCreateAnyMoreSpawnUIs(class AShooterHUD** CallFunc_GetShooterHud_ShooterHud, bool* CallFunc_IsValid_ReturnValue);
	bool GetShooterHud(class AShooterHUD* ShooterHUD, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue);
	TArray<class FName> SetGeneralizedUnlockedAchievementTags();
	bool HasEquipToHideImplant(bool* Local_HideImplant, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	void BPSetupFirstPersonHandsMesh();
	bool SetupMeshes(bool bForce, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_5, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_4);
	bool BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int32* OutVal);
	void SetNumChibiLevelUps(int32 NewNum, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool BPGetPlayerHexagonCount(int32 ReturnValue, int32 Ret_val, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode);
	bool BPSetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue, bool Ret_val, bool* CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode);
	TArray<class USkeletalMeshComponent*> BPGetShowDebugAnimationComponents(bool* Temp_bool_Variable, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent** K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3);
	double BPGetOverrideCameraInterpSpeed(bool* CallFunc_HasBuff_ReturnValue, double K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast);
	double ShowHUDNotification(class FString* Text, struct FLinearColor* Color, double LifetimeSeconds, class USoundCue** SoundToPlay);
	void TrySpawnMound();
	double TrySpawnMoundEx(double Angle);
	void BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* FirstPersonMasterPosecomponent);
	bool DefeatedBoss(class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AGameModeBase* CallFunc_GetGameMode_ReturnValue);
	double ServerAscend(int32* DifficultyIndex, bool bImmediateAscend, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_K2_TeleportTo_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class FString* K2Node_Select_Default, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue, bool CallFunc_GetServerSettingsFloat_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue_2, bool* CallFunc_K2_TeleportTo_ReturnValue_1, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1);
	bool PlayerCommand(class FString* TheCommand, const class FString& ReturnValue, const class FString& CallFunc_PlayerCommand_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	bool NetClientAscend(bool bImmediateAscend);
	double ClientShowHUDNotification(class FString* Text, struct FLinearColor* Color, double LifetimeSeconds, class USoundCue** SoundToPlay);
	void NetClientPreLoadAcension();
	class APrimalCharacter* BPSpawnAttackerDamageImpactFX(class FName* SocketName);
	void AscensionCheck();
	float ExecuteUbergraph_PlayerPawnTest(bool* Temp_bool_Variable, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, bool K2Node_CustomEvent_bIsCheatAscend, const class FString& CallFunc_Conv_NameToString_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class FString* K2Node_CustomEvent_Text, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable_1, bool* Temp_bool_Variable_2, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class USceneComponent** K2Node_Select_Default, class USceneComponent** K2Node_Select_Default_1, class USceneComponent** K2Node_Select_Default_2, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, struct FLinearColor* K2Node_Select_Default_3, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1);
};

}


