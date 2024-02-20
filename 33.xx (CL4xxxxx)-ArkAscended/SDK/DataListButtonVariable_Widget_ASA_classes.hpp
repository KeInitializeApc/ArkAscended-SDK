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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(Edit, ConstParm, EditFixedSize, Parm, Transient, DisableEditOnInstance, DuplicateTransient)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(BlueprintVisible, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2ADA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MultiplyValueToText;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Test;                                              // 0x458(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config)
	uint8                                        Pad_2ADC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(Edit, ConstParm, BlueprintVisible, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2ADE[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	bool IsExpanded(bool ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void CloseSlider();
	bool HasSlider(class USlider* ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class USlider_ASA_Widget_C** K2Node_DynamicCast_AsSlider_ASA_Widget);
	bool HasExpandedSlider(class USlider* ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class USlider_ASA_Widget_C** K2Node_DynamicCast_AsSlider_ASA_Widget);
	bool HideValueLabel();
	void GetIsSelectedBP(bool ReturnValue);
	void GetAllValueWidgets(const TArray<class UWidget*>& ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	class FString SetupTextValueOverride(class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool SetupNewValueWidget(const class FString& InString, int32* InputPin, bool PreventParentCall, class UUI_PCOptionsMenu* CallFunc_GetLivePCOptionsMenu_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_SetupTextValue_ReturnText, class FText CallFunc_SetupTextValueOverride_ReturnText, float CallFunc_GetFloatValue_ReturnValue);
	bool ExtraSetupToggledButton();
	float SetupTextValue(class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue);
	class UPrimalUserWidget* ExtraSetupWidget(int32* Index);
	class UVerticalBoxSlot* SetupOptionWidgets(bool CallFunc_HasAnyChildren_ReturnValue, const TArray<class UPrimalUserWidget*>& CallFunc_GetWidgetsToAdd_UserWidgets);
	bool GetWidgetsToAdd(const TArray<class UPrimalUserWidget*>& UserWidgets, TArray<class UPrimalUserWidget*>* LocalWIdget, int32* CallFunc_Array_Add_ReturnValue);
	float Setup_Values_Index(int32* Index, bool PreventCallParent, int32 CallFunc_Conv_BoolToInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, double* CallFunc_Conv_StringToDouble_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, float* K2Node_MakeStruct_FloatParam3_ImplicitCast);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	bool BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set);
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool SetParameterValue(class FString* Value);
	bool OnOverridedParameterValue(class FString* Value);
	bool SetIsSelectedBP();
	struct FVector2D UpdateColorPicker();
	float Tick();
	double ExecuteUbergraph_DataListButtonVariable_Widget_ASA(bool* K2Node_ComponentBoundEvent_Set, bool* K2Node_ComponentBoundEvent_FromSelectOtherOption, double* CallFunc_Conv_StringToDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class FString* K2Node_Event_Value_1, bool* K2Node_Event_bPreventCallParent_1, class FString* K2Node_Event_Value, bool* K2Node_Event_bPreventCallParent, class FText CallFunc_SetupTextValueOverride_ReturnText, bool* K2Node_Event_Selected, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_2, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* CallFunc_SelectString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue_3, double* CallFunc_FClamp_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue_1, class FString* CallFunc_SelectString_ReturnValue_1, class UOverallFatMusclePicker_C** K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	void ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
};

}


