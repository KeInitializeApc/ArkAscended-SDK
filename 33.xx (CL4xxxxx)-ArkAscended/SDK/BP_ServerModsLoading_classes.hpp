#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x908 - 0x758)
// WidgetBlueprintGeneratedClass BP_ServerModsLoading.BP_ServerModsLoading_C
class UBP_ServerModsLoading_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x768(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                Image_92;                                          // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_177;                                         // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UProgressBar*                          ProgressBar_102;                                   // 0x780(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, AutoWeak)
	class UTextBlock*                            SERVER_NAME;                                       // 0x788(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x790(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x798(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, RepNotify)
	TArray<struct FCFCoreMod>                    Mods_to_Download;                                  // 0x7A8(0x10)(ConstParm, ExportObject, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        ModIndex;                                          // 0x7B8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3229[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x7C0(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ComplitedEvent;                                    // 0x7D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x7E0(0x10)(BlueprintVisible, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	TMap<int64, struct FCFCoreMod>               ModsById;                                          // 0x7F0(0x50)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TMap<int64, struct FFile>                    FileById;                                          // 0x840(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class FString                                InstallingDots;                                    // 0x890(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	int64                                        TotalModsSize;                                     // 0x8A0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x8A8(0x50)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int64                                        CurrentModsSize;                                   // 0x8F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        Errors;                                            // 0x900(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Success;                                           // 0x904(0x4)(EditFixedSize, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	void BPEscapeClosed(bool ReturnValue);
	TArray<struct FInstalledMod> BP_ServerModsLoading_AutoGenFunc1();
	void BP_ServerModsLoading_AutoGenFunc(struct FModsUpdateProgress* UpdateProgress, const struct FLibraryProgress& ModInstallProgress, const struct FCFCoreMod& Mod);
	TArray<int64> StartDownload_0(class FText ServerName, const TArray<struct FCFCoreMod>& Mods_to_Download, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	class FText Update_Downloading_Proggress_Text_New(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue_1, int64* CallFunc_Conv_IntToInt64_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText K2Node_Select_Default);
	class FText UpdateTexts(int32* CallFunc_Array_Length_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	int32 CalculateTatalModsSize(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	float UpdateProgressBar(int64 CallFunc_Divide_Int64Int64_ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, int32* CallFunc_Conv_Int64ToInt_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	FDelegateProperty_ GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_* CompletedDelegate);
	void CheckIfAllDownloaded(int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	int32 ParsingModsFile(const struct FCFCoreMod& Mod, int32* CallFunc_Array_Length_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue);
	int32 ParsingMods(int32 Temp_int_Loop_Counter_Variable, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class FText Update_Downloading_Proggress_Text(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, int32* CallFunc_Conv_Int64ToInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool* CallFunc_Map_Find_ReturnValue, bool* CallFunc_Map_Find_ReturnValue_1, int32* CallFunc_Conv_Int64ToInt_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText K2Node_Select_Default);
	class FText SetDounloadingCountText(int32* CallFunc_Array_Length_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array);
	int32 ModInstallingError();
	int32 ModInstallingSuccess(const struct FInstalledMod& InstalledMod);
	int64 ModInstallingProgress(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_BooleanOR_ReturnValue, TArray<int64>* CallFunc_Map_Values_Values, int32* CallFunc_Array_Length_ReturnValue, int64 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	int32 Downloading(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const struct FCFCoreMod& CallFunc_Array_Get_Item, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	TArray<struct FCFCoreMod> StartDownload(class FText ServerName);
	void Construct();
	void OnSuccess();
	struct FCFCoreError OnError();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	float Tick(const struct FGeometry& MyGeometry);
	void DelayComplitedEvent();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	bool ExecuteUbergraph_BP_ServerModsLoading(int32 EntryPoint, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FCFCoreError& K2Node_CustomEvent_error, const struct FCFCoreMod& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EViewState K2Node_CustomEvent_State, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void ErrorEvent__DelegateSignature();
	void ComplitedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}


