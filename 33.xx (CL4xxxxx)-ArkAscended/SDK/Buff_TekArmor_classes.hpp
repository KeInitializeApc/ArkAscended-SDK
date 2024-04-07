#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x117 (0xCA0 - 0xB89)
// BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
{
public:
	uint8                                        Pad_32BF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB98(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xBA0(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBB0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC9(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBCC(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBE0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBF0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_32C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC08(0x8)(Edit, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC10(0x8)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC18(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC20(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC28(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC40(0x8)(ConstParm, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC50(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC59(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC5A(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC5B(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC5C(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC60(0x10)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC70(0x8)(Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC78(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC79(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_32C6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC80(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC90(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	class USkeletalMeshComponent* GetWeaponMesh();
	bool HideBoostIcon(bool ShouldSet);
	struct FTransform SetJetpackOffset();
	bool HasRequiredEngrams(bool* HasEngrams, bool OutHasEngrams, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2);
	bool IsTekBuffDisabled(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class APrimalBuff* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2);
	bool Check_genesis_restrictions_for_player(class APrimalCharacter** Player, bool* Ret_val, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
	bool BPActivated(class AActor** ForInstigator, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess);
	void Is_Restricted_Because_Of_Genesis_Map(bool* Restricted, bool* Ret_val, bool CallFunc_check_genesis_restrictions_for_player_is_restricted);
	void Get_Is_Player_in_SealedSpace(bool Result, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	bool IsAbilityValid();
	double IsPlayerInWaterVolume(bool Result, class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue, struct FVector* CallFunc_GetActorBounds_BoxExtent, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	bool SpawnFX(class USoundBase** Sound, double* VolumeMultiplier, double PitchMultiplier, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float* CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast);
	bool Should_Damage_Actor(class AActor* Victim, bool Result, bool* RetVal, bool* CallFunc_Greater_IntInt_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	float ResetPlayerFOV();
	bool SetTekIgnoreLookInput();
	bool SetTekIgnoreMoveInput();
	bool AllowPostProcessEffect();
	void BPDeactivated(class AActor** ForInstigator, bool* CallFunc_IsLocallyControlled_ReturnValue);
	void ResetTargetFOV();
	bool IsWarping_FOV(bool Result, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	class ABuff_TekArmor_C* Get_DefaultTekBuff(class UObject* CallFunc_GetDefaultObject_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess);
	class APrimalCharacter* GetDefaultPlayer(class UObject* CallFunc_GetDefaultObject_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	double Client_Consume_Element_After_Time(int32* ElementCost, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	double BPSetupForInstigator(class AActor** ForInstigator, bool* CallFunc_IsLocallyControlled_ReturnValue, class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, double* K2Node_VariableSet_warpFOV_start_ImplicitCast);
	bool IsPlayerGrounded(bool Result);
	bool Get_RefOwningPlayer_Camera_Manager(bool* K2Node_DynamicCast_bSuccess);
	float UpdatePlayerFOV(double IntensityRatio, bool WarpIn, double* NewFOV, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	class AShooterCharacter* Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement);
	class APlayerController* Get_Ref_Owning_PlayerController(class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	void GetRef_OwningPlayer(class AShooterCharacter** Player, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	void AreAnyTekAbilitiesActive(bool Result, bool* RetVal, bool* CallFunc_IsTekArmorUsingAbility__result);
	class APrimalBuff* IsTekArmorUsingAbility_(bool Result, bool* RetVal, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess_1);
	float DisplayTekArmorMessage(class FString* Message, class USoundBase** Sound, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast);
	void SetCastedArmorPieceRef();
	class UPrimalItem* GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C* ArmorRef, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess);
	bool CanUseTekAbility(bool* bNotifyIfOutOfElement, bool CallFunc_IsTekBuffDisabled_bIsDisabled, class ABiomeZoneVolume* CallFunc_GetMyBiomeZoneVolume_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool* CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	int32 Equipped_TryToDecreaseElement(enum class EPrimalEquipmentType* ItemSlot);
	void Equipped_SetToMaxElement(enum class EPrimalEquipmentType* ItemSlot);
	double Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase** Sound, struct FTransform* Transform, double* SoundPitch);
	void CheckForArmorRef();
	bool Server_SetTekAbilityActive();
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	bool ExecuteUbergraph_Buff_TekArmor(int32* EntryPoint, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_Greater_IntInt_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, bool* K2Node_DynamicCast_bSuccess_1, class UParticleSystem* K2Node_CustomEvent_particleTemplate, struct FTransform* K2Node_CustomEvent_transform, double K2Node_CustomEvent_soundPitch, double CallFunc_FloatToDouble_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, double* CallFunc_FloatToDouble_value_ImplicitCast, float* CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast);
};

}


