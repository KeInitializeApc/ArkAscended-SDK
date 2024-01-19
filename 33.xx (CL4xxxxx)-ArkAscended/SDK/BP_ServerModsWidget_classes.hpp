#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x370 (0xAC8 - 0x758)
// WidgetBlueprintGeneratedClass BP_ServerModsWidget.BP_ServerModsWidget_C
class UBP_ServerModsWidget_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Notif;                                             // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UButton*                               BUTTON_BACK_FROM_SUBMENU;                          // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UButton*                               Button_Menu;                                       // 0x770(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x778(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HBOX_NOT_ENOUGH;                                   // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_9;                                           // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly)
	class UImage*                                Image_145;                                         // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_247;                                         // 0x7B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_866;                                         // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, AutoWeak, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_NOT_ENOUGH;                                  // 0x7D0(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UImage*                                IMG_BG;                                            // 0x7D8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_BG_1;                                          // 0x7E0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference, Interp)
	class UImage*                                IMG_BG_2;                                          // 0x7E8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x7F0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Line;                                          // 0x7F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Line_1;                                        // 0x800(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Line_2;                                        // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_Line_3;                                        // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Line_4;                                        // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UImage*                                IMG_Line_5;                                        // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UImage*                                IMG_Thumbnail;                                     // 0x828(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Mods_Holder;                                       // 0x830(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UOverlay*                              O_PSUMMARY;                                        // 0x838(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	class UOverlay*                              O_TOPLEFTREQUERIED;                                // 0x840(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBP_ServerModsSubMenu_C*               ServerModsSubMenu;                                 // 0x848(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TB_FULLPRICE;                                      // 0x850(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FREESPACE;                                    // 0x858(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_INFO;                                         // 0x860(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x868(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x870(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NEED_DOWNLOAD;                                // 0x878(0x8)(Edit, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SERVER_NAME;                                  // 0x880(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SIZE;                                         // 0x888(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_TOTAL;                                        // 0x890(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextBlock_254;                                     // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x8A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Ark_Global_Base_299;                     // 0x8A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, NonTransactional, EditorOnly, AssetRegistrySearchable)
	class UVerticalBox*                          VB_ModsList;                                       // 0x8B0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UWBP_PriceColumns_C*                   WBP_PriceColumns;                                  // 0x8B8(0x8)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UWrapBox*                              WrapBox_88;                                        // 0x8C0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	int32                                        ModsCount;                                         // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        NeedDownloadCount;                                 // 0x8CC(0x4)(Edit, ExportObject, ReturnParm, InstancedReference, SubobjectReference)
	double                                       DownlaodSize;                                      // 0x8D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x8D8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
	bool                                         IsSubMenuShow;                                     // 0x8E8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B61[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            RepotrEvent;                                       // 0x8F0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x900(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            JoinEvent;                                         // 0x910(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x920(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  Server_Name;                                       // 0x930(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        Server_ID;                                         // 0x948(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            StartDownloads;                                    // 0x950(0x10)(ConstParm, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	int32                                        DownloadCount;                                     // 0x960(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B62[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int64, class UUI_GameSlot_C*>           GameSlorList;                                      // 0x968(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x9B8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBP_ServerModsLoading_C*               Loading;                                           // 0x9C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           ModsOurStruct;                                     // 0x9D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FCFCoreMod>                    ModsToDownload;                                    // 0x9E0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Error;                                             // 0x9F0(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	TArray<int64>                                ModsIds;                                           // 0xA00(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xA10(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        DownlaodSizeInt64;                                 // 0xA30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        ModToDownloadSize;                                 // 0xA38(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         IsAlreadyInstalled;                                // 0xA40(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B63[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FullPrice;                                         // 0xA48(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         IsAllModsPurchased;                                // 0xA50(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                PurchaseMods;                                      // 0xA58(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	TArray<int64>                                FilesIds;                                          // 0xA68(0x10)(Edit, BlueprintVisible, Net, ReturnParm, InstancedReference, SubobjectReference)
	TMap<int64, struct FFile>                    FilesByModId;                                      // 0xA78(0x50)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsWidget_C* GetDefaultObj();

	TArray<struct FInstallProgressMod> OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	bool BPGamepadReleased(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	struct FFile Is_Need_Other_File_Size(int64 ModId, bool Is_Main_File, bool* CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	int32 BP_ServerModsWidget_AutoGenFunc(TArray<struct FFile>* Files, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	double ModsHasPaidMods(TArray<double>* CallFunc_Map_Keys_Keys, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, bool* CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PriceColumns_C* CallFunc_Create_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UVerticalBoxSlot** CallFunc_AddChildToVerticalBox_ReturnValue);
	void CheckIfAllInstalled(bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	bool CheckIfEnoughSpaceOnDisk(int64* FreeDiskSize, bool Temp_bool_Variable, bool* CallFunc_Less_Int64Int64_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	int64 OnResponse(const TArray<struct FInstallProgressMod>& Mods, int32* CallFunc_Array_Length_ReturnValue, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, TMap<double, int32>* K2Node_MakeMap_Map, const struct FFile& CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool* CallFunc_Is_Need_Other_File_Size_Is_Main_File, int64* CallFunc_Is_Need_Other_File_Size_Filesize, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int64 K2Node_Select_Default_1);
	void UpdateInfo(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32* CallFunc_Array_Length_ReturnValue);
	FDelegateProperty_ Get_Server_Mods_Delegate(FDelegateProperty_ JoinEvent);
	int32 EndDownloadCheck(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	class FText UpdateTexts(const class FString& CallFunc_FormatFileSize_ReturnValue);
	int64 UpdateInstalledMods(const TArray<int32>& IDs, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FInstalledMod& CallFunc_Array_Get_Item, int32* CallFunc_Conv_Int64ToInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, const struct FFile& CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool* CallFunc_Is_Need_Other_File_Size_Is_Main_File, int64* CallFunc_Is_Need_Other_File_Size_Filesize, int32* CallFunc_Conv_Int64ToInt_ReturnValue_1, int32* CallFunc_Array_Find_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32* CallFunc_Array_Add_ReturnValue);
	struct FCFCoreError OnError();
	TArray<int64> CreateModsList(class FText ServerName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	void Construct();
	void BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature();
	void Destruct();
	void LoadingBackEvent();
	void CompletedEvent();
	void ErrorEvent();
	void StartDowloadingMod();
	void PullModsDirectoryInfo();
	void CustomEvent(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError CustomEvent_1();
	void NotifyAnimation();
	void BndEvt__BP_ServerModsWidget_Button_ModInstalled_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Base_299_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	int32 ExecuteUbergraph_BP_ServerModsWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_FormatFileSize_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EViewState K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, class UBP_ServerModsLoading_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, const struct FCFCoreError& K2Node_CustomEvent_error, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void Error__DelegateSignature();
	int64 StartDownloads__DelegateSignature();
	void BackEvent__DelegateSignature();
	int64 JoinEvent__DelegateSignature();
	int64 FavoriteEvent__DelegateSignature();
	int64 RepotrEvent__DelegateSignature();
};

}


