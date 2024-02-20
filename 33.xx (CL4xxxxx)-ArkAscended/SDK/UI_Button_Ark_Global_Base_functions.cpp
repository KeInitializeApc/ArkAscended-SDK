#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C
// (None)

class UClass* UUI_Button_Ark_Global_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Global_Base_C");

	return Clss;
}


// UI_Button_Ark_Global_Base_C UI_Button_Ark_Global_Base.Default__UI_Button_Ark_Global_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Global_Base_C* UUI_Button_Ark_Global_Base_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Global_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Global_Base_C*>(UUI_Button_Ark_Global_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetWidgetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UUI_Button_Ark_Global_Base_C::SetWidgetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetWidgetText");

	Params::UUI_Button_Ark_Global_Base_C_SetWidgetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetButtonColorPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_ButtonStates       State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// enum class ENUM_ButtonStates       Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENUM_ButtonStates       Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ENUM_ButtonStates       Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSlateColor                 K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)

void UUI_Button_Ark_Global_Base_C::SetButtonColorPreset(enum class ENUM_ButtonStates State, enum class ENUM_ButtonStates* Temp_byte_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_ButtonStates* Temp_byte_Variable_1, enum class ENUM_ButtonStates* Temp_byte_Variable_2, struct FSlateColor* K2Node_Select_Default, struct FSlateColor* K2Node_Select_Default_1, struct FSlateColor* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetButtonColorPreset");

	Params::UUI_Button_Ark_Global_Base_C_SetButtonColorPreset_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetFillToColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TintColor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateBrush UUI_Button_Ark_Global_Base_C::SetFillToColor(struct FSlateColor* TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetFillToColor");

	Params::UUI_Button_Ark_Global_Base_C_SetFillToColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TintColor != nullptr)
		*TintColor = std::move(Parms.TintColor);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetBorderToColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TintColor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_Button_Ark_Global_Base_C::SetBorderToColor(struct FSlateColor* TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetBorderToColor");

	Params::UUI_Button_Ark_Global_Base_C_SetBorderToColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TintColor != nullptr)
		*TintColor = std::move(Parms.TintColor);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_Button_Ark_Global_Base_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "PreConstruct");

	Params::UUI_Button_Ark_Global_Base_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Button_Ark_Global_Base_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "Tick");

	Params::UUI_Button_Ark_Global_Base_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.ExecuteUbergraph_UI_Button_Ark_Global_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// enum class ENUM_ButtonType         Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UTexture2D*                  Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// class UTexture2D*                  Temp_object_Variable_2                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ENUM_ButtonType         Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// class UTexture2D*                  Temp_object_Variable_3                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UUI_Button_Ark_Global_Base_C::ExecuteUbergraph_UI_Button_Ark_Global_Base(class UTexture2D* Temp_object_Variable, enum class ENUM_ButtonType* Temp_byte_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, class UTexture2D** K2Node_Select_Default, enum class ENUM_ButtonType* Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UTexture2D** K2Node_Select_Default_1, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "ExecuteUbergraph_UI_Button_Ark_Global_Base");

	Params::UUI_Button_Ark_Global_Base_C_ExecuteUbergraph_UI_Button_Ark_Global_Base_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.Hello Sasha_Whats up__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::Hello_Sasha_Whats_up__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "Hello Sasha_Whats up__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Global_Base_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


