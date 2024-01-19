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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(Edit, BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_563;                                         // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor, SimpleDisplay)
	double                                       CurrentTextPosition;                               // 0x7B0(0x8)(Edit, ExportObject, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7B8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7C0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7C8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7D8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bDidQuit;                                          // 0x7D9(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bPlayingOutroMovie;                                // 0x7DA(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_406C[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnCreditsClosed;                                   // 0x7E0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bStartedMusic;                                     // 0x7F0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UFinalCreditsUI_C* GetDefaultObj();

	void ConditionallySetupSkipButton();
	bool Play_Credits_Music();
	class AShooterPlayerController* OnMoviePlaybackFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	void CloseButtonEvent();
	void RemovedFromViewport();
	void AddedToViewport();
	void BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	double ExecuteUbergraph_FinalCreditsUI(int32 EntryPoint, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_PlayMovie_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void OnCreditsClosed__DelegateSignature();
};

}


