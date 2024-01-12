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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAttacking_DR_C::ReceiveExecutionFinish(class AActor** OwnerActor, enum class EBTNodeResult* NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveExecutionFinish");

	Params::UAttacking_DR_C_ReceiveExecutionFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

	if (NodeResult != nullptr)
		*NodeResult = Parms.NodeResult;

}


// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference, Interp)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

enum class EBTNodeResult UAttacking_DR_C::ExecuteUbergraph_Attacking_DR(class AActor* K2Node_Event_OwnerActor_2, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ExecuteUbergraph_Attacking_DR");

	Params::UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params Parms{};

	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


