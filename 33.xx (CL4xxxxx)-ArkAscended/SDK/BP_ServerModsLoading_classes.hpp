#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x918 - 0x758)
// WidgetBlueprintGeneratedClass BP_ServerModsLoading.BP_ServerModsLoading_C
class UBP_ServerModsLoading_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x768(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x770(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_177;                                         // 0x778(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                IMG_BackGround;                                    // 0x780(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_102;                                   // 0x788(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp, NonTransactional, AutoWeak)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x798(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ServerName;                                   // 0x7A0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference)
	TArray<struct FInstallProgressMod>           Mods_to_Download;                                  // 0x7B0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ModIndex;                                          // 0x7C0(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BAF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x7C8(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            CompetedEvent;                                     // 0x7D8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x7E8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FInstallProgressMod>      ModsById;                                          // 0x7F8(0x50)(Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FileById;                                          // 0x848(0x50)(EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  InstallingDots;                                    // 0x898(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalModsSize;                                     // 0x8B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x8B8(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentModsSize;                                   // 0x908(0x8)(Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Errors;                                            // 0x910(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Success;                                           // 0x914(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	void PlayFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool AddToProgressSize(int64* Value, const TArray<int64>& CallFunc_Map_Values_Values);
	void AssureClientModsUpdated_OnUpdatedFinished(TArray<struct FInstalledMod>* Installed_mods);
	bool AssureClientModsUpdated_OnProgress();
	FDelegateProperty_ DownloadAllModsByFileIDs(class FText* ServerName, TArray<int64>* ModsToDownload, TArray<struct FInstallProgressMod>* Mods_to_Download, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	TArray<struct FFormatArgumentData> Update_Downloading_Proggress_Text(enum class ELibraryProgressState* PregressState, int32* Progress, int64* TransferredBytes, enum class ELibraryProgressState* Temp_byte_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Format_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool* Temp_bool_Variable, class FText* K2Node_Select_Default, class FText* CallFunc_Format_ReturnValue_2, class FText* K2Node_Select_Default_1);
	TArray<struct FFormatArgumentData> UpdateTexts(int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* CallFunc_Format_ReturnValue);
	int32 CalculateTatalModsSize();
	TArray<struct FFormatArgumentData> UpdateProgressBar(int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	FDelegateProperty_ GetDelegate(FDelegateProperty_ CompletedDelegate, FDelegateProperty_ ErrorDelegate);
	int32 CheckIfAllDownloaded(bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	int32 ParsingModsFile();
	bool ParsingMods();
	TArray<struct FFormatArgumentData> SetDounloadingCountText(int32* CallFunc_Int32_AddOne_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue);
	struct FCFCoreError Mod_Installing_Error(int32* CallFunc_Int32_AddOne_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1);
	void ModInstallingSuccess(struct FInstalledMod* InstalledMod, int32* CallFunc_Int32_AddOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue_1);
	void Construct();
	void OnSuccess();
	struct FCFCoreError OnError();
	struct FKey ControllerAction(enum class EViewState State);
	void DelayComplition();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void Destruct();
	float Tick();
	bool ExecuteUbergraph_BP_ServerModsLoading(class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void ErrorEvent__DelegateSignature();
	void CompetedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}


