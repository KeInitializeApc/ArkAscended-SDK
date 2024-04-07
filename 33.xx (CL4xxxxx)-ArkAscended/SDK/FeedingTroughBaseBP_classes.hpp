#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x1781 - 0x16C8)
// BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C
class AFeedingTroughBaseBP_C : public APrimalStructureItemContainer_VisualItems
{
public:
	class UStaticMeshComponent*                  EffectField;                                       // 0x16C8(0x8)(Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x16D0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                         ShowArea;                                          // 0x16D8(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_281F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        VisibleAreaUseIndex;                               // 0x16DC(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        VisibleAreaPriority;                               // 0x16E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxRange;                                          // 0x16E4(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	int32                                        RangeIncrement;                                    // 0x16E8(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CurrentRange;                                      // 0x16EC(0x4)(ConstParm, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoFeedingListType;                               // 0x16F0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2822[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        FeedingDinoList;                                   // 0x16F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        CachedNearbyDinos;                                 // 0x1708(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CollectCartConsumable;                             // 0x1718(0x1)(Edit, BlueprintVisible, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2824[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastNearbyDinoCacheUpdateTime;                     // 0x1720(0x8)(Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        RemoveFromListStartIndex;                          // 0x1728(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        AddToListStartIndex;                               // 0x172C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            CurrFeedingRangeIcon;                              // 0x1730(0x8)(Edit, ExportObject, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            EditListIcon;                                      // 0x1738(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            DisabledListIcon;                                  // 0x1740(0x8)(BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            InclusionListIcon;                                 // 0x1748(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2D*                            ExclusionListIcon;                                 // 0x1750(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2D*                            AddDinoToListIcon;                                 // 0x1758(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            RemoveDinoFromListIcon;                            // 0x1760(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            AdjustRangeIcon;                                   // 0x1768(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            IncreaseRangeIcon;                                 // 0x1770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            DecreaseRangeIcon;                                 // 0x1778(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         SupportCollectCartConsumable;                      // 0x1780(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AFeedingTroughBaseBP_C* GetDefaultObj();

	int32 AddDinoListAddMenuEntries(TArray<struct FMultiUseEntry>* Entries, int32* Temp_int_Array_Index_Variable, int32* Temp_int_Loop_Counter_Variable, class UClass** CallFunc_Array_Get_Item, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry);
	int32 AddDinoListRemoveMenuEntries(TArray<struct FMultiUseEntry>* Entries, bool Temp_bool_True_if_break_was_hit_Variable, int32* Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* Temp_int_Loop_Counter_Variable, class UClass** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry);
	void CreateMultiUseEntriesForDinoList(TArray<struct FMultiUseEntry>* Entries, const TArray<class UClass*>& DinoClasses);
	bool GetNearbyDinoClasses(bool* IncludeWildDinos, bool* IncludeEnemyDinos, TArray<class UClass*>* NearbyDinos, TArray<class UClass*>* NearbyDinos_GND, int32* Temp_int_Loop_Counter_Variable, int32* Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, const TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, const TArray<class AActor*>& CallFunc_SortActorsByDistance_ReturnValue, class AActor** CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool* K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
	int32 AddDinoListMenuEntries(TArray<struct FMultiUseEntry>* Entries, class AShooterPlayerController* ForPC, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_1, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_2, const class FString& K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class FString* CallFunc_Concat_StrStr_ReturnValue, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_3);
	enum class ENetworkModeResult HandleOnRepCurrentRange(double* CallFunc_Conv_IntToDouble_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, struct FVector* CallFunc_MakeVector_ReturnValue);
	bool BPTryMultiUse(class APlayerController* ForPC, bool ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32* CallFunc_Subtract_IntInt_ReturnValue_2);
	void OnRep_CurrentRange();
	int32 AddAdjustRangeMenuEntries(TArray<struct FMultiUseEntry>* Entries, class AShooterPlayerController* ForPC, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry, bool* CallFunc_LessEqual_IntInt_ReturnValue, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_1, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_2, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_3);
	double IsValidForDinoFeedingContainer(class APrimalDinoCharacter* ForDino, bool ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	bool Check_Team_and_Set_Visual_Visibility(bool K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue);
	bool BPClientDoMultiUse(class APlayerController* ForPC, int32 ClientUseIndex, bool* K2Node_SwitchInteger_CmpSuccess, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	int32 BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& ReturnValue, TArray<struct FMultiUseEntry>* Entries, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry, class UTexture2D* K2Node_Select_Default, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_1, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_2, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_3, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, const class FString& CallFunc_SelectString_ReturnValue_1, struct FMultiUseEntry* K2Node_MakeStruct_MultiUseEntry_5);
	enum class ENetworkModeResult ReceiveBeginPlay(bool CallFunc_IsServer_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
};

}


