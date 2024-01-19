#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C
// (None)

class UClass* UCheckIsVectorNonZero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckIsVectorNonZero_C");

	return Clss;
}


// CheckIsVectorNonZero_C CheckIsVectorNonZero.Default__CheckIsVectorNonZero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheckIsVectorNonZero_C* UCheckIsVectorNonZero_C::GetDefaultObj()
{
	static class UCheckIsVectorNonZero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckIsVectorNonZero_C*>(UCheckIsVectorNonZero_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class AActor* UCheckIsVectorNonZero_C::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ReceiveExecute");

	Params::UCheckIsVectorNonZero_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (BlueprintVisible, ExportObject, OutParm, Transient, Config, GlobalConfig, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UCheckIsVectorNonZero_C::ExecuteUbergraph_CheckIsVectorNonZero(int32 EntryPoint, struct FVector* CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_Event_OwnerActor, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ExecuteUbergraph_CheckIsVectorNonZero");

	Params::UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetBlackboardValueAsVector_ReturnValue != nullptr)
		*CallFunc_GetBlackboardValueAsVector_ReturnValue = std::move(Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue);

	return Parms.ReturnValue;

}

}


