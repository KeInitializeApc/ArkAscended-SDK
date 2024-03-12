#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xF20 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C
class UPrimalItem_WeaponEmptyCryopod_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	FMulticastInlineDelegateProperty_            NewEventDispatcher;                                // 0xEE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       DecayingDurability;                                // 0xEF8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         DebugInvalidRedirects;                             // 0xF00(0x1)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CryoFridgeDistanceCheck;                           // 0xF08(0x8)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       EnemyDistanceCheckRadius;                          // 0xF10(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       EnemyStructureDistanceCheckRadius;                 // 0xF18(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponEmptyCryopod_C* GetDefaultObj();

	int32 GetCuddleData(class APrimalDinoCharacter** ForDino, double NewTime, uint8* CuddleType, class UClass* CuddleItemClass, uint8 RetCuddleType, double* RetNewTime, class UClass* CallFunc_GetContainedDinoClass_ResolvedClass, bool CallFunc_GetContainedDinoClass_HasData, struct FCustomItemData* CallFunc_GetContainedDinoClass_RawCustomItemData, class UClass* CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, int32 CallFunc_Clamp_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast);
	class APrimalStructureItemContainer* IsDisplayCase(bool* IsIceBox, class APrimalStructureItemContainer** AsContainer, TSoftClassPtr<class AActor>* DisplayCaseClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ObjectIsChildOf_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	float GetCryopodDeploymentRange(float* CallFunc_GetCryopodDeploymentRange_ReturnValue);
	TArray<double> GetStatRecoveryRateValue(double StatValue, int32 CallFunc_GetRecoveryRateIndexForStat_index, bool* CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_Array_Get_Item);
	TArray<double> GetStatMaxValue(double StatValue, int32* CallFunc_GetMaxValueIndexForStat_index, bool* CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_Array_Get_Item);
	int32 GetRecoveryRateIndexForStat(int32* CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	int32 GetCurrentValueIndexForStat(int32 CallFunc_Conv_ByteToInt_ReturnValue);
	int32 GetStatCurrentValue(double StatValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_Array_Get_Item);
	int32 GetMaxValueIndexForStat(int32* CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	bool IsIceBox(bool* IsIceBox, class APrimalStructureItemContainer** AsContainer, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ObjectIsChildOf_ReturnValue);
	bool IsCryoFridge(class APrimalStructureItemContainer** AsContainer, TSoftClassPtr<class AActor> CryoFridgeClass, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ObjectIsChildOf_ReturnValue);
	bool GetCooldownBuffIfLoaded(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff);
	bool GetContainedDinoClass(bool* HasData, const struct FCustomItemData& RawCustomItemData, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select_Default_1);
	bool BPPreventUpload(class UClass* CallFunc_GetContainedDinoClass_ResolvedClass, bool CallFunc_GetContainedDinoClass_HasData, struct FCustomItemData* CallFunc_GetContainedDinoClass_RawCustomItemData, class AActor* CallFunc_GetOwner_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_Conv_BoolToString_ReturnValue, bool* CallFunc_IsAllowedToTransfer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FText Get_Stat_Value_for_Display(double MaxValue, double* Value, class FText Result, class FText* LocalOutput, int32 CallFunc_Round_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1);
	class FText GetStatDisplayName(class FText LocalName, bool K2Node_SwitchEnum_CmpSuccess);
	double BPGetItemDescription(class AShooterPlayerController** ForPC, class FText* LocalOutput, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, int32* Temp_int_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_GetStatDisplayName_DisplayName, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, bool K2Node_SwitchEnum_CmpSuccess, int32* CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool* CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1);
	void BPInitIconMaterial(class UClass* CallFunc_GetContainedDinoClass_ResolvedClass, bool CallFunc_GetContainedDinoClass_HasData, struct FCustomItemData* CallFunc_GetContainedDinoClass_RawCustomItemData, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UTexture* CallFunc_GetDinoEntryIcon_ReturnValue);
	class UMaterialInterface* BPGetCustomIconMaterialParent(bool CallFunc_HasCustomItemData_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool* K2Node_DynamicCast_bSuccess);
	class UObject* BPTributeItemUploaded(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, struct FCustomItemData* K2Node_MakeStruct_CustomItemData);
	int32 BPTributeItemDownloaded(const struct FCustomItemDoubles& K2Node_MakeStruct_CustomItemDoubles, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, struct FCustomItemData* K2Node_MakeStruct_CustomItemData);
	void BPItemBelowDurabilityThreshold();
	double BPGetCustomInventoryWidgetTextColor(struct FLinearColor* Color, class APrimalStructureItemContainer** CallFunc_IsDisplayCase_AsContainer, class APrimalStructureItemContainer** CallFunc_IsCryoFridge_AsContainer, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	double BPGetCustomDurabilityText(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	float BPGetCustomAutoDecreaseDurabilityPerInterval(TSoftClassPtr<class APrimalBuff>* Buff_BedVitals, double* Value, class APrimalStructureItemContainer** CallFunc_IsDisplayCase_AsContainer, class APrimalStructureItemContainer** CallFunc_IsCryoFridge_AsContainer, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	double BPGetCustomInventoryWidgetText(class FString* LocalText, class APrimalStructureItemContainer** CallFunc_IsDisplayCase_AsContainer, class APrimalStructureItemContainer** CallFunc_IsCryoFridge_AsContainer, bool* CallFunc_IsBroken_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	class FString BPItemBroken(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Array_Get_Item, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	float TryDeploy(struct FVector* Location, struct FRotator* Rotation, const struct FVector& NewLocation, const class FString& FailureReason, TSoftClassPtr<class APrimalBuff> Buff_Nerf, class UClass* TargetClass, struct FVector* LocalNewLocation, bool* LocalDeployed, class UClass** CallFunc_GetCooldownBuffIfLoaded_OutputClass, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveItem_ReturnValue, class UClass* CallFunc_GetContainedDinoClass_ResolvedClass, bool CallFunc_GetContainedDinoClass_HasData, struct FCustomItemData* CallFunc_GetContainedDinoClass_RawCustomItemData, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FCustomItemByteArray& CallFunc_Array_Get_Item_3, const struct FCustomItemByteArray& CallFunc_Array_Get_Item_4, class UPrimalItem** CallFunc_CreateFromBytes_ReturnValue, class UPrimalItem** CallFunc_CreateFromBytes_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_2, bool* CallFunc_Greater_IntInt_ReturnValue_3, const struct FCustomItemByteArray& CallFunc_Array_Get_Item_5, double CallFunc_GetStatRecoveryRateValue_StatValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const class FString& CallFunc_Array_Get_Item_6, const class FString& CallFunc_Array_Get_Item_7, const class FString& CallFunc_Array_Get_Item_8, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, bool* CallFunc_Array_IsValidIndex_ReturnValue_2, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsPVEServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_1, const struct FARKDinoData& K2Node_MakeStruct_ARKDinoData, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool CallFunc_CanDeploy_Can, bool CallFunc_RemoveItem_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_Array_Get_Item_9, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool CallFunc_IsPVEServer_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetOwner_ReturnValue_3, float CallFunc_IsCryopodNerfEnabled_duration, float* CallFunc_IsCryopodNerfEnabled_incomingDamageMultPercent, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_2, bool* K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetOwner_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, class AController** CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_5, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class APrimalDinoCharacter** CallFunc_SpawnFromDinoDataEx_ReturnValue, class UClass** CallFunc_GetCuddleData_CuddleItemClass, bool* CallFunc_GetCuddleData_CuddleRefreshed, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UPrimalItem* CallFunc_AddItemObjectEx_ReturnValue, class UPrimalItem* CallFunc_AddItemObjectEx_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_2, bool* K2Node_DynamicCast_bSuccess_6, const struct FTribeData& CallFunc_GetOrLoadTribeData_LoadedTribeData, bool* CallFunc_TamedProcessOrder_ReturnValue, TArray<double>* CallFunc_GetStatRecoveryRateValue_FloatVars_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AddExperience_HowMuch_ImplicitCast);
	float CanFit(struct FVector* Location, double VerticalOffset, double Radius, const struct FVector& NewLocation, TArray<class AActor*>* K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, float* CallFunc_MakeRotator_Yaw_ImplicitCast, float* CallFunc_CapsuleOverlapFast_Radius_ImplicitCast);
	float CanDeploy(class UClass* Class, struct FVector* Location, const struct FVector& NewLocation, const class FString& FailureReason, TSoftClassPtr<class AActor> CryoFridgeClass, bool bFoundValidFridge, const class FString& LocalFailureReason, double VerticalOffset, const struct FVector& LocalLocation, int32 Temp_int_Array_Index_Variable, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32* Temp_int_Variable_1, double* CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Array_Get_Item, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool* K2Node_DynamicCast_bSuccess_3, bool Temp_bool_True_if_break_was_hit_Variable_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess_4, bool* K2Node_DynamicCast_bSuccess_5, bool* K2Node_DynamicCast_bSuccess_6, bool* CallFunc_Greater_IntInt_ReturnValue, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActors_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item_2, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_7, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_2, bool* K2Node_DynamicCast_bSuccess_8, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_Array_Get_Item_3, bool* K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValidStructureForCryopodDeployment_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_10, class AActor* CallFunc_GetOwner_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, bool Temp_bool_True_if_break_was_hit_Variable_2, class UWorld** CallFunc_K2_GetWorld_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_6, double* CallFunc_Add_DoubleDouble_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_7, class UWorld** CallFunc_K2_GetWorld_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_11, bool* CallFunc_AllowDownloadDino_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_2, bool* K2Node_DynamicCast_bSuccess_12, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_AllowTaming_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State_1, bool* K2Node_DynamicCast_bSuccess_13, int32 Temp_int_Loop_Counter_Variable_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_CanFit_Radius_ImplicitCast, double K2Node_VariableSet_HorizontalOffset_ImplicitCast, double* CallFunc_CanFit_Radius_ImplicitCast_1, float* CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast, float* CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast_1);
	class FString BPGetItemName(class AShooterPlayerController** ForPC, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void BrokenDeploy();
	class FString ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod(int32* EntryPoint, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_TryDeploy_NewLocation);
	void NewEventDispatcher__DelegateSignature();
};

}

