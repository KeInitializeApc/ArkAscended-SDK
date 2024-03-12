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
// struct FCFCoreThemeRowData         CurrentTheme                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

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
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_ThemeCustomizer_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ThemeCustomizer_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetColor_Color                                          (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetColor_Color_1                                        (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

struct FLinearColor UUI_CustomizeColorSlot_C::ExecuteUbergraph_UI_CustomizeColorSlot(int32* EntryPoint, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeColorSlot_C", "ExecuteUbergraph_UI_CustomizeColorSlot");

	Params::UUI_CustomizeColorSlot_C_ExecuteUbergraph_UI_CustomizeColorSlot_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


