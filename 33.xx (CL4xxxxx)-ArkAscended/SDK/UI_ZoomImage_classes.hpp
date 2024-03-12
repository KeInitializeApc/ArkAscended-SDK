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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnBeginPlay;                                 // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchingImages;                                   // 0x768(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonNext;                                        // 0x770(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonNextMouse;                                   // 0x778(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonPrev;                                        // 0x780(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonPrevMouse;                                   // 0x788(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x790(0x8)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x798(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, RepNotify)
	int32                                        CurrentImageIndex;                                 // 0x7B0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x7C0(0xD0)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x890(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NextArrowImage;                                    // 0x960(0xD0)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA30(0xD0)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTUI_ZoomImage(class UImage* IMG_ScreenshotImg);
	bool BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	bool BPEscapeClosed();
	bool BPHighlightWidgetOnStart();
	bool BPCycleHighlighted();
	bool PlayFadeInOnBeginPlayAnim();
	bool UpdateToCurrentImage(class UTexture2DDynamic* CallFunc_Array_Get_Item);
	bool GetScreenshotsInfo(const TArray<class FString>& Descriptions);
	class FText UpdateScreenshotDescription(const class FString& CallFunc_Array_Get_Item);
	class FText UpdatePageCounter();
	TArray<class FString> UpdateScreenshotImage(bool* CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateAllScreenshotInformation();
	int32 UpdateButtonsStyle(bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2);
	bool OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
	void Animation_SwapBetweenImages(class UImage* IMG_ScreenshotImg);
	void Construct();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void GoBack();
	void PrevImage();
	void NextImage();
	void BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	bool ExecuteUbergraph_UI_ZoomImage(int32* EntryPoint, int32* Temp_int_Variable, class UImage* K2Node_CustomEvent_IMG_ScreenshotImg, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* Temp_int_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, struct FKey* K2Node_CustomEvent_Key, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


