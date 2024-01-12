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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          ColorSpace;                                        // 0x7E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DuplicateTransient)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient, Interp)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaxLuminence;                                   // 0x810(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinLuminence;                                   // 0x820(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	double SetupGettHdrValue(float Value, double CallFunc_Lerp_ReturnValue, double* CallFunc_Lerp_Alpha_ImplicitCast);
	float SetupSetHdrValue(float Value, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	bool Get_HDRMid_Luminence_B_Is_Enabled(bool* CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool UpdateHDR(float* CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast);
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
	float ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue_1, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_7, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_8, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_9, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_10, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_11, float* CallFunc_GetFloatValue_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_12, float* CallFunc_GetFloatValue_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_13, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_14, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_15);
	void ClosedEvent__DelegateSignature();
};

}


