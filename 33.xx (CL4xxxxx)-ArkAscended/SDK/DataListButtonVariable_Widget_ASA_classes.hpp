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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(Edit, BlueprintReadOnly, Net, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3CFD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MultiplyValueToText;                               // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Test;                                              // 0x458(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_3D00[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D01[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	bool IsExpanded(bool* ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void CloseSlider();
	bool HasSlider(class USlider** ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	bool HasExpandedSlider(class USlider** ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	bool HideValueLabel();
	void GetIsSelectedBP(bool* ReturnValue);
	TArray<class UWidget*> GetAllValueWidgets(TArray<class UWidget*>* ReturnValue);
	class FString SetupTextValueOverride(class FText* ReturnText, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	int32 SetupNewValueWidget(const class FString& InString, int32* InputPin, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool ExtraSetupToggledButton(bool Toggle);
	class FText SetupTextValue(class FText* ReturnText, class FString* CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 ExtraSetupWidget();
	TArray<class UPrimalUserWidget*> SetupOptionWidgets(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	bool GetWidgetsToAdd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	float Setup_Values_Index(class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam2_ImplicitCast);
	void Construct();
	bool PreConstruct();
	bool BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature();
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetParameterValue(const class FString& Value, bool* bPreventCallParent);
	void OnOverridedParameterValue(const class FString& Value, bool* bPreventCallParent);
	void SetIsSelectedBP(bool* Selected);
	struct FVector2D UpdateColorPicker();
	float Tick(const struct FGeometry& MyGeometry);
	bool ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32 EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool* CallFunc_Conv_IntToBool_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool* CallFunc_Conv_IntToBool_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchName_CmpSuccess, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const TArray<class UDataListButtonVariable_Widget_ASA_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, int32 Temp_int_Array_Index_Variable, double* CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, struct FVector2D* K2Node_Event_ColorPickerSliderValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1, double* CallFunc_MakeVector2D_X_ImplicitCast, double* CallFunc_MakeVector2D_Y_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	int32 ReturnValue__DelegateSignature(class FText* ReturnValue);
};

}


