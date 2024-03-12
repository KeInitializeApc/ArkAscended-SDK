#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x12B0 - 0x10E0)
// WidgetBlueprintGeneratedClass ReListSessions_ASA.ReListSessions_ASA_C
class UReListSessions_ASA_C : public UUI_ListSessions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10E0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x10E8(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x10F0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UTextBlock*                            ACCEPT;                                            // 0x10F8(0x8)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x1100(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0x1108(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                AscendingDescendingIcon;                           // 0x1110(0x8)(Edit, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   AutoFavoriteButton;                                // 0x1118(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             AutoFavoriteCheckBox;                              // 0x1120(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x1128(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UButton*                               Button_6;                                          // 0x1130(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, RepNotify, Interp, NonTransactional)
	class UButton*                               Button_7;                                          // 0x1138(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, EditorOnly)
	class UTextBlock*                            Cancel;                                            // 0x1140(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x1148(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1150(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               DayOrder;                                          // 0x1158(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x1160(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   FavoritesButton;                                   // 0x1168(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      FindSessionName;                                   // 0x1170(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       GameModeComboBox;                                  // 0x1178(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceLeft;                      // 0x1180(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceTop;                       // 0x1188(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_Start;                         // 0x1190(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Header_HorizSelector;                              // 0x1198(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HideFullButton;                                    // 0x11A0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x11A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_18;                                          // 0x11B0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0x11B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UCustomButtonWidget*                   JoinLastPlayedServer;                              // 0x11C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   JoinSessionButton;                                 // 0x11C8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapComboBox;                                       // 0x11D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       ModFilterList;                                     // 0x11D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCanvasPanel*                          PasswordEntryPanel;                                // 0x11E0(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      PasswordField;                                     // 0x11E8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               PingOrder;                                         // 0x11F0(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            PlatformSpecificServerTextBox;                     // 0x11F8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               PlayerOrder;                                       // 0x1200(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   PlayerServersButton;                               // 0x1208(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            PlayerServerTextBox;                               // 0x1210(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RefreshSessionsButton;                             // 0x1218(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RentYourOwnServerButton;                           // 0x1220(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   S;                                                 // 0x1228(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UComboBoxString*                       ServerTypeComboBox;                                // 0x1230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               SessionOrderName;                                  // 0x1238(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SessionSizeBox;                                    // 0x1240(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0x1248(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowNotFullServers;                                // 0x1250(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowPlatformSpecificServersButton;                 // 0x1258(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowPlatformSpecificServersCheckBox;               // 0x1260(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowPlayerServersCheckBox;                         // 0x1268(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowPrivateServersButton;                          // 0x1270(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowProtectedServersCheckBox;                      // 0x1278(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowUserProfileButton;                             // 0x1280(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       SortComboBox;                                      // 0x1288(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SortOrderToggleButton;                             // 0x1290(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   WantYourOwnArkServer;                              // 0x1298(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     ServerModsWidgetObject;                            // 0x12A0(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NotificationManager_C*             Ui_Notif_Manager;                                  // 0x12A8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UReListSessions_ASA_C* GetDefaultObj();

	bool CreateNotifManager(class UUI_NotificationManager_C* CallFunc_Create_ReturnValue);
	bool UpdateFavoritesTab();
	int32 HandleAscendDescendSwitch(int32 CallFunc_GetSelectedIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool Update_Horizontal_Tab_Enabled_States(class UWidget** CallFunc_SwitchButton_Widget, int32 CallFunc_GetSelectedIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	class FString SetupPlatformSpecificTextBox(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess);
	bool OnKeyDownEvent(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1, struct FEventReply* CallFunc_Handled_ReturnValue);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, struct FKey* CallFunc_GetKey_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, struct FEventReply* CallFunc_Handled_ReturnValue);
	class USizeBox* GetSizeboxForExtraHandheldScaling();
	class UWidget* GetWidgetToScaleForHandheld();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature();
	void BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature();
	class FString OnServerListingClickedModPopup(bool bNeedInit, int64 ServerID);
	void ModUIJoinEvent(int64 ServerID);
	void ModUIBackEvent();
	void ModUIReportEvent(int64 ServerID);
	void ModUIFavoriteEvent(int64 ServerID);
	void ModUIError();
	void SetCurrentServerSearchType(int32 ServerType);
	void Construct();
	void BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	void BPSetupLayout();
	void ForceUpdateServerTypeSelection();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PlayerServersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	enum class ESelectInfo BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem);
	bool ExecuteUbergraph_ReListSessions_ASA(int32* EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ServerModsWidget_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_GetSelectedIndex_ReturnValue_1);
};

}


