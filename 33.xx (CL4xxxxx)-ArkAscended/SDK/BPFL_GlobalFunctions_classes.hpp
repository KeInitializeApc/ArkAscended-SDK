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

	bool GetIsModPaidStatus(double* Price, class UObject** __WorldContext);
	class UUI_ModPage_C* CreateModPageFromStandalone(class UObject** __WorldContext, class UUI_ModPage_C** ReturnValue);
	bool GetIsModValid(class UObject** __WorldContext, bool* CallFunc_Not_PreBool_ReturnValue);
	bool DebugMod(const struct FInstallProgressMod& InstallProgressMod, enum class EGameModsEvent* Event, class UObject** __WorldContext, class UObject** Owner, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool* K2Node_SwitchEnum_CmpSuccess, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FString* CallFunc_Concat_StrStr_ReturnValue_8, class FString* CallFunc_Concat_StrStr_ReturnValue_9, class FString* CallFunc_Concat_StrStr_ReturnValue_10, class FString* CallFunc_Concat_StrStr_ReturnValue_11, class FString* CallFunc_Concat_StrStr_ReturnValue_12, class FString* CallFunc_Concat_StrStr_ReturnValue_13, class FString* CallFunc_Concat_StrStr_ReturnValue_14, class FString* CallFunc_Concat_StrStr_ReturnValue_15, class FString* CallFunc_Concat_StrStr_ReturnValue_16, class FString* CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_17, class FString* CallFunc_Concat_StrStr_ReturnValue_18, class FString* CallFunc_Concat_StrStr_ReturnValue_19, class FString* CallFunc_Concat_StrStr_ReturnValue_20, class FString* CallFunc_Concat_StrStr_ReturnValue_21, class FString* CallFunc_Concat_StrStr_ReturnValue_22);
	bool Is_There_Enough_Space_to_Install_Mod(class UObject** __WorldContext, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText);
	double GetProcessedBarProgress(class UObject** __WorldContext, double* ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double* CallFunc_Conv_IntToDouble_ReturnValue);
	bool GetIsModAvailable(class UObject** __WorldContext);
	class UUI_ModPage_C* CreateModPageFromID(class UObject** __WorldContext, class UUI_ModPage_C** ReturnValue);
	class UUI_ModPage_C* CreateModPageFromStoreMenu(class UUI_StoreMenu_C** UI_StoreMenu, class UObject** __WorldContext, class UUI_ModPage_C** ReturnValue);
	bool FormatDownloadNumber(int64 Value, class UObject** __WorldContext, class FText FinalAmount, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Concat_StrStr_ReturnValue_4, class FString* CallFunc_Concat_StrStr_ReturnValue_5, class FString* CallFunc_Concat_StrStr_ReturnValue_6, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Concat_StrStr_ReturnValue_7, class FText* CallFunc_Conv_StringToText_ReturnValue_3);
	class FString GetModVersion(class UObject** __WorldContext, class FText FinalAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool* CallFunc_BooleanOR_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_IsEmpty_ReturnValue, TArray<class FString>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_2, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue);
	struct FInstallProgressMod GetDownloadCount(class UObject** __WorldContext, class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	struct FInstallProgressMod GetModName(class UObject** __WorldContext, class FString* Name);
	bool GetModSize(class UObject** __WorldContext, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class FString GetAuthorName(class UObject** __WorldContext, const class FString& Local_TotalAuthors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_IsEmpty_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	struct FButtonStyle CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject** __WorldContext, struct FButtonStyle* ButtonStyle, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, struct FSlateBrush* K2Node_MakeStruct_SlateBrush_1, struct FSlateBrush* K2Node_MakeStruct_SlateBrush_2, struct FSlateBrush* K2Node_MakeStruct_SlateBrush_3);
	uint8 HEXtoByte(class UObject** __WorldContext, TArray<class FString>* K2Node_MakeArray_Array, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue);
	struct FColor HEXtoSRGB(class UObject** __WorldContext, struct FColor* Color);
	bool SRGBtoHEX(struct FColor* Color, class UObject** __WorldContext, class FString* ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<uint8>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	class FString ByteToHex(uint8* InputPin, class UObject** __WorldContext, class FString* ReturnValue, TArray<class FString>* K2Node_MakeArray_Array, int32* CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue);
	bool SetFocusedWidget(class UObject** __WorldContext, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets);
	int32 TextLimit(int32 Limit, class UObject** __WorldContext, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	enum class ENUM_InputDevices CheckPlayerInputDevices(class UObject** __WorldContext, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets);
	bool StringLimit(int32 Limit, class UObject** __WorldContext, int32 Temp_int_Array_Index_Variable, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	void ErrorMessage(class UObject** Object, const class FString& ErrorMessage, class UObject** __WorldContext);
};

}


