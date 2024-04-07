#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x1060 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C
class UPrimalItem_DinoSpawner_Base_C : public UPrimalItem_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         DebugStatConversion;                               // 0xEE8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ConvertItemStats;                                  // 0xEE9(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ConvertItemStatsOnlyIfMissingData;                 // 0xEEA(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_91D[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FItemToDinoStatParams>         ItemToDinoStatMapping;                             // 0xEF0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDinoSetup                            DinoSetup;                                         // 0xF00(0x120)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config)
	class FName                                  DinoStatsDataName;                                 // 0x1020(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<enum class EPrimalCharacterStatusValue> StatsToDisplayOnTooltip;                           // 0x1028(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        BaselineStatValueForTooltipPercentageDisplay;      // 0x1038(0x4)(Edit, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  DinoColorizationDataName;                          // 0x103C(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_92E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpawningDinoAtLocation;                            // 0x1048(0x18)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_DinoSpawner_Base_C* GetDefaultObj();

	struct FColor BPGetCustomInventoryWidgetTextColor(struct FLinearColor* CallFunc_MakeColor_ReturnValue);
	class FString BPGetCustomInventoryWidgetText(int32* CallFunc_MakeLiteralInt_ReturnValue, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool CallFunc_Less_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, bool* CallFunc_Greater_IntInt_ReturnValue, class FString* CallFunc_BuildString_Int_ReturnValue);
	bool DoesClientHaveStatData(bool* HasData, bool CallFunc_HasCustomItemData_ReturnValue);
	struct FRotator BPCanUse(bool* FoundPreventVolume, bool* MIssionPreventsToSpawn, bool AllowedToSpawn, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UClass** CallFunc_GetDinoStaticClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class AStructurePreventionZoneVolume* CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, TSoftClassPtr<class AShooterWeapon> CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_CanSpawnCustomDino_OutCalculatedSpawnLocation, bool* CallFunc_CanSpawnCustomDino_ReturnValue);
	bool GetDinoColorizationData(bool* HasAnyColorData, const TArray<uint8>& Colors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, TArray<uint8>* K2Node_MakeArray_Array, TArray<double>* CallFunc_Array_Length_TargetArray_ImplicitCast, const TArray<double>& CallFunc_Array_Get_TargetArray_ImplicitCast);
	void PreDinoSpawned();
	double CopyDinoStatsFromDino(int32* Temp_int_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32* Temp_int_Variable_1, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item_1, TArray<class FName>* K2Node_MakeArray_Array, TArray<class UClass*>* K2Node_MakeArray_Array_1, TArray<class UObject*>* K2Node_MakeArray_Array_2, TArray<class FString>* K2Node_MakeArray_Array_3, int32 Temp_int_Loop_Counter_Variable_1, struct FCustomItemData* K2Node_MakeStruct_CustomItemData, double CallFunc_Array_Get_Item_2, double* CallFunc_Add_DoubleDouble_ReturnValue, TArray<class FName>* K2Node_MakeArray_Array_4, TArray<class UClass*>* K2Node_MakeArray_Array_5, TArray<class UObject*>* K2Node_MakeArray_Array_6, TArray<class FString>* K2Node_MakeArray_Array_7, struct FCustomItemData* K2Node_MakeStruct_CustomItemData_1, TArray<float>* K2Node_MakeStruct_CustomDataFloats_ImplicitCast, TArray<float>* K2Node_MakeStruct_CustomDataFloats_ImplicitCast_1);
	class FString GetStatDisplayString(int32* Value, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Max_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FItemToDinoStatParams& CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1);
	bool GetDinoStat(bool* Success, bool* GotValue, int32* MapIdx, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FItemToDinoStatParams& CallFunc_Array_Get_Item_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_MapRangeToCurveClamped_ReturnValue, int32 CallFunc_Round_ReturnValue_1, const struct FItemToDinoStatParams& CallFunc_Array_Get_Item_2, double* CallFunc_Round_A_ImplicitCast, float CallFunc_MapRangeToCurveClamped_OutRangeB_ImplicitCast, float CallFunc_MapRangeToCurveClamped_OutRangeA_ImplicitCast, float CallFunc_MapRangeToCurveClamped_InRangeB_ImplicitCast, float CallFunc_MapRangeToCurveClamped_InRangeA_ImplicitCast, float CallFunc_MapRangeToCurveClamped_Value_ImplicitCast, double* CallFunc_Round_A_ImplicitCast_1);
	int32 BPGetItemDescription(class AShooterPlayerController** ForPC, bool* FoundStat, TArray<class FString>* Lines, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool CallFunc_Less_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, const class FString& CallFunc_GetStatDisplayString_StatDisplay, const class FString& CallFunc_GetStatDisplayString_ValueDisplay, bool* CallFunc_GetStatDisplayString_ShowInTooltip, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool* CallFunc_DoesClientHaveStatData_HasData, int32* CallFunc_MakeLiteralInt_ReturnValue, const class FString& CallFunc_JoinStringArrayWithNewlines_ReturnValue, class FString* CallFunc_BuildString_Int_ReturnValue);
	class APrimalDinoCharacter* OnDinoSpawned();
	void BlueprintUsed();
	bool ExecuteUbergraph_PrimalItem_DinoSpawner_Base(int32* EntryPoint, int32* CallFunc_MakeLiteralInt_ReturnValue, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32* CallFunc_GetDinoStat_NumDinoLevels, int32* CallFunc_GetDinoStat_StatMapIndexUsed, bool* CallFunc_GetDinoStat_Success, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AController** CallFunc_GetCharacterController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, class APrimalDinoCharacter** CallFunc_SpawnCustomDino_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData);
};

}


