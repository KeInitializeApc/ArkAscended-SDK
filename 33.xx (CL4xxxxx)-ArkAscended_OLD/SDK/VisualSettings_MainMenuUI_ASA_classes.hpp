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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButton_Widget_ASA_C*          ColorSpace;                                        // 0x7E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient, Interp)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaxLuminence;                                   // 0x810(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinLuminence;                                   // 0x820(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	double SetupGettHdrValue(float Value, double CallFunc_Lerp_Alpha_ImplicitCast);
	float SetupSetHdrValue(float Value, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	class FString Get_HDRMid_Luminence_B_Is_Enabled(bool* ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	bool UpdateHDR(float* CallFunc_GetFloatValue_ReturnValue, int32* CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast);
	void BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText* ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText* ReturnValue);
	void AddedToViewport();
	void RemovedFromViewport();
	void BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText* ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText* ReturnValue);
	int32 BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText* ReturnValue);
	void RefreshHDRValues();
	float ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32* EntryPoint, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue_1, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_2, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_2, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_4, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_7, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_8, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_9, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_10, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_11, float* CallFunc_GetFloatValue_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_4, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_12, float* CallFunc_GetFloatValue_ReturnValue_5, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_13, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_14, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_15);
	void ClosedEvent__DelegateSignature();
};

}


