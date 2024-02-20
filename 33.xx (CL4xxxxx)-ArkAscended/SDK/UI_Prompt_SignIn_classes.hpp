#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x448 - 0x330)
// WidgetBlueprintGeneratedClass UI_Prompt_SignIn.UI_Prompt_SignIn_C
class UUI_Prompt_SignIn_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_InvalidFrame;                               // 0x338(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
	class UButton*                               Button_Continue;                                   // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_PrivecyPolicy;                              // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ResendCode;                                 // 0x360(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Select;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_TermsOfUse;                                 // 0x370(0x8)(BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          ControllerControlsVerticalBox;                     // 0x378(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Back;                                          // 0x380(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ContinueControllerControl;                     // 0x388(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Email;                                         // 0x390(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_PrivacyPolicy;                                 // 0x398(0x8)(Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Resend;                                        // 0x3A0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Select;                                        // 0x3A8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_TermsOfUse;                                    // 0x3B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B8(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_EmailEditable;                                // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_InvalidEmail;                                 // 0x3C8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PrivacyPolicy;                                // 0x3D0(0x8)(ExportObject, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_PrivacyTermsOfUse;                            // 0x3D8(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Select;                                       // 0x3E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_TermsOfUse;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsEmailAccepted;                                   // 0x3F0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3826[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Verification_C*                    VerificationUI;                                    // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UWidget*                               CurrentPage;                                       // 0x408(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x410(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FText                                  EnteredEmail;                                      // 0x428(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_PrivacyAndTerms_2_C*               UI_PrivacyAndTerms;                                // 0x440(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_Prompt_SignIn_C* GetDefaultObj();

	struct FGeometry OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Event_CloseD();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText* Text);
	class UUI_StoreMenu_C* Event_Bind_On_Input_Device_Changed();
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device);
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_Close();
	struct FCFCoreError Event_Failed_To_Send_Security_Code();
	void Event_On_Security_Code_Sent();
	void Event_Send_Security_Code();
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	FDelegateProperty_ ExecuteUbergraph_UI_Prompt_SignIn(enum class ENUM_InputDevices* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, class FText CallFunc_GetEmptyText_ReturnValue, class UUI_StoreMenu_C** K2Node_CustomEvent_StoreMenuRef, bool CallFunc_NotEqual_TextText_ReturnValue, enum class ENUM_InputDevices* K2Node_CustomEvent_Device, enum class ESlateVisibility* K2Node_Select_Default, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, bool* CallFunc_IsValid_ReturnValue_3, struct FCFCoreError* K2Node_CustomEvent_error, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue);
};

}


