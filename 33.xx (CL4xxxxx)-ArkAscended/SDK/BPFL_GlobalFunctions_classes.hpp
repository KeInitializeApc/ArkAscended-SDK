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

	bool DidAllTheModsGetBought(TArray<int64>* ModsBought, TArray<int64>* ModsRequested, class UObject** __WorldContext, bool ReturnValue, TArray<int64>* InitialList, bool* CallFunc_Array_Contains_ReturnValue);
	class FString DEBUG_Premium_PurchasedMods(TArray<int64>* Array, class UObject** __WorldContext, class FString* ModList, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue);
	class FString DEBUG_Premium_WaitingBuyResponse(TArray<int64>* Array, class UObject** __WorldContext, class FString* ModList, int32* CallFunc_Array_LastIndex_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	struct FInstallProgressMod GetIsModPremium(class UObject** __WorldContext, struct FPremiumDetails* Premium_Details);
	bool GetNotifManager(class UObject** __WorldContext, class UUI_NotificationManager_C** Output);
	int32 GetIsModPaidStatus(TArray<int64>* PurchasedModsIDs, class UObject** __WorldContext, bool* Premium, bool* Purchased, double Tier_Price, const class FString& Currency_Symbol, double* K2Node_FunctionResult_Tier_Price_ImplicitCast, double* K2Node_FunctionResult_Tier_Price_ImplicitCast_1);
	class UUI_ModPage_C* CreateModPageFromStandalone(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue);
	bool GetIsModValid(class UObject** __WorldContext);
	double DebugMod(struct FInstallProgressMod* InstallProgressMod, bool Debug_BroadcastEvent, enum class EGameModsEvent Event, bool DebugInstallingUpdating, TArray<int64>* ModPurchasedIDs, class UObject** __WorldContext, const struct FInstallProgressMod& DebugingMod, const class FString& TotalPrint, class UObject** Owner, enum class EInstallStatus* Temp_byte_Variable, int32 CallFunc_ReplaceInline_ReturnValue, enum class EInstallStatus* Temp_byte_Variable_1, const struct FPremiumDetails& CallFunc_GetIsModPremium_Premium_Details, class FString* K2Node_Select_Default, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* K2Node_Select_Default_1, class FString* CallFunc_SelectString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_GetModName_Name, bool CallFunc_GetIsModAvailable_Is_Available, bool CallFunc_GetIsModValid_IsValid);
	int64 Is_There_Enough_Space_to_Install_Mod(int64* DiskSpace, struct FInstallProgressMod* ModToInstall, class UObject** __WorldContext, bool* EnoughSpace, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue);
	double GetProcessedBarProgress(enum class ELibraryProgressState* InstallProgressState, class UObject** __WorldContext, double ReturnValue, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue);
	struct FInstallProgressMod GetIsModAvailable(class UObject** __WorldContext, bool* Is_Available);
	class UUI_ModPage_C* CreateModPageFromID(int64 Mod_ID, int32 DrawUIOnZOrder, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue);
	class UUI_ModPage_C* CreateModPageFromStoreMenu(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef, class UUI_StoreMenu_C* UI_StoreMenu, class UObject** __WorldContext, class UUI_ModPage_C* ReturnValue);
	bool FormatDownloadNumber(int64* Value, class UObject** __WorldContext, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_GetSubstring_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3);
	bool GetModVersion(class UObject** __WorldContext, TArray<class FString>* NameLikeChar, class FString* ModsFileName, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* Temp_bool_Variable, class FText* K2Node_Select_Default, int32 CallFunc_ReplaceInline_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class FString* CallFunc_GetSubstring_ReturnValue);
	class FText GetDownloadCount(class UObject** __WorldContext);
	struct FInstallProgressMod GetModName(class UObject** __WorldContext, class FString* Name);
	bool Get_Mod_Size(class UObject** __WorldContext, const struct FCFCoreFileSize& SizeStruct, class FText* SizeInText, int64 Bytes, int64 CallFunc_MaxInt64_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	class FString GetAuthorName(class UObject** __WorldContext, const class FString& CombinedAuthorsNames, class FString* Local_TotalAuthors);
	struct FSlateBrush CreateButtonStyleFromSingleColor(struct FLinearColor* Color, class UObject** __WorldContext, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle);
	int32 HEXtoByte(class FString* First_value, class FString* Second_value, class UObject** __WorldContext, uint8* InputPin1, TArray<class FString>* HexDigits, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1, int32* CallFunc_Multiply_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue);
	class FString HEXtoSRGB(class UObject** __WorldContext, struct FColor* Color, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, uint8 CallFunc_HEXtoByte_InputPin1, uint8 CallFunc_HEXtoByte_InputPin1_1, uint8 CallFunc_HEXtoByte_InputPin1_2, uint8 CallFunc_HEXtoByte_InputPin1_3, struct FColor* K2Node_MakeStruct_Color);
	int32 SRGBtoHEX(struct FColor* Color, class UObject** __WorldContext, const class FString& ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	class FString ByteToHex(uint8* InputPin, class UObject** __WorldContext, const class FString& ReturnValue, TArray<class FString>* HexDigits, int32* CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue, int32* CallFunc_And_IntInt_ReturnValue_1);
	class UUI_StoreMenu_C* SetFocusedWidget(class UObject** __WorldContext, bool* CallFunc_IsValid_ReturnValue);
	int32 TextLimit(class UTextBlock** Text, int32* Limit, class UObject** __WorldContext, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class UUI_StoreMenu_C* CheckPlayerInputDevices(class UObject** __WorldContext, enum class ENUM_InputDevices UsingGamepad_, bool* Temp_bool_Variable, enum class ENUM_InputDevices* Temp_byte_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_InputDevices* Temp_byte_Variable_1, enum class ENUM_InputDevices* K2Node_Select_Default);
	class FString StringLimit(int32* Limit, class UObject** __WorldContext, class FString* NewString, class FString* LocalString, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void ErrorMessage(class UObject** Object, class FString* ErrorMessage, class UObject** __WorldContext);
};

}


