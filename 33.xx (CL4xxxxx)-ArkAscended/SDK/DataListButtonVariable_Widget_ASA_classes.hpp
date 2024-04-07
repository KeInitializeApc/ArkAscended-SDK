#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x478 - 0x3C0)
// WidgetBlueprintGeneratedClass DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C
class UDataListButtonVariable_Widget_ASA_C : public UDataListValueGeneric
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3C54[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MultiplyValueToText;                               // 0x450(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Test;                                              // 0x458(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config)
	uint8                                        Pad_3C56[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3C57[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	bool IsExpanded(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void CloseSlider();
	class USlider_ASA_Widget_C* HasSlider(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	bool HasExpandedSlider(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
	bool HideValueLabel();
	bool GetIsSelectedBP();
	TArray<class UWidget*> GetAllValueWidgets(TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	class FText SetupTextValueOverride(class FText* ReturnText);
	float SetupNewValueWidget(class FString* InString, int32* InputPin, int32* Temp_int_Variable, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool ExtraSetupToggledButton(bool* Toggle);
	double SetupTextValue(class FText* ReturnText, double CallFunc_Multiply_DoubleFloat_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 ExtraSetupWidget(class UPrimalUserWidget* UserWidget);
	TArray<class UPrimalUserWidget*> SetupOptionWidgets(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item);
	int32 GetWidgetsToAdd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	float Setup_Values_Index(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam2_ImplicitCast, float K2Node_MakeStruct_FloatParam1_ImplicitCast);
	void Construct();
	bool PreConstruct();
	bool BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature();
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetParameterValue(class FString* Value, bool* bPreventCallParent);
	void OnOverridedParameterValue(class FString* Value, bool* bPreventCallParent);
	void SetIsSelectedBP(bool* Selected);
	void UpdateColorPicker(struct FVector2D* ColorPickerSliderValue);
	float Tick(struct FGeometry* MyGeometry);
	float ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue, bool* K2Node_DynamicCast_bSuccess, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32* CallFunc_GetChildIndex_ReturnValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1, bool* K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_1, class UDataListButtonVariable_Widget_ASA_C* CallFunc_Array_Get_Item_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_1, double* CallFunc_MakeVector2D_X_ImplicitCast, double* CallFunc_MakeVector2D_Y_ImplicitCast);
	int32 ReturnValue__DelegateSignature();
};

}


