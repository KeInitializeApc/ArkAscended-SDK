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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UCheckIsVectorNonZero_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ReceiveExecute");

	Params::UCheckIsVectorNonZero_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UCheckIsVectorNonZero_C::ExecuteUbergraph_CheckIsVectorNonZero(class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ExecuteUbergraph_CheckIsVectorNonZero");

	Params::UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


