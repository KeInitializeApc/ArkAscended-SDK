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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Notify;                                            // 0x770(0x8)(ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x778(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UButton*                               Button_BackgroundInputConsumer;                    // 0x780(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x788(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x790(0x8)(ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_BackGround;                                    // 0x7A0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_SearchBack;                                    // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x7B0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x7B8(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x7C0(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x7C8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7D0(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7D8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               TEXT_SearchBack;                                   // 0x7E0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7E8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7F0(0x8)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7F8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x800(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x810(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x818(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, DuplicateTransient)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModSuccessfullyInsalledWidget;                  // 0x820(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModUpdateFailedWidget;                          // 0x828(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x830(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x838(0x8)(Edit, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x840(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x848(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x850(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_409E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x858(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_409F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x870(0x3F0)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC60(0x3F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1050(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPlayerUsingGamepad;                              // 0x1060(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1068(0x10)(ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1078(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusdWidget;                                      // 0x1080(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1088(0x68)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x10F0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x1100(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableThemeCustomizer;                             // 0x1101(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40A1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x1108(0x100)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x1208(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataTable*                            Data_Table;                                        // 0x1218(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1220(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1228(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1230(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1240(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BypassSearchExit;                                  // 0x1250(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1258(0x10)(ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentBrowserIndex;                               // 0x1268(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40A3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x1270(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x1280(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowCategorieRefreshes;                           // 0x1288(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40A4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBP_GenericErrorMsg_C*                 GenericError;                                      // 0x1290(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMe                                   SignInCredentials;                                 // 0x1298(0x40)(BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTabs;                                           // 0x12D8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	int32 OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void DebugSignIn();
	bool PlayNotificationInstalled(const struct FInstallProgressMod& Mod_Info);
	void NotificationHandle(enum class EGameModsEvent* Selection, const struct FInstallProgressMod& Mod, struct FInstallProgressMod* ModToHandle, bool* K2Node_SwitchEnum_CmpSuccess);
	void UI_StoreMenu_AutoGenFunc();
	int64 UI_StoreMenu_AutoGenFunc4();
	int64 UI_StoreMenu_AutoGenFunc3();
	bool RequestInstalledModsFromAPI();
	bool Back_from_Server_Mods();
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, bool* CallFunc_IsVisible_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess_1, bool* K2Node_SwitchInteger_CmpSuccess_2, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page_1);
	bool SetInitStoreFocus(class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page);
	bool PlayStartFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void EnabledTabSwitching(bool* bInIsEnabled);
	bool UpdateMyModsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	bool SetCurrentActivePage(enum class ENUM_SideTabs CurrentActiveTab, bool Temp_bool_Variable, bool* K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default, class UUI_Button_Sidebar_C* K2Node_Select_Default_1, class UUI_ParentPage_C* K2Node_Select_Default_2);
	bool GetCurrentActivePage(enum class ENUM_SideTabs CurrentActiveTab, class UUI_ParentPage_C* K2Node_Select_Default);
	class FText UpdateSearchFilter(const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, bool* CallFunc_EqualEqual_TextText_ReturnValue, int32 K2Node_Select_Default);
	bool DestroyModPageMenu();
	class UUI_GameSlot_C* CreateModPageMenu(class UUI_ModPage_C* ModPageRef, class UUI_ModPage_C* CallFunc_CreateModPageFromStoreMenu_ReturnValue);
	bool CreateRightClickMenu(bool SepareteReportWithLine, class UUI_RightClickMenu_C* CallFunc_Create_ReturnValue);
	bool DestroyRightClickMenu();
	struct FSlateBrush UpdateAllStoreMenuWidgets(bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default);
	bool InitTheme(bool* CallFunc_DoesDataTableRowExist_ReturnValue, struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow);
	void ShouldCustomizeTheme(class UUI_ThemeCustomizer_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	int32 InitAllTabs(int32* CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, const TArray<class UUI_ParentPage_C*>& K2Node_MakeArray_Array, const TArray<class UUI_Button_Sidebar_C*>& K2Node_MakeArray_Array_1);
	void RemoveExtraWidgets();
	class UWidget* OnSearchedTextCommitted(TArray<class UWidget*>* WidgetArray, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C>* K2Node_DynamicCast_AsBPI_Page_Widgets, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool* CallFunc_Array_RemoveItem_ReturnValue);
	bool CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, TScriptInterface<class IBPI_PageWidgets_C>* K2Node_DynamicCast_AsBPI_Page_Widgets, class UWidget* CallFunc_GetClose_B_Widget);
	void OpenCurrentActivePage(bool* K2Node_SwitchEnum_CmpSuccess);
	bool UpdateCloseButtonSearchVisiblity(class FText SearchInput);
	bool SelectPage(class UUI_Button_Sidebar_C* Target, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
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
	class FText BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	bool Event_Result();
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
	uint8 ExecuteUbergraph_UI_StoreMenu(int32 EntryPoint, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_GenericErrorMsg_C* CallFunc_Create_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FCFCoreError& K2Node_CustomEvent_error_2, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Prompt_SignIn_C* CallFunc_Create_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, class UPrimalUserWidget* CallFunc_Array_Get_Item, class FText K2Node_ComponentBoundEvent_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FCFCoreError& K2Node_CustomEvent_error_1, struct FMe* K2Node_CustomEvent_me, const struct FCFCoreError& K2Node_CustomEvent_error, const struct FKeyEvent& K2Node_Event_KeyEvent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab_1, bool CallFunc_NotEqual_StrStr_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, enum class EViewState K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, uint8* CallFunc_Subtract_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, bool* CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue_1);
	void UpdateAllThemeSettings__DelegateSignature();
	enum class ENUM_InputDevices OnInputDeviceChanged__DelegateSignature();
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


