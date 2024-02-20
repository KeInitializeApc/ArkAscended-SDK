#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C
class UASAUI_MainMenu_LandingScreen_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      ShowMenu;                                          // 0x338(0x8)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         GoToLastPlayedButton;                              // 0x340(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCanvasPanel*                          MainUI_Panel;                                      // 0x348(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_C*                 NewsCarousel_Left;                                 // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUI_NewsCarousel_C*                 NewsCarousel_Right;                                // 0x358(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UASAUIWidget_Button_Style1B_C*         PressAToStartButton;                               // 0x360(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                WidgetToLoadOn_PressAToPlay;                       // 0x368(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalUserWidget*                     NextWidget;                                        // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnStartButtonClicked;                              // 0x378(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnGoToLastPlayedButtonClicked;                     // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnModIDLinkRequested;                              // 0x398(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUI_MainMenu_LandingScreen_C* GetDefaultObj();

	void BndEvt__ASAUI_MainMenu_LandingScreen_PressAToStartButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_LandingScreen_GoToLastPlayedButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void Construct();
	void RefreshAnim();
	int64 ModIDLinkRequested();
	bool ExecuteUbergraph_ASAUI_MainMenu_LandingScreen(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UUI_MainMenu** K2Node_DynamicCast_AsUI_Main_Menu);
	int64 OnModIDLinkRequested__DelegateSignature();
	void OnGoToLastPlayedButtonClicked__DelegateSignature();
	void OnStartButtonClicked__DelegateSignature();
};

}


