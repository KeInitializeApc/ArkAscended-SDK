#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsFlying_DK.IsFlying_DK_C
// (None)

class UClass* UIsFlying_DK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsFlying_DK_C");

	return Clss;
}


// IsFlying_DK_C IsFlying_DK.Default__IsFlying_DK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsFlying_DK_C* UIsFlying_DK_C::GetDefaultObj()
{
	static class UIsFlying_DK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsFlying_DK_C*>(UIsFlying_DK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UIsFlying_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveConditionCheck");

	Params::UIsFlying_DK_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UIsFlying_DK_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionStart");

	Params::UIsFlying_DK_C_ReceiveExecutionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (Edit, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EBTNodeResult UIsFlying_DK_C::ReceiveExecutionFinish(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionFinish");

	Params::UIsFlying_DK_C_ReceiveExecutionFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

	return Parms.ReturnValue;

}


// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue                         (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_1                       (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_2                       (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_3                       (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_4                       (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_5                       (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_HasBuffPreventingFlight_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UIsFlying_DK_C::ExecuteUbergraph_IsFlying_DK(class AActor** K2Node_Event_OwnerActor_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, class AActor** K2Node_Event_OwnerActor_2, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_2, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ExecuteUbergraph_IsFlying_DK");

	Params::UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor_1 != nullptr)
		*K2Node_Event_OwnerActor_1 = Parms.K2Node_Event_OwnerActor_1;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1;

	if (K2Node_Event_OwnerActor_2 != nullptr)
		*K2Node_Event_OwnerActor_2 = Parms.K2Node_Event_OwnerActor_2;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_2 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_2 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_2;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	return Parms.ReturnValue;

}

}


