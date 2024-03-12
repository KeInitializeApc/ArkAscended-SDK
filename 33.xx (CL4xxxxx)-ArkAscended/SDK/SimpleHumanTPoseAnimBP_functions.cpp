#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C
// (None)

class UClass* USimpleHumanTPoseAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleHumanTPoseAnimBP_C");

	return Clss;
}


// SimpleHumanTPoseAnimBP_C SimpleHumanTPoseAnimBP.Default__SimpleHumanTPoseAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleHumanTPoseAnimBP_C* USimpleHumanTPoseAnimBP_C::GetDefaultObj()
{
	static class USimpleHumanTPoseAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleHumanTPoseAnimBP_C*>(USimpleHumanTPoseAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void USimpleHumanTPoseAnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleHumanTPoseAnimBP_C", "AnimGraph");

	Params::USimpleHumanTPoseAnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USimpleHumanTPoseAnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleHumanTPoseAnimBP_C", "BlueprintUpdateAnimation");

	Params::USimpleHumanTPoseAnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTimeX != nullptr)
		*DeltaTimeX = Parms.DeltaTimeX;

}


// Function SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USimpleHumanTPoseAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleHumanTPoseAnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C.ExecuteUbergraph_SimpleHumanTPoseAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USimpleHumanTPoseAnimBP_C::ExecuteUbergraph_SimpleHumanTPoseAnimBP(int32* EntryPoint, float* K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleHumanTPoseAnimBP_C", "ExecuteUbergraph_SimpleHumanTPoseAnimBP");

	Params::USimpleHumanTPoseAnimBP_C_ExecuteUbergraph_SimpleHumanTPoseAnimBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_DeltaTimeX != nullptr)
		*K2Node_Event_DeltaTimeX = Parms.K2Node_Event_DeltaTimeX;

}


// Function SimpleHumanTPoseAnimBP.SimpleHumanTPoseAnimBP_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USimpleHumanTPoseAnimBP_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleHumanTPoseAnimBP_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


