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
// class FText                        InText                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

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
// enum class ENUM_ButtonStates       Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ENUM_ButtonStates       Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ENUM_ButtonStates       Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateColor                 K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UUI_Button_Ark_Global_Base_C::SetButtonColorPreset(enum class ENUM_ButtonStates State, enum class ENUM_ButtonStates Temp_byte_Variable, enum class ENUM_ButtonStates Temp_byte_Variable_1, enum class ENUM_ButtonStates Temp_byte_Variable_2, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetButtonColorPreset");

	Params::UUI_Button_Ark_Global_Base_C_SetButtonColorPreset_Params Parms{};

	Parms.State = State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetFillToColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TintColor                                                        (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

struct FSlateBrush UUI_Button_Ark_Global_Base_C::SetFillToColor(const struct FSlateColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetFillToColor");

	Params::UUI_Button_Ark_Global_Base_C_SetFillToColor_Params Parms{};

	Parms.TintColor = TintColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C.SetBorderToColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TintColor                                                        (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UUI_Button_Ark_Global_Base_C::SetBorderToColor(const struct FSlateColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "SetBorderToColor");

	Params::UUI_Button_Ark_Global_Base_C_SetBorderToColor_Params Parms{};

	Parms.TintColor = TintColor;

	UObject::ProcessEvent(Func, &Parms);

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UUI_Button_Ark_Global_Base_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "PreConstruct");

	Params::UUI_Button_Ark_Global_Base_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Button_Ark_Global_Base_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "Tick");

	Params::UUI_Button_Ark_Global_Base_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENUM_ButtonType         Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  Temp_object_Variable_1                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UTexture2D*                  Temp_object_Variable_2                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ENUM_ButtonType         Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UTexture2D*                  Temp_object_Variable_3                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

float UUI_Button_Ark_Global_Base_C::ExecuteUbergraph_UI_Button_Ark_Global_Base(int32* EntryPoint, class UTexture2D** Temp_object_Variable, enum class ENUM_ButtonType Temp_byte_Variable, class UTexture2D** Temp_object_Variable_1, class UTexture2D** Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default, enum class ENUM_ButtonType Temp_byte_Variable_1, class UTexture2D** Temp_object_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UTexture2D* K2Node_Select_Default_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, float* CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Base_C", "ExecuteUbergraph_UI_Button_Ark_Global_Base");

	Params::UUI_Button_Ark_Global_Base_C_ExecuteUbergraph_UI_Button_Ark_Global_Base_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	if (Temp_object_Variable_2 != nullptr)
		*Temp_object_Variable_2 = Parms.Temp_object_Variable_2;

	if (Temp_object_Variable_3 != nullptr)
		*Temp_object_Variable_3 = Parms.Temp_object_Variable_3;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast != nullptr)
		*CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;

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


