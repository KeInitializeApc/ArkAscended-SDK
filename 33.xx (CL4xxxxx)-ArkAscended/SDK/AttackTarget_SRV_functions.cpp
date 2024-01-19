#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttackTarget_SRV.AttackTarget_SRV_C
// (None)

class UClass* UAttackTarget_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttackTarget_SRV_C");

	return Clss;
}


// AttackTarget_SRV_C AttackTarget_SRV.Default__AttackTarget_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttackTarget_SRV_C* UAttackTarget_SRV_C::GetDefaultObj()
{
	static class UAttackTarget_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttackTarget_SRV_C*>(UAttackTarget_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class AActor* UAttackTarget_SRV_C::ReceiveActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ReceiveActivation");

	Params::UAttackTarget_SRV_C_ReceiveActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class AActor* UAttackTarget_SRV_C::ReceiveDeactivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ReceiveDeactivation");

	Params::UAttackTarget_SRV_C_ReceiveDeactivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

void UAttackTarget_SRV_C::ExecuteUbergraph_AttackTarget_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ExecuteUbergraph_AttackTarget_SRV");

	Params::UAttackTarget_SRV_C_ExecuteUbergraph_AttackTarget_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


