#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x3B8 - 0x381)
// WidgetBlueprintGeneratedClass BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C
class UBodyTemplates_Selector_ASA_C : public USelector_ASA_Widget_C
{
public:
	uint8                                        Pad_33ED[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bPCCIsFemale;                                      // 0x390(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_33EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SelectedCustomData;                                // 0x394(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    HairIconsFemale;                                   // 0x398(0x10)(Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    HairIconsMale;                                     // 0x3A8(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBodyTemplates_Selector_ASA_C* GetDefaultObj();

	class UPrimalUserWidget* SetValueChangedToParent(class UObject** CallFunc_GetOuterObject_ReturnValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess);
	int32 RefreshOptions(int32 CurrentIndex, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32* Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class UTexture2D*>& K2Node_Select_Default, class UTexture2D* CallFunc_Array_Get_Item, class UWidget** CallFunc_GetChildAt_ReturnValue, class UOptionSelector_Widget_C** K2Node_DynamicCast_AsOption_Selector_Widget, bool* K2Node_DynamicCast_bSuccess);
	TArray<class FString> GetOptions(TArray<class UTexture2D*>* Icons, TArray<class UTexture2D*>* HairIcons, TArray<class FString>* HairNames, bool Temp_bool_Variable, TArray<class UTexture2D*>* K2Node_MakeArray_Array, TArray<class FString>* K2Node_MakeArray_Array_1, const TArray<class UTexture2D*>& K2Node_Select_Default);
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	int32 ExecuteUbergraph_BodyTemplates_Selector_ASA(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetChildIndex_ReturnValue);
};

}


