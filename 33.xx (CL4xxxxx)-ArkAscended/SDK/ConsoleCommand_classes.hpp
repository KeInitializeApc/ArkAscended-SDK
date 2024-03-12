#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x7E8 - 0x7C0)
// WidgetBlueprintGeneratedClass ConsoleCommand.ConsoleCommand_C
class UConsoleCommand_C : public UUI_ConsoleCommand
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                Bracket_SmallText;                                 // 0x7C8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         CloseButton;                                       // 0x7D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UASAUIWidget_Button_Style1A_C*         EditButton;                                        // 0x7D8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      TextBox;                                           // 0x7E0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConsoleCommand_C* GetDefaultObj();

	bool BPHighlightWidgetOnStart();
	bool BPCycleHighlighted();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_ConsoleCommand(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


