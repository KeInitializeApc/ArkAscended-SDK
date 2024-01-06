#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_GlobalFunctions.BPFL_GlobalFunctions_C
class UBPFL_GlobalFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_GlobalFunctions_C* GetDefaultObj();

	bool GetIsModPaidStatus(double* Price, class UObject* __WorldContext);
	class UUI_GameSlot_C* CreateModPageFromStandalone(class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	bool GetIsModValid(class UObject* __WorldContext, bool CallFunc_Not_PreBool_ReturnValue);
	class FString DebugMod(const struct FInstallProgressMod& InstallProgressMod, enum class EGameModsEvent* Event, class UObject* __WorldContext, class UObject** Owner, enum class EInstallStatus* Temp_byte_Variable, enum class EInstallStatus* Temp_byte_Variable_1, const class FString& CallFunc_GetModName_Name, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_BoolToString_ReturnValue, class FString* CallFunc_Conv_BoolToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FString* CallFunc_Concat_StrStr_ReturnValue_8, class FString* CallFunc_Concat_StrStr_ReturnValue_9, class FString* CallFunc_Concat_StrStr_ReturnValue_10, class FString* CallFunc_Concat_StrStr_ReturnValue_11, class FString* CallFunc_Concat_StrStr_ReturnValue_12, class FString* CallFunc_Concat_StrStr_ReturnValue_13, class FString* CallFunc_Concat_StrStr_ReturnValue_14, class FString* CallFunc_Concat_StrStr_ReturnValue_15, class FString* CallFunc_Concat_StrStr_ReturnValue_16, class FString* CallFunc_Concat_StrStr_ReturnValue_17, class FString* CallFunc_Concat_StrStr_ReturnValue_18, class FString* CallFunc_Concat_StrStr_ReturnValue_19, class FString* CallFunc_Concat_StrStr_ReturnValue_20, class FString* CallFunc_Concat_StrStr_ReturnValue_21, class FString* CallFunc_Concat_StrStr_ReturnValue_22);
	bool Is_There_Enough_Space_to_Install_Mod(class UObject* __WorldContext, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText);
	double GetProcessedBarProgress(class UObject* __WorldContext, double* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double* CallFunc_Divide_DoubleDouble_ReturnValue);
	bool GetIsModAvailable(class UObject* __WorldContext);
	int32 CreateModPageFromID(class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	class UUI_GameSlot_C* CreateModPageFromStoreMenu(class UUI_StoreMenu_C* UI_StoreMenu, class UObject* __WorldContext, class UUI_ModPage_C** ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	bool FormatDownloadNumber(int64 Value, class UObject* __WorldContext, class FText FinalAmount, class FText* CallFunc_Conv_Int64ToText_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_Int64ToText_ReturnValue_3, class FText* CallFunc_Conv_Int64ToText_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	class FString GetModVersion(class UObject* __WorldContext, class FText FinalAmount, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool* Temp_bool_Variable, TArray<class FString>* K2Node_MakeArray_Array, class FText* K2Node_Select_Default, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	struct FInstallProgressMod GetDownloadCount(class UObject* __WorldContext, class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	struct FInstallProgressMod GetModName(class UObject* __WorldContext, class FString* Name);
	bool GetModSize(class UObject* __WorldContext, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class FString GetAuthorName(class UObject* __WorldContext, const class FString& Local_TotalAuthors, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	struct FButtonStyle CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject* __WorldContext, struct FButtonStyle* ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	TArray<class FString> HEXtoByte(class UObject* __WorldContext, TArray<class FString>* K2Node_MakeArray_Array, int32* CallFunc_Array_Find_ReturnValue, int32* CallFunc_Array_Find_ReturnValue_1, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, uint8* CallFunc_Conv_IntToByte_ReturnValue);
	struct FColor HEXtoSRGB(class FString* String, class UObject* __WorldContext, struct FColor* Color);
	bool SRGBtoHEX(struct FColor* Color, class UObject* __WorldContext, class FString* ReturnValue, TArray<class FString>* String, TArray<uint8>* K2Node_MakeArray_Array, class FString* CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	class FString ByteToHex(uint8* InputPin, class UObject* __WorldContext, class FString* ReturnValue, TArray<class FString>* K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_Divide_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue);
	bool SetFocusedWidget(class UObject* __WorldContext, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets);
	int32 TextLimit(int32 Limit, class FString* String, class UObject* __WorldContext, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool CheckPlayerInputDevices(class UObject* __WorldContext, bool* Temp_bool_Variable, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class ENUM_InputDevices* Temp_byte_Variable, enum class ENUM_InputDevices* Temp_byte_Variable_1, enum class ENUM_InputDevices* K2Node_Select_Default);
	bool StringLimit(class FString* String, int32 Limit, class UObject* __WorldContext, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	void ErrorMessage(class UObject** Object, const class FString& ErrorMessage, class UObject* __WorldContext);
};

}


