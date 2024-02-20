#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x570 (0xFA8 - 0xA38)
// WidgetBlueprintGeneratedClass ReMainMenuUI_ASA.ReMainMenuUI_ASA_C
class UReMainMenuUI_ASA_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadePanel;                                         // 0xA40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIntro;                                         // 0xA48(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA50(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA58(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA60(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA68(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA70(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0xA78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UASAUI_MainMenu_GameModeSelect_C*      ASAUI_MainMenu_GameModeSelect;                     // 0xA80(0x8)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UASAUI_MainMenu_LandingScreen_C*       ASAUI_MainMenu_LandingScreen;                      // 0xA88(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	class UBorder*                               BackgroundMediaIntro;                              // 0xA90(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop;                               // 0xA98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop_1;                             // 0xAA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UWidgetSwitcher*                       BGSwitcher;                                        // 0xAA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xAB0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xAC0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_18;                                          // 0xAC8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xAD0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_28;                                          // 0xAD8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class UImage*                                Image_107;                                         // 0xAE0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAE8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAF0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       MainMenuWidgetSwitcher;                            // 0xAF8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ModsButton;                                        // 0xB00(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xB08(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xB10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0xB18(0x8)(ConstParm, ExportObject, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SOTFButton;                                        // 0xB20(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               WebLink;                                           // 0xB28(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB40(0x3F0)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayer;                                // 0xF30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> SettingsOverlay;                                   // 0xF38(0x30)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                VisualSettingsTemplate;                            // 0xF68(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop;                            // 0xF70(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIntroPlayed;                                      // 0xF78(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B41[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IntroTimeToShowPanel;                              // 0xF7C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntoTimeToShowLoop;                                // 0xF80(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B42[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          IntroTimeToShowPanelTimerHandle;                   // 0xF88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          IntroTimeToShowLoopTimerHandle;                    // 0xF90(0x8)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop_NoLogo;                     // 0xF98(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NotificationManager_C*             Ui_Notif_Manager;                                  // 0xFA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UReMainMenuUI_ASA_C* GetDefaultObj();

	void DeepLinkModPage(int64 RequestedModID);
	class UUI_NotificationManager_C* CreateNotifManager(bool* CallFunc_IsValid_ReturnValue);
	bool SettingsOverlayIsOpen(bool ReturnValue, class UObject** CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool* CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay);
	void HighlightTheStartButton(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	struct FGeometry OnKeyDownEvent(const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, struct FKey* LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32* CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess);
	class UCanvasPanelSlot* UpdateLeftTextPosition(bool* Temp_bool_Variable, struct FMargin* K2Node_Select_Default);
	void BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void OnCreditsClicked_Event();
	void OnQuitGameClicked_Event();
	void OnSettingsClicked_Event();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature();
	void Construct();
	void BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EscapeMainMenuPressed();
	void StartMainMenuPressed();
	void HighlightStartButton();
	void OnBackClicked_Event();
	void StopAllCardAnims();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature();
	void ClosedEvent_Event();
	bool OnGamepadActiveChangedBP();
	class UWidget* OnGamepadSelectionChanged();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature();
	void OnMediaReachedEnd_Event();
	void JumpIntro();
	void OnMediaReachedEnd_Event_0();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature();
	void StopIntroCinematic();
	void OnCFCoreUIControllerInit();
	enum class ESlateVisibility SetMainJoinedButtonVisibility();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature();
	float Tick();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_ReMainMenuUI_ASA(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_RegisterModelClass_ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, class UObject** CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool* CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_Event_bIsGamepadActive, class UWidget* K2Node_Event_widget, class UCustomButtonWidget* K2Node_DynamicCast_AsCustom_Button_Widget, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_Rewind_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, enum class ESlateVisibility K2Node_Event_newVisibilty, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
};

}


