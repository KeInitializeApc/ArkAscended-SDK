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
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* URotateToTarget_SRV_C::ReceiveActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ReceiveActivation");

	Params::URotateToTarget_SRV_C_ReceiveActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* URotateToTarget_SRV_C::ReceiveDeactivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ReceiveDeactivation");

	Params::URotateToTarget_SRV_C_ReceiveDeactivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ExecuteUbergraph_RotateToTarget_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAttackRotationRate_ReturnValue                       (BlueprintReadOnly, Net, Parm, GlobalConfig, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double URotateToTarget_SRV_C::ExecuteUbergraph_RotateToTarget_SRV(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_GetAttackRotationRate_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RotateToTarget_SRV_C", "ExecuteUbergraph_RotateToTarget_SRV");

	Params::URotateToTarget_SRV_C_ExecuteUbergraph_RotateToTarget_SRV_Params Parms{};

	Parms.CallFunc_GetAttackRotationRate_ReturnValue = CallFunc_GetAttackRotationRate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_OwnerActor_1 != nullptr)
		*K2Node_Event_OwnerActor_1 = Parms.K2Node_Event_OwnerActor_1;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}

}


