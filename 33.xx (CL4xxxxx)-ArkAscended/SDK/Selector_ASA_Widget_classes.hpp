#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x381 - 0x330)
// WidgetBlueprintGeneratedClass Selector_ASA_Widget.Selector_ASA_Widget_C
class USelector_ASA_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UUniformGridPanel*                     Grid;                                              // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference)
	TArray<class UTexture2D*>                    IconsForOptions;                                   // 0x340(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        SelectedOption;                                    // 0x350(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_57D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                OptionClass;                                       // 0x358(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxItemsColumn;                                    // 0x360(0x4)(Edit, ConstParm, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CurrentRow;                                        // 0x364(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CurrentColumn;                                     // 0x368(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_57D4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        OptionsNames;                                      // 0x370(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         PreventNamesOnSelections;                          // 0x380(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USelector_ASA_Widget_C* GetDefaultObj();

	TArray<class FString> GetOptions(TArray<class UTexture2D*>* Icons);
	class UPrimalUserWidget* SetValueChangedToParent(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess);
	bool RefreshOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UOptionSelector_Widget_C** K2Node_DynamicCast_AsOption_Selector_Widget, bool* K2Node_DynamicCast_bSuccess);
	void Construct();
	bool PreConstruct();
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	int32 ExecuteUbergraph_Selector_ASA_Widget(int32* EntryPoint, int32* Temp_int_Variable, int32* Temp_int_Variable_1, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool* K2Node_DynamicCast_bSuccess, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, const TArray<class UTexture2D*>& CallFunc_GetOptions_Icons, const TArray<class FString>& CallFunc_GetOptions_Names, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable);
};

}


