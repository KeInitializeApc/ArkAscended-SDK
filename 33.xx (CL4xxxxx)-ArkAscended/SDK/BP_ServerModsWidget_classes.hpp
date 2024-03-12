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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      OnLoadedFadeInRestOfPage;                          // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnStart;                                     // 0x768(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ExitOptionsMenu;                            // 0x770(0x8)(BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_OptionsMenu;                                // 0x778(0x8)(Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HBOX_NOT_ENOUGH;                                   // 0x780(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_3;                                           // 0x788(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_9;                                           // 0x790(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, EditorOnly)
	class UImage*                                Image_145;                                         // 0x798(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_247;                                         // 0x7A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_326;                                         // 0x7A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_NOT_ENOUGH;                                  // 0x7B0(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_AvailableSpace;                                // 0x7B8(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BG;                                            // 0x7C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BG_1;                                          // 0x7C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_BG_2;                                          // 0x7D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_DownloadSize;                                  // 0x7E0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_LINE;                                          // 0x7E8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_LINE_1;                                        // 0x7F0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_LINE_5;                                        // 0x7F8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UImage*                                IMG_ModsToDownlaod;                                // 0x800(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_TotalModsonServer;                             // 0x808(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Mods_Holder;                                       // 0x810(0x8)(Edit, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_PurchaseREquiredTopLeftNotif;              // 0x818(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Overlay_PurchaseSummary;                           // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBP_ServerModsSubMenu_C*               ServerModsSubMenu;                                 // 0x828(0x8)(EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_Purchase;                                   // 0x830(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       Switched_DownloadPurchase;                         // 0x838(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_FULLPRICE;                                      // 0x840(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_FREESPACE;                                    // 0x848(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_INFO;                                         // 0x850(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NEED_DOWNLOAD;                                // 0x858(0x8)(ConstParm, ExportObject, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SERVER_NAME;                                  // 0x860(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SIZE;                                         // 0x868(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_TOTAL;                                        // 0x870(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_YouWillNotBeChargedYet;                       // 0x878(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x880(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_Global_Download;                     // 0x888(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Purchase_C*      UI_Button_Ark_Global_Purchase;                     // 0x890(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x898(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	class UUI_GameSlot_C*                        UI_GameSlot_1;                                     // 0x8A0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, Interp)
	class UUI_GameSlot_C*                        UI_GameSlot_2;                                     // 0x8A8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, RepNotify, Interp)
	class UUI_GameSlot_C*                        UI_GameSlot_3;                                     // 0x8B0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_4;                                     // 0x8B8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, RepNotify, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_5;                                     // 0x8C0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, Interp, NonTransactional)
	class UUI_GameSlot_C*                        UI_GameSlot_269;                                   // 0x8C8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, Interp, NonTransactional, EditorOnly, AssetRegistrySearchable)
	class UUI_GameSlot_C*                        UI_GameSlot_547;                                   // 0x8D0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, NonTransactional, SimpleDisplay)
	class UVerticalBox*                          VB_ModsList;                                       // 0x8D8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWBP_PriceColumns_C*                   WBP_PriceColumns;                                  // 0x8E0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference)
	class UWrapBox*                              WrapBox_ModList;                                   // 0x8E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            RepotrEvent;                                       // 0x8F0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x900(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            JoinEvent;                                         // 0x910(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x920(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMe                                   SignInCredentials;                                 // 0x930(0x40)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x970(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D04[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                FilesIds;                                          // 0x978(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                ModsIds;                                           // 0x988(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           ModList;                                           // 0x998(0x10)(ConstParm, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<int64, struct FFile>                    FilesByModId;                                      // 0x9A8(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                PurchasedModIDs;                                   // 0x9F8(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<double, int32>                          PricingList;                                       // 0xA08(0x50)(ConstParm, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       FullPrice;                                         // 0xA58(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Server_Name;                                       // 0xA60(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        Server_ID;                                         // 0xA78(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            StartDownloads;                                    // 0xA80(0x10)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xA90(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBP_ServerModsLoading_C*               UI_ServerModLoading;                               // 0xAA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Error;                                             // 0xAA8(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
	struct FModsDirInfo                          SpaceModsDirInfo;                                  // 0xAB8(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        TotalDownloadSize;                                 // 0xAD8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SubMenuVisible;                                    // 0xAE0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D06[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          Handle_PremiumCheck;                               // 0xAE8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0xAF0(0x88)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient)
	bool                                         TESTING_ForceAllModsBought;                        // 0xB78(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_ServerModsWidget_C* GetDefaultObj();

	class UCFCoreUISubsystem* OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool K2Node_SwitchEnum_CmpSuccess);
	bool BPHighlightWidgetOnStart();
	bool BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue);
	void DEBUG_ForceAllModsBought();
	bool CreateModList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UWrapBoxSlot** CallFunc_AddChildToWrapBox_ReturnValue);
	void DebugDiskSizeUpdate();
	void AddToTotalSize(struct FInstallProgressMod* ModInfo, struct FCFCoreFileSize* CallFunc_Get_Mod_Size_SizeStruct, class FText CallFunc_Get_Mod_Size_SizeInText, int64 CallFunc_Get_Mod_Size_bytes, int64 CallFunc_Add_Int64Int64_ReturnValue);
	bool BP_ServerModsWidget_AutoGenFunc(const struct FKey& Key, enum class EViewState State, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	bool GetEnoughSpaceToDownloadAllMods();
	bool GetCompleteInstalledModsStatus(int32* TotalInstalledMods, int32 TotalNonInstalledMods, TArray<struct FInstallProgressMod>* InstalledMods, TArray<struct FInstallProgressMod>* NonInstalledModList, TArray<struct FInstallProgressMod>* TempListNo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	bool UpdatePurchaseButtonEnabled(const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs);
	void UpdateDownloadButtonEnabled();
	class FText UpdateFreeSpaceText(class FString* CallFunc_FormatFileSize_ReturnValue);
	void UpdateInfo();
	int32 UpdatePurchaseState(class FText PurchaseAndDownloadModsText, class FText* DownloadModsText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void UpdateWholePage();
	class UBindButtonSystem* InitializePageState();
	TArray<struct FFile> Debug_SuccessFileInfosFromIDs();
	TArray<int64> Debug_RequestFileInfosFromIDs();
	int32 CreateFileModToIDList(TArray<struct FFile>* Array, const TArray<int64>& ModsIds, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item);
	bool InitDropdownMenu();
	bool GetAnyPremiumModsExist(bool* Exist, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	bool AnimationPlayFadeInOnInit();
	bool AnimationPlayFadeInOnStart();
	bool GetAllModsPurchased(TArray<int64>* NotPurchasedModIDs, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, int64 CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void DebugLogin();
	void DestroyPremiumBuyHandle(bool* CallFunc_K2_IsValidTimerHandle_ReturnValue);
	class UVerticalBoxSlot* CreateModPricingList(int32 Temp_int_Array_Index_Variable, class UWBP_PriceColumns_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInstallProgressMod& CallFunc_Array_Get_Item, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, TArray<double>* CallFunc_Map_Keys_Keys, double CallFunc_Array_Get_Item_1, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, bool* CallFunc_GetIsModPaidStatus_Premium, bool* CallFunc_GetIsModPaidStatus_Purchased, double* CallFunc_GetIsModPaidStatus_Tier_Price, const class FString& CallFunc_GetIsModPaidStatus_Currency_Symbol, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* Temp_int_Variable);
	bool UpdatePageDiskSpaceAvailability(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, enum class ESlateVisibility K2Node_Select_Default);
	FDelegateProperty_ Get_Server_Mods_Delegate(FDelegateProperty_ BackEvent, FDelegateProperty_ FavoriteEvent, FDelegateProperty_* ErrorEvent);
	class UCFCoreUISubsystem* EndDownloadCheck(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList);
	class FText UpdateTexts(bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList, class FString* CallFunc_FormatFileSize_ReturnValue);
	struct FCFCoreError OnError();
	void LoadingBackEvent();
	void CompletedEvent();
	void ErrorEvent();
	void StartDowloadingMod();
	void CalculateFreeSpaceAvailable();
	struct FModsDirInfo OnModsDirInfo();
	struct FCFCoreError OnModsDirInfoError();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
	class FString OnSuccessGeneratePremium();
	struct FCFCoreError OnErrorGeneratePremium();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_UI_Button_Ark_Global_Purchase_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	bool PreConstruct();
	void Event_On_CFCore_Init();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature();
	bool Event_Result();
	struct FCFCoreError Event_On_Get_User_Info_Failed();
	struct FMe Event_On_Get_User_Info();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void Event_On_Sync_Installed_Mods_Success();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature();
	void AuthenticateSignIn();
	struct FModsDirInfo OnSuccessSpaceCheck();
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
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	void OnAuthenticated(bool bAuth);
	FDelegateProperty_ ExecuteUbergraph_BP_ServerModsWidget(int32* EntryPoint, class FString* K2Node_CustomEvent_url, bool CallFunc_CanLaunchURL_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_is_authenticated, bool Temp_bool_Variable, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UBP_ServerModsLoading_C* CallFunc_Create_ReturnValue, bool* CallFunc_K2_IsValidTimerHandle_ReturnValue, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1, const struct FMatchPlatformFilesFilter& K2Node_MakeStruct_MatchPlatformFilesFilter, const TArray<int64>& CallFunc_CreateFileModToIDList_ModsIds, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2, enum class ESlateVisibility K2Node_Select_Default, const TArray<int64>& CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList, bool CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1, int32 CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1, int32* CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1, TArray<struct FInstallProgressMod>* CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_bAuth);
	void Error__DelegateSignature();
	void StartDownloads__DelegateSignature(int64 ServerID);
	void BackEvent__DelegateSignature();
	void JoinEvent__DelegateSignature(int64 ServerID);
	void FavoriteEvent__DelegateSignature(int64 ServerID);
	void RepotrEvent__DelegateSignature(int64 ServerID);
};

}


