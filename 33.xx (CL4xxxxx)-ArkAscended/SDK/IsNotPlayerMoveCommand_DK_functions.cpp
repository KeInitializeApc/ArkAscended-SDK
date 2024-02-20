#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C
// (None)

class UClass* UIsNotPlayerMoveCommand_DK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsNotPlayerMoveCommand_DK_C");

	return Clss;
}


// IsNotPlayerMoveCommand_DK_C IsNotPlayerMoveCommand_DK.Default__IsNotPlayerMoveCommand_DK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsNotPlayerMoveCommand_DK_C* UIsNotPlayerMoveCommand_DK_C::GetDefaultObj()
{
	static class UIsNotPlayerMoveCommand_DK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsNotPlayerMoveCommand_DK_C*>(UIsNotPlayerMoveCommand_DK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UIsNotPlayerMoveCommand_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsNotPlayerMoveCommand_DK_C", "ReceiveConditionCheck");

	Params::UIsNotPlayerMoveCommand_DK_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ExecuteUbergraph_IsNotPlayerMoveCommand_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UIsNotPlayerMoveCommand_DK_C::ExecuteUbergraph_IsNotPlayerMoveCommand_DK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsNotPlayerMoveCommand_DK_C", "ExecuteUbergraph_IsNotPlayerMoveCommand_DK");

	Params::UIsNotPlayerMoveCommand_DK_C_ExecuteUbergraph_IsNotPlayerMoveCommand_DK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}

}


