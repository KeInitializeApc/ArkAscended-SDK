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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x760(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x768(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_92;                                          // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_177;                                         // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UProgressBar*                          ProgressBar_102;                                   // 0x780(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, AutoWeak)
	class UTextBlock*                            SERVER_NAME;                                       // 0x788(0x8)(Edit, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x790(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x798(0x8)(Edit, ConstParm, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A0(0x8)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, RepNotify)
	TArray<struct FCFCoreMod>                    Mods_to_Download;                                  // 0x7A8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ModIndex;                                          // 0x7B8(0x4)(Edit, BlueprintVisible, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E77[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x7C0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ComplitedEvent;                                    // 0x7D0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x7E0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FCFCoreMod>               ModsById;                                          // 0x7F0(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FileById;                                          // 0x840(0x50)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                InstallingDots;                                    // 0x890(0x10)(BlueprintVisible, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalModsSize;                                     // 0x8A0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x8A8(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentModsSize;                                   // 0x8F8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Errors;                                            // 0x900(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Success;                                           // 0x904(0x4)(EditFixedSize, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	TArray<struct FInstalledMod> BP_ServerModsLoading_AutoGenFunc1();
	struct FLibraryProgress BP_ServerModsLoading_AutoGenFunc(const struct FModsUpdateProgress& UpdateProgress, const struct FCFCoreMod& Mod);
	class UCFCoreSubsystem* StartDownload_0(class FText ServerName, const TArray<int64>& ModsToDownload, const TArray<struct FCFCoreMod>& Mods_to_Download);
	struct FFormatArgumentData Update_Downloading_Proggress_Text_New(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, enum class ELibraryProgressState* Temp_byte_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FString* CallFunc_Concat_StrStr_ReturnValue, class FText* CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, class FText* CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default);
	struct FFormatArgumentData UpdateTexts(int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	bool CalculateTatalModsSize(int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	struct FFormatArgumentData UpdateProgressBar(double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	FDelegateProperty_ GetDelegate();
	int32 CheckIfAllDownloaded(bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool ParsingModsFile(const struct FCFCoreMod& Mod, int32* CallFunc_Add_IntInt_ReturnValue);
	bool ParsingMods(int32* CallFunc_Add_IntInt_ReturnValue);
	struct FFormatArgumentData Update_Downloading_Proggress_Text(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, enum class ELibraryProgressState* Temp_byte_Variable, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Divide_DoubleDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, bool* CallFunc_Map_Find_ReturnValue, bool* CallFunc_Map_Find_ReturnValue_1, double* CallFunc_Conv_IntToDouble_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, class FText* CallFunc_Format_ReturnValue_1, class FText* K2Node_Select_Default);
	struct FFormatArgumentData SetDounloadingCountText(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue);
	int32 ModInstallingError(bool* CallFunc_NotEqual_ByteByte_ReturnValue);
	int32 ModInstallingSuccess(const struct FInstalledMod& InstalledMod);
	int64 ModInstallingProgress(bool CallFunc_BooleanOR_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool Downloading(int32* CallFunc_Add_IntInt_ReturnValue);
	void StartDownload(class FText ServerName, const TArray<struct FCFCoreMod>& ModsToDownload);
	void Construct();
	void OnSuccess();
	struct FCFCoreError OnError();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	float Tick(const struct FGeometry& MyGeometry);
	void DelayComplitedEvent();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	float ExecuteUbergraph_BP_ServerModsLoading(int32* EntryPoint, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State);
	void ErrorEvent__DelegateSignature();
	void ComplitedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}

