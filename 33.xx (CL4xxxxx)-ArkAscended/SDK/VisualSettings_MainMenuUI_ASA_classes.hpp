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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          ColorSpace;                                        // 0x7E8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, Interp)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaxLuminence;                                   // 0x810(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinLuminence;                                   // 0x820(0x8)(ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	double SetupGettHdrValue(float Value);
	float SetupSetHdrValue(float Value, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_SetFloatValue_Value_ImplicitCast);
	bool Get_HDRMid_Luminence_B_Is_Enabled(bool ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue, class FString* CallFunc_GetPlatformName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	double UpdateHDR(float* CallFunc_GetFloatValue_ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue);
	void AddedToViewport();
	void RemovedFromViewport();
	void BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue);
	void RefreshHDRValues();
	float ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32 EntryPoint, int32* CallFunc_GetCurrentHDRDisplayNits_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_2, float* CallFunc_GetFloatValue_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_4, float* CallFunc_GetFloatValue_ReturnValue_5, float* CallFunc_SetFloatValue_Value_ImplicitCast, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5);
	void ClosedEvent__DelegateSignature();
};

}


