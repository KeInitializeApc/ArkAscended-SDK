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
	uint8                                        Pad_3758[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB90(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xB98(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3759[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC0(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC1(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_375B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBC4(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_375C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBD8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE0(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBE8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_375D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC00(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC08(0x8)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC10(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_375F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC28(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC30(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC38(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC51(0x1)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC52(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC53(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC54(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3761[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC58(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC68(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC71(0x1)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3762[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC88(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	void GetWeaponMesh(class USkeletalMeshComponent** OutMesh);
	bool HideBoostIcon(bool WithValue);
	void SetJetpackOffset(struct FTransform* AddTransform);
	class UPrimalItem* HasRequiredEngrams(class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, int32 CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_MakeLiteralString_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_HasEngram_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	bool IsTekBuffDisabled(bool bRetVal, int32 CallFunc_Add_IntInt_ReturnValue, class AShooterPlayerController** CallFunc_Get_Ref_Owning_PlayerController_controller, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName* CallFunc_Array_Get_Item, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_Array_Length_ReturnValue, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, class APrimalBuff** CallFunc_Array_Get_Item_1, const TArray<class FName>& CallFunc_BPPreventTekArmorBuffs_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AMissionType** CallFunc_GetActiveMission_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool Check_genesis_restrictions_for_player(bool Is_restricted, bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool CallFunc_HasBuffWithCustomTag_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_2);
	bool BPActivated(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_HasBuffWithCustomTag_ReturnValue);
	bool Is_Restricted_Because_Of_Genesis_Map(bool Ret_val);
	void Get_Is_Player_in_SealedSpace(bool* Result, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	bool IsAbilityValid(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	double IsPlayerInWaterVolume(bool* Result, double WaterVolumeTopZ, bool* CallFunc_Get_Is_Player_in_SealedSpace_result, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, struct FVector* CallFunc_GetActorBounds_Origin, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	float SpawnFX(class UParticleSystem** EmitterTemplate, class USoundBase** Sound, double VolumeMultiplier, double PitchMultiplier, bool* CallFunc_IsValid_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class UParticleSystemComponent** CallFunc_SpawnEmitterAtLocation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	bool Should_Damage_Actor(class AActor** Victim, bool* Result, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_AreTribesAllied_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	float ResetPlayerFOV();
	bool SetTekIgnoreLookInput();
	bool SetTekIgnoreMoveInput();
	bool AllowPostProcessEffect();
	bool BPDeactivated();
	void ResetTargetFOV();
	double IsWarping_FOV(bool* Result, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class ABuff_TekArmor_C* Get_DefaultTekBuff(class ABuff_TekArmor_C* Ref, class UObject** CallFunc_GetDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	void GetDefaultPlayer(class APrimalCharacter* Ref, class UObject** CallFunc_GetDefaultObject_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	double Client_Consume_Element_After_Time(double* DeltaTime, int32 ElementCost, double CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	double BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AController** CallFunc_GetController_ReturnValue, double K2Node_VariableSet_warpFOV_start_ImplicitCast);
	bool IsPlayerGrounded(bool* Result, class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement, bool* CallFunc_IsValid_ReturnValue);
	class AShooterPlayerCameraManager* Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* Ref, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue);
	float UpdatePlayerFOV(double* NewFOV, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	void Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player);
	class AShooterPlayerController* Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	class AShooterCharacter* GetRef_OwningPlayer(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool AreAnyTekAbilitiesActive(bool* Result);
	class ABuff_TekArmor_C* IsTekArmorUsingAbility_(bool* Result, uint8 CallFunc_GetValidValue_ReturnValue, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1);
	class FString DisplayTekArmorMessage(class USoundBase** Sound, class AShooterPlayerController** CallFunc_Get_Ref_Owning_PlayerController_controller, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float* CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast, float CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast);
	void SetCastedArmorPieceRef();
	class UPrimalItemArmor_Base_Tek_C* GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** TekArmorRef, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess);
	bool CanUseTekAbility(bool bNotifyIfOutOfElement, bool bResult, bool bRetVal, bool CallFunc_HasRequiredEngrams_HasEngrams, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player_1, class AShooterCharacter** CallFunc_GetRef_OwningPlayer_player_2, bool* CallFunc_BPIsConscious_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class FString* CallFunc_MakeLiteralString_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	enum class EPrimalEquipmentType Equipped_SetToMaxElement();
	double Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase** Sound, struct FTransform* Transform, double* SoundVolume);
	enum class EPrimalEquipmentType Equipped_TryToDecreaseElement();
	void CheckForArmorRef();
	void Server_SetTekAbilityActive(bool* NewActive);
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	struct FKey ExecuteUbergraph_Buff_TekArmor(enum class EPrimalEquipmentType* K2Node_CustomEvent_ItemSlot_1, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, enum class EPrimalEquipmentType* K2Node_CustomEvent_ItemSlot, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue_1, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_CustomEvent_newActive, float* CallFunc_TimeSeconds_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_3, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_4, bool* CallFunc_IsCooldownComplete_ReturnValue, double CallFunc_FloatToDouble_value_ImplicitCast, float CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast);
};

}


