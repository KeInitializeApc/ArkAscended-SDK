#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenu_PrimalItem.ContextMenu_PrimalItem_C
// (None)

class UClass* UContextMenu_PrimalItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenu_PrimalItem_C");

	return Clss;
}


// ContextMenu_PrimalItem_C ContextMenu_PrimalItem.Default__ContextMenu_PrimalItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenu_PrimalItem_C* UContextMenu_PrimalItem_C::GetDefaultObj()
{
	static class UContextMenu_PrimalItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenu_PrimalItem_C*>(UContextMenu_PrimalItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UContextMenu_PrimalItem_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextMenu_PrimalItem_C", "Tick");

	Params::UContextMenu_PrimalItem_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.ExecuteUbergraph_ContextMenu_PrimalItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)

int32 UContextMenu_PrimalItem_C::ExecuteUbergraph_ContextMenu_PrimalItem(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextMenu_PrimalItem_C", "ExecuteUbergraph_ContextMenu_PrimalItem");

	Params::UContextMenu_PrimalItem_C_ExecuteUbergraph_ContextMenu_PrimalItem_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


