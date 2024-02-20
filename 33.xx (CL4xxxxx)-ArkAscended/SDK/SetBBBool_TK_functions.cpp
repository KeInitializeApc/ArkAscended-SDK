#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBBBool_TK.SetBBBool_TK_C
// (None)

class UClass* USetBBBool_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBBBool_TK_C");

	return Clss;
}


// SetBBBool_TK_C SetBBBool_TK.Default__SetBBBool_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBBBool_TK_C* USetBBBool_TK_C::GetDefaultObj()
{
	static class USetBBBool_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBBBool_TK_C*>(USetBBBool_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SetBBBool_TK.SetBBBool_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USetBBBool_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetBBBool_TK_C", "ReceiveExecute");

	Params::USetBBBool_TK_C_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function SetBBBool_TK.SetBBBool_TK_C.ExecuteUbergraph_SetBBBool_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 USetBBBool_TK_C::ExecuteUbergraph_SetBBBool_TK(class AActor** K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetBBBool_TK_C", "ExecuteUbergraph_SetBBBool_TK");

	Params::USetBBBool_TK_C_ExecuteUbergraph_SetBBBool_TK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	return Parms.ReturnValue;

}

}


