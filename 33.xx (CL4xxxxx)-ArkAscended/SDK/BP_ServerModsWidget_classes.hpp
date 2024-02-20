#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x421 (0xB79 - 0x758)
// WidgetBlueprintGeneratedClass BP_ServerModsWidget.BP_ServerModsWidget_C
class UBP_ServerModsWidget_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnLoadedFadeInRestOfPage;                          // 0x760(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnStart;                                     // 0x768(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ExitOptionsMenu;                            // 0x770(0x8)(ConstParm, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_OptionsMenu;                                // 0x778(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HBOX_NOT_ENOUGH;                                   // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_3;                                           // 0x788(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_9;                                           // 0x790(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, EditorOnly)
	class UImage*                                Image_145;                                         // 0x798(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_247;                                         // 0x7A0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x7A8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_NOT_ENOUGH;                                  // 0x7B0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AvailableSpace;                                // 0x7B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BG;                                            // 0x7C0(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BG_1;                                          // 0x7C8(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_BG_2;                                          // 0x7D0(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x7D8(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_DownloadSize;                                  // 0x7E0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Line;                                          // 0x7E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Line_1;                                        // 0x7F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_Line_5;                                        // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UImage*                                IMG_ModsToDownlaod;                                // 0x800(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_TotalModsonServer;                             // 0x808(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Mods_Holder;                                       // 0x810(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_PurchaseREquiredTopLeftNotif;              // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_PurchaseSummary;                           // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBP_ServerModsSubMenu_C*               ServerModsSubMenu;                                 // 0x828(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_Purchase;                                   // 0x830(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switched_DownloadPurchase;                         // 0x838(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_FULLPRICE;                                      // 0x840(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FREESPACE;                                    // 0x848(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_INFO;                                         // 0x850(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NEED_DOWNLOAD;                                // 0x858(0x8)(Edit, ConstParm, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SERVER_NAME;                                  // 0x860(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SIZE;                                         // 0x868(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_TOTAL;                                        // 0x870(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_YouWillNotBeChargedYet;                       // 0x878(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x880(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_Global_Download;                     // 0x888(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0x890(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x898(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
	class UUI_GameSlot_C*                        UI_GameSlot_1;                                     // 0x8A0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, Interp)
	class UUI_GameSlot_C*                        UI_GameSlot_2;                                     // 0x8A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, RepNotify, Interp)
	class UUI_GameSlot_C*                        UI_GameSlot_3;                                     // 0x8B0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_4;                                     // 0x8B8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, RepNotify, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_5;                                     // 0x8C0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, Interp, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_269;                                   // 0x8C8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, Interp, NonTransactional, EditorOnly, AssetRegistrySearchable)
	class UUI_GameSlot_C*                        UI_GameSlot_547;                                   // 0x8D0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient, NonTransactional, SimpleDisplay)
	class UVerticalBox*                          VB_ModsList;                                       // 0x8D8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWBP_PriceColumns_C*                   WBP_PriceColumns;                                  // 0x8E0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UWrapBox*                              WrapBox_ModList;                                   // 0x8E8(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            RepotrEvent;                                       // 0x8F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x900(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            JoinEvent;                                         // 0x910(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x920(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMe                                   SignInCredentials;                                 // 0x930(0x40)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x970(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AE5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                FilesIds;                                          // 0x978(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                ModsIds;                                           // 0x988(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           ModList;                                           // 0x998(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FilesByModId;                                      // 0x9A8(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                PurchasedModIDs;                                   // 0x9F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	TMap<double, int32>                          PricingList;                                       // 0xA08(0x50)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	double                                       FullPrice;                                         // 0xA58(0x8)(BlueprintReadOnly, Net, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Server_Name;                                       // 0xA60(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int64                                        Server_ID;                                         // 0xA78(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            StartDownloads;                                    // 0xA80(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xA90(0x10)(BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	class UBP_ServerModsLoading_C*               UI_ServerModLoading;                               // 0xAA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Error;                                             // 0xAA8(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	struct FModsDirInfo                          SpaceModsDirInfo;                                  // 0xAB8(0x20)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalDownloadSize;                                 // 0xAD8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SubMenuVisible;                                    // 0xAE0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          Handle_PremiumCheck;                               // 0xAE8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0xAF0(0x88)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient)
	bool                                         TESTING_ForceAllModsBought;                        // 0xB78(0x1)(Edit, ConstParm, Net, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsWidget_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	struct FKey BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue);
	void DEBUG_ForceAllModsBought();
	bool CreateModList(class UWrapBoxSlot** CallFunc_AddChildToWrapBox_ReturnValue);
	void DebugDiskSizeUpdate();
	int64 AddToTotalSize();
	bool BP_ServerModsWidget_AutoGenFunc(enum class EViewState State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	bool GetEnoughSpaceToDownloadAllMods(bool ReturnValue);
	bool GetCompleteInstalledModsStatus(int32* TotalInstalledMods, int32 TotalNonInstalledMods, const TArray<struct FInstallProgressMod>& NonInstalledModList, TArray<struct FInstallProgressMod>* TempListNo, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	bool UpdatePurchaseButtonEnabled(const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs);
	void UpdateDownloadButtonEnabled();
	void UpdateFreeSpaceText(bool* CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void UpdateInfo();
	bool UpdatePurchaseState(class FText PurchaseAndDownloadModsText, class FText* DownloadModsText, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, int32* CallFunc_SelectInt_ReturnValue, class FText* K2Node_Select_Default_2);
	void UpdateWholePage();
	FDelegateProperty_ InitializePageState(class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue);
	TArray<struct FFile> Debug_SuccessFileInfosFromIDs();
	TArray<int64> Debug_RequestFileInfosFromIDs();
	int32 CreateFileModToIDList(TArray<struct FFile>* Array, TArray<int64>* ModsIds, int32* CallFunc_Array_Add_ReturnValue);
	void InitDropdownMenu(bool* CallFunc_IsValid_ReturnValue);
	bool GetAnyPremiumModsExist(bool* Exist);
	void AnimationPlayFadeInOnInit(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void AnimationPlayFadeInOnStart(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool GetAllModsPurchased(TArray<int64>* NotPurchasedModIDs, bool* CallFunc_Array_Contains_ReturnValue);
	void DebugLogin();
	bool DestroyPremiumBuyHandle();
	class UVerticalBoxSlot* CreateModPricingList(class FText* CallFunc_Format_ReturnValue, TArray<double>* CallFunc_Map_Keys_Keys, double CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue);
	bool UpdatePageDiskSpaceAvailability(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility* K2Node_Select_Default, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue);
	FDelegateProperty_ Get_Server_Mods_Delegate(FDelegateProperty_* FavoriteEvent, FDelegateProperty_ ErrorEvent);
	TArray<struct FInstallProgressMod> EndDownloadCheck(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue);
	int32 UpdateTexts(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_FormatFileSize_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue);
	struct FCFCoreError OnError();
	void LoadingBackEvent();
	void CompletedEvent();
	void ErrorEvent();
	void StartDowloadingMod();
	void CalculateFreeSpaceAvailable();
	void OnModsDirInfo(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError OnModsDirInfoError();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
	class FString OnSuccessGeneratePremium();
	struct FCFCoreError OnErrorGeneratePremium();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void Event_On_CFCore_Init();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature();
	void Event_Result(bool* Is_authenticated);
	struct FCFCoreError Event_On_Get_User_Info_Failed();
	void Event_On_Get_User_Info(struct FMe* Me);
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void Event_On_Sync_Installed_Mods_Success();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature();
	void AuthenticateSignIn();
	void OnSuccessSpaceCheck(struct FModsDirInfo* ModsDirInfo);
	struct FCFCoreError OnErrorSpaceCheck();
	void BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PremiumModChecking();
	TArray<int64> OnSuccessPremiumModsCheck();
	struct FCFCoreError FailedPremiumModsChecks();
	TArray<int64> Success();
	struct FCFCoreError FailedToFindPremium();
	TArray<struct FFile> SuccessGetFileInfoByIDs();
	void RefreshPage();
	void BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DisablePurchaseButtonTemporarily();
	void FadeInPageAnim();
	void Destruct();
	float Tick();
	void Construct();
	bool OnAuthenticated();
	FDelegateProperty_ ExecuteUbergraph_BP_ServerModsWidget(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo_1, struct FCFCoreError* K2Node_CustomEvent_error_7, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, struct FCFCoreError* K2Node_CustomEvent_error_6, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, struct FCFCoreError* K2Node_CustomEvent_error_5, bool* Temp_bool_Variable, struct FCFCoreError* K2Node_CustomEvent_error_4, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, struct FCFCoreError* K2Node_CustomEvent_error_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, struct FCFCoreError* K2Node_CustomEvent_error_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FMatchPlatformFilesFilter& K2Node_MakeStruct_MatchPlatformFilesFilter, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_10, TArray<int64>* CallFunc_CreateFileModToIDList_ModsIds, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2, enum class ESlateVisibility* K2Node_Select_Default, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_11, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_bAuth);
	void Error__DelegateSignature();
	void StartDownloads__DelegateSignature(int64 ServerID);
	void BackEvent__DelegateSignature();
	void JoinEvent__DelegateSignature(int64 ServerID);
	void FavoriteEvent__DelegateSignature(int64 ServerID);
	void RepotrEvent__DelegateSignature(int64 ServerID);
};

}


