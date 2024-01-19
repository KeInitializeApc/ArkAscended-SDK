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
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class AActor*                      OwnerActor                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class AActor* UIsFlying_DK_C::ReceiveExecutionFinish(enum class EBTNodeResult* NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionFinish");

	Params::UIsFlying_DK_C_ReceiveExecutionFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NodeResult != nullptr)
		*NodeResult = Parms.NodeResult;

	return Parms.ReturnValue;

}


// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue                         (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_1                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_2                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_3                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_4                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_5                       (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_HasBuffPreventingFlight_ReturnValue                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UIsFlying_DK_C::ExecuteUbergraph_IsFlying_DK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, enum class EBTNodeResult* K2Node_Event_NodeResult, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_1, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_2, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_3, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_4, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_5, class AActor* K2Node_Event_OwnerActor_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_HasBuffPreventingFlight_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ExecuteUbergraph_IsFlying_DK");

	Params::UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_NodeResult != nullptr)
		*K2Node_Event_NodeResult = Parms.K2Node_Event_NodeResult;

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

	if (CallFunc_HasBuffPreventingFlight_ReturnValue != nullptr)
		*CallFunc_HasBuffPreventingFlight_ReturnValue = Parms.CallFunc_HasBuffPreventingFlight_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	return Parms.ReturnValue;

}

}


