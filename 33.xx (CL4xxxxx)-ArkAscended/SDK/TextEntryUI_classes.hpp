#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x840 - 0x7F0)
// WidgetBlueprintGeneratedClass TextEntryUI.TextEntryUI_C
class UTextEntryUI_C : public UUI_TextEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7F8(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x800(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UCustomButtonWidget*                   AcceptButton;                                      // 0x808(0x8)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Bracket_BigText;                                   // 0x810(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Bracket_SmallText;                                 // 0x818(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCheckBox*                             CheckBox;                                          // 0x820(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class UCustomButtonWidget*                   CloseButton;                                       // 0x828(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      EditBox;                                           // 0x830(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMultiLineEditableTextBox*             EditTextBoxMultiLine;                              // 0x838(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTextEntryUI_C* GetDefaultObj();

	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_TextEntryUI(int32* EntryPoint, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue_1);
};

}


