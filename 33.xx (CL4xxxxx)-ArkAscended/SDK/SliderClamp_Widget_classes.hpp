#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x37C - 0x330)
// WidgetBlueprintGeneratedClass SliderClamp_Widget.SliderClamp_Widget_C
class USliderClamp_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               NextOption;                                        // 0x338(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        OverlayCapsLimit;                                  // 0x340(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               PreviousOption;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextName;                                          // 0x358(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LastValue;                                         // 0x360(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         UsesClampLimit;                                    // 0x364(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5641[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumClamps;                                         // 0x368(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5642[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ClampWidgetLimit;                                  // 0x370(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        SelectedInt;                                       // 0x378(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USliderClamp_Widget_C* GetDefaultObj();

	int32 UpdateMax(int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 Update(const class FString& Temp_string_Variable, int32* Temp_int_Variable, const class FString& Temp_string_Variable_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, class UPrimalUserWidget* CallFunc_Create_ReturnValue, int32* Temp_int_Variable_1, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UClampSliderPercentWIdget_C** K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget, bool* K2Node_DynamicCast_bSuccess, const class FString& K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	float RefreshInt();
	void SetupValue(double* Float, bool PreventRecallParent);
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	void Construct();
	bool PreConstruct();
	void UpdateClampLimit(int32* NumClampLimits);
	void RefreshLimits();
	void BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	class FString ExecuteUbergraph_SliderClamp_Widget(int32* EntryPoint, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue, int32* Temp_int_Variable, int32* K2Node_CustomEvent_NumClampLimits, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32* Temp_int_Variable_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, float* K2Node_VariableSet_LastValue_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
};

}


