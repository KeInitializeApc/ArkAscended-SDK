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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x768(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UCustomButtonWidget*                   BackButton;                                        // 0x770(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0x778(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   QuitButton;                                        // 0x780(0x8)(BlueprintVisible, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SettingsButton;                                    // 0x788(0x8)(ConstParm, ExportObject, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x790(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x798(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSettingsClicked;                                 // 0x7A8(0x10)(Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCreditsClicked;                                  // 0x7B8(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnQuitGameClicked;                                 // 0x7C8(0x10)(Edit, ConstParm, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_SettingsOverlay_C* GetDefaultObj();

	struct FGeometry OnKeyDownEvent(const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, struct FKey* LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	float Tick();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BPVirtualCursorinit();
	bool ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void OnQuitGameClicked__DelegateSignature();
	void OnCreditsClicked__DelegateSignature();
	void OnSettingsClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


