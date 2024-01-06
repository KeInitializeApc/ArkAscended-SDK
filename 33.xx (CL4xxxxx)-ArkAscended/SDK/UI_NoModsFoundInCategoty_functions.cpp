#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_NoModsFoundInCategoty.UI_NoModsFoundInCategoty_C
// (None)

class UClass* UUI_NoModsFoundInCategoty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_NoModsFoundInCategoty_C");

	return Clss;
}


// UI_NoModsFoundInCategoty_C UI_NoModsFoundInCategoty.Default__UI_NoModsFoundInCategoty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_NoModsFoundInCategoty_C* UUI_NoModsFoundInCategoty_C::GetDefaultObj()
{
	static class UUI_NoModsFoundInCategoty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_NoModsFoundInCategoty_C*>(UUI_NoModsFoundInCategoty_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_NoModsFoundInCategoty.UI_NoModsFoundInCategoty_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, SubobjectReference)

float UUI_NoModsFoundInCategoty_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoModsFoundInCategoty_C", "Tick");

	Params::UUI_NoModsFoundInCategoty_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_NoModsFoundInCategoty.UI_NoModsFoundInCategoty_C.ExecuteUbergraph_UI_NoModsFoundInCategoty
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UUI_NoModsFoundInCategoty_C::ExecuteUbergraph_UI_NoModsFoundInCategoty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoModsFoundInCategoty_C", "ExecuteUbergraph_UI_NoModsFoundInCategoty");

	Params::UUI_NoModsFoundInCategoty_C_ExecuteUbergraph_UI_NoModsFoundInCategoty_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


