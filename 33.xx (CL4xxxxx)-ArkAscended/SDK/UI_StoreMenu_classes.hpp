#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB88 (0x12F0 - 0x768)
// WidgetBlueprintGeneratedClass UI_StoreMenu.UI_StoreMenu_C
class UUI_StoreMenu_C : public UUIMainModShop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      InitialFadeIn;                                     // 0x770(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_BackgroundInputConsumer;                    // 0x778(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x780(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BackGround;                                    // 0x788(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_SearchBack;                                    // 0x790(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x798(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               TEXT_SearchBack;                                   // 0x7B0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7B8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, DuplicateTransient)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x7D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x7D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x7E0(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x7E8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x7F0(0x8)(ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x7F8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x800(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x808(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x810(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_343C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x818(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_343D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x830(0x3F0)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC20(0x3F0)(BlueprintVisible, ExportObject, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1010(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPlayerUsingGamepad;                              // 0x1020(0x1)(ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_343E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1028(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1038(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusdWidget;                                      // 0x1040(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1048(0x88)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x10D0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x10E0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableThemeCustomizer;                             // 0x10E1(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_343F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x10E8(0x100)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x11E8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UDataTable*                            Data_Table;                                        // 0x11F8(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1200(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1208(0x8)(ConstParm, ExportObject, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1210(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1218(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1220(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BypassSearchExit;                                  // 0x1230(0x1)(Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3441[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1238(0x10)(ExportObject, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentBrowserIndex;                               // 0x1248(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3442[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x1250(0x10)(BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x1260(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowCategorieRefreshes;                           // 0x1268(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3446[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMe                                   SignInCredentials;                                 // 0x1270(0x40)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTabs;                                           // 0x12B0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3447[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                Mods_Requested_to_Purchase;                        // 0x12B8(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          Premium_Check_Handle;                              // 0x12C8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                IDof_Owned_Mods;                                   // 0x12D0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsInitialized;                                     // 0x12E0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_344A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        WaitingToOpen;                                     // 0x12E8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	int32 OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue);
	bool GetAllModsIDs(TArray<int64>* List, int32* CallFunc_Array_Add_ReturnValue);
	bool DestroyPremiumCheckHandle();
	void BPEscapeClosed(bool ReturnValue);
	void DebugSignIn();
	bool NotificationHandle(class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output_1, bool* CallFunc_IsValid_ReturnValue_1);
	void UI_StoreMenu_AutoGenFunc();
	void UI_StoreMenu_AutoGenFunc4(int64 ServerID);
	void UI_StoreMenu_AutoGenFunc3(int64 ServerID);
	void RequestInstalledModsFromAPI(bool* CallFunc_IsValid_ReturnValue);
	void Back_from_Server_Mods(bool* CallFunc_IsValid_ReturnValue);
	bool SwitchControllerAction(enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* K2Node_SwitchInteger_CmpSuccess, bool* K2Node_SwitchInteger_CmpSuccess_1, bool* K2Node_SwitchInteger_CmpSuccess_2);
	bool SetInitStoreFocus();
	void PlayStartFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool EnabledTabSwitching();
	bool UpdateMyModsVisibility(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool SetCurrentActivePage(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ENUM_SideTabs* Temp_byte_Variable, enum class ENUM_SideTabs* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class FText CallFunc_GetText_ReturnValue, int32* K2Node_Select_Default, class UUI_Button_Sidebar_C** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue_4, class UUI_ParentPage_C** K2Node_Select_Default_2);
	enum class ENUM_SideTabs GetCurrentActivePage(class UUI_ParentPage_C* CurrentPage, enum class ENUM_SideTabs* Temp_byte_Variable, class UUI_ParentPage_C** K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue);
	bool UpdateSearchFilter(bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Format_ReturnValue, bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* K2Node_Select_Default);
	void DestroyModPageMenu(bool* CallFunc_IsValid_ReturnValue);
	class UUI_ModPage_C* CreateModPageMenu(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef);
	class UUI_RightClickMenu_C* CreateRightClickMenu(double WidgetWidth, class UUI_RightClickMenu_C** MenuRef, bool* CallFunc_IsValid_ReturnValue);
	void DestroyRightClickMenu(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	struct FSlateBrush UpdateAllStoreMenuWidgets(class UMaterialInterface* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface** K2Node_Select_Default);
	bool InitTheme(struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue);
	FDelegateProperty_ ShouldCustomizeTheme();
	TArray<class UUI_Button_Sidebar_C*> InitAllTabs();
	void RemoveExtraWidgets();
	bool OnSearchedTextCommitted(class FText CallFunc_GetText_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	class UWidget* CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	bool OpenCurrentActivePage();
	bool UpdateCloseButtonSearchVisiblity(class FText SearchInput);
	bool SelectPage(bool* CallFunc_IsValid_ReturnValue);
	void OnFail_A1413E6746555E5B30E503B4FC8CC5D8(class UTexture2DDynamic** Texture);
	void OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8(class UTexture2DDynamic** Texture);
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void Event_Open_Browse_Mods_Page();
	void Event_On_CFCore_Init();
	void Event_Open_Installed_Mods_Page();
	void Event_Close_Menu();
	void BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(class FText* Text);
	void BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature();
	void Event_Open_My_Mods_Page();
	enum class ETextCommit BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text);
	void Event_Result(bool* Is_authenticated);
	struct FCFCoreError Event_On_Get_User_Info_Failed();
	void Event_On_Get_User_Info(struct FMe* Me);
	void Event_Click_On_Sign_In();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void Event_On_Sync_Installed_Mods_Success();
	struct FKeyEvent DELETE_FocusableOnKeyDown_1();
	void RequestThemeUpdate();
	void BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature();
	void SetNewTextInSearch(class FText* InText);
	struct FKey ButtonCall(enum class EViewState State);
	void BindControllerAction();
	void Destruct();
	TArray<int64> OnSuccessGetMyPremiumMods();
	struct FCFCoreError OnFailGetMyPremiumMods();
	void PremiumModChecking();
	TArray<int64> OnSuccessPremiumModsCheck();
	struct FCFCoreError FailedPremiumModsChecks();
	TArray<int64> WaitForPurchaseResponse();
	class FString OnSuccessGeneratePremium();
	struct FCFCoreError OnErrorGeneratePremium();
	TArray<int64> Temp2();
	struct FCFCoreError Temp1();
	void InitRestOfUserLoginAsync();
	void AuthenticateSignIn();
	void FinishCategorie();
	void Construct();
	bool GamepadChangeTab();
	void OnUserAuthenticated();
	void OnRequestedModPage(int64 ForModID);
	void OpenModPageForID(int64 Mod_ID);
	void OnModInfoFound(class UUI_GameSlot_C* ForGameSlot);
	bool ExecuteUbergraph_UI_StoreMenu(bool* CallFunc_IsValid_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, struct FCFCoreError* K2Node_CustomEvent_error_6, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, struct FCFCoreError* K2Node_CustomEvent_error_5, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_4, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText K2Node_CustomEvent_InText, class FString* CallFunc_Conv_TextToString_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UTexture2DDynamic* Temp_object_Variable, class UTexture2DDynamic* K2Node_CustomEvent_Texture, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, struct FCFCoreError* K2Node_CustomEvent_error_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, struct FCFCoreError* K2Node_CustomEvent_error_2, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_6, const TArray<int64>& K2Node_CustomEvent_InModIds, class FText* CallFunc_Format_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_1, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_4, bool K2Node_Event_forward, uint8* CallFunc_Add_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, uint8* CallFunc_Percent_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, int64* K2Node_Event_ForModID, class UUI_ModPage_C** CallFunc_CreateModPageMenu_ModPageRef);
	void UpdateAllThemeSettings__DelegateSignature();
	void OnInputDeviceChanged__DelegateSignature(enum class ENUM_InputDevices Device);
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


