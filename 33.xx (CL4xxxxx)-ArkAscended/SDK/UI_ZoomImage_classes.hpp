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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInOnBeginPlay;                                 // 0x760(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      SwitchingImages;                                   // 0x768(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonNext;                                        // 0x770(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonNextMouse;                                   // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Base_C*          ButtonPrev;                                        // 0x780(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_ScreenshotNavigation_C*     ButtonPrevMouse;                                   // 0x788(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ScreenshotImg;                                 // 0x790(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Description;                                  // 0x798(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PageCounter;                                  // 0x7A0(0x8)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back_C_0;                     // 0x7A8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, RepNotify)
	int32                                        CurrentImageIndex;                                 // 0x7B0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3903[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ModPage_C*                         UI_ModPage;                                        // 0x7B8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, DuplicateTransient)
	struct FSlateBrush                           CantMoveRightImage;                                // 0x7C0(0xD0)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CantMoveLeftImage;                                 // 0x890(0xD0)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NextArrowImage;                                    // 0x960(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           PrevArrowImage;                                    // 0xA30(0xD0)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ZoomImage_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTUI_ZoomImage(class UImage* IMG_ScreenshotImg);
	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPEscapeClosed();
	bool BPHighlightWidgetOnStart();
	bool BPCycleHighlighted();
	class UUMGSequencePlayer* PlayFadeInOnBeginPlayAnim(bool* CallFunc_IsValid_ReturnValue);
	TArray<class FString> UpdateToCurrentImage(bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic** CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue_1);
	TArray<class FString> GetScreenshotsInfo(TArray<class UTexture2DDynamic*>* Screenshots, bool* CallFunc_IsValid_ReturnValue);
	TArray<class FString> UpdateScreenshotDescription(bool* CallFunc_IsValid_ReturnValue, class FString* CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePageCounter(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetScrrenshotPaginationText_ReturnValue);
	TArray<class FString> UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateAllScreenshotInformation();
	bool UpdateButtonsStyle(int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue);
	class APlayerController* OnKeyDown(struct FGeometry* MyGeometry, bool* CallFunc_IsValid_ReturnValue);
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
	class UBindButtonSystem* ExecuteUbergraph_UI_ZoomImage(int32* Temp_int_Variable, class UImage* K2Node_CustomEvent_IMG_ScreenshotImg, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


