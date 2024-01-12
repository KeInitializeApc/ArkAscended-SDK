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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Back;                         // 0x760(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UUI_Button_Ark_Global_Back_C*          UI_Button_Ark_Global_Continue;                     // 0x768(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ModName;                                           // 0x770(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x788(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Prompt_GoToComments_C* GetDefaultObj();

	bool BPGamepadReleased(const struct FKey& TheKey);
	bool BPEscapeClosed();
	bool BPHighlightWidgetOnStart();
	void UpdateThemeSettings();
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	int32 ExecuteUbergraph_UI_Prompt_GoToComments(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


