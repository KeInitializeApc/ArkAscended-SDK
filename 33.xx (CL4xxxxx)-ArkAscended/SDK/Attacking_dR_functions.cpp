#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
// (None)

class UClass* UAttacking_DR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attacking_DR_C");

	return Clss;
}


// Attacking_DR_C Attacking_dR.Default__Attacking_DR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttacking_DR_C* UAttacking_DR_C::GetDefaultObj()
{
	static class UAttacking_DR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttacking_DR_C*>(UAttacking_DR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAttacking_DR_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveExecutionStart");

	Params::UAttacking_DR_C_ReceiveExecutionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EBTNodeResult UAttacking_DR_C::ReceiveExecutionFinish(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveExecutionFinish");

	Params::UAttacking_DR_C_ReceiveExecutionFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

	return Parms.ReturnValue;

}


// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAttacking_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveConditionCheck");

	Params::UAttacking_DR_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UAttacking_DR_C::ExecuteUbergraph_Attacking_DR(class AActor** K2Node_Event_OwnerActor_2, class AActor** K2Node_Event_OwnerActor_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ExecuteUbergraph_Attacking_DR");

	Params::UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor_2 != nullptr)
		*K2Node_Event_OwnerActor_2 = Parms.K2Node_Event_OwnerActor_2;

	if (K2Node_Event_OwnerActor_1 != nullptr)
		*K2Node_Event_OwnerActor_1 = Parms.K2Node_Event_OwnerActor_1;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}

}


