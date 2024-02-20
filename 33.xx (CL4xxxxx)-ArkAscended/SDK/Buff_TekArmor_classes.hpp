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
	uint8                                        Pad_26AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xB98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26AE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC0(0x1)(Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC1(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26D4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBC4(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26D5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBE8(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF0(0x10)(BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC00(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC08(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC10(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26DB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC18(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC20(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC38(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC48(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC51(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC52(0x1)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC53(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC54(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26DC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC58(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC68(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC70(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC71(0x1)(Edit, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26DD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC78(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC88(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	class USkeletalMeshComponent* GetWeaponMesh();
	bool HideBoostIcon();
	struct FTransform SetJetpackOffset();
	bool HasRequiredEngrams(bool HasEngrams, bool* OutHasEngrams, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State);
	class AMissionType* IsTekBuffDisabled(bool* bRetVal, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue_1);
	bool Check_genesis_restrictions_for_player(class APrimalCharacter** Player, bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2);
	bool BPActivated(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode);
	void Is_Restricted_Because_Of_Genesis_Map(bool Restricted, bool Ret_val, bool* CallFunc_check_genesis_restrictions_for_player_is_restricted);
	bool Get_Is_Player_in_SealedSpace(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool IsAbilityValid(bool* OutValid, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	double IsPlayerInWaterVolume(bool CallFunc_Get_Is_Player_in_SealedSpace_result, class APhysicsVolume** CallFunc_GetPhysicsVolume_ReturnValue, struct FVector* CallFunc_GetActorBounds_BoxExtent, double* CallFunc_Add_DoubleDouble_ReturnValue);
	bool SpawnFX(class UParticleSystem** EmitterTemplate, const struct FTransform& InTransform, class USoundBase* Sound, double* VolumeMultiplier, double* PitchMultiplier, bool* CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, bool* CallFunc_IsValid_ReturnValue_1, float* CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast, float* CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast);
	bool Should_Damage_Actor(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_AreTribesAllied_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void ResetPlayerFOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, float* K2Node_VariableSet_NormalFOV_ImplicitCast);
	void SetTekIgnoreLookInput(bool NewIgnore, bool* CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetTekIgnoreMoveInput(bool NewIgnore, bool* CallFunc_NotEqual_BoolBool_ReturnValue);
	void AllowPostProcessEffect(bool ReturnValue);
	bool BPDeactivated();
	void ResetTargetFOV();
	double IsWarping_FOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue);
	bool Get_DefaultTekBuff(class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool GetDefaultPlayer(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	double Client_Consume_Element_After_Time(double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	double BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, double K2Node_VariableSet_warpFOV_target_ImplicitCast);
	bool IsPlayerGrounded(bool* CallFunc_IsValid_ReturnValue);
	bool Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager, bool* CallFunc_IsValid_ReturnValue);
	double UpdatePlayerFOV(double* IntensityRatio, double* NewFOV, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float* K2Node_VariableSet_NormalFOV_ImplicitCast);
	class AShooterCharacter* Get_Ref_Owning_PlayerMovement();
	bool Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller);
	bool GetRef_OwningPlayer(class AShooterCharacter** Player);
	bool AreAnyTekAbilitiesActive(bool CallFunc_IsTekArmorUsingAbility__result);
	bool IsTekArmorUsingAbility_(uint8* CallFunc_GetValidValue_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor);
	float DisplayTekArmorMessage(class FString* Message, class USoundBase* Sound, const class FString& CallFunc_Conv_NameToString_ReturnValue);
	void SetCastedArmorPieceRef();
	bool GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C* TekArmorRef, class UPrimalItemArmor_Base_Tek_C** ArmorRef, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool CanUseTekAbility(bool* bRetVal, bool* CallFunc_IsTekBuffDisabled_bIsDisabled, bool* CallFunc_BPIsConscious_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class ABiomeZoneVolume** CallFunc_GetMyBiomeZoneVolume_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4);
	struct FKey InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1();
	struct FKey InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0();
	enum class EPrimalEquipmentType Equipped_SetToMaxElement();
	void Multi_SpawnFX(class UParticleSystem** ParticleTemplate, class USoundBase* Sound, struct FTransform* Transform, double* SoundVolume, double SoundPitch);
	enum class EPrimalEquipmentType Equipped_TryToDecreaseElement();
	void CheckForArmorRef();
	bool Server_SetTekAbilityActive();
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	float ExecuteUbergraph_Buff_TekArmor(const struct FKey& K2Node_InputKeyEvent_Key_1, class UParticleSystem** K2Node_CustomEvent_particleTemplate, const struct FTransform& K2Node_CustomEvent_transform, double K2Node_CustomEvent_soundVolume, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, int32* K2Node_CustomEvent_AmountToDecreaseBy, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, class APlayerController* CallFunc_GetOwnerController_ReturnValue, double CallFunc_FloatToDouble_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, const struct FKey& K2Node_InputKeyEvent_Key, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State);
};

}


