#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
// (None)

class UClass* UMoveAroundBlockade_DR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoveAroundBlockade_DR_C");

	return Clss;
}


// MoveAroundBlockade_DR_C MoveAroundBlockade_DR.Default__MoveAroundBlockade_DR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMoveAroundBlockade_DR_C* UMoveAroundBlockade_DR_C::GetDefaultObj()
{
	static class UMoveAroundBlockade_DR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoveAroundBlockade_DR_C*>(UMoveAroundBlockade_DR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EBTNodeResult UMoveAroundBlockade_DR_C::ReceiveExecutionFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveExecutionFinish");

	Params::UMoveAroundBlockade_DR_C_ReceiveExecutionFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* UMoveAroundBlockade_DR_C::ReceiveConditionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveConditionCheck");

	Params::UMoveAroundBlockade_DR_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* UMoveAroundBlockade_DR_C::ReceiveExecutionStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveExecutionStart");

	Params::UMoveAroundBlockade_DR_C_ReceiveExecutionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ExecuteUbergraph_MoveAroundBlockade_DR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_DoubleToFloat_ReturnValue_1                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference, Interp)

bool UMoveAroundBlockade_DR_C::ExecuteUbergraph_MoveAroundBlockade_DR(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor_2, class AActor** K2Node_Event_OwnerActor_1, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool* K2Node_DynamicCast_bSuccess_3, double CallFunc_DoubleToFloat_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_4, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ExecuteUbergraph_MoveAroundBlockade_DR");

	Params::UMoveAroundBlockade_DR_C_ExecuteUbergraph_MoveAroundBlockade_DR_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_DoubleToFloat_ReturnValue = CallFunc_DoubleToFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_DoubleToFloat_ReturnValue_1 = CallFunc_DoubleToFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_OwnerActor_2 != nullptr)
		*K2Node_Event_OwnerActor_2 = Parms.K2Node_Event_OwnerActor_2;

	if (K2Node_Event_OwnerActor_1 != nullptr)
		*K2Node_Event_OwnerActor_1 = Parms.K2Node_Event_OwnerActor_1;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController_2 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController_2 = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_CharacterMovementToPCM_ReturnValue != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue = Parms.CallFunc_CharacterMovementToPCM_ReturnValue;

	if (CallFunc_CharacterMovementToPCM_ReturnValue_1 != nullptr)
		*CallFunc_CharacterMovementToPCM_ReturnValue_1 = Parms.CallFunc_CharacterMovementToPCM_ReturnValue_1;

	return Parms.ReturnValue;

}

}


