#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x7F1 - 0x758)
// WidgetBlueprintGeneratedClass FinalCreditsUI.FinalCreditsUI_C
class UFinalCreditsUI_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_563;                                         // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor, SimpleDisplay)
	double                                       CurrentTextPosition;                               // 0x7B0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7C8(0x8)(ConstParm, Transient, EditConst, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7D0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bDidQuit;                                          // 0x7D9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bPlayingOutroMovie;                                // 0x7DA(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_13B3[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCreditsClosed;                                   // 0x7E0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Transient, EditConst, SubobjectReference)
	bool                                         bStartedMusic;                                     // 0x7F0(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UFinalCreditsUI_C* GetDefaultObj();

	void ConditionallySetupSkipButton();
	bool Play_Credits_Music();
	FDelegateProperty_ OnMoviePlaybackFinished(const class FString& MoviePath, bool bPlaybackWasCancelled);
	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	void CloseButtonEvent();
	void RemovedFromViewport();
	void AddedToViewport();
	void BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	double ExecuteUbergraph_FinalCreditsUI(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_Multiply_DoubleDouble_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void OnCreditsClosed__DelegateSignature();
};

}


