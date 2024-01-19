#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x568 (0xF90 - 0xA28)
// WidgetBlueprintGeneratedClass ReMainMenuUI_ASA.ReMainMenuUI_ASA_C
class UReMainMenuUI_ASA_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadePanel;                                         // 0xA30(0x8)(BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIntro;                                         // 0xA38(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA40(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA48(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA58(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA60(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0xA68(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UASAUI_MainMenu_GameModeSelect_C*      ASAUI_MainMenu_GameModeSelect;                     // 0xA70(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, GlobalConfig)
	class UASAUI_MainMenu_LandingScreen_C*       ASAUI_MainMenu_LandingScreen;                      // 0xA78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig)
	class UBorder*                               BackgroundMediaIntro;                              // 0xA80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop;                               // 0xA88(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop_1;                             // 0xA90(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference, Interp)
	class UWidgetSwitcher*                       BGSwitcher;                                        // 0xA98(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xAA0(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xAA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_18;                                          // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_28;                                          // 0xAC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class UImage*                                Image_107;                                         // 0xAD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAD8(0x8)(Parm, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAE0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       MainMenuWidgetSwitcher;                            // 0xAE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ModsButton;                                        // 0xAF0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xB00(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0xB08(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SOTFButton;                                        // 0xB10(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UButton*                               WebLink;                                           // 0xB18(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB20(0x8)(EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB30(0x3F0)(Edit, ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayer;                                // 0xF20(0x8)(Edit, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> SettingsOverlay;                                   // 0xF28(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UClass*                                VisualSettingsTemplate;                            // 0xF58(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop;                            // 0xF60(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bIntroPlayed;                                      // 0xF68(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C25[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        IntroTimeToShowPanel;                              // 0xF6C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        IntoTimeToShowLoop;                                // 0xF70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C26[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          IntroTimeToShowPanelTimerHandle;                   // 0xF78(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FTimerHandle                          IntroTimeToShowLoopTimerHandle;                    // 0xF80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop_NoLogo;                     // 0xF88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UReMainMenuUI_ASA_C* GetDefaultObj();

	bool SettingsOverlayIsOpen(bool ReturnValue, bool* CallFunc_IsVisible_ReturnValue);
	bool HighlightTheStartButton();
	int32 OnKeyDownEvent(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyboardEvent, const struct FEventReply& ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess);
	struct FMargin UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue);
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
	float Tick(const struct FGeometry& MyGeometry);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature();
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> ExecuteUbergraph_ReMainMenuUI_ASA(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool* CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool* CallFunc_Play_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_Play_ReturnValue_1, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


