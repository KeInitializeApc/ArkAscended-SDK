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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x768(0x8)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_92;                                          // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_177;                                         // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UProgressBar*                          ProgressBar_102;                                   // 0x780(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, AutoWeak)
	class UTextBlock*                            SERVER_NAME;                                       // 0x788(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x790(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x798(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, RepNotify)
	TArray<struct FCFCoreMod>                    Mods_to_Download;                                  // 0x7A8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ModIndex;                                          // 0x7B8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4444[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x7C0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ComplitedEvent;                                    // 0x7D0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x7E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FCFCoreMod>               ModsById;                                          // 0x7F0(0x50)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FileById;                                          // 0x840(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                InstallingDots;                                    // 0x890(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalModsSize;                                     // 0x8A0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x8A8(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentModsSize;                                   // 0x8F8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Errors;                                            // 0x900(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Success;                                           // 0x904(0x4)(EditFixedSize, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	bool BPEscapeClosed();
	void BP_ServerModsLoading_AutoGenFunc1(const TArray<struct FInstalledMod>& Installed_mods);
	struct FCFCoreMod BP_ServerModsLoading_AutoGenFunc();
	class UCFCoreSubsystem* StartDownload_0(const TArray<int64>& ModsToDownload, const TArray<struct FCFCoreMod>& Mods_to_Download);
	TArray<struct FFormatArgumentData> Update_Downloading_Proggress_Text_New(enum class ELibraryProgressState PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, struct FCFCoreFileSize* CallFunc_BreakFileSize_ReturnValue, struct FCFCoreFileSize* CallFunc_BreakFileSize_ReturnValue_1, int32* CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default);
	TArray<struct FFormatArgumentData> UpdateTexts(int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue);
	bool CalculateTatalModsSize(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, struct FFile* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, int64* CallFunc_Add_Int64Int64_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	float UpdateProgressBar(int64* CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int64* CallFunc_Divide_Int64Int64_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_* CompletedDelegate, FDelegateProperty_* ErrorDelegate);
	bool CheckIfAllDownloaded(int32* CallFunc_Array_Length_ReturnValue);
	bool ParsingModsFile(int32* CallFunc_Array_Length_ReturnValue, struct FFile* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue);
	bool ParsingMods(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	TArray<struct FFormatArgumentData> Update_Downloading_Proggress_Text(enum class ELibraryProgressState PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32* CallFunc_Len_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default);
	TArray<struct FFormatArgumentData> SetDounloadingCountText(int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue);
	struct FCFCoreError ModInstallingError(int32* CallFunc_Int32_AddOne_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1);
	void ModInstallingSuccess(const struct FInstalledMod& InstalledMod, int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1);
	bool ModInstallingProgress(struct FLibraryProgress* Progress, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int64>* CallFunc_Map_Values_Values, int32* CallFunc_Array_Length_ReturnValue, int64* CallFunc_Array_Get_Item, int64* CallFunc_Add_Int64Int64_ReturnValue);
	bool Downloading(int32 CallFunc_Add_IntInt_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item, struct FCFCoreMod* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue);
	class FText StartDownload(const TArray<struct FCFCoreMod>& ModsToDownload);
	void Construct();
	void OnSuccess();
	struct FCFCoreError OnError();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	float Tick(struct FGeometry* MyGeometry);
	void DelayComplitedEvent();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	bool ExecuteUbergraph_BP_ServerModsLoading(struct FCFCoreMod* CallFunc_Array_Get_Item, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void ErrorEvent__DelegateSignature();
	void ComplitedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}


