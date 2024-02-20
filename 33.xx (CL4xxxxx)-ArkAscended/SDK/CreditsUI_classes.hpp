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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x768(0x8)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Close;                                             // 0x770(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UButton*                               CloseButton;                                       // 0x780(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          CreditsPanel;                                      // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalRichTextBlock*                  FCreditsText;                                      // 0x790(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                FullBlackBkg;                                      // 0x798(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                Image_1;                                           // 0x7A0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_16;                                          // 0x7A8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NoDestructor)
	class UImage*                                Image_17;                                          // 0x7B0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NoDestructor)
	class UImage*                                Image_18;                                          // 0x7B8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0x7C0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	double                                       CurrentTextPosition;                               // 0x7C8(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       ScrollTextSpeed;                                   // 0x7D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       LoopTextPosition;                                  // 0x7D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       InitialTextPosition;                               // 0x7E0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CurrentBkgOpacity;                                 // 0x7E8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bSetCredits;                                       // 0x7F0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_2FAF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameCounter;                                      // 0x7F4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                CreditsMusic;                                      // 0x7F8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCreditsUI_C* GetDefaultObj();

	void Construct();
	float Tick();
	void CloseButtonEvent();
	void RemovedFromViewport();
	double ExecuteUbergraph_CreditsUI(bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


