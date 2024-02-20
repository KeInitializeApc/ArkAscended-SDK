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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_CustomComboBoxSpacer_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "PreConstruct");

	Params::UUI_CustomComboBoxSpacer_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.ExecuteUbergraph_UI_CustomComboBoxSpacer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

struct FVector2D UUI_CustomComboBoxSpacer_C::ExecuteUbergraph_UI_CustomComboBoxSpacer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "ExecuteUbergraph_UI_CustomComboBoxSpacer");

	Params::UUI_CustomComboBoxSpacer_C_ExecuteUbergraph_UI_CustomComboBoxSpacer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


