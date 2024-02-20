#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_Button.ASAUIWidget_Button_C
// (None)

class UClass* UASAUIWidget_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_Button_C");

	return Clss;
}


// ASAUIWidget_Button_C ASAUIWidget_Button.Default__ASAUIWidget_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_Button_C* UASAUIWidget_Button_C::GetDefaultObj()
{
	static class UASAUIWidget_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_Button_C*>(UASAUIWidget_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TheText                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class FText UASAUIWidget_Button_C::SetButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "SetButtonText");

	Params::UASAUIWidget_Button_C_SetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.Fix PS Icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FString> XSX_ui_names                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// TMap<class FString, class FString> K2Node_MakeVariable_MakeVariableOutput                           (Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

TMap<class FString, class FString> UASAUIWidget_Button_C::Fix_PS_Icons(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "Fix PS Icons");

	Params::UASAUIWidget_Button_C_Fix_PS_Icons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateInputIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FDeprecateSlateVector2D UASAUIWidget_Button_C::UpdateInputIcon(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "UpdateInputIcon");

	Params::UASAUIWidget_Button_C_UpdateInputIcon_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateBracketAndTextColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FLinearColor                K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsPressed_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

struct FSlateColor UASAUIWidget_Button_C::UpdateBracketAndTextColors(bool* Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsHovered_ReturnValue, bool* CallFunc_IsPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "UpdateBracketAndTextColors");

	Params::UASAUIWidget_Button_C_UpdateBracketAndTextColors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsHovered_ReturnValue != nullptr)
		*CallFunc_IsHovered_ReturnValue = Parms.CallFunc_IsHovered_ReturnValue;

	if (CallFunc_IsPressed_ReturnValue != nullptr)
		*CallFunc_IsPressed_ReturnValue = Parms.CallFunc_IsPressed_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UASAUIWidget_Button_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "PreConstruct");

	Params::UASAUIWidget_Button_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "UpdateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UASAUIWidget_Button_C::SetActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "SetActive");

	Params::UASAUIWidget_Button_C_SetActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.OnWidgetGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

bool UASAUIWidget_Button_C::OnWidgetGamepadActiveChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "OnWidgetGamepadActiveChangedBP");

	Params::UASAUIWidget_Button_C_OnWidgetGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.ExecuteUbergraph_ASAUIWidget_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_newActive                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class ABasePlayerController*       K2Node_DynamicCast_AsBase_Player_Controller                      (Edit, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FLinearColor                K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (Edit, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_1                         (Edit, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASAUIWidget_Button_C::ExecuteUbergraph_ASAUIWidget_Button(bool K2Node_Event_bIsGamepadActive, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "ExecuteUbergraph_ASAUIWidget_Button");

	Params::UASAUIWidget_Button_C_ExecuteUbergraph_ASAUIWidget_Button_Params Parms{};

	Parms.K2Node_Event_bIsGamepadActive = K2Node_Event_bIsGamepadActive;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function ASAUIWidget_Button.ASAUIWidget_Button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_Button_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_Button_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


