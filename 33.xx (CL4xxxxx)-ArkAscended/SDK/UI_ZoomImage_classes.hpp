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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnBeginPlay;                                 // 0x760(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchingImages;                                   // 0x768(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonNext;                                        // 0x770(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonNextMouse;                                   // 0x778(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonPrev;                                        // 0x780(0x8)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonPrevMouse;                                   // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x790(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x798(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x7A0(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, RepNotify)
	int32                                        CurrentImageIndex;                                 // 0x7B0(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7B8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x7C0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x890(0xD0)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NextArrowImage;                                    // 0x960(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA30(0xD0)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTUI_ZoomImage(class UImage* IMG_ScreenshotImg);
	struct FKey BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPCycleHighlighted(bool ReturnValue);
	void PlayFadeInOnBeginPlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class UTexture2DDynamic* UpdateToCurrentImage(bool* CallFunc_IsValid_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, bool* CallFunc_IsValid_ReturnValue_1);
	void GetScreenshotsInfo(TArray<class UTexture2DDynamic*>* Screenshots, const TArray<class FString>& Descriptions, bool* CallFunc_IsValid_ReturnValue);
	class FString UpdateScreenshotDescription(bool* CallFunc_IsValid_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePageCounter(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetScrrenshotPaginationText_ReturnValue);
	bool UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions);
	void UpdateAllScreenshotInformation();
	int32 UpdateButtonsStyle(TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, int32* CallFunc_Int32_SubOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2);
	struct FGeometry OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
	void Animation_SwapBetweenImages(class UImage* IMG_ScreenshotImg);
	void Construct();
	struct FKey ButtonCall(enum class EViewState State);
	void BindControllerAction();
	void GoBack();
	void PrevImage();
	void NextImage();
	void BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature();
	float Tick();
	void BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
	void BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	FDelegateProperty_ ExecuteUbergraph_UI_ZoomImage(class UImage* K2Node_CustomEvent_IMG_ScreenshotImg, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, bool* CallFunc_CanGoToPreviousImage_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


