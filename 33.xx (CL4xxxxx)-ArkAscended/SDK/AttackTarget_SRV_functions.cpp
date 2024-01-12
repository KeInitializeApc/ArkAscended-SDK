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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UAttackTarget_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ReceiveActivation");

	Params::UAttackTarget_SRV_C_ReceiveActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UAttackTarget_SRV_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ReceiveDeactivation");

	Params::UAttackTarget_SRV_C_ReceiveDeactivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp)

int32 UAttackTarget_SRV_C::ExecuteUbergraph_AttackTarget_SRV(class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackTarget_SRV_C", "ExecuteUbergraph_AttackTarget_SRV");

	Params::UAttackTarget_SRV_C_ExecuteUbergraph_AttackTarget_SRV_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


