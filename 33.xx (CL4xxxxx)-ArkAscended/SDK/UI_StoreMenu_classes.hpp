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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      InitialFadeIn;                                     // 0x770(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_BackgroundInputConsumer;                    // 0x778(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x780(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_BackGround;                                    // 0x788(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_SearchBack;                                    // 0x790(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x798(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               TEXT_SearchBack;                                   // 0x7B0(0x8)(ConstParm, BlueprintVisible, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7B8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7C0(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7C8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x7D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x7D8(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x7E0(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x7E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x7F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x7F8(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x800(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x808(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSignedIn;                                        // 0x810(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3971[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x818(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3973[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x830(0x3F0)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC20(0x3F0)(Edit, ExportObject, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1010(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsPlayerUsingGamepad;                              // 0x1020(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3975[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1028(0x10)(ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1038(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               FocusdWidget;                                      // 0x1040(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1048(0x88)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x10D0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x10E0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EnableThemeCustomizer;                             // 0x10E1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3977[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x10E8(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x11E8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UDataTable*                            Data_Table;                                        // 0x11F8(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1200(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1208(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1210(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1218(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1220(0x10)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BypassSearchExit;                                  // 0x1230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3979[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1238(0x10)(ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentBrowserIndex;                               // 0x1248(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_397B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x1250(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x1260(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowCategorieRefreshes;                           // 0x1268(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_397D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMe                                   SignInCredentials;                                 // 0x1270(0x40)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTabs;                                           // 0x12B0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_397E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                Mods_Requested_to_Purchase;                        // 0x12B8(0x10)(ConstParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          Premium_Check_Handle;                              // 0x12C8(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                IDof_Owned_Mods;                                   // 0x12D0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsInitialized;                                     // 0x12E0(0x1)(Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_3980[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        WaitingToOpen;                                     // 0x12E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	int32 OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	int32 GetAllModsIDs(const TArray<int64>& List, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item);
	void DestroyPremiumCheckHandle(bool* CallFunc_K2_IsValidTimerHandle_ReturnValue);
	bool BPEscapeClosed();
	void DebugSignIn();
	bool NotificationHandle(enum class EGameModsEvent Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void UI_StoreMenu_AutoGenFunc();
	void UI_StoreMenu_AutoGenFunc4(int64 ServerID);
	void UI_StoreMenu_AutoGenFunc3(int64 ServerID);
	bool RequestInstalledModsFromAPI();
	bool Back_from_Server_Mods();
	class UUI_ParentPage_C* SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_IsVisible_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	class UUI_ParentPage_C* SetInitStoreFocus(bool* K2Node_DynamicCast_bSuccess);
	bool PlayStartFadeInAnimation();
	void EnabledTabSwitching(bool* bInIsEnabled);
	bool UpdateMyModsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	bool SetCurrentActivePage(enum class ENUM_SideTabs* CurrentActiveTab, bool Temp_bool_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, enum class ENUM_SideTabs Temp_byte_Variable, enum class ENUM_SideTabs Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default, class UUI_Button_Sidebar_C* K2Node_Select_Default_1, class UUI_ParentPage_C* K2Node_Select_Default_2);
	bool GetCurrentActivePage(enum class ENUM_SideTabs* CurrentActiveTab, enum class ENUM_SideTabs Temp_byte_Variable, class UUI_ParentPage_C* K2Node_Select_Default);
	class FText UpdateSearchFilter(int32* Temp_int_Variable, int32* Temp_int_Variable_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool Temp_bool_Variable, bool* CallFunc_EqualEqual_TextText_ReturnValue, int32 K2Node_Select_Default);
	bool DestroyModPageMenu();
	class UUI_ModPage_C* CreateModPageMenu(int32 DrawUIOnZOrder, class UUI_GameSlot_C* UI_GameSlotRef, class UUI_ModPage_C** CallFunc_CreateModPageFromStoreMenu_ReturnValue);
	bool CreateRightClickMenu(double WidgetWidth, class UUI_RightClickMenu_C* MenuRef, class UUI_RightClickMenu_C* CallFunc_Create_ReturnValue);
	bool DestroyRightClickMenu();
	struct FSlateBrush UpdateAllStoreMenuWidgets(class UMaterialInterface** Temp_object_Variable, bool Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, class UMaterialInterface** Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	bool InitTheme();
	FDelegateProperty_ ShouldCustomizeTheme(class UUI_ThemeCustomizer_C* CallFunc_Create_ReturnValue);
	int32 InitAllTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UUI_ParentPage_C*>* K2Node_MakeArray_Array, TArray<class UUI_Button_Sidebar_C*>* K2Node_MakeArray_Array_1);
	void RemoveExtraWidgets();
	bool OnSearchedTextCommitted(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	class UWidget* CloseBNavigation(bool* K2Node_DynamicCast_bSuccess);
	void OpenCurrentActivePage(bool K2Node_SwitchEnum_CmpSuccess);
	bool UpdateCloseButtonSearchVisiblity();
	bool SelectPage(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item);
	class UTexture2DDynamic* OnFail_A1413E6746555E5B30E503B4FC8CC5D8();
	class UTexture2DDynamic* OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8();
	struct FCFCoreError Event_On_CFCore_Init_Error();
	void Event_Open_Browse_Mods_Page();
	void Event_On_CFCore_Init();
	void Event_Open_Installed_Mods_Page();
	void Event_Close_Menu();
	class FText BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature();
	void Event_Open_My_Mods_Page();
	class FText BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	bool Event_Result();
	struct FCFCoreError Event_On_Get_User_Info_Failed();
	struct FMe Event_On_Get_User_Info();
	void Event_Click_On_Sign_In();
	struct FCFCoreError Event_On_Sync_Installed_Mods_Error();
	void Event_On_Sync_Installed_Mods_Success();
	void DELETE_FocusableOnKeyDown_1(struct FKeyEvent* KeyEvent);
	void RequestThemeUpdate();
	void BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature();
	void SetNewTextInSearch(class FText* InText);
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
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
	int64 OnRequestedModPage();
	int64 OpenModPageForID();
	void OnModInfoFound(class UUI_GameSlot_C* ForGameSlot);
	class UUI_BrowseMods_C* ExecuteUbergraph_UI_StoreMenu(int32* EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Prompt_SignIn_C* CallFunc_Create_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_CustomEvent_is_authenticated, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_1, bool* CallFunc_NotEqual_StrStr_ReturnValue, struct FKey* K2Node_CustomEvent_Key, class UTexture2DDynamic** Temp_object_Variable, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UAsyncTaskDownloadImage** CallFunc_DownloadImage_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, const TArray<int64>& K2Node_CustomEvent_InModIds, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, class FString* K2Node_CustomEvent_url, bool CallFunc_CanLaunchURL_ReturnValue, int32* Temp_int_Variable, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_2, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, bool* CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Event_forward, uint8* CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue, int64* K2Node_Event_ForModID, TArray<int64>* K2Node_MakeArray_Array_1, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_3, bool* K2Node_DynamicCast_bSuccess, class UUI_ModPage_C* CallFunc_CreateModPageMenu_ModPageRef, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage_4, bool* K2Node_DynamicCast_bSuccess_1);
	void UpdateAllThemeSettings__DelegateSignature();
	enum class ENUM_InputDevices OnInputDeviceChanged__DelegateSignature();
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


