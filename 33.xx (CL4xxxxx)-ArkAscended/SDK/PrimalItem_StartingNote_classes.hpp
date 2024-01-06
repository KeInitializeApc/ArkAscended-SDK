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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	TArray<class UTexture2D*>                    AscensionIcons;                                    // 0xEB8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                LocalCustomItemDesc;                               // 0xEC8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        DifficultyStrings;                                 // 0xED8(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        BossStrings;                                       // 0xEE8(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FArrayOfStrings>               BossPostStrings;                                   // 0xEF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UTexture2D*                            LocalItemIcon;                                     // 0xF08(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UTexture2D*>                    LocalAscensionIcons;                               // 0xF10(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UTexture2D*>                    SecondaryAscensionIcons;                           // 0xF20(0x10)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UTexture2D*                            SecondaryIcon;                                     // 0xF30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    TertiaryAscensionIcons;                            // 0xF38(0x10)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UTexture2D*                            TertiaryIcon;                                      // 0xF48(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UTexture2D*>                    QuaternaryAscensionIcons;                          // 0xF50(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UTexture2D*                            QuaternaryIcon;                                    // 0xF60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bResetHighlightTime;                               // 0xF68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_33F7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       HighlightStartTime;                                // 0xF70(0x8)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       HighlightTimeToEnableRespawn;                      // 0xF78(0x8)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_StartingNote_C* GetDefaultObj();

	double BPCanUse(bool* ReturnValue, bool CallFunc_BPCanUse_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_BPCanImplantSuicide_ReturnValue);
	class UTexture2D* BPDrawItemIcon(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue);
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC, class UTexture2D** ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue);
	bool IsLocalImplant(class AShooterPlayerController* ForPC, bool bRetVal);
	class FString BPGetItemName(class AShooterPlayerController* ForPC, class FString* ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue);
	bool Get_Survival_Quotient_String(class FString* OutString, const class FString& RetVal, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4);
	double BPGetItemDescription(class AShooterPlayerController* ForPC, class FString* ReturnValue, double* CallFunc_GetPersistentTimeInSeconds_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class AGameStateBase** CallFunc_GetGameState_ReturnValue, bool CallFunc_BPCanImplantSuicide_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, const class FString& CallFunc_BPFormatAsTime_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Round_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, class FText* CallFunc_Format_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_3, class FText* CallFunc_Format_ReturnValue_2, class FText* CallFunc_Format_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, double CallFunc_Add_DoubleFloat_A_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast);
	double BPPreInitializeItem(int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, TArray<class FName>* K2Node_MakeArray_Array, TArray<class UClass*>* K2Node_MakeArray_Array_1, bool* CallFunc_HasCustomItemData_ReturnValue, TArray<class UObject*>* K2Node_MakeArray_Array_2, class UPrimalInventoryComponent** CallFunc_GetInitializeItemOwnerInventory_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_EqualEqual_ClassClass_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class AShooterPlayerController** CallFunc_GetSpawnedForController_ReturnValue, TArray<class FString>* K2Node_MakeArray_Array_3, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Get_Survival_Quotient_String_OutString, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_4, class FText* CallFunc_Format_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, TArray<double>* CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast);
	void BlueprintUsed();
	void BPOnUpdatedItemContextMenu();
	double ExecuteUbergraph_PrimalItem_StartingNote(int32 EntryPoint, bool CallFunc_CanUse_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
};

}


