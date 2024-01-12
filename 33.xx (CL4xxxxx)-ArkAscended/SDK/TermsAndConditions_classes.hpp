#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x7E8 - 0x758)
// WidgetBlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
class UTermsAndConditions_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UButton*                               Button_OpenTerm;                                   // 0x768(0x8)(EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x770(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x778(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                IMG_BackGround;                                    // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Option;                                        // 0x788(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Terms_BackGround;                              // 0x790(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMGButtonA;                                        // 0x798(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                ImgButtonB;                                        // 0x7A0(0x8)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                OpenTermImage;                                     // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MainPC;                                       // 0x7B0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MainPS5;                                      // 0x7B8(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MainXSX;                                      // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAgree;                                           // 0x7C8(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x7D8(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UTermsAndConditions_C* GetDefaultObj();

	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPHighlightWidgetOnStart();
	class UUMGSequencePlayer* PlayFadeAnimation(enum class EUMGSequencePlayMode PlayMode, bool* CallFunc_IsValid_ReturnValue);
	void Construct();
	void BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	bool ExecuteUbergraph_TermsAndConditions(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UShooterGameViewportClient** CallFunc_GetViewportClient_ReturnValue, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions, bool* K2Node_DynamicCast_bSuccess, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameViewportClient** CallFunc_GetViewportClient_ReturnValue_1, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue_1, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue_2, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool* K2Node_DynamicCast_bSuccess_1, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions_1, bool* K2Node_DynamicCast_bSuccess_2);
	void OnCancel__DelegateSignature();
	void OnAgree__DelegateSignature();
};

}


