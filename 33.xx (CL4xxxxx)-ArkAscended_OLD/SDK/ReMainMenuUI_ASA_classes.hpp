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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadePanel;                                         // 0xA30(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIntro;                                         // 0xA38(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0xA40(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0xA48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0xA50(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA58(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0xA60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA68(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UASAUI_MainMenu_GameModeSelect_C*      ASAUI_MainMenu_GameModeSelect;                     // 0xA70(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class UASAUI_MainMenu_LandingScreen_C*       ASAUI_MainMenu_LandingScreen;                      // 0xA78(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig)
	class UBorder*                               BackgroundMediaIntro;                              // 0xA80(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop;                               // 0xA88(0x8)(Edit, ConstParm, Parm, Config, InstancedReference, SubobjectReference)
	class UBorder*                               BackgroundMediaLoop_1;                             // 0xA90(0x8)(Edit, ConstParm, Parm, Config, InstancedReference, SubobjectReference, Interp)
	class UWidgetSwitcher*                       BGSwitcher;                                        // 0xA98(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xAA0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xAA8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   HostButton;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_18;                                          // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_28;                                          // 0xAC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor)
	class UImage*                                Image_107;                                         // 0xAD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, AutoWeak)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xAD8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xAE0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       MainMenuWidgetSwitcher;                            // 0xAE8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ModsButton;                                        // 0xAF0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAF8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xB00(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0xB08(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SOTFButton;                                        // 0xB10(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UButton*                               WebLink;                                           // 0xB18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UClass*                                SponsoredModsUIClass;                              // 0xB20(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xB28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xB30(0x3F0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayer;                                // 0xF20(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> SettingsOverlay;                                   // 0xF28(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UClass*                                VisualSettingsTemplate;                            // 0xF58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop;                            // 0xF60(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bIntroPlayed;                                      // 0xF68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EAD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        IntroTimeToShowPanel;                              // 0xF6C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        IntoTimeToShowLoop;                                // 0xF70(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EAF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          IntroTimeToShowPanelTimerHandle;                   // 0xF78(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTimerHandle                          IntroTimeToShowLoopTimerHandle;                    // 0xF80(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop_NoLogo;                     // 0xF88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UReMainMenuUI_ASA_C* GetDefaultObj();

	bool SettingsOverlayIsOpen(bool* ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool CallFunc_IsVisible_ReturnValue);
	bool HighlightTheStartButton();
	int32 OnKeyDownEvent(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FEventReply* ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess);
	class UCanvasPanelSlot* UpdateLeftTextPosition(bool IsCTAVisible, bool* Temp_bool_Variable, struct FMargin* K2Node_Select_Default);
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
	void SetMainJoinedButtonVisibility(enum class ESlateVisibility NewVisibilty);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_ReMainMenuUI_ASA(int32* EntryPoint, bool* K2Node_SwitchInteger_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool K2Node_Event_bIsGamepadActive, class UWidget** K2Node_Event_widget, class UCustomButtonWidget** K2Node_DynamicCast_AsCustom_Button_Widget, bool* CallFunc_Play_ReturnValue, bool* CallFunc_Rewind_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, enum class ESlateVisibility* K2Node_Event_newVisibilty, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_1, bool* CallFunc_Play_ReturnValue_1, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
};

}


