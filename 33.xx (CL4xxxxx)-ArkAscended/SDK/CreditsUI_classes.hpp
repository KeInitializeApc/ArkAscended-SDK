#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x808 - 0x758)
// WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C
class UCreditsUI_C : public UPrimalUI
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
	class UImage*                                Image_16;                                          // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NoDestructor)
	class UImage*                                Image_17;                                          // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor)
	class UImage*                                Image_18;                                          // 0x7B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	double                                       CurrentTextPosition;                               // 0x7C8(0x8)(Edit, ExportObject, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7D8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7F0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_26BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameCounter;                                      // 0x7F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CreditsMusic;                                      // 0x7F8(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCreditsUI_C* GetDefaultObj();

	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	void CloseButtonEvent();
	void RemovedFromViewport();
	double ExecuteUbergraph_CreditsUI(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


