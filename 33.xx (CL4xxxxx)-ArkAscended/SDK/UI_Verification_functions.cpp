#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Verification.UI_Verification_C
// (None)

class UClass* UUI_Verification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Verification_C");

	return Clss;
}


// UI_Verification_C UI_Verification.Default__UI_Verification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Verification_C* UUI_Verification_C::GetDefaultObj()
{
	static class UUI_Verification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Verification_C*>(UUI_Verification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Verification.UI_Verification_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Verification_C::OnKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "OnKeyDown");

	Params::UUI_Verification_C_OnKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUI_Verification_C::OnPreviewKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "OnPreviewKeyDown");

	Params::UUI_Verification_C_OnPreviewKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Digits                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UUI_Verification_C::BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature(const class FString& Digits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature");

	Params::UUI_Verification_C_BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature_Params Parms{};

	Parms.Digits = Digits;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.Event Bind On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StoreMenu_C*             StoreMenuRef                                                     (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUI_StoreMenu_C* UUI_Verification_C::Event_Bind_On_Input_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event Bind On Input Device Changed");

	Params::UUI_Verification_C_Event_Bind_On_Input_Device_Changed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.Event On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ENUM_InputDevices UUI_Verification_C::Event_On_Input_Device_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Input Device Changed");

	Params::UUI_Verification_C_Event_On_Input_Device_Changed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_Verification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "PreConstruct");

	Params::UUI_Verification_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Verification_C::BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.Event On Valid Auth Code Generated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Event_On_Valid_Auth_Code_Generated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Valid Auth Code Generated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.Event On Failed To Generate Auth Code
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_Verification_C::Event_On_Failed_To_Generate_Auth_Code()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Event On Failed To Generate Auth Code");

	Params::UUI_Verification_C_Event_On_Failed_To_Generate_Auth_Code_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Verification.UI_Verification_C.ExecuteUbergraph_UI_Verification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
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
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_Digits                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UUI_StoreMenu_C*             K2Node_CustomEvent_StoreMenuRef                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       K2Node_CustomEvent_Device                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_InputDevices       CallFunc_CheckPlayerInputDevices_UsingGamepad_                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDigits_Digits                                        (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)

struct FSlateColor UUI_Verification_C::ExecuteUbergraph_UI_Verification(enum class ENUM_InputDevices Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class FString* K2Node_ComponentBoundEvent_Digits, enum class ESlateVisibility* K2Node_Select_Default, enum class ENUM_InputDevices* CallFunc_CheckPlayerInputDevices_UsingGamepad_, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "ExecuteUbergraph_UI_Verification");

	Params::UUI_Verification_C_ExecuteUbergraph_UI_Verification_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_Digits != nullptr)
		*K2Node_ComponentBoundEvent_Digits = std::move(Parms.K2Node_ComponentBoundEvent_Digits);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_CheckPlayerInputDevices_UsingGamepad_ != nullptr)
		*CallFunc_CheckPlayerInputDevices_UsingGamepad_ = Parms.CallFunc_CheckPlayerInputDevices_UsingGamepad_;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Verification.UI_Verification_C.Close_D__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Verification_C::Close_D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Verification_C", "Close_D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


