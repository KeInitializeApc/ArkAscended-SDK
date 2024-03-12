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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          ColorSpace;                                        // 0x7E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, Interp)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaxLuminence;                                   // 0x810(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinLuminence;                                   // 0x820(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	double SetupGettHdrValue(float* Value, double MinValue, double MaxValue, double RealValue, double CallFunc_Lerp_Alpha_ImplicitCast);
	float SetupSetHdrValue(class UDataListValueGeneric* Self2, float* Value, double MinValue, double MaxValue, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast);
	bool Get_HDRMid_Luminence_B_Is_Enabled(bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	double UpdateHDR(bool CallFunc_GetBoolValue_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast);
	void BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature();
	void AddedToViewport();
	void RemovedFromViewport();
	void BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature();
	void RefreshHDRValues();
	float ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32* EntryPoint, class FText* K2Node_ComponentBoundEvent_ReturnValue_3, int32* K2Node_ComponentBoundEvent_Index_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText* K2Node_ComponentBoundEvent_ReturnValue_4, int32* K2Node_ComponentBoundEvent_Index_4, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue_1, class AShooterPlayerController* CallFunc_GetPC_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, class FText* K2Node_ComponentBoundEvent_ReturnValue_2, int32* K2Node_ComponentBoundEvent_Index_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_1, int32* K2Node_ComponentBoundEvent_Index_1, class FText* K2Node_ComponentBoundEvent_ReturnValue, int32* K2Node_ComponentBoundEvent_Index, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_7, double CallFunc_SetupGettHdrValue_RealValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_8, double CallFunc_SetupGettHdrValue_RealValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_9, double CallFunc_SetupGettHdrValue_RealValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_10, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_11, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_12, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_13, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_14, double CallFunc_SetupGettHdrValue_RealValue_3, double CallFunc_SetupGettHdrValue_RealValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_15, double CallFunc_SetupGettHdrValue_RealValue_5, float CallFunc_SetFloatValue_Value_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1);
	void ClosedEvent__DelegateSignature();
};

}


