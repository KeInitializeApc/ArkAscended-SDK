#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConsoleCommand.ConsoleCommand_C
// (None)

class UClass* UConsoleCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleCommand_C");

	return Clss;
}


// ConsoleCommand_C ConsoleCommand.Default__ConsoleCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConsoleCommand_C* UConsoleCommand_C::GetDefaultObj()
{
	static class UConsoleCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleCommand_C*>(UConsoleCommand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleCommand.ConsoleCommand_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UConsoleCommand_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleCommand_C", "BPHighlightWidgetOnStart");

	Params::UConsoleCommand_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConsoleCommand.ConsoleCommand_C.BPCycleHighlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UConsoleCommand_C::BPCycleHighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleCommand_C", "BPCycleHighlighted");

	Params::UConsoleCommand_C_BPCycleHighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConsoleCommand.ConsoleCommand_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UConsoleCommand_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleCommand_C", "Tick");

	Params::UConsoleCommand_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function ConsoleCommand.ConsoleCommand_C.BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UConsoleCommand_C::BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleCommand_C", "BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConsoleCommand.ConsoleCommand_C.ExecuteUbergraph_ConsoleCommand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UConsoleCommand_C::ExecuteUbergraph_ConsoleCommand(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleCommand_C", "ExecuteUbergraph_ConsoleCommand");

	Params::UConsoleCommand_C_ExecuteUbergraph_ConsoleCommand_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


