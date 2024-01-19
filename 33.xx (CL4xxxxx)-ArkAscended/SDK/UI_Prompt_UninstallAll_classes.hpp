#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x7A8 - 0x758)
// WidgetBlueprintGeneratedClass UI_Prompt_UninstallAll.UI_Prompt_UninstallAll_C
class UUI_Prompt_UninstallAll_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x760(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x768(0x8)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x770(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ContinueEvent;                                     // 0x788(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            CancelEvent;                                       // 0x798(0x10)(Edit, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_UninstallAll_C* GetDefaultObj();

	bool BPGamepadReleased(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void UpdateThemeSettings();
	void BndEvt__UI_Prompt_UninstallAll_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_Prompt_UninstallAll_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	void ExecuteUbergraph_UI_Prompt_UninstallAll(int32 EntryPoint, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void CancelEvent__DelegateSignature();
	void ContinueEvent__DelegateSignature();
};

}


