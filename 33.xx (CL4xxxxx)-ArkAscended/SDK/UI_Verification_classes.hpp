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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_SendNewCode;                                // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UButton*                               Button_DifferentAccount;                           // 0x348(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ResendCode;                                 // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Select;                                     // 0x360(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_SendNewcode;                                // 0x368(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_Verify;                                     // 0x370(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Back;                                          // 0x378(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DifferentAccount;                              // 0x380(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Resend;                                        // 0x388(0x8)(Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ResendCode;                                    // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Select;                                        // 0x398(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_VerifyControllerControl;                       // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_Code_C*                            IO_Code;                                           // 0x3A8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DifferentAccount;                             // 0x3B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Email;                                        // 0x3C0(0x8)(ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Resend;                                       // 0x3C8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Select;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SendNewCode;                                  // 0x3D8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_WrongCode;                                    // 0x3E0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          VerticalBox_ControllerControls;                    // 0x3E8(0x8)(Edit, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Close_D;                                           // 0x3F0(0x10)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CurrentCode;                                       // 0x400(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class FString                                FilledDigits;                                      // 0x410(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_SignIn_C*                   UI_SignIn;                                         // 0x420(0x8)(BlueprintVisible, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Verification_C* GetDefaultObj();

	bool OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue);
	void OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, struct FEventReply* ReturnValue);
	void BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature();
	class FString BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature();
	void BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_Bind_On_Input_Device_Changed(class UUI_StoreMenu_C** StoreMenuRef);
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device);
	bool PreConstruct();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Valid_Auth_Code_Generated();
	struct FCFCoreError Event_On_Failed_To_Generate_Auth_Code();
	void Construct();
	struct FSlateColor ExecuteUbergraph_UI_Verification(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Digits, class UUI_StoreMenu_C** K2Node_CustomEvent_StoreMenuRef, enum class ENUM_InputDevices* K2Node_CustomEvent_Device, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class FString* CallFunc_Conv_TextToString_ReturnValue);
	void Close_D__DelegateSignature();
};

}


