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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_SendNewCode;                                // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference)
	class UButton*                               Button_DifferentAccount;                           // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ResendCode;                                 // 0x358(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Select;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_SendNewcode;                                // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Verify;                                     // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Back;                                          // 0x378(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DifferentAccount;                              // 0x380(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Resend;                                        // 0x388(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ResendCode;                                    // 0x390(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Select;                                        // 0x398(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_VerifyControllerControl;                       // 0x3A0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Code_C*                            IO_Code;                                           // 0x3A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B0(0x8)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DifferentAccount;                             // 0x3B8(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Email;                                        // 0x3C0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Resend;                                       // 0x3C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Select;                                       // 0x3D0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SendNewCode;                                  // 0x3D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_WrongCode;                                    // 0x3E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          VerticalBox_ControllerControls;                    // 0x3E8(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Close_D;                                           // 0x3F0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentCode;                                       // 0x400(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                FilledDigits;                                      // 0x410(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_SignIn_C*                   UI_SignIn;                                         // 0x420(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Verification_C* GetDefaultObj();

	struct FGeometry OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FGeometry OnPreviewKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
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
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Valid_Auth_Code_Generated();
	struct FCFCoreError Event_On_Failed_To_Generate_Auth_Code();
	void Construct();
	struct FSlateColor ExecuteUbergraph_UI_Verification(enum class ENUM_InputDevices* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUI_StoreMenu_C** K2Node_CustomEvent_StoreMenuRef, enum class ENUM_InputDevices* K2Node_CustomEvent_Device, enum class ESlateVisibility* K2Node_Select_Default, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	void Close_D__DelegateSignature();
};

}


