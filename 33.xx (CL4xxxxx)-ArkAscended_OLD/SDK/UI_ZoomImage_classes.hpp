#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A8 (0xB00 - 0x758)
// WidgetBlueprintGeneratedClass UI_ZoomImage.UI_ZoomImage_C
class UUI_ZoomImage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnBeginPlay;                                 // 0x760(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      SwitchingImages;                                   // 0x768(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonNext;                                        // 0x770(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonNextMouse;                                   // 0x778(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonPrev;                                        // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonPrevMouse;                                   // 0x788(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x790(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x798(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x7A0(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A8(0x8)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, RepNotify)
	int32                                        CurrentImageIndex;                                 // 0x7B0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_EBF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7B8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, DuplicateTransient)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x7C0(0xD0)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x890(0xD0)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NextArrowImage;                                    // 0x960(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA30(0xD0)(Edit, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	class UImage* SequenceEvent__ENTRYPOINTUI_ZoomImage();
	bool BPGamepadReleased(bool* ReturnValue);
	void BPEscapeClosed(bool* ReturnValue);
	void BPHighlightWidgetOnStart(bool* ReturnValue);
	void BPCycleHighlighted(bool* ReturnValue);
	bool PlayFadeInOnBeginPlayAnim();
	bool UpdateToCurrentImage();
	bool GetScreenshotsInfo(TArray<class FString>* Descriptions);
	class FString UpdateScreenshotDescription(class FText* CallFunc_Conv_StringToText_ReturnValue);
	class FText UpdatePageCounter();
	TArray<class FString> UpdateScreenshotImage(bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateAllScreenshotInformation();
	bool UpdateButtonsStyle();
	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, struct FEventReply* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	class UImage* Animation_SwapBetweenImages();
	void Construct();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void GoBack();
	void PrevImage();
	void NextImage();
	void BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	float ExecuteUbergraph_UI_ZoomImage(int32* EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State);
};

}


