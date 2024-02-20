#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3C0 - 0x330)
// WidgetBlueprintGeneratedClass UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C
class UUI_PrivacyAndTerms_2_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button_Close;                                      // 0x338(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Exit;                                       // 0x340(0x8)(Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_PrivacyPolicy;                              // 0x348(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_TermsOfUse;                                 // 0x350(0x8)(BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PrivacyPolicyFrame;                            // 0x358(0x8)(Edit, ExportObject, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_TermsOfUseFrame;                               // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Underline;                                     // 0x368(0x8)(ConstParm, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Underline2;                                    // 0x370(0x8)(EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PrivacyPolicy;                                // 0x378(0x8)(ExportObject, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_TermsOfUse;                                   // 0x380(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMultiLineEditableTextBox*             TEXT_Text;                                         // 0x388(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  PrivacyPolicy;                                     // 0x390(0x18)(ConstParm, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  TermsOfUse;                                        // 0x3A8(0x18)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_PrivacyAndTerms_2_C* GetDefaultObj();

	void Event_Terms_Of_Use();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_Close_B_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Privacy_Policy();
	void PreConstruct(bool* IsDesignTime);
	struct FTerms OnSuccess_UpdateTermsOfUse();
	void Event_Update_Terms_Of_Use_Text();
	struct FCFCoreError Event_Update_Terms_Of_Use_On_Error();
	struct FTerms ExecuteUbergraph_UI_PrivacyAndTerms_2(class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class FText* CallFunc_Conv_StringToText_ReturnValue);
};

}


