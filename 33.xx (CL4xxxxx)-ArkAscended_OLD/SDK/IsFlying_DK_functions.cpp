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
// class AActor*                      OwnerActor                                                       (Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UIsFlying_DK_C::ReceiveConditionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveConditionCheck");

	Params::UIsFlying_DK_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UIsFlying_DK_C::ReceiveExecutionStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionStart");

	Params::UIsFlying_DK_C_ReceiveExecutionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class AActor* UIsFlying_DK_C::ReceiveExecutionFinish(enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionFinish");

	Params::UIsFlying_DK_C_ReceiveExecutionFinish_Params Parms{};

	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_2                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_3                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_4                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_5                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_HasBuffPreventingFlight_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)

bool UIsFlying_DK_C::ExecuteUbergraph_IsFlying_DK(int32* EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, enum class EBTNodeResult K2Node_Event_NodeResult, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_1, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_2, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_3, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_4, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_5, class AActor* K2Node_Event_OwnerActor_2, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_HasBuffPreventingFlight_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ExecuteUbergraph_IsFlying_DK");

	Params::UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params Parms{};

	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_NodeResult = K2Node_Event_NodeResult;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = K2Node_DynamicCast_AsPrimal_Dino_AIController_1;
	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_2 = K2Node_DynamicCast_AsPrimal_Dino_AIController_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_HasBuffPreventingFlight_ReturnValue = CallFunc_HasBuffPreventingFlight_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_PFCFromAIController_ReturnValue != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue = Parms.CallFunc_PFCFromAIController_ReturnValue;

	if (CallFunc_PFCFromAIController_ReturnValue_1 != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue_1 = Parms.CallFunc_PFCFromAIController_ReturnValue_1;

	if (CallFunc_PFCFromAIController_ReturnValue_2 != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue_2 = Parms.CallFunc_PFCFromAIController_ReturnValue_2;

	if (CallFunc_PFCFromAIController_ReturnValue_3 != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue_3 = Parms.CallFunc_PFCFromAIController_ReturnValue_3;

	if (CallFunc_PFCFromAIController_ReturnValue_4 != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue_4 = Parms.CallFunc_PFCFromAIController_ReturnValue_4;

	if (CallFunc_PFCFromAIController_ReturnValue_5 != nullptr)
		*CallFunc_PFCFromAIController_ReturnValue_5 = Parms.CallFunc_PFCFromAIController_ReturnValue_5;

	return Parms.ReturnValue;

}

}


