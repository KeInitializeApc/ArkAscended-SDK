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

	bool GetIsModPaidStatus(bool* ForcePaid, bool* ForcePurchased, class UObject** __WorldContext);
	class UUI_GameSlot_C* CreateModPageFromStandalone(class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	bool GetIsModValid(class UObject** __WorldContext, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class FString DebugMod(const struct FInstallProgressMod& InstallProgressMod, class UObject* WorldContextObject, bool* Debug_BroadcastEvent, bool* DebugInstallingUpdating, class UObject** __WorldContext, struct FInstallProgressMod* DebugingMod, enum class EGameModsEvent CalledEvent, class UObject** Owner, int32* CallFunc_ReplaceInline_ReturnValue, class FString* CallFunc_GetModName_Name, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool* K2Node_SwitchEnum_CmpSuccess);
	int64 Is_There_Enough_Space_to_Install_Mod(int64* DiskSpace, class UObject** __WorldContext, bool* EnoughSpace, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue);
	double GetProcessedBarProgress(enum class ELibraryProgressState* InstallProgressState, class UObject** __WorldContext, double ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double K2Node_Select_Default);
	bool GetIsModAvailable(class UObject** __WorldContext);
	int32 CreateModPageFromID(class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	class UUI_GameSlot_C* CreateModPageFromStoreMenu(class UUI_StoreMenu_C** UI_StoreMenu, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	bool FormatDownloadNumber(int64 Value, class UObject** __WorldContext, class FText* FinalAmount, int64 CallFunc_Divide_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, const class FString& CallFunc_GetSubstring_ReturnValue_1, bool* CallFunc_Less_Int64Int64_ReturnValue, bool* CallFunc_Less_Int64Int64_ReturnValue_1);
	bool GetModVersion(class UObject** __WorldContext, class FText* FinalAmount, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, bool* CallFunc_IsNumeric_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, const TArray<class FString>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, const class FString& CallFunc_Array_Get_Item_2, int32* CallFunc_ReplaceInline_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue);
	struct FInstallProgressMod GetDownloadCount(class UObject** __WorldContext, class FText* FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	struct FInstallProgressMod GetModName(class UObject** __WorldContext, class FString* Name);
	class FText GetModSize(class UObject** __WorldContext, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item, const class FString& CallFunc_FormatFileSize_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class FString GetAuthorName(class UObject** __WorldContext, class FString* CombinedAuthorsNames, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, bool CallFunc_IsEmpty_ReturnValue);
	struct FButtonStyle CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject** __WorldContext, struct FButtonStyle* ButtonStyle, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, struct FLinearColor* CallFunc_Multiply_LinearColorFloat_ReturnValue, struct FLinearColor* CallFunc_Multiply_LinearColorFloat_ReturnValue_1);
	uint8 HEXtoByte(class FString* First_value, class UObject** __WorldContext, uint8* InputPin1, TArray<class FString>* HexDigits, const TArray<class FString>& K2Node_MakeArray_Array, int32* CallFunc_Array_Find_ReturnValue, int32* CallFunc_Array_Find_ReturnValue_1);
	struct FColor HEXtoSRGB(class FString* String, class UObject** __WorldContext, struct FColor* Color, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, uint8* CallFunc_HEXtoByte_InputPin1, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5, uint8* CallFunc_HEXtoByte_InputPin1_1, const class FString& CallFunc_Array_Get_Item_6, const class FString& CallFunc_Array_Get_Item_7, uint8* CallFunc_HEXtoByte_InputPin1_2, uint8* CallFunc_HEXtoByte_InputPin1_3);
	int32 SRGBtoHEX(struct FColor* Color, class UObject** __WorldContext, const class FString& ReturnValue, TArray<class FString>* String, const TArray<uint8>& K2Node_MakeArray_Array, uint8 CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_ByteToHex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FString* CallFunc_JoinStringArray_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	class FString ByteToHex(uint8* InputPin, class UObject** __WorldContext, const class FString& ReturnValue, TArray<class FString>* HexDigits, const TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1);
	bool SetFocusedWidget(class UWidget* Widget, class UObject** __WorldContext, class UUI_StoreMenu_C* CallFunc_Array_Get_Item);
	TArray<class FString> TextLimit(int32 Limit, class FString* String, class UObject** __WorldContext, const class FString& CallFunc_StringLimit_NewString, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	enum class ENUM_InputDevices CheckPlayerInputDevices(class UObject** __WorldContext, bool Temp_bool_Variable, class UUI_StoreMenu_C* CallFunc_Array_Get_Item, enum class ENUM_InputDevices K2Node_Select_Default);
	class FString StringLimit(class FString* String, int32 Limit, class UObject** __WorldContext, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	class FString ErrorMessage(class UObject** Object, class UObject** __WorldContext);
};

}


