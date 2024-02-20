#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_ScreenshotNavigation.UI_Button_ScreenshotNavigation_C
class UUI_Button_ScreenshotNavigation_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                Image_Arrow;                                       // 0x338(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                Image_Border;                                      // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                Image_DropShadow;                                  // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UButton*                               IMG_PrevImage;                                     // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox_Previous;                                  // 0x358(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x360(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_ScreenshotNavigation_C* GetDefaultObj();

	void BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 ExecuteUbergraph_UI_Button_ScreenshotNavigation();
	void OnClick__DelegateSignature();
};

}


