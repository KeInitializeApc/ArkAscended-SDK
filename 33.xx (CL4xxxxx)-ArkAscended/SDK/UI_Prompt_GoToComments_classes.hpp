#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x790 - 0x758)
// WidgetBlueprintGeneratedClass UI_Prompt_GoToComments.UI_Prompt_GoToComments_C
class UUI_Prompt_GoToComments_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x760(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x768(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x770(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x788(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_GoToComments_C* GetDefaultObj();

	struct FKey BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void UpdateThemeSettings();
	float Tick();
	void Construct();
	int32 ExecuteUbergraph_UI_Prompt_GoToComments(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


