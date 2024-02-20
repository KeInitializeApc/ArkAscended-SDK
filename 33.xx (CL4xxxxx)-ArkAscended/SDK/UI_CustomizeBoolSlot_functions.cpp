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
// struct FCFCoreThemeRowData         CurrentTheme                                                     (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_CustomizeBoolSlot_C::GetCurrentTheme(struct FCFCoreThemeRowData* CurrentTheme, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "GetCurrentTheme");

	Params::UUI_CustomizeBoolSlot_C_GetCurrentTheme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTheme != nullptr)
		*CurrentTheme = std::move(Parms.CurrentTheme);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_CustomizeBoolSlot_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "PreConstruct");

	Params::UUI_CustomizeBoolSlot_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// TArray<class UUI_ThemeCustomizer_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_ThemeCustomizer_C*       CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_ThemeCustomizer_C* UUI_CustomizeBoolSlot_C::ExecuteUbergraph_UI_CustomizeBoolSlot(bool* Temp_bool_Variable, enum class ECheckBoxState* Temp_byte_Variable, enum class ECheckBoxState* Temp_byte_Variable_1, enum class ECheckBoxState* K2Node_Select_Default, bool* K2Node_ComponentBoundEvent_bIsChecked, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "ExecuteUbergraph_UI_CustomizeBoolSlot");

	Params::UUI_CustomizeBoolSlot_C_ExecuteUbergraph_UI_CustomizeBoolSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


