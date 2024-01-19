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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4BF3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MultiplyValueToText;                               // 0x450(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         Test;                                              // 0x458(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_4BF4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4BF5[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	void IsExpanded(bool ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CloseSlider();
	bool HasSlider(class USlider* ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget);
	bool HasExpandedSlider(class USlider* ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool HideValueLabel();
	void GetIsSelectedBP(bool ReturnValue);
	void GetAllValueWidgets(const TArray<class UWidget*>& ReturnValue, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	class FText SetupTextValueOverride(class FText ReturnText, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue);
	bool SetupNewValueWidget(int32* InputPin, bool* PreventParentCall, class UUI_PCOptionsMenu** CallFunc_GetLivePCOptionsMenu_ReturnValue, class FText* CallFunc_SetupTextValue_ReturnText, class FText CallFunc_SetupTextValueOverride_ReturnText, float* CallFunc_GetFloatValue_ReturnValue, int32* CallFunc_GetChildrenCount_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue);
	bool ExtraSetupToggledButton();
	float SetupTextValue(class FText ReturnText, class FText* CallFunc_Conv_DoubleToText_ReturnValue);
	int32 ExtraSetupWidget(class UPrimalUserWidget* UserWidget);
	int32 SetupOptionWidgets(int32 Temp_int_Loop_Counter_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, bool* CallFunc_HasAnyChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot** CallFunc_AddChildToVerticalBox_ReturnValue, TArray<class UPrimalUserWidget*>* CallFunc_GetWidgetsToAdd_UserWidgets);
	bool GetWidgetsToAdd(TArray<class UPrimalUserWidget*>* UserWidgets, const TArray<class UPrimalUserWidget*>& LocalWIdget, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	float Setup_Values_Index(bool* PreventCallParent, int32* CallFunc_Conv_BoolToInt_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam3_ImplicitCast);
	void Construct();
	bool PreConstruct();
	bool BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set);
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetParameterValue(const class FString& Value, bool* bPreventCallParent);
	void OnOverridedParameterValue(const class FString& Value, bool* bPreventCallParent);
	void SetIsSelectedBP(bool* Selected);
	void UpdateColorPicker(struct FVector2D* ColorPickerSliderValue);
	float Tick(const struct FGeometry& MyGeometry);
	int32 ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Set, bool K2Node_ComponentBoundEvent_FromSelectOtherOption, int32* CallFunc_Array_Length_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const class FString& K2Node_Event_Value_1, bool K2Node_Event_bPreventCallParent_1, const class FString& K2Node_Event_Value, bool K2Node_Event_bPreventCallParent, class FText CallFunc_SetupTextValueOverride_ReturnText, int32* CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_Selected, double* CallFunc_Divide_DoubleFloat_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class UPrimalUserWidget* CallFunc_Array_Get_Item, double* CallFunc_FClamp_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UOverallFatMusclePicker_C* K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, class UDataListButtonVariable_Widget_ASA_C* CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	int32 ReturnValue__DelegateSignature(class FText ReturnValue);
};

}


