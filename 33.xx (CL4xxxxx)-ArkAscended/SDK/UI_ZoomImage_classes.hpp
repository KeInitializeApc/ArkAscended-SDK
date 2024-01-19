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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnBeginPlay;                                 // 0x760(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchingImages;                                   // 0x768(0x8)(BlueprintVisible, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonNext;                                        // 0x770(0x8)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonNextMouse;                                   // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonPrev;                                        // 0x780(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonPrevMouse;                                   // 0x788(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x790(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x798(0x8)(Edit, BlueprintVisible, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x7A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, RepNotify)
	int32                                        CurrentImageIndex;                                 // 0x7B0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4811[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7B8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, EditConst, DuplicateTransient)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x7C0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x890(0xD0)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NextArrowImage;                                    // 0x960(0xD0)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA30(0xD0)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	class UImage* SequenceEvent__ENTRYPOINTUI_ZoomImage();
	bool BPGamepadReleased(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPCycleHighlighted(bool ReturnValue);
	bool PlayFadeInOnBeginPlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	bool UpdateToCurrentImage(class UTexture2DDynamic* CallFunc_Array_Get_Item);
	bool GetScreenshotsInfo(TArray<class FString>* Descriptions);
	class FText UpdateScreenshotDescription(const class FString& CallFunc_Array_Get_Item);
	class FText UpdatePageCounter();
	bool UpdateScreenshotImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateAllScreenshotInformation();
	int32 UpdateButtonsStyle(int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
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
	bool ExecuteUbergraph_UI_ZoomImage(int32 EntryPoint, int32* CallFunc_Subtract_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


