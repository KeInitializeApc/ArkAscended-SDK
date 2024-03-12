#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x480 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C
class UDataListButtonVariable_BodyTemplatePicker_Widget_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_BodyTemplatePicker_Widget_C* GetDefaultObj();

	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	class UPrimalUserWidget* ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess);
};

}


