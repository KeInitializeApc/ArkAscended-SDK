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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Notif;                                             // 0x760(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UButton*                               BUTTON_BACK_FROM_SUBMENU;                          // 0x768(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UButton*                               BUTTON_MENU;                                       // 0x770(0x8)(ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HBOX_NOT_ENOUGH;                                   // 0x780(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x790(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_9;                                           // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly)
	class UImage*                                Image_145;                                         // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_247;                                         // 0x7B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_866;                                         // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, AutoWeak, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_NOT_ENOUGH;                                  // 0x7D0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_BG;                                            // 0x7D8(0x8)(ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BG_1;                                          // 0x7E0(0x8)(ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_BG_2;                                          // 0x7E8(0x8)(ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x7F0(0x8)(ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_LINE;                                          // 0x7F8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_LINE_1;                                        // 0x800(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_LINE_2;                                        // 0x808(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_LINE_3;                                        // 0x810(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_LINE_4;                                        // 0x818(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UImage*                                IMG_LINE_5;                                        // 0x820(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UImage*                                IMG_Thumbnail;                                     // 0x828(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Mods_Holder;                                       // 0x830(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              O_PSUMMARY;                                        // 0x838(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              O_TOPLEFTREQUERIED;                                // 0x840(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UBP_ServerModsSubMenu_C*               ServerModsSubMenu;                                 // 0x848(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TB_FULLPRICE;                                      // 0x850(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_FREESPACE;                                    // 0x858(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_INFO;                                         // 0x860(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x868(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x870(0x8)(ConstParm, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NEED_DOWNLOAD;                                // 0x878(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SERVER_NAME;                                  // 0x880(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_SIZE;                                         // 0x888(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_TOTAL;                                        // 0x890(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextBlock_254;                                     // 0x898(0x8)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x8A0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_Button_Ark_Global_Base_C*          UI_Button_Ark_Global_Base_299;                     // 0x8A8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, NonTransactional, EditorOnly, AssetRegistrySearchable)
	class UVerticalBox*                          VB_ModsList;                                       // 0x8B0(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UWBP_PriceColumns_C*                   WBP_PriceColumns;                                  // 0x8B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference)
	class UWrapBox*                              WrapBox_88;                                        // 0x8C0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	int32                                        ModsCount;                                         // 0x8C8(0x4)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        NeedDownloadCount;                                 // 0x8CC(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	double                                       DownlaodSize;                                      // 0x8D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x8D8(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         IsSubMenuShow;                                     // 0x8E8(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B66[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            RepotrEvent;                                       // 0x8F0(0x10)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x900(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            JoinEvent;                                         // 0x910(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x920(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Server_Name;                                       // 0x930(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int64                                        Server_ID;                                         // 0x948(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            StartDownloads;                                    // 0x950(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        DownloadCount;                                     // 0x960(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B67[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int64, class UUI_GameSlot_C*>           GameSlorList;                                      // 0x968(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x9B8(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBP_ServerModsLoading_C*               Loading;                                           // 0x9C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           ModsOurStruct;                                     // 0x9D0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FCFCoreMod>                    ModsToDownload;                                    // 0x9E0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Error;                                             // 0x9F0(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	TArray<int64>                                ModsIds;                                           // 0xA00(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xA10(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int64                                        DownlaodSizeInt64;                                 // 0xA30(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int64                                        ModToDownloadSize;                                 // 0xA38(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsAlreadyInstalled;                                // 0xA40(0x1)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B68[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FullPrice;                                         // 0xA48(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsAllModsPurchased;                                // 0xA50(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B69[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                PurchaseMods;                                      // 0xA58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<int64>                                FilesIds;                                          // 0xA68(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TMap<int64, struct FFile>                    FilesByModId;                                      // 0xA78(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsWidget_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	bool BPHighlightWidgetOnStart();
	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPEscapeClosed();
	bool Is_Need_Other_File_Size(int64* MainFileId, bool* Is_Main_File, int64 FileSize, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue);
	bool BP_ServerModsWidget_AutoGenFunc(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FFile* CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	class UVerticalBoxSlot* ModsHasPaidMods(int32* CallFunc_Map_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, double* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void CheckIfAllInstalled(bool* CallFunc_EqualEqual_Int64Int64_ReturnValue);
	bool CheckIfEnoughSpaceOnDisk(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Less_Int64Int64_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	class UWrapBoxSlot* OnResponse(enum class ESlateVisibility Temp_byte_Variable, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, struct FInstallProgressMod* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, TMap<double, int32> K2Node_MakeMap_Map, struct FFile* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_Is_Need_Other_File_Size_Is_Main_File, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class EInstallStatus Temp_byte_Variable_7, enum class ESlateVisibility* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable, int64* K2Node_Select_Default_1, int64* CallFunc_Add_Int64Int64_ReturnValue);
	class UCFCoreSubsystem* UpdateInfo(int32* CallFunc_Array_Length_ReturnValue);
	FDelegateProperty_ Get_Server_Mods_Delegate(FDelegateProperty_* JoinEvent, FDelegateProperty_ BackEvent, FDelegateProperty_ FavoriteEvent, FDelegateProperty_ ErrorEvent);
	bool EndDownloadCheck(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue);
	void UpdateTexts(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	bool UpdateInstalledMods(const TArray<struct FInstalledMod>& Installed_mods, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, struct FInstalledMod* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, struct FCFCoreMod* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, struct FFile* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_1, int64* CallFunc_Add_Int64Int64_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_Is_Need_Other_File_Size_Is_Main_File, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_2, int32* CallFunc_Array_Add_ReturnValue);
	struct FCFCoreError OnError();
	class UCFCoreSubsystem* CreateModsList(int64* ServerID, TArray<int64>* FileIds);
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
	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_BP_ServerModsWidget(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable, struct FModsDirInfo* K2Node_CustomEvent_ModsDirInfo, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void Error__DelegateSignature();
	void StartDownloads__DelegateSignature(int64* ServerID);
	void BackEvent__DelegateSignature();
	void JoinEvent__DelegateSignature(int64* ServerID);
	void FavoriteEvent__DelegateSignature(int64* ServerID);
	void RepotrEvent__DelegateSignature(int64* ServerID);
};

}


