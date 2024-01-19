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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2950(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryImplantTPVSkeletalMesh;                   // 0x2958(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                ImplantTPVSkeletalMesh;                            // 0x2960(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot_FI;    // 0x2968(0x8)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot_FI;     // 0x2970(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso_FI;        // 0x2978(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightFoot;       // 0x2980(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_LeftFoot;        // 0x2988(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_RightArm;        // 0x2990(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_Head;           // 0x2998(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1_LeftArm;        // 0x29A0(0x8)(Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_Torso;           // 0x29A8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UNS_DinoFootprint_BP_C*                NS_DinoFootprint_BP;                               // 0x29B0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandR_FPV;       // 0x29B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_HandL_FPV;       // 0x29C0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base_TorsoFPV;        // 0x29C8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	class USkeletalMeshComponent*                SecondaryMesh1P;                                   // 0x29D0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x29D8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	class UPrimalInventoryComponent*             PrimalInventory1;                                  // 0x29E0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensions;                                     // 0x29E8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_47FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV;                                // 0x29F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV;                                // 0x2A00(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class UClass*>                        AlphaAscensionEngrams;                             // 0x2A10(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensionsAb;                                   // 0x2A20(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_47FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ab;                             // 0x2A28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ab;                             // 0x2A38(0x10)(Edit, ConstParm, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  TestAscensionBossNameTag;                          // 0x2A48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    AscensionMeshesTPV_Ext;                            // 0x2A50(0x10)(BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionMeshesFPV_Ext;                            // 0x2A60(0x10)(ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensionsExt;                                  // 0x2A70(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4800[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CurrentDome;                                       // 0x2A78(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                Current_Cruise_Missile_Message;                    // 0x2A80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumChibiLevelUps;                                  // 0x2A90(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensionsGenesis;                              // 0x2A94(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensionsGen2;                                 // 0x2A98(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x2A9C(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bHasSetupMeshes;                                   // 0x2A9D(0x1)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4801[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2AA0(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x2AB0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        NumAscensionsScorched;                             // 0x2AC0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4802[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV;                        // 0x2AC8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_Ext;                    // 0x2AD8(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<TSoftObjectPtr<class USkeletalMesh>>  AscensionSkeletalMeshesTPV_AB;                     // 0x2AE8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsCheatAscending;                                 // 0x2AF8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4803[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LastAscendIndex;                                   // 0x2AFC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bLastAscendWasImmediate;                           // 0x2B00(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerPawnTest_C* GetDefaultObj();

	void BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue);
	void GetFXBloodColor(const struct FLinearColor& ReturnValue);
	void DisableFluidInteraction();
	void EnableFluidInteraction();
	bool AssignAssetsFromVoiceCollection();
	struct FRotator BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw);
	struct FPrimalCameraParams BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue);
	struct FPrimalCameraParams BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue);
	double BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue);
	bool DontCreateAnyMoreSpawnUIs();
	bool GetShooterHud(class AShooterHUD** ShooterHUD, class AController** CallFunc_GetController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue);
	void SetGeneralizedUnlockedAchievementTags(const TArray<class FName>& GeneralizedUnlockedAchievementTags);
	bool HasEquipToHideImplant(bool* ShouldHideImplant, bool* Local_HideImplant, int32 Temp_int_Loop_Counter_Variable, class UPrimalItem* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BPSetupFirstPersonHandsMesh();
	bool SetupMeshes(bool bForce, int32* CallFunc_GetNumMaterials_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item, int32* CallFunc_Subtract_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32* CallFunc_GetNumMaterials_ReturnValue_1, int32* CallFunc_Subtract_IntInt_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_2, int32* CallFunc_GetNumMaterials_ReturnValue_2, int32* CallFunc_Subtract_IntInt_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_2, class UWorld* CallFunc_K2_GetWorld_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_3, bool* CallFunc_BooleanOR_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32* CallFunc_GetNumMaterials_ReturnValue_3, int32* CallFunc_Subtract_IntInt_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, int32* CallFunc_GetNumMaterials_ReturnValue_4, int32* CallFunc_Subtract_IntInt_ReturnValue_4, int32* CallFunc_Array_Length_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, int32* CallFunc_GetNumMaterials_ReturnValue_5, int32* CallFunc_Subtract_IntInt_ReturnValue_5);
	bool BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int32* OutVal);
	void SetNumChibiLevelUps(int32* NewNum, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool BPGetPlayerHexagonCount(int32 ReturnValue, int32 Ret_val, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_SwitchEnum_CmpSuccess, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue);
	bool BPSetPlayerHexagonCount(bool ReturnValue, bool Ret_val, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	bool BPGetShowDebugAnimationComponents(bool Temp_bool_Variable, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, class USkeletalMeshComponent* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3);
	float BPGetOverrideCameraInterpSpeed(double* LocalDefaultTPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double* K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast);
	class USoundCue* ShowHUDNotification(struct FLinearColor* Color);
	void TrySpawnMound();
	double TrySpawnMoundEx(double Angle);
	void BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent** FirstPersonMasterPosecomponent);
	bool DefeatedBoss(class FName* BossTag, class AController** CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue);
	double ServerAscend(bool bImmediateAscend, bool bSuppressAchievements, bool bIsCheatAscend, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const class FString& K2Node_Select_Default, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue, bool* CallFunc_GetServerSettingsFloat_ReturnValue_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue_2, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue, class AController** CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool CallFunc_IsLocalController_ReturnValue);
	class FString PlayerCommand(const class FString& ReturnValue, class FString* RetVal, const class FString& CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	int32 NetClientAscend(bool bImmediateAscend, bool bIsCheatAscend);
	class USoundCue* ClientShowHUDNotification(struct FLinearColor* Color);
	void NetClientPreLoadAcension();
	class FName BPSpawnAttackerDamageImpactFX(class APrimalCharacter** VictimChar);
	void AscensionCheck();
	float ExecuteUbergraph_PlayerPawnTest(int32 EntryPoint, bool Temp_bool_Variable, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, class FName CallFunc_MakeLiteralName_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AController** CallFunc_GetController_ReturnValue, class UShooterGameUserSettings** CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class UFinalCreditsUI_C* CallFunc_Create_ReturnValue, struct FLinearColor* K2Node_CustomEvent_Color, double K2Node_CustomEvent_DisplayScale, class AController** CallFunc_GetController_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, bool CallFunc_IsShipping_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class USceneComponent* K2Node_Select_Default_1, double* CallFunc_SelectFloat_ReturnValue_1, class USceneComponent* K2Node_Select_Default_2, double CallFunc_FMin_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, class AController** CallFunc_GetController_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, float CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
};

}


