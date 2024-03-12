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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UTextBlock*                            DOUNLOADING_PROGGRESS;                             // 0x768(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DOWNLOAD_MODS_COUNT;                               // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_177;                                         // 0x778(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                IMG_BackGround;                                    // 0x780(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_102;                                   // 0x788(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, AutoWeak)
	class UTextBlock*                            TEXT_MODS_DOWNLOAD_COUNT;                          // 0x790(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PERCENT;                                      // 0x798(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ServerName;                                   // 0x7A0(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x7A8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	TArray<struct FInstallProgressMod>           Mods_to_Download;                                  // 0x7B0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ModIndex;                                          // 0x7C0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4E91[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x7C8(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            CompetedEvent;                                     // 0x7D8(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ErrorEvent;                                        // 0x7E8(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FInstallProgressMod>      ModsById;                                          // 0x7F8(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FileById;                                          // 0x848(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  InstallingDots;                                    // 0x898(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalModsSize;                                     // 0x8B0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, int64>                           TempCurrentModsSize;                               // 0x8B8(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CurrentModsSize;                                   // 0x908(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Errors;                                            // 0x910(0x4)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Success;                                           // 0x914(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UBP_ServerModsLoading_C* GetDefaultObj();

	class UUMGSequencePlayer* PlayFadeInAnimation();
	bool AddToProgressSize(int64 Key, int64* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<int64>* CallFunc_Map_Values_Values, int64 CallFunc_Array_Get_Item, int64 CallFunc_Add_Int64Int64_ReturnValue);
	TArray<struct FInstalledMod> AssureClientModsUpdated_OnUpdatedFinished();
	bool AssureClientModsUpdated_OnProgress();
	class UCFCoreSubsystem* DownloadAllModsByFileIDs(TArray<struct FInstallProgressMod>* Mods_to_Download);
	class FText Update_Downloading_Proggress_Text(int64 ModId, int64 FileId, class FText* Temp_text_Variable, enum class ELibraryProgressState Temp_byte_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Len_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, bool* CallFunc_Greater_IntInt_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue_1, int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, bool Temp_bool_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, class FText K2Node_Select_Default_1);
	class FText UpdateTexts(int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	int32 CalculateTatalModsSize(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, struct FCFCoreFileSize* CallFunc_Get_Mod_Size_SizeStruct, class FText CallFunc_Get_Mod_Size_SizeInText, int64 CallFunc_Get_Mod_Size_bytes, int32 Temp_int_Array_Index_Variable_1, const struct FFile& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1);
	class FText UpdateProgressBar(int64 CallFunc_Divide_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, double* CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_* CompletedDelegate, FDelegateProperty_ ErrorDelegate);
	int32 CheckIfAllDownloaded(bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	int32 ParsingModsFile(int32 Temp_int_Array_Index_Variable, const struct FFile& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable);
	bool ParsingMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	class FText SetDounloadingCountText(int64* CallFunc_Conv_IntToInt64_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	int32 Mod_Installing_Error();
	int32 ModInstallingSuccess(struct FInstalledMod* InstalledMod);
	void Construct();
	void OnSuccess();
	struct FCFCoreError OnError();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	void DelayComplition();
	void BndEvt__BP_ServerModsLoading_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void Destruct();
	float Tick(struct FGeometry* MyGeometry);
	class UCFCoreSubsystem* ExecuteUbergraph_BP_ServerModsLoading(int32* EntryPoint, const struct FInstallProgressMod& CallFunc_Array_Get_Item, struct FKey* K2Node_CustomEvent_Key, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void ErrorEvent__DelegateSignature();
	void CompetedEvent__DelegateSignature();
	void BackEvent__DelegateSignature();
};

}


