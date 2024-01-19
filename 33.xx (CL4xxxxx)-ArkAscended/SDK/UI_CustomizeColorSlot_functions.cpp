#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeColorSlot.UI_CustomizeColorSlot_C
// (None)

class UClass* UUI_CustomizeColorSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeColorSlot_C");

	return Clss;
}


// UI_CustomizeColorSlot_C UI_CustomizeColorSlot.Default__UI_CustomizeColorSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeColorSlot_C* UUI_CustomizeColorSlot_C::GetDefaultObj()
{
	static class UUI_CustomizeColorSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeColorSlot_C*>(UUI_CustomizeColorSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetCurrentTheme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreThemeRowData         CurrentTheme                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_CustomizeColorSlot_C::GetCurrentTheme(const struct FCFCoreThemeRowData& CurrentTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "GetCurrentTheme");

	Params::UUI_CustomizeColorSlot_C_GetCurrentTheme_Params Parms{};

	Parms.CurrentTheme = CurrentTheme;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UUI_CustomizeColorSlot_C::GetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "GetColor");

	Params::UUI_CustomizeColorSlot_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_CustomizeColorSlot_C::SetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "SetColor");

	Params::UUI_CustomizeColorSlot_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomizeColorSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomizeColorSlot_C::BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_CustomizeColorSlot_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "PreConstruct");

	Params::UUI_CustomizeColorSlot_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomizeColorSlot_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.ExecuteUbergraph_UI_CustomizeColorSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_ThemeCustomizer_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ThemeCustomizer_C*       CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetColor_Color                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetColor_Color_1                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UUI_CustomizeColorSlot_C::ExecuteUbergraph_UI_CustomizeColorSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item, struct FLinearColor* CallFunc_GetColor_Color, struct FLinearColor* CallFunc_GetColor_Color_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "ExecuteUbergraph_UI_CustomizeColorSlot");

	Params::UUI_CustomizeColorSlot_C_ExecuteUbergraph_UI_CustomizeColorSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_SetTimerDelegate_ReturnValue != nullptr)
		*CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(Parms.CallFunc_K2_SetTimerDelegate_ReturnValue);

	if (CallFunc_GetColor_Color != nullptr)
		*CallFunc_GetColor_Color = std::move(Parms.CallFunc_GetColor_Color);

	if (CallFunc_GetColor_Color_1 != nullptr)
		*CallFunc_GetColor_Color_1 = std::move(Parms.CallFunc_GetColor_Color_1);

	return Parms.ReturnValue;

}

}


