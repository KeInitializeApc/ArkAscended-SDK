#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7A0 - 0x758)
// WidgetBlueprintGeneratedClass UI_Prompt_Uninstall.UI_Prompt_Uninstall_C
class UUI_Prompt_Uninstall_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            TEXT_ModName;                                      // 0x760(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModName2;                                     // 0x768(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x770(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x778(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x780(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x798(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_Uninstall_C* GetDefaultObj();

	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPEscapeClosed();
	bool BPHighlightWidgetOnStart();
	void UpdateThemeSettings();
	void InitializeUninstallIUI();
	void Cancel_Uninstall();
	void Construct();
	void BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	FDelegateProperty_ ExecuteUbergraph_UI_Prompt_Uninstall(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


