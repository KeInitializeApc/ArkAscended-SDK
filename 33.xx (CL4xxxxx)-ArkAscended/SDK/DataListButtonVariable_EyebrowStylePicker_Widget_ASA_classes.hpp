#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x488 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C
class UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         IsFemaleChar;                                      // 0x480(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_562F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Index;                                             // 0x484(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C* GetDefaultObj();

	bool SetCollapsedPreviewIcon(int32 Input, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue);
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	void SetParameterValue(class FString* Value, bool* bPreventCallParent);
	void RefreshEyebrows(bool IsFemale);
	bool ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, int32 Temp_int_Loop_Counter_Variable, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, class UPrimalUserWidget* CallFunc_Array_Get_Item);
};

}


