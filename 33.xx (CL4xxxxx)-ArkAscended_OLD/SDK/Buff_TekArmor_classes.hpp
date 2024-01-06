#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x117 (0xC98 - 0xB81)
// BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
{
public:
	uint8                                        Pad_8DF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB90(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xB98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8E3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA0(0x8)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBA8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBB8(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC0(0x1)(Edit, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC1(0x1)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8E7[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBC4(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8E8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBD8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBE8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8EB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC00(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC08(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC10(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8EE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC18(0x8)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC20(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC28(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Transient, EditConst, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC40(0x8)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC48(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC51(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC52(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC53(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC54(0x1)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8F1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC58(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC68(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC70(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC71(0x1)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_8F3[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC88(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	class USkeletalMeshComponent* GetWeaponMesh();
	void HideBoostIcon(bool ShouldSet, bool* WithValue);
	void SetJetpackOffset(const struct FTransform& AddTransform);
	bool HasRequiredEngrams(bool OutHasEngrams, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasEngram_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2);
	bool IsTekBuffDisabled(bool* bIsDisabled, bool bRetVal, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, int32* CallFunc_Add_IntInt_ReturnValue_1, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, TArray<class APrimalBuff*>* CallFunc_GetAllBuffs_AllBuffs, TArray<class FName>* CallFunc_BPPreventTekArmorBuffs_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_2, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character_1, class AMissionType* CallFunc_GetActiveMission_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	bool Check_genesis_restrictions_for_player(bool* Is_restricted, bool* Ret_val, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool CallFunc_Not_PreBool_ReturnValue_1);
	bool BPActivated(class AActor* ForInstigator, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode);
	bool Is_Restricted_Because_Of_Genesis_Map(bool* Ret_val);
	bool Get_Is_Player_in_SealedSpace(bool* Result, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool IsAbilityValid(bool CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	double IsPlayerInWaterVolume(bool* Result, double* WaterVolumeTopZ, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue);
	float SpawnFX(struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent** CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast);
	bool Should_Damage_Actor(bool* Result, bool* RetVal, bool CallFunc_IsServer_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	float ResetPlayerFOV();
	bool SetTekIgnoreLookInput();
	bool SetTekIgnoreMoveInput();
	void AllowPostProcessEffect(bool* ReturnValue);
	void BPDeactivated(class AActor* ForInstigator, bool CallFunc_IsLocallyControlled_ReturnValue);
	void ResetTargetFOV();
	double IsWarping_FOV(bool* Result, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool Get_DefaultTekBuff(class ABuff_TekArmor_C** Ref);
	bool GetDefaultPlayer(class APrimalCharacter** Ref, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	double Client_Consume_Element_After_Time(int32 ElementCost, double CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	double BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, double* K2Node_VariableSet_warpFOV_start_ImplicitCast);
	bool IsPlayerGrounded(bool* Result, class UCharacterMovementComponent** CallFunc_Get_Ref_Owning_PlayerMovement_movement);
	bool Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager** Ref);
	float UpdatePlayerFOV(bool WarpIn, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double* CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	class AShooterCharacter* Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement);
	bool Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller);
	bool GetRef_OwningPlayer(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character);
	bool AreAnyTekAbilitiesActive(bool* Result, bool* RetVal);
	bool IsTekArmorUsingAbility_(bool* Result, bool* RetVal, uint8* CallFunc_GetValidValue_ReturnValue, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	class FString DisplayTekArmorMessage(class FString* Message, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast, float* CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast);
	void SetCastedArmorPieceRef();
	bool GetRelatedTekArmorRef();
	bool CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult, bool bRetVal, bool* CallFunc_HasRequiredEngrams_HasEngrams, bool CallFunc_Not_PreBool_ReturnValue, class ABiomeZoneVolume* CallFunc_GetMyBiomeZoneVolume_ReturnValue, bool* K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_4, bool* CallFunc_BooleanAND_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_6);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void Equipped_SetToMaxElement(enum class EPrimalEquipmentType* ItemSlot);
	double Multi_SpawnFX(class UParticleSystem* ParticleTemplate, struct FTransform* Transform, double SoundVolume);
	int32 Equipped_TryToDecreaseElement(enum class EPrimalEquipmentType* ItemSlot);
	void CheckForArmorRef();
	void Server_SetTekAbilityActive(bool NewActive);
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	bool ExecuteUbergraph_Buff_TekArmor(int32* EntryPoint, double* K2Node_CustomEvent_soundPitch, float CallFunc_TimeSeconds_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsCooldownComplete_ReturnValue, double* CallFunc_FloatToDouble_value_ImplicitCast, float* CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast);
};

}


