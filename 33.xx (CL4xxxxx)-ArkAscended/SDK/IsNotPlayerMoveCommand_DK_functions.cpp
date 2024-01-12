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
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UIsNotPlayerMoveCommand_DK_C::ExecuteUbergraph_IsNotPlayerMoveCommand_DK(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsNotPlayerMoveCommand_DK_C", "ExecuteUbergraph_IsNotPlayerMoveCommand_DK");

	Params::UIsNotPlayerMoveCommand_DK_C_ExecuteUbergraph_IsNotPlayerMoveCommand_DK_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


