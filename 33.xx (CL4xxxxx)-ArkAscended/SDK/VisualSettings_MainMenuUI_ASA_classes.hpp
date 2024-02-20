#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x874 - 0x7C0)
// WidgetBlueprintGeneratedClass VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C
class UVisualSettings_MainMenuUI_ASA_C : public UVisualSettingsUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          ColorSpace;                                        // 0x7E8(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(Edit, ConstParm, EditFixedSize, Parm, Transient, DisableEditOnInstance, DuplicateTransient, Interp)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(Edit, ConstParm, EditFixedSize, Parm, Transient, DisableEditOnInstance, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaxLuminence;                                   // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinLuminence;                                   // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	double SetupGettHdrValue(float* Value, double* CallFunc_Lerp_ReturnValue);
	double SetupSetHdrValue(float* Value, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast);
	bool Get_HDRMid_Luminence_B_Is_Enabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue_1, bool* CallFunc_GetIsEnabled_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue);
	double UpdateHDR(float CallFunc_GetFloatValue_ReturnValue, double* CallFunc_Lerp_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue);
	void BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
	void AddedToViewport();
	void RemovedFromViewport();
	void BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index);
	void RefreshHDRValues();
	class UShooterGameUserSettings* ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(class FText* K2Node_ComponentBoundEvent_ReturnValue_3, int32* K2Node_ComponentBoundEvent_Index_3, class FText* K2Node_ComponentBoundEvent_ReturnValue_4, int32* K2Node_ComponentBoundEvent_Index_4, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue_1, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_2, int32* K2Node_ComponentBoundEvent_Index_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_1, int32* K2Node_ComponentBoundEvent_Index_1, class FText* K2Node_ComponentBoundEvent_ReturnValue, int32* K2Node_ComponentBoundEvent_Index, double CallFunc_SetupGettHdrValue_RealValue, double CallFunc_SetupGettHdrValue_RealValue_1, double CallFunc_SetupGettHdrValue_RealValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_SetupGettHdrValue_RealValue_3, double CallFunc_SetupGettHdrValue_RealValue_4, double CallFunc_SetupGettHdrValue_RealValue_5, float CallFunc_SetFloatValue_Value_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1);
	void ClosedEvent__DelegateSignature();
};

}


