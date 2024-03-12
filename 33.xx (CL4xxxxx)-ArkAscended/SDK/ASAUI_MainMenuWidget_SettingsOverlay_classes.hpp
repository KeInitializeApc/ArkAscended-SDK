#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x7D8 - 0x758)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C
class UASAUI_MainMenuWidget_SettingsOverlay_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0x760(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x768(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UCustomButtonWidget*                   BackButton;                                        // 0x770(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0x778(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   QuitButton;                                        // 0x780(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SettingsButton;                                    // 0x788(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x790(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x798(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSettingsClicked;                                 // 0x7A8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCreditsClicked;                                  // 0x7B8(0x10)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnQuitGameClicked;                                 // 0x7C8(0x10)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_SettingsOverlay_C* GetDefaultObj();

	struct FKey OnKeyDownEvent(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FKey* CallFunc_GetKey_ReturnValue, struct FEventReply* CallFunc_OnKeyDownEvent_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue);
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BPVirtualCursorinit();
	void ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay(int32* EntryPoint, bool CallFunc_IsConsoleBuild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnQuitGameClicked__DelegateSignature();
	void OnCreditsClicked__DelegateSignature();
	void OnSettingsClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


