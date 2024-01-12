#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x11E0 - 0x1020)
// WidgetBlueprintGeneratedClass ReListSessions_ASA.ReListSessions_ASA_C
class UReListSessions_ASA_C : public UUI_ListSessions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1020(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x1028(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x1030(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UTextBlock*                            ACCEPT;                                            // 0x1038(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UImage*                                AcceptImage;                                       // 0x1040(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0x1048(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                AscendingDescendingIcon;                           // 0x1050(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   AutoFavoriteButton;                                // 0x1058(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCheckBox*                             AutoFavoriteCheckBox;                              // 0x1060(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x1068(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_6;                                          // 0x1070(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig, RepNotify, Interp, NonTransactional)
	class UButton*                               Button_7;                                          // 0x1078(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig, EditorOnly)
	class UTextBlock*                            Cancel;                                            // 0x1080(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x1088(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1090(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               DayOrder;                                          // 0x1098(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                DenyImage;                                         // 0x10A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   FavoritesButton;                                   // 0x10A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      FindSessionName;                                   // 0x10B0(0x8)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       GameModeComboBox;                                  // 0x10B8(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceLeft;                      // 0x10C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceTop;                       // 0x10C8(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_Start;                         // 0x10D0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Header_HorizSelector;                              // 0x10D8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HideFullButton;                                    // 0x10E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x10E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_18;                                          // 0x10F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0x10F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UCustomButtonWidget*                   JoinLastPlayedServer;                              // 0x1100(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   JoinSessionButton;                                 // 0x1108(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapComboBox;                                       // 0x1110(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCanvasPanel*                          PasswordEntryPanel;                                // 0x1118(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      PasswordField;                                     // 0x1120(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               PingOrder;                                         // 0x1128(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            PlatformSpecificServerTextBox;                     // 0x1130(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UButton*                               PlayerOrder;                                       // 0x1138(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   PlayerServersButton;                               // 0x1140(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            PlayerServerTextBox;                               // 0x1148(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RefreshSessionsButton;                             // 0x1150(0x8)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RentYourOwnServerButton;                           // 0x1158(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   S;                                                 // 0x1160(0x8)(ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	class UComboBoxString*                       ServerTypeComboBox;                                // 0x1168(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               SessionOrderName;                                  // 0x1170(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class USizeBox*                              SessionSizeBox;                                    // 0x1178(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0x1180(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowNotFullServers;                                // 0x1188(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowPlatformSpecificServersButton;                 // 0x1190(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCheckBox*                             ShowPlatformSpecificServersCheckBox;               // 0x1198(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCheckBox*                             ShowPlayerServersCheckBox;                         // 0x11A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ShowPrivateServersButton;                          // 0x11A8(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCheckBox*                             ShowProtectedServersCheckBox;                      // 0x11B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowUserProfileButton;                             // 0x11B8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UComboBoxString*                       SortComboBox;                                      // 0x11C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SortOrderToggleButton;                             // 0x11C8(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   WantYourOwnArkServer;                              // 0x11D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UPrimalUserWidget*                     ServerModsWidgetObject;                            // 0x11D8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UReListSessions_ASA_C* GetDefaultObj();

	bool UpdateFavoritesTab();
	bool HandleAscendDescendSwitch();
	bool Update_Horizontal_Tab_Enabled_States(bool CallFunc_IsChecked_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool SetupPlatformSpecificTextBox();
	class UComboBoxString* OnKeyDownEvent(struct FGeometry* MyGeometry, bool* CallFunc_GetIsEnabled_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, struct FEventReply* CallFunc_Handled_ReturnValue);
	bool OnKeyDown(struct FGeometry* MyGeometry, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, struct FEventReply* CallFunc_Handled_ReturnValue);
	class USizeBox* GetSizeboxForExtraHandheldScaling();
	class UWidget* GetWidgetToScaleForHandheld();
	bool BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature();
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
	class FString OnServerListingClickedModPopup(int64* ServerID);
	void ModUIJoinEvent(int64* ServerID);
	void ModUIBackEvent();
	void ModUIReportEvent(int64* ServerID);
	void ModUIFavoriteEvent(int64* ServerID);
	void ModUIError();
	int32 SetCurrentServerSearchType();
	void Construct();
	void BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	bool BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature();
	void BPSetupLayout();
	void ForceUpdateServerTypeSelection();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PlayerServersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	class UTexture2D* ExecuteUbergraph_ReListSessions_ASA(bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsChecked_ReturnValue_4, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_RegisterModelClass_ReturnValue);
};

}


