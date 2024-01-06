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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(BlueprintVisible, ExportObject, Parm, Transient, EditConst, SubobjectReference)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_563;                                         // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor, SimpleDisplay)
	double                                       CurrentTextPosition;                               // 0x7B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7B8(0x8)(ConstParm, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7C0(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7C8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7D0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, Transient, EditConst, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7D8(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bDidQuit;                                          // 0x7D9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bPlayingOutroMovie;                                // 0x7DA(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2F47[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCreditsClosed;                                   // 0x7E0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bStartedMusic;                                     // 0x7F0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UFinalCreditsUI_C* GetDefaultObj();

	void ConditionallySetupSkipButton();
	bool Play_Credits_Music();
	FDelegateProperty_ OnMoviePlaybackFinished();
	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	void CloseButtonEvent();
	void RemovedFromViewport();
	void AddedToViewport();
	void BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	double ExecuteUbergraph_FinalCreditsUI(int32 EntryPoint, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool CallFunc_NotEqual_StrStr_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_PlayMovie_ReturnValue);
	void OnCreditsClosed__DelegateSignature();
};

}


