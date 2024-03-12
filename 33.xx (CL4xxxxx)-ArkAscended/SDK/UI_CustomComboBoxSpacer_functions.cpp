#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C
// (None)

class UClass* UUI_CustomComboBoxSpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBoxSpacer_C");

	return Clss;
}


// UI_CustomComboBoxSpacer_C UI_CustomComboBoxSpacer.Default__UI_CustomComboBoxSpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBoxSpacer_C* UUI_CustomComboBoxSpacer_C::GetDefaultObj()
{
	static class UUI_CustomComboBoxSpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBoxSpacer_C*>(UUI_CustomComboBoxSpacer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UUI_CustomComboBoxSpacer_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "PreConstruct");

	Params::UUI_CustomComboBoxSpacer_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.ExecuteUbergraph_UI_CustomComboBoxSpacer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UUI_CustomComboBoxSpacer_C::ExecuteUbergraph_UI_CustomComboBoxSpacer(int32* EntryPoint, struct FVector2D* CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "ExecuteUbergraph_UI_CustomComboBoxSpacer");

	Params::UUI_CustomComboBoxSpacer_C_ExecuteUbergraph_UI_CustomComboBoxSpacer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	return Parms.ReturnValue;

}

}


