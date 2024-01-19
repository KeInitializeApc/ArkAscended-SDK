#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ForceSuccess_TK.ForceSuccess_TK_C
// (None)

class UClass* UForceSuccess_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForceSuccess_TK_C");

	return Clss;
}


// ForceSuccess_TK_C ForceSuccess_TK.Default__ForceSuccess_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UForceSuccess_TK_C* UForceSuccess_TK_C::GetDefaultObj()
{
	static class UForceSuccess_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UForceSuccess_TK_C*>(UForceSuccess_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ForceSuccess_TK.ForceSuccess_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class AActor* UForceSuccess_TK_C::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ForceSuccess_TK_C", "ReceiveExecute");

	Params::UForceSuccess_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ForceSuccess_TK.ForceSuccess_TK_C.ExecuteUbergraph_ForceSuccess_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

void UForceSuccess_TK_C::ExecuteUbergraph_ForceSuccess_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ForceSuccess_TK_C", "ExecuteUbergraph_ForceSuccess_TK");

	Params::UForceSuccess_TK_C_ExecuteUbergraph_ForceSuccess_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


