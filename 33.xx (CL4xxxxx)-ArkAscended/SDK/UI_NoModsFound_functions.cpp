#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_NoModsFound.UI_NoModsFound_C
// (None)

class UClass* UUI_NoModsFound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_NoModsFound_C");

	return Clss;
}


// UI_NoModsFound_C UI_NoModsFound.Default__UI_NoModsFound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_NoModsFound_C* UUI_NoModsFound_C::GetDefaultObj()
{
	static class UUI_NoModsFound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_NoModsFound_C*>(UUI_NoModsFound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_NoModsFound.UI_NoModsFound_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UUI_NoModsFound_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoModsFound_C", "Tick");

	Params::UUI_NoModsFound_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_NoModsFound.UI_NoModsFound_C.ExecuteUbergraph_UI_NoModsFound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

int32 UUI_NoModsFound_C::ExecuteUbergraph_UI_NoModsFound(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoModsFound_C", "ExecuteUbergraph_UI_NoModsFound");

	Params::UUI_NoModsFound_C_ExecuteUbergraph_UI_NoModsFound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


