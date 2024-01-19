#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xF80 - 0xEB0)
// BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
class UPrimalItem_StartingNote_C : public UPrimalItem_Note_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<class UTexture2D*>                    AscensionIcons;                                    // 0xEB8(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                LocalCustomItemDesc;                               // 0xEC8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class FString>                        DifficultyStrings;                                 // 0xED8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class FString>                        BossStrings;                                       // 0xEE8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<struct FArrayOfStrings>               BossPostStrings;                                   // 0xEF8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            LocalItemIcon;                                     // 0xF08(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UTexture2D*>                    LocalAscensionIcons;                               // 0xF10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UTexture2D*>                    SecondaryAscensionIcons;                           // 0xF20(0x10)(Edit, BlueprintVisible, ExportObject, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            SecondaryIcon;                                     // 0xF30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    TertiaryAscensionIcons;                            // 0xF38(0x10)(ConstParm, ExportObject, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            TertiaryIcon;                                      // 0xF48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UTexture2D*>                    QuaternaryAscensionIcons;                          // 0xF50(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            QuaternaryIcon;                                    // 0xF60(0x8)(Edit, BlueprintVisible, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bResetHighlightTime;                               // 0xF68(0x1)(OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4851[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       HighlightStartTime;                                // 0xF70(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       HighlightTimeToEnableRespawn;                      // 0xF78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_StartingNote_C* GetDefaultObj();

	double BPCanUse(bool ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	bool BPDrawItemIcon(class UCanvas* ItemCanvas, const struct FVector2D& ItemCanvasSize, bool Temp_bool_Variable, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UTexture2D* K2Node_Select_Default);
	bool BPGetItemIcon(class AShooterPlayerController** ForPC, class UTexture2D* ReturnValue, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default);
	bool IsLocalImplant(class AShooterPlayerController** ForPC, bool* IsLocal, const class FString& CallFunc_Array_Get_Item);
	class FString BPGetItemName(class AShooterPlayerController** ForPC, const class FString& ReturnValue, bool Temp_bool_Variable, const class FString& K2Node_Select_Default);
	int32 Get_Survival_Quotient_String(const TArray<double>& SurvData, class FString* OutString, class FString* RetVal, int32* CallFunc_Array_Length_ReturnValue, double CallFunc_Array_Get_Item, int32* CallFunc_Subtract_IntInt_ReturnValue, const struct FArrayOfStrings& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Array_Get_Item_4, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_5, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	float BPGetItemDescription(class AShooterPlayerController** ForPC, const class FString& ReturnValue, const class FString& SecondaryString, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	double BPPreInitializeItem(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, const TArray<class FName>& K2Node_MakeArray_Array, const TArray<class UClass*>& K2Node_MakeArray_Array_1, const TArray<class UObject*>& K2Node_MakeArray_Array_2, float CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UPrimalItem* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass** CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default_1, float CallFunc_Array_Get_Item_3, class UTexture2D* CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5, const class FString& K2Node_Select_Default_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, const TArray<class FString>& K2Node_MakeArray_Array_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_SelectString_ReturnValue, float CallFunc_Array_Get_Item_6, float CallFunc_Array_Get_Item_7, class UTexture2D* CallFunc_Array_Get_Item_8, const class FString& K2Node_Select_Default_3, int32 CallFunc_SelectInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_9, const class FString& K2Node_Select_Default_4, class UTexture2D* CallFunc_Array_Get_Item_10, class FText K2Node_Select_Default_5, const class FString& CallFunc_Array_Get_Item_11, const class FString& CallFunc_Array_Get_Item_12, const class FString& CallFunc_Array_Get_Item_13, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void BlueprintUsed();
	void BPOnUpdatedItemContextMenu();
	double ExecuteUbergraph_PrimalItem_StartingNote(int32 EntryPoint, bool CallFunc_Less_DoubleDouble_ReturnValue);
};

}


