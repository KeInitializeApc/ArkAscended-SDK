#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C
// (None)

class UClass* UUI_CustomizeBoolSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeBoolSlot_C");

	return Clss;
}


// UI_CustomizeBoolSlot_C UI_CustomizeBoolSlot.Default__UI_CustomizeBoolSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeBoolSlot_C* UUI_CustomizeBoolSlot_C::GetDefaultObj()
{
	static class UUI_CustomizeBoolSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeBoolSlot_C*>(UUI_CustomizeBoolSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetCurrentTheme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreThemeRowData         CurrentTheme                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

struct FCFCoreThemeRowData UUI_CustomizeBoolSlot_C::GetCurrentTheme(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "GetCurrentTheme");

	Params::UUI_CustomizeBoolSlot_C_GetCurrentTheme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UUI_CustomizeBoolSlot_C::GetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "GetColor");

	Params::UUI_CustomizeBoolSlot_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UUI_CustomizeBoolSlot_C::SetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "SetColor");

	Params::UUI_CustomizeBoolSlot_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomizeBoolSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_CustomizeBoolSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "PreConstruct");

	Params::UUI_CustomizeBoolSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_CustomizeBoolSlot_C::BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_CustomizeBoolSlot_C_BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.ExecuteUbergraph_UI_CustomizeBoolSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ECheckBoxState          K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class UUI_ThemeCustomizer_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ThemeCustomizer_C*       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_CustomizeBoolSlot_C::ExecuteUbergraph_UI_CustomizeBoolSlot(bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState* K2Node_Select_Default, TArray<class UUI_ThemeCustomizer_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_ThemeCustomizer_C** CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "ExecuteUbergraph_UI_CustomizeBoolSlot");

	Params::UUI_CustomizeBoolSlot_C_ExecuteUbergraph_UI_CustomizeBoolSlot_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_GetAllWidgetsOfClass_FoundWidgets != nullptr)
		*CallFunc_GetAllWidgetsOfClass_FoundWidgets = std::move(Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


