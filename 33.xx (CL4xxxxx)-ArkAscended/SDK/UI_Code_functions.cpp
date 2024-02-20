#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Code.UI_Code_C
// (None)

class UClass* UUI_Code_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Code_C");

	return Clss;
}


// UI_Code_C UI_Code.Default__UI_Code_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Code_C* UUI_Code_C::GetDefaultObj()
{
	static class UUI_Code_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Code_C*>(UUI_Code_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Code.UI_Code_C.OnLeftArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_Code_C::OnLeftArrow(bool* K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "OnLeftArrow");

	Params::UUI_Code_C_OnLeftArrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.OnRightArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_Code_C::OnRightArrow(bool* K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "OnRightArrow");

	Params::UUI_Code_C_OnRightArrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.GetDigits
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Digits                                                           (BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)

class FString UUI_Code_C::GetDigits(const class FString& Digits, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "GetDigits");

	Params::UUI_Code_C_GetDigits_Params Parms{};

	Parms.Digits = Digits;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_Conv_TextToString_ReturnValue_4 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_4 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_4);

	if (CallFunc_Conv_TextToString_ReturnValue_5 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_5 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_5);

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.BackSpace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_Code_C::BackSpace(bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BackSpace");

	Params::UUI_Code_C_BackSpace_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.SetDigitToText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_Code_C::SetDigitToText(int32* Index, class FText* Text, class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "SetDigitToText");

	Params::UUI_Code_C_SetDigitToText_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	if (CallFunc_Conv_StringToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_4 = Parms.CallFunc_Conv_StringToText_ReturnValue_4;

	if (CallFunc_Conv_StringToText_ReturnValue_5 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_5 = Parms.CallFunc_Conv_StringToText_ReturnValue_5;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetDigits_Digits                                        (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UUI_Code_C::OnPreviewKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "OnPreviewKeyDown");

	Params::UUI_Code_C_OnPreviewKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.Event Reset Code Incorect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Code_C::Event_Reset_Code_Incorect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "Event Reset Code Incorect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Code.UI_Code_C.Event Code Incorect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Code_C::Event_Code_Incorect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "Event Code Incorect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Code_C::BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature");

	Params::UUI_Code_C_BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Code.UI_Code_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_Code_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "PreConstruct");

	Params::UUI_Code_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_Code.UI_Code_C.ExecuteUbergraph_UI_Code
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable_2                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_5                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text_4                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_TextIsEmpty_ReturnValue_2                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_TextIsEmpty_ReturnValue_3                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_TextIsEmpty_ReturnValue_4                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue_5                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_3                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_1               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable_4                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_5                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_2               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_3               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_LastIndex_ReturnValue_2                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue_3                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_4               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_5               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_LastIndex_ReturnValue_4                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_LastIndex_ReturnValue_5                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)

bool UUI_Code_C::ExecuteUbergraph_UI_Code(class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32* CallFunc_Array_LastIndex_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, class FText* CallFunc_Conv_StringToText_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_3, int32* CallFunc_Array_LastIndex_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, int32* CallFunc_Array_LastIndex_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_4, class FString* CallFunc_Conv_TextToString_ReturnValue_5, class FText* CallFunc_Conv_StringToText_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_5, int32* CallFunc_Array_LastIndex_ReturnValue_4, class FText* CallFunc_Conv_StringToText_ReturnValue_5, int32* CallFunc_Array_LastIndex_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "ExecuteUbergraph_UI_Code");

	Params::UUI_Code_C_ExecuteUbergraph_UI_Code_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_1 = CallFunc_GetCharacterArrayFromString_ReturnValue_1;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_2 = CallFunc_GetCharacterArrayFromString_ReturnValue_2;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_3 = CallFunc_GetCharacterArrayFromString_ReturnValue_3;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_4 = CallFunc_GetCharacterArrayFromString_ReturnValue_4;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_5 = CallFunc_GetCharacterArrayFromString_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Array_LastIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_1 = Parms.CallFunc_Array_LastIndex_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_Array_LastIndex_ReturnValue_2 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_2 = Parms.CallFunc_Array_LastIndex_ReturnValue_2;

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	if (CallFunc_Array_LastIndex_ReturnValue_3 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_3 = Parms.CallFunc_Array_LastIndex_ReturnValue_3;

	if (CallFunc_Conv_TextToString_ReturnValue_4 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_4 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_4);

	if (CallFunc_Conv_TextToString_ReturnValue_5 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_5 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_5);

	if (CallFunc_Conv_StringToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_4 = Parms.CallFunc_Conv_StringToText_ReturnValue_4;

	if (CallFunc_Array_LastIndex_ReturnValue_4 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_4 = Parms.CallFunc_Array_LastIndex_ReturnValue_4;

	if (CallFunc_Conv_StringToText_ReturnValue_5 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_5 = Parms.CallFunc_Conv_StringToText_ReturnValue_5;

	if (CallFunc_Array_LastIndex_ReturnValue_5 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_5 = Parms.CallFunc_Array_LastIndex_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function UI_Code.UI_Code_C.OnDigitsNotFilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Code_C::OnDigitsNotFilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "OnDigitsNotFilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Code.UI_Code_C.OnDigitsFilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Digits                                                           (BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)

void UUI_Code_C::OnDigitsFilled__DelegateSignature(const class FString& Digits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Code_C", "OnDigitsFilled__DelegateSignature");

	Params::UUI_Code_C_OnDigitsFilled__DelegateSignature_Params Parms{};

	Parms.Digits = Digits;

	UObject::ProcessEvent(Func, &Parms);

}

}


