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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x760(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x768(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x770(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ContinueEvent;                                     // 0x788(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            CancelEvent;                                       // 0x798(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_UninstallAll_C* GetDefaultObj();

	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPEscapeClosed();
	bool BPHighlightWidgetOnStart();
	void UpdateThemeSettings();
	void BndEvt__UI_Prompt_UninstallAll_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__UI_Prompt_UninstallAll_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	int32 ExecuteUbergraph_UI_Prompt_UninstallAll(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	void CancelEvent__DelegateSignature();
	void ContinueEvent__DelegateSignature();
};

}


