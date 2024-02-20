#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x3A1 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Dropdown.UI_Button_Dropdown_C
class UUI_Button_Dropdown_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnHovered;                                         // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnSelected;                                        // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_DropDown;                                   // 0x348(0x8)(BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DropDown;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DropDown;                                     // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Button_Image;                                      // 0x360(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Button_Text;                                       // 0x368(0x18)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnClick;                                // 0x380(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnReleased;                             // 0x390(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ExitAfterClick;                                    // 0x3A0(0x1)(BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Dropdown_C* GetDefaultObj();

	void PreConstruct(bool* IsDesignTime);
	void ButtonSelected();
	void ButtonDeselected();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	bool ExecuteUbergraph_UI_Button_Dropdown(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float* CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void Dispatcher_OnReleased__DelegateSignature();
	void Dispatcher_OnClick__DelegateSignature();
};

}


