#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x5E0 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C
class UASAUIWidget_Button_Style4_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button;                                            // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x340(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x348(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x358(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify)
	class UImage*                                SelectedLine;                                      // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FText                                  ButtonLabel_Left;                                  // 0x370(0x18)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x388(0x10)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UTexture*                              ButtonLabel_Icon;                                  // 0x398(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B0(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3C8(0x58)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateBrush                           NormalStyle_Active;                                // 0x430(0xD0)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NormalStyle_Inactive;                              // 0x500(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               ButtonTextPadding;                                 // 0x5D0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_Style4_C* GetDefaultObj();

	void Construct();
	void Destruct();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	bool SetActive();
	float ExecuteUbergraph_ASAUIWidget_Button_Style4(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnButtonClicked__DelegateSignature();
};

}


