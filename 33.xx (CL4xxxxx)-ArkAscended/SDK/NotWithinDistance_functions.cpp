#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
// (None)

class UClass* UNotWithinDistance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotWithinDistance_C");

	return Clss;
}


// NotWithinDistance_C NotWithinDistance.Default__NotWithinDistance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotWithinDistance_C* UNotWithinDistance_C::GetDefaultObj()
{
	static class UNotWithinDistance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotWithinDistance_C*>(UNotWithinDistance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotWithinDistance.NotWithinDistance_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UNotWithinDistance_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotWithinDistance_C", "ReceiveConditionCheck");

	Params::UNotWithinDistance_C_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function NotWithinDistance.NotWithinDistance_C.ExecuteUbergraph_NotWithinDistance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetBlackboardValueAsFloat_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetTamedFollowTarget_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue           (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanFly_ReturnValue                                      (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (Edit, ConstParm, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast            (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

class APawn* UNotWithinDistance_C::ExecuteUbergraph_NotWithinDistance(class AActor* K2Node_Event_OwnerActor, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor** CallFunc_GetTamedFollowTarget_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue, float* CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_CanFly_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double* CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double* CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float* CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotWithinDistance_C", "ExecuteUbergraph_NotWithinDistance");

	Params::UNotWithinDistance_C_ExecuteUbergraph_NotWithinDistance_Params Parms{};

	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsFloat_ReturnValue = CallFunc_GetBlackboardValueAsFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue = CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue;
	Parms.CallFunc_CanFly_ReturnValue = CallFunc_CanFly_ReturnValue;
	Parms.CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue = CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetTamedFollowTarget_ReturnValue != nullptr)
		*CallFunc_GetTamedFollowTarget_ReturnValue = Parms.CallFunc_GetTamedFollowTarget_ReturnValue;

	if (CallFunc_GetDistanceTo_ReturnValue != nullptr)
		*CallFunc_GetDistanceTo_ReturnValue = Parms.CallFunc_GetDistanceTo_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	if (CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Multiply_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast;

	if (CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast != nullptr)
		*CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast = Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;

	return Parms.ReturnValue;

}

}


