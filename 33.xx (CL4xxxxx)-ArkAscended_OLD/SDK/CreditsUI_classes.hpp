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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(Edit, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_16;                                          // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NoDestructor)
	class UImage*                                Image_17;                                          // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor)
	class UImage*                                Image_18;                                          // 0x7B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	double                                       CurrentTextPosition;                               // 0x7C8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7D0(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7E0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7E8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7F0(0x1)(Edit, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3E46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameCounter;                                      // 0x7F4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CreditsMusic;                                      // 0x7F8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCreditsUI_C* GetDefaultObj();

	void Construct();
	float Tick(const struct FGeometry& MyGeometry);
	void CloseButtonEvent();
	void RemovedFromViewport();
	FDelegateProperty_ ExecuteUbergraph_CreditsUI(int32* EntryPoint, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, class UPrimalGlobalsBlueprint_C** K2Node_DynamicCast_AsPrimal_Globals_Blueprint, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCanvasPanelSlot** K2Node_DynamicCast_AsCanvas_Panel_Slot, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


