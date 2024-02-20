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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_ModName;                                      // 0x760(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_ModName2;                                     // 0x768(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x778(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x780(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x798(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_Uninstall_C* GetDefaultObj();

	struct FKey BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void UpdateThemeSettings();
	void InitializeUninstallIUI();
	void Cancel_Uninstall();
	void Construct();
	void BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	float Tick();
	FDelegateProperty_ ExecuteUbergraph_UI_Prompt_Uninstall(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


