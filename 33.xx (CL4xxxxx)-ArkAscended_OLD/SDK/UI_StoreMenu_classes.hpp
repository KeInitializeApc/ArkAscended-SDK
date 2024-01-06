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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Notify;                                            // 0x770(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x778(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UButton*                               Button_BackgroundInputConsumer;                    // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x788(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_BackGround;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_SearchBack;                                    // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Thumbnail;                                     // 0x7B0(0x8)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x7B8(0x8)(BlueprintVisible, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x7C0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7D8(0x8)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               TEXT_SearchBack;                                   // 0x7E0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7E8(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7F0(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x800(0x8)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x808(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x810(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x818(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModSuccessfullyInsalledWidget;                  // 0x820(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModUpdateFailedWidget;                          // 0x828(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x830(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x838(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x840(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x848(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x850(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x858(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F36[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x870(0x3F0)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC60(0x3F0)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1050(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPlayerUsingGamepad;                              // 0x1060(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F37[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1068(0x10)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1078(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusdWidget;                                      // 0x1080(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1088(0x68)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x10F0(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x1100(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableThemeCustomizer;                             // 0x1101(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F3A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x1108(0x100)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x1208(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataTable*                            Data_Table;                                        // 0x1218(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1220(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, DuplicateTransient)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1228(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1230(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1238(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1240(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BypassSearchExit;                                  // 0x1250(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1258(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentBrowserIndex;                               // 0x1268(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F3E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x1270(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x1280(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowCategorieRefreshes;                           // 0x1288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBP_GenericErrorMsg_C*                 GenericError;                                      // 0x1290(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMe                                   SignInCredentials;                                 // 0x1298(0x40)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTabs;                                           // 0x12D8(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	void BPEscapeClosed(bool* ReturnValue);
	void DebugSignIn();
	bool PlayNotificationInstalled();
	bool NotificationHandle(enum class EGameModsEvent* Selection, const struct FInstallProgressMod& Mod);
	void UI_StoreMenu_AutoGenFunc();
	void UI_StoreMenu_AutoGenFunc4(int64 ServerID);
	void UI_StoreMenu_AutoGenFunc3(int64 ServerID);
	bool RequestInstalledModsFromAPI();
	bool Back_from_Server_Mods();
	bool SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_BooleanOR_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess_1, bool* K2Node_SwitchInteger_CmpSuccess_2, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page_1);
	bool SetInitStoreFocus(class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page);
	bool PlayStartFadeInAnimation();
	bool EnabledTabSwitching();
	bool UpdateMyModsVisibility(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	bool SetCurrentActivePage(bool* Temp_bool_Variable, enum class ENUM_SideTabs* Temp_byte_Variable, enum class ENUM_SideTabs* Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, int32* K2Node_Select_Default, class UUI_Button_Sidebar_C** K2Node_Select_Default_1, class UUI_ParentPage_C** K2Node_Select_Default_2);
	bool GetCurrentActivePage(class UUI_ParentPage_C** CurrentPage, enum class ENUM_SideTabs* Temp_byte_Variable, class UUI_ParentPage_C** K2Node_Select_Default);
	bool UpdateSearchFilter(TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue, int32* K2Node_Select_Default);
	bool DestroyModPageMenu();
	class UUI_ModPage_C* CreateModPageMenu(class UUI_ModPage_C** CallFunc_CreateModPageFromStoreMenu_ReturnValue);
	bool CreateRightClickMenu(class UUI_GameSlot_C* UI_GameSlot, bool SepareteReportWithLine, class UUI_RightClickMenu_C* CallFunc_Create_ReturnValue);
	bool DestroyRightClickMenu();
	class UMaterialInterface* UpdateAllStoreMenuWidgets(bool* Temp_bool_Variable, class UMaterialInterface** K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	bool InitTheme(bool* CallFunc_DoesDataTableRowExist_ReturnValue);
	FDelegateProperty_ ShouldCustomizeTheme(class UUI_ThemeCustomizer_C* CallFunc_Create_ReturnValue);
	bool InitAllTabs(int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, TArray<class UUI_ParentPage_C*>* K2Node_MakeArray_Array, TArray<class UUI_Button_Sidebar_C*>* K2Node_MakeArray_Array_1);
	void RemoveExtraWidgets();
	bool OnSearchedTextCommitted(int32* CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C>* K2Node_DynamicCast_AsBPI_Page_Widgets, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	bool CloseBNavigation(class UWidget** ReturnValue, TScriptInterface<class IBPI_PageWidgets_C>* K2Node_DynamicCast_AsBPI_Page_Widgets, class UWidget* CallFunc_GetClose_B_Widget);
	bool OpenCurrentActivePage();
	class FText UpdateCloseButtonSearchVisiblity(bool CallFunc_TextIsEmpty_ReturnValue);
	bool SelectPage(class UUI_Button_Sidebar_C* Target, int32* CallFunc_Add_IntInt_ReturnValue);
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
	bool ExecuteUbergraph_UI_StoreMenu(int32* EntryPoint, class UBP_GenericErrorMsg_C* CallFunc_Create_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Prompt_SignIn_C* CallFunc_Create_ReturnValue_1, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, enum class ETextCommit* K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_CustomEvent_is_authenticated, const struct FMe& K2Node_CustomEvent_me, int32* CallFunc_Add_IntInt_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_1, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab_1, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_forward, uint8* CallFunc_Add_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, bool CallFunc_IsVisible_ReturnValue, uint8* CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue_1);
	void UpdateAllThemeSettings__DelegateSignature();
	void OnInputDeviceChanged__DelegateSignature(enum class ENUM_InputDevices* Device);
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


