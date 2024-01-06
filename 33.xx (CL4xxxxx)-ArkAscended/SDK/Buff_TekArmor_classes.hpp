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
	uint8                                        Pad_274A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xB98(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_274B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA0(0x8)(ConstParm, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBA8(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2751[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBC4(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2752[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBE8(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2755[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF0(0x10)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC00(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC08(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC10(0x1)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_275A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC20(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC28(0x8)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC30(0x8)(ConstParm, BlueprintVisible, Parm, Transient, EditConst, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC38(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC50(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC51(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC52(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC53(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC54(0x1)(OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2762[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC58(0x10)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC68(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC70(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC71(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2763[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC78(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC88(0x10)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	class USkeletalMeshComponent* GetWeaponMesh();
	bool HideBoostIcon(bool* ShouldSet);
	void SetJetpackOffset(struct FTransform* AddTransform);
	bool HasRequiredEngrams(bool OutHasEngrams, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_HasEngram_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2);
	bool IsTekBuffDisabled(bool bIsDisabled, bool bRetVal, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool* CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool* CallFunc_Not_PreBool_ReturnValue_2, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, TArray<class FName>* CallFunc_BPPreventTekArmorBuffs_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, class AMissionType** CallFunc_GetActiveMission_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue_1);
	bool Check_genesis_restrictions_for_player(bool* Is_restricted, bool* Ret_val, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1);
	bool BPActivated(class AActor* ForInstigator, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	bool Is_Restricted_Because_Of_Genesis_Map(bool Restricted, bool* Ret_val);
	bool Get_Is_Player_in_SealedSpace(bool* Result, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool IsAbilityValid(bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	double IsPlayerInWaterVolume(bool* Result, double* WaterVolumeTopZ, bool* CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetActorBounds_BoxExtent, double CallFunc_BreakVector_Z, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_BreakVector_Z_1, double CallFunc_SelectFloat_ReturnValue);
	float SpawnFX(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform, double VolumeMultiplier, double* PitchMultiplier, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, class UParticleSystemComponent** CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast);
	bool Should_Damage_Actor(bool* Result, bool RetVal, bool CallFunc_IsServer_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	float ResetPlayerFOV();
	bool SetTekIgnoreLookInput();
	bool SetTekIgnoreMoveInput();
	void AllowPostProcessEffect(bool* ReturnValue);
	bool BPDeactivated(class AActor* ForInstigator);
	void ResetTargetFOV();
	double IsWarping_FOV(bool* Result, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool Get_DefaultTekBuff(class ABuff_TekArmor_C** Ref, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool GetDefaultPlayer(class APrimalCharacter** Ref, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool Client_Consume_Element_After_Time(int32 ElementCost);
	double BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, class UPrimalItemArmor_Base_Tek_C** CallFunc_GetRelatedTekArmorRef_tekArmorRef, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, double* K2Node_VariableSet_warpFOV_start_ImplicitCast);
	bool IsPlayerGrounded(bool* Result);
	bool Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager** Ref);
	float UpdatePlayerFOV(bool* WarpIn, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	class AShooterCharacter* Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement);
	bool Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller);
	bool GetRef_OwningPlayer(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	void AreAnyTekAbilitiesActive(bool* Result, bool RetVal, bool CallFunc_IsTekArmorUsingAbility__result);
	bool IsTekArmorUsingAbility_(bool* Result, bool RetVal, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	class FString DisplayTekArmorMessage(const class FString& Message, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, float* CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast, float* CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast);
	void SetCastedArmorPieceRef();
	bool GetRelatedTekArmorRef();
	bool CanUseTekAbility(bool bNotifyIfOutOfElement, bool bRetVal, bool* CallFunc_HasRequiredEngrams_HasEngrams, bool* CallFunc_Not_PreBool_ReturnValue, class ABiomeZoneVolume* CallFunc_GetMyBiomeZoneVolume_ReturnValue, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_ClassIsChildOf_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_4, bool* CallFunc_BooleanAND_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_6);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void Equipped_SetToMaxElement(enum class EPrimalEquipmentType* ItemSlot);
	class USoundBase* Multi_SpawnFX(class UParticleSystem* ParticleTemplate, struct FTransform* Transform, double SoundVolume, double SoundPitch);
	int32 Equipped_TryToDecreaseElement(enum class EPrimalEquipmentType* ItemSlot);
	void CheckForArmorRef();
	void Server_SetTekAbilityActive(bool NewActive);
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	bool ExecuteUbergraph_Buff_TekArmor(int32 EntryPoint, double* K2Node_CustomEvent_soundPitch, float* CallFunc_TimeSeconds_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsCooldownComplete_ReturnValue, double CallFunc_FloatToDouble_value_ImplicitCast, float CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast);
};

}


