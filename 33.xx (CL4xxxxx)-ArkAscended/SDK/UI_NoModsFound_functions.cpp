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
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UUI_NoModsFound_C::ExecuteUbergraph_UI_NoModsFound(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NoModsFound_C", "ExecuteUbergraph_UI_NoModsFound");

	Params::UUI_NoModsFound_C_ExecuteUbergraph_UI_NoModsFound_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


