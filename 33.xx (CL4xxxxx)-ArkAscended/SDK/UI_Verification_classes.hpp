#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x428 - 0x330)
// WidgetBlueprintGeneratedClass UI_Verification.UI_Verification_C
class UUI_Verification_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_SendNewCode;                                // 0x338(0x8)(Edit, Net, OutParm, Config, InstancedReference, SubobjectReference)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UButton*                               Button_DifferentAccount;                           // 0x348(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ResendCode;                                 // 0x358(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Select;                                     // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_SendNewcode;                                // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	class UButton*                               Button_Verify;                                     // 0x370(0x8)(ConstParm, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Back;                                          // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DifferentAccount;                              // 0x380(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Resend;                                        // 0x388(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ResendCode;                                    // 0x390(0x8)(Edit, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Select;                                        // 0x398(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_VerifyControllerControl;                       // 0x3A0(0x8)(Edit, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UUI_Code_C*                            IO_Code;                                           // 0x3A8(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DifferentAccount;                             // 0x3B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Email;                                        // 0x3C0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Resend;                                       // 0x3C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Select;                                       // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SendNewCode;                                  // 0x3D8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_WrongCode;                                    // 0x3E0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UVerticalBox*                          VerticalBox_ControllerControls;                    // 0x3E8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Close_D;                                           // 0x3F0(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentCode;                                       // 0x400(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	class FString                                FilledDigits;                                      // 0x410(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_SignIn_C*                   UI_SignIn;                                         // 0x420(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Verification_C* GetDefaultObj();

	bool OnKeyDown(struct FGeometry* MyGeometry);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry);
	void BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature();
	void BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature(const class FString& Digits);
	void BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	class UUI_StoreMenu_C* Event_Bind_On_Input_Device_Changed();
	enum class ENUM_InputDevices Event_On_Input_Device_Changed();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Valid_Auth_Code_Generated();
	struct FCFCoreError Event_On_Failed_To_Generate_Auth_Code();
	void Construct();
	struct FSlateColor ExecuteUbergraph_UI_Verification(enum class ENUM_InputDevices Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class FString* K2Node_ComponentBoundEvent_Digits, enum class ESlateVisibility* K2Node_Select_Default, enum class ENUM_InputDevices* CallFunc_CheckPlayerInputDevices_UsingGamepad_, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void Close_D__DelegateSignature();
};

}


