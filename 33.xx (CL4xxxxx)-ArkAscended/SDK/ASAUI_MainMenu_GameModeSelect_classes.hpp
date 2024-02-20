#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3F0 - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenu_GameModeSelect.ASAUI_MainMenu_GameModeSelect_C
class UASAUI_MainMenu_GameModeSelect_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OpenAnim;                                          // 0x338(0x8)(ConstParm, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         BackButton;                                        // 0x340(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card1;                                             // 0x348(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card2;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card3;                                             // 0x358(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_MainMenuWidget_Card_C*          Card4;                                             // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        Cards_WrapBox;                                     // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x370(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMultiplayerClicked;                              // 0x380(0x10)(Edit, ExportObject, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSOTFClicked;                                     // 0x390(0x10)(Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCreateGameClicked;                               // 0x3A0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModsClicked;                                     // 0x3B0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  FalseTextSaveGame;                                 // 0x3C0(0x18)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  TrueTextSaveGame;                                  // 0x3D8(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenu_GameModeSelect_C* GetDefaultObj();

	bool InitHasSave(bool* Temp_bool_Variable, class FText* K2Node_Select_Default);
	bool SelectionChanged(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1);
	bool StopAllCardAnims(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1);
	void WidgetAddedToViewport();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card1_K2Node_ComponentBoundEvent_4_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card2_K2Node_ComponentBoundEvent_5_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card3_K2Node_ComponentBoundEvent_6_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_Card4_K2Node_ComponentBoundEvent_7_OnCardClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_GameModeSelect_BackButton_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void Construct();
	void RefreshAnim();
	void PostInitialized();
	bool ExecuteUbergraph_ASAUI_MainMenu_GameModeSelect(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnModsClicked__DelegateSignature();
	void OnCreateGameClicked__DelegateSignature();
	void OnSOTFClicked__DelegateSignature();
	void OnMultiplayerClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


