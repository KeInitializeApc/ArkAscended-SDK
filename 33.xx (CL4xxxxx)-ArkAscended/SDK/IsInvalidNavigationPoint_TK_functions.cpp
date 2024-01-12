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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UIsInvalidNavigationPoint_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ReceiveExecute");

	Params::UIsInvalidNavigationPoint_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UIsInvalidNavigationPoint_TK_C::ExecuteUbergraph_IsInvalidNavigationPoint_TK(class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ExecuteUbergraph_IsInvalidNavigationPoint_TK");

	Params::UIsInvalidNavigationPoint_TK_C_ExecuteUbergraph_IsInvalidNavigationPoint_TK_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


