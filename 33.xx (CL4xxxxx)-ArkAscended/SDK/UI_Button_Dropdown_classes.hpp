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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      OnHovered;                                         // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnSelected;                                        // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_DropDown;                                   // 0x348(0x8)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DropDown;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DropDown;                                     // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Button_Image;                                      // 0x360(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Button_Text;                                       // 0x368(0x18)(ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnClick;                                // 0x380(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnReleased;                             // 0x390(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ExitAfterClick;                                    // 0x3A0(0x1)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Dropdown_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ButtonSelected();
	void ButtonDeselected();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	class UUMGSequencePlayer* ExecuteUbergraph_UI_Button_Dropdown(float* CallFunc_GetAnimationCurrentTime_ReturnValue);
	void Dispatcher_OnReleased__DelegateSignature();
	void Dispatcher_OnClick__DelegateSignature();
};

}


