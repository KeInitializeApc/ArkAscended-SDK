#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB74 (0x12DC - 0x768)
// WidgetBlueprintGeneratedClass UI_StoreMenu.UI_StoreMenu_C
class UUI_StoreMenu_C : public UUIMainModShop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Notify;                                            // 0x770(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x778(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UButton*                               Button_BackgroundInputConsumer;                    // 0x780(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x790(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_BackGround;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_SearchBack;                                    // 0x7A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x7B0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x7B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x7C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x7C8(0x8)(ConstParm, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7D0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7D8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               TEXT_SearchBack;                                   // 0x7E0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7F8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x800(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x808(0x8)(Edit, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x810(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x818(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModSuccessfullyInsalledWidget;                  // 0x820(0x8)(ConstParm, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModUpdateFailedWidget;                          // 0x828(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x830(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x838(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x840(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x848(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x850(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B9D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x858(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B9E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x870(0x3F0)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC60(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1050(0x10)(ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPlayerUsingGamepad;                              // 0x1060(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4B9F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1068(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1078(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusdWidget;                                      // 0x1080(0x8)(ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1088(0x68)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x10F0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x1100(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableThemeCustomizer;                             // 0x1101(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BA0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x1108(0x100)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x1208(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataTable*                            Data_Table;                                        // 0x1218(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DuplicateTransient)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1230(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1238(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1240(0x10)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BypassSearchExit;                                  // 0x1250(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BA1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1258(0x10)(ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentBrowserIndex;                               // 0x1268(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x1270(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x1280(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowCategorieRefreshes;                           // 0x1288(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBP_GenericErrorMsg_C*                 GenericError;                                      // 0x1290(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMe                                   SignInCredentials;                                 // 0x1298(0x40)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTabs;                                           // 0x12D8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, int32* CallFunc_Array_Length_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue);
	bool BPEscapeClosed();
	void DebugSignIn();
	struct FInstallProgressMod PlayNotificationInstalled(bool* CallFunc_IsValid_ReturnValue);
	bool NotificationHandle(enum class EGameModsEvent Selection);
	void UI_StoreMenu_AutoGenFunc();
	void UI_StoreMenu_AutoGenFunc4(int64* ServerID);
	void UI_StoreMenu_AutoGenFunc3(int64* ServerID);
	void RequestInstalledModsFromAPI(bool* CallFunc_IsValid_ReturnValue);
	void Back_from_Server_Mods(bool* CallFunc_IsValid_ReturnValue);
	class UUI_ParentPage_C* SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	class UUI_ParentPage_C* SetInitStoreFocus(class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	class UUMGSequencePlayer* PlayStartFadeInAnimation(bool* CallFunc_IsValid_ReturnValue);
	void EnabledTabSwitching(bool* bInIsEnabled);
	void UpdateMyModsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool SetCurrentActivePage(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ENUM_SideTabs Temp_byte_Variable, enum class ENUM_SideTabs Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class FText CallFunc_GetText_ReturnValue, int32* K2Node_Select_Default, class UUI_Button_Sidebar_C** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue_4, class UUI_ParentPage_C** K2Node_Select_Default_2);
	enum class ENUM_SideTabs GetCurrentActivePage(enum class ENUM_SideTabs Temp_byte_Variable, class UUI_ParentPage_C** K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue);
	bool UpdateSearchFilter(int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, int32* K2Node_Select_Default);
	void DestroyModPageMenu(bool* CallFunc_IsValid_ReturnValue);
	class UUI_ModPage_C* CreateModPageMenu(int64 Mod_ID, int32* DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef);
	class UUI_RightClickMenu_C* CreateRightClickMenu(class UUI_GameSlot_C* UI_GameSlot, bool ShouldViewBeVisible, double* WidgetWidth, class UUI_RightClickMenu_C** MenuRef, bool* CallFunc_IsValid_ReturnValue);
	void DestroyRightClickMenu(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void UpdateAllStoreMenuWidgets(class UMaterialInterface** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, class UMaterialInterface** Temp_object_Variable_1, class UMaterialInterface** K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	bool InitTheme(struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue);
	FDelegateProperty_ ShouldCustomizeTheme();
	TArray<class UUI_Button_Sidebar_C*> InitAllTabs(int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_Button_Sidebar_C** CallFunc_Array_Get_Item, class UUI_ParentPage_C** CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void RemoveExtraWidgets();
	bool OnSearchedTextCommitted(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UWidget** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue);
	class UWidget* CloseBNavigation(enum class EUINavigation* Navigation, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool OpenCurrentActivePage();
	bool UpdateCloseButtonSearchVisiblity();
	bool SelectPage(class UUI_Button_Sidebar_C* Target, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UUI_Button_Sidebar_C** CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue);
	class UTexture2DDynamic* OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2();
	class UTexture2DDynamic* OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2();
	void BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature();
	class FText BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature();
	void Event_Open_Browse_Mods_Page();
	void Construct();
	void Event_On_CFCore_Init();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void Event_Init_CF_Core();
	void Event_Open_Installed_Mods_Page();
	void Event_Close_Menu();
	void Event_Open_My_Mods_Page();
	enum class ETextCommit BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void Event_Result(bool Is_authenticated);
	struct FCFCoreError Event_On_Get_User_Info_Failed();
	void Event_On_Get_User_Info(struct FMe* Me);
	void Event_Get_Authentication_And_Me();
	void Event_Click_On_Sign_In();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void Event_On_Sync_Installed_Mods_Success();
	void DELETE_FocusableOnKeyDown_1(struct FKeyEvent* KeyEvent);
	void RequestThemeUpdate();
	void OnInitialized();
	void BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature();
	class FText SetNewTextInSearch();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void Destruct();
	void PlayNotEnoughAnimation();
	void Synchronize_Installed_Mods();
	bool GamepadChangeTab();
	void OnUserAuthenticated();
	bool ExecuteUbergraph_UI_StoreMenu(class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32* CallFunc_Array_Length_ReturnValue, class UPrimalUserWidget** CallFunc_Array_Get_Item, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_1, class FText K2Node_CustomEvent_InText, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUI_ParentPage_C** CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_forward, uint8* CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8* CallFunc_Percent_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1);
	void UpdateAllThemeSettings__DelegateSignature();
	enum class ENUM_InputDevices OnInputDeviceChanged__DelegateSignature();
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


