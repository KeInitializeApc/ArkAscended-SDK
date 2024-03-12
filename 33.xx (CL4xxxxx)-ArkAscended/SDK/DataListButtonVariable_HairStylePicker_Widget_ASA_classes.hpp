#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x480 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C
class UDataListButtonVariable_HairStylePicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_HairStylePicker_Widget_ASA_C* GetDefaultObj();

	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	void SetParameterValue(class FString* Value, bool* bPreventCallParent);
	bool ExecuteUbergraph_DataListButtonVariable_HairStylePicker_Widget_ASA(int32* EntryPoint, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_1, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
};

}


