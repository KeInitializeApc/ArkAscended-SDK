#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Prompt_SignIn.UI_Prompt_SignIn_C
// (None)

class UClass* UUI_Prompt_SignIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Prompt_SignIn_C");

	return Clss;
}


// UI_Prompt_SignIn_C UI_Prompt_SignIn.Default__UI_Prompt_SignIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Prompt_SignIn_C* UUI_Prompt_SignIn_C::GetDefaultObj()
{
	static class UUI_Prompt_SignIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Prompt_SignIn_C*>(UUI_Prompt_SignIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Prompt_SignIn_C::OnKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "OnKeyDown");

	Params::UUI_Prompt_SignIn_C_OnKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event CloseD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_CloseD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event CloseD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_Prompt_SignIn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "PreConstruct");

	Params::UUI_Prompt_SignIn_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Prompt_SignIn_C_BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Bind On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StoreMenu_C*             StoreMenuRef                                                     (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUI_StoreMenu_C* UUI_Prompt_SignIn_C::Event_Bind_On_Input_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Bind On Input Device Changed");

	Params::UUI_Prompt_SignIn_C_Event_Bind_On_Input_Device_Changed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ENUM_InputDevices UUI_Prompt_SignIn_C::Event_On_Input_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event On Input Device Changed");

	Params::UUI_Prompt_SignIn_C_Event_On_Input_Device_Changed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Failed To Send Security Code
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_Prompt_SignIn_C::Event_Failed_To_Send_Security_Code()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Failed To Send Security Code");

	Params::UUI_Prompt_SignIn_C_Event_Failed_To_Send_Security_Code_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event On Security Code Sent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_On_Security_Code_Sent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event On Security Code Sent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Send Security Code
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Event_Send_Security_Code()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Event Send Security Code");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Prompt_SignIn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.ExecuteUbergraph_UI_Prompt_SignIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_Verification_C*          CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UUI_PrivacyAndTerms_2_C*     CallFunc_Create_ReturnValue_1                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UUI_StoreMenu_C*             K2Node_CustomEvent_StoreMenuRef                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       K2Node_CustomEvent_Device                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENUM_InputDevices       CallFunc_CheckPlayerInputDevices_UsingGamepad_                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)

FDelegateProperty_ UUI_Prompt_SignIn_C::ExecuteUbergraph_UI_Prompt_SignIn(enum class ENUM_InputDevices Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class FText* CallFunc_GetEmptyText_ReturnValue, bool* CallFunc_NotEqual_TextText_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, enum class ENUM_InputDevices* CallFunc_CheckPlayerInputDevices_UsingGamepad_, bool* CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_SignIn_C", "ExecuteUbergraph_UI_Prompt_SignIn");

	Params::UUI_Prompt_SignIn_C_ExecuteUbergraph_UI_Prompt_SignIn_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_GetEmptyText_ReturnValue != nullptr)
		*CallFunc_GetEmptyText_ReturnValue = Parms.CallFunc_GetEmptyText_ReturnValue;

	if (CallFunc_NotEqual_TextText_ReturnValue != nullptr)
		*CallFunc_NotEqual_TextText_ReturnValue = Parms.CallFunc_NotEqual_TextText_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_CheckPlayerInputDevices_UsingGamepad_ != nullptr)
		*CallFunc_CheckPlayerInputDevices_UsingGamepad_ = Parms.CallFunc_CheckPlayerInputDevices_UsingGamepad_;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}

}


