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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BFD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MultiplyValueToText;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Test;                                              // 0x458(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_4BFE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BFF[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	bool IsExpanded(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void CloseSlider();
	bool HasSlider(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool* K2Node_DynamicCast_bSuccess);
	bool HasExpandedSlider(int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Length_ReturnValue);
	bool HideValueLabel();
	bool GetIsSelectedBP();
	TArray<class UWidget*> GetAllValueWidgets(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	bool SetupTextValueOverride(const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	bool SetupNewValueWidget(int32* InputPin, bool* PreventParentCall, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue);
	bool ExtraSetupToggledButton();
	class FText SetupTextValue(const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 ExtraSetupWidget();
	TArray<class UPrimalUserWidget*> SetupOptionWidgets(int32 CallFunc_Add_IntInt_ReturnValue, class UPrimalUserWidget** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	class UPrimalUserWidget* GetWidgetsToAdd(TArray<class UPrimalUserWidget*>* UserWidgets, const TArray<class UPrimalUserWidget*>& LocalWIdget, int32 CallFunc_Add_IntInt_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Add_ReturnValue);
	struct FBPNetExecParams Setup_Values_Index(bool* PreventCallParent, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, double CallFunc_Conv_StringToDouble_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, float K2Node_MakeStruct_FloatParam3_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast, float K2Node_MakeStruct_FloatParam1_ImplicitCast);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	bool BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set);
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool SetParameterValue(const class FString& Value);
	bool OnOverridedParameterValue(const class FString& Value);
	bool SetIsSelectedBP();
	struct FVector2D UpdateColorPicker();
	float Tick(struct FGeometry* MyGeometry);
	double ExecuteUbergraph_DataListButtonVariable_Widget_ASA(bool K2Node_ComponentBoundEvent_Set, bool K2Node_ComponentBoundEvent_FromSelectOtherOption, int32* CallFunc_Array_Length_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const class FString& K2Node_Event_Value_1, bool K2Node_Event_bPreventCallParent_1, const class FString& K2Node_Event_Value, bool K2Node_Event_bPreventCallParent, TArray<class UDataListButtonVariable_Widget_ASA_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32* CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_Selected, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue_3, class UPrimalUserWidget** CallFunc_Array_Get_Item, double* CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, class FString* CallFunc_SelectString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UOverallFatMusclePicker_C* K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, class UDataListButtonVariable_Widget_ASA_C** CallFunc_Array_Get_Item_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue_1, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	int32 ReturnValue__DelegateSignature();
};

}


