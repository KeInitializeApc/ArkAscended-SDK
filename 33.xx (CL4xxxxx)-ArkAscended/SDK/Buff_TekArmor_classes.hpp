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
	uint8                                        Pad_38BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     Ref_OwningPlayer;                                  // 0xB90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              CurrentEquipmentSlot;                              // 0xB98(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38BE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     Ref_OwningPlayerController;                        // 0xBA0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      SelfAsObj;                                         // 0xBA8(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class AWeapFists_C*                          FistWeapon;                                        // 0xBB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_Base_Tek_C*           Ref_ArmorPiece;                                    // 0xBB8(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              TekBuffEquipmentType;                              // 0xBC0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTekAbilityActive;                               // 0xBC1(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38BF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          TekArmorMessage_Color;                             // 0xBC4(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TekArmorMessage_DisplayScale;                      // 0xBD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       TekArmorMessage_DisplayTime;                       // 0xBE0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xBE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_38C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class ATekArmor_EffectActor_C*>       SpawnedFXActors;                                   // 0xBF0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FName                                  TekArmorName;                                      // 0xC00(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            TekArmorIcon;                                      // 0xC08(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bShouldWarpFOV;                                    // 0xC10(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WarpFOV_target;                                    // 0xC18(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_MAX;                                       // 0xC20(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_in;                                    // 0xC28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_lag_out;                                   // 0xC30(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       WarpFOV_start;                                     // 0xC38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       ConsumeElementInterval;                            // 0xC40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       TimeSinceLastConsumeElement;                       // 0xC48(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EPrimalEquipmentType              PreventAbilityActiveSlot;                          // 0xC50(0x1)(Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredMoveInput;                              // 0xC51(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekIgnoredLookInput;                              // 0xC52(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bLeftBumperHeld;                                   // 0xC53(0x1)(ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsWeapon;                                         // 0xC54(0x1)(Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Restricted_because_of_genesis_map_string;          // 0xC58(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       GenesisAbilityErrorRateLimitSeconds;               // 0xC68(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         Has_set_whether_tek_abilities_are_allowed_in_genesis; // 0xC70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Tek_abilities_are_allowed_in_genesis;              // 0xC71(0x1)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38C6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenesisMapName;                                    // 0xC78(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<class UClass*>                        AbilityRequiresEngrams;                            // 0xC88(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_TekArmor_C* GetDefaultObj();

	class USkeletalMeshComponent* GetWeaponMesh();
	bool HideBoostIcon(bool* ShouldSet);
	struct FTransform SetJetpackOffset();
	bool HasRequiredEngrams(bool HasEngrams, bool OutHasEngrams, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	bool IsTekBuffDisabled(bool bIsDisabled, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class APrimalBuff* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2);
	bool Check_genesis_restrictions_for_player(bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode);
	bool BPActivated(class AActor** ForInstigator, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess);
	void Is_Restricted_Because_Of_Genesis_Map(bool Restricted, bool Ret_val, bool* CallFunc_check_genesis_restrictions_for_player_is_restricted);
	bool Get_Is_Player_in_SealedSpace(bool* Result);
	bool IsAbilityValid(bool OutValid, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	double IsPlayerInWaterVolume(bool* Result, class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue, const struct FVector& CallFunc_GetActorBounds_BoxExtent, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_SelectFloat_ReturnValue);
	bool SpawnFX(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform, double* VolumeMultiplier, double PitchMultiplier, struct FVector* CallFunc_BreakTransform_Scale, float CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast);
	bool Should_Damage_Actor(bool* Result, bool* RetVal, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ResetPlayerFOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, float K2Node_VariableSet_NormalFOV_ImplicitCast);
	bool SetTekIgnoreLookInput();
	bool SetTekIgnoreMoveInput();
	void AllowPostProcessEffect(bool ReturnValue);
	void BPDeactivated(class AActor** ForInstigator, bool CallFunc_IsLocallyControlled_ReturnValue);
	void ResetTargetFOV();
	double IsWarping_FOV(bool* Result, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_BooleanAND_ReturnValue);
	bool Get_DefaultTekBuff(class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool GetDefaultPlayer();
	bool Client_Consume_Element_After_Time(double* CallFunc_Subtract_DoubleDouble_ReturnValue);
	double BPSetupForInstigator(class AActor** ForInstigator, bool CallFunc_IsLocallyControlled_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, class UPrimalItemArmor_Base_Tek_C** CallFunc_GetRelatedTekArmorRef_tekArmorRef, class AController** CallFunc_GetController_ReturnValue, class APlayerController** CallFunc_CastToPlayerController_ReturnValue, double* K2Node_VariableSet_warpFOV_start_ImplicitCast);
	bool IsPlayerGrounded(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager);
	double UpdatePlayerFOV(double IntensityRatio, bool* WarpIn, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_ReturnValue_2, float K2Node_VariableSet_NormalFOV_ImplicitCast);
	class AShooterCharacter* Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** Movement);
	bool Get_Ref_Owning_PlayerController(class APlayerController** CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller);
	bool GetRef_OwningPlayer();
	void AreAnyTekAbilitiesActive(bool* Result, bool* RetVal, bool CallFunc_IsTekArmorUsingAbility__result);
	bool IsTekArmorUsingAbility_(uint8* ArmorType, bool* Result, bool* RetVal, uint8* CallFunc_GetValidValue_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	float DisplayTekArmorMessage(class FString* CallFunc_Conv_NameToString_ReturnValue, float* CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast);
	void SetCastedArmorPieceRef();
	bool GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C* ArmorRef, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool CanUseTekAbility(bool* CallFunc_IsTekBuffDisabled_bIsDisabled, class ABiomeZoneVolume* CallFunc_GetMyBiomeZoneVolume_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UPrimalItem** CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void Equipped_SetToMaxElement(enum class EPrimalEquipmentType* ItemSlot);
	class USoundBase* Multi_SpawnFX(struct FTransform* Transform, double* SoundVolume, double SoundPitch);
	int32 Equipped_TryToDecreaseElement(enum class EPrimalEquipmentType* ItemSlot);
	void CheckForArmorRef();
	bool Server_SetTekAbilityActive();
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	float ExecuteUbergraph_Buff_TekArmor(int32 EntryPoint, const struct FKey& Temp_struct_Variable, class UParticleSystem** K2Node_CustomEvent_particleTemplate, struct FTransform* K2Node_CustomEvent_transform, double K2Node_CustomEvent_soundVolume, double* K2Node_CustomEvent_soundPitch, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, int32 K2Node_CustomEvent_AmountToDecreaseBy, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, class APlayerController** CallFunc_GetOwnerController_ReturnValue, double* CallFunc_FloatToDouble_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller);
};

}


