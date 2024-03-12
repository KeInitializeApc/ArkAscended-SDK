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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadePanel;                                         // 0xA40(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIntro;                                         // 0xA48(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA50(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA58(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA60(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA68(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA70(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA78(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UASAUI_MainMenu_GameModeSelect_C*      ASAUI_MainMenu_GameModeSelect;                     // 0xA80(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig)
	class UASAUI_MainMenu_LandingScreen_C*       ASAUI_MainMenu_LandingScreen;                      // 0xA88(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig)
	class UBorder*                               BackgroundMediaIntro;                              // 0xA90(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop;                               // 0xA98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop_1;                             // 0xAA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UWidgetSwitcher*                       BGSwitcher;                                        // 0xAA8(0x8)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xAB0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xAB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xAC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_18;                                          // 0xAC8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xAD0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_28;                                          // 0xAD8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class UImage*                                Image_107;                                         // 0xAE0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAE8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAF0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       MainMenuWidgetSwitcher;                            // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ModsButton;                                        // 0xB00(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xB08(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xB10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0xB18(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SOTFButton;                                        // 0xB20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               WebLink;                                           // 0xB28(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB38(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB40(0x3F0)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayer;                                // 0xF30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> SettingsOverlay;                                   // 0xF38(0x30)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                VisualSettingsTemplate;                            // 0xF68(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop;                            // 0xF70(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIntroPlayed;                                      // 0xF78(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IntroTimeToShowPanel;                              // 0xF7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntoTimeToShowLoop;                                // 0xF80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4F6B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          IntroTimeToShowPanelTimerHandle;                   // 0xF88(0x8)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          IntroTimeToShowLoopTimerHandle;                    // 0xF90(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop_NoLogo;                     // 0xF98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NotificationManager_C*             Ui_Notif_Manager;                                  // 0xFA0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UReMainMenuUI_ASA_C* GetDefaultObj();

	int64 DeepLinkModPage();
	bool CreateNotifManager(class UUI_NotificationManager_C* CallFunc_Create_ReturnValue);
	class UASAUI_MainMenuWidget_SettingsOverlay_C* SettingsOverlayIsOpen(bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	bool HighlightTheStartButton();
	bool OnKeyDownEvent(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FKey* CallFunc_GetKey_ReturnValue, struct FEventReply* CallFunc_OnKeyDownEvent_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	struct FMargin UpdateLeftTextPosition(bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue);
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
	void OnGamepadActiveChangedBP(bool* bIsGamepadActive);
	void OnGamepadSelectionChanged(class UWidget* Widget);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature();
	void OnMediaReachedEnd_Event();
	void JumpIntro();
	void OnMediaReachedEnd_Event_0();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature();
	void StopIntroCinematic();
	void OnCFCoreUIControllerInit();
	enum class ESlateVisibility SetMainJoinedButtonVisibility();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_ReMainMenuUI_ASA(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool* K2Node_Event_bIsGamepadActive, bool* K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1);
};

}


