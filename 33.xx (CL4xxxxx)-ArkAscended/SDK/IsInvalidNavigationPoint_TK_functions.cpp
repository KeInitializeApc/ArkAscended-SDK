#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C
// (None)

class UClass* UIsInvalidNavigationPoint_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsInvalidNavigationPoint_TK_C");

	return Clss;
}


// IsInvalidNavigationPoint_TK_C IsInvalidNavigationPoint_TK.Default__IsInvalidNavigationPoint_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsInvalidNavigationPoint_TK_C* UIsInvalidNavigationPoint_TK_C::GetDefaultObj()
{
	static class UIsInvalidNavigationPoint_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsInvalidNavigationPoint_TK_C*>(UIsInvalidNavigationPoint_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* UIsInvalidNavigationPoint_TK_C::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ReceiveExecute");

	Params::UIsInvalidNavigationPoint_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)

double UIsInvalidNavigationPoint_TK_C::ExecuteUbergraph_IsInvalidNavigationPoint_TK(int32* EntryPoint, struct FVector* CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor** K2Node_Event_OwnerActor, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ExecuteUbergraph_IsInvalidNavigationPoint_TK");

	Params::UIsInvalidNavigationPoint_TK_C_ExecuteUbergraph_IsInvalidNavigationPoint_TK_Params Parms{};

	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetBlackboardValueAsVector_ReturnValue != nullptr)
		*CallFunc_GetBlackboardValueAsVector_ReturnValue = std::move(Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	return Parms.ReturnValue;

}

}

