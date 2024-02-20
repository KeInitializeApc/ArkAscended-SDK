#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RotateToTarget_SRV.RotateToTarget_SRV_C
// (None)

class UClass* URotateToTarget_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RotateToTarget_SRV_C");

	return Clss;
}


// RotateToTarget_SRV_C RotateToTarget_SRV.Default__RotateToTarget_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URotateToTarget_SRV_C* URotateToTarget_SRV_C::GetDefaultObj()
{
	static class URotateToTarget_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URotateToTarget_SRV_C*>(URotateToTarget_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URotateToTarget_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ReceiveActivation");

	Params::URotateToTarget_SRV_C_ReceiveActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URotateToTarget_SRV_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ReceiveDeactivation");

	Params::URotateToTarget_SRV_C_ReceiveDeactivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ExecuteUbergraph_RotateToTarget_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAttackRotationRate_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double URotateToTarget_SRV_C::ExecuteUbergraph_RotateToTarget_SRV(class AActor** K2Node_Event_OwnerActor_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ExecuteUbergraph_RotateToTarget_SRV");

	Params::URotateToTarget_SRV_C_ExecuteUbergraph_RotateToTarget_SRV_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor_1 != nullptr)
		*K2Node_Event_OwnerActor_1 = Parms.K2Node_Event_OwnerActor_1;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}

}


