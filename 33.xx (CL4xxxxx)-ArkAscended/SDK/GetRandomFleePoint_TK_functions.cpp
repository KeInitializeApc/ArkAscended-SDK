#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GetRandomFleePoint_TK.GetRandomFleePoint_TK_C
// (None)

class UClass* UGetRandomFleePoint_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetRandomFleePoint_TK_C");

	return Clss;
}


// GetRandomFleePoint_TK_C GetRandomFleePoint_TK.Default__GetRandomFleePoint_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGetRandomFleePoint_TK_C* UGetRandomFleePoint_TK_C::GetDefaultObj()
{
	static class UGetRandomFleePoint_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetRandomFleePoint_TK_C*>(UGetRandomFleePoint_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGetRandomFleePoint_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetRandomFleePoint_TK_C", "ReceiveExecute");

	Params::UGetRandomFleePoint_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ExecuteUbergraph_GetRandomFleePoint_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_RandomFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetRandomWanderDestination_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_GetRandomWanderDestination_ReturnValue_1                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue_1                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UGetRandomFleePoint_TK_C::ExecuteUbergraph_GetRandomFleePoint_TK(class AActor** K2Node_Event_OwnerActor, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, double* CallFunc_Add_DoubleDouble_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetRandomFleePoint_TK_C", "ExecuteUbergraph_GetRandomFleePoint_TK");

	Params::UGetRandomFleePoint_TK_C_ExecuteUbergraph_GetRandomFleePoint_TK_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);

	if (CallFunc_Multiply_VectorFloat_ReturnValue_2 != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue_2 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2);

	return Parms.ReturnValue;

}

}


