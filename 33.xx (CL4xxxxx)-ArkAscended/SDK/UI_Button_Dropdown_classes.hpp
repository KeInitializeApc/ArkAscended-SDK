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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      OnHovered;                                         // 0x338(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OnSelected;                                        // 0x340(0x8)(Edit, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_DropDown;                                   // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DropDown;                                      // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DropDown;                                     // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Button_Image;                                      // 0x360(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Button_Text;                                       // 0x368(0x18)(BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnClick;                                // 0x380(0x10)(Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Dispatcher_OnReleased;                             // 0x390(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ExitAfterClick;                                    // 0x3A0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Dropdown_C* GetDefaultObj();

	bool PreConstruct();
	void ButtonSelected();
	void ButtonDeselected();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	class UUMGSequencePlayer* ExecuteUbergraph_UI_Button_Dropdown(int32* EntryPoint, float CallFunc_GetAnimationCurrentTime_ReturnValue);
	void Dispatcher_OnReleased__DelegateSignature();
	void Dispatcher_OnClick__DelegateSignature();
};

}


