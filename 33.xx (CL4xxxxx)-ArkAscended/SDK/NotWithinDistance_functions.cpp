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
// class AActor*                      OwnerActor                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetBlackboardValueAsFloat_ReturnValue                   (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetTamedFollowTarget_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue           (Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanFly_ReturnValue                                      (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast            (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UNotWithinDistance_C::ExecuteUbergraph_NotWithinDistance(class AActor** K2Node_Event_OwnerActor, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool* CallFunc_CanFly_ReturnValue, float* CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double* CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_B_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotWithinDistance_C", "ExecuteUbergraph_NotWithinDistance");

	Params::UNotWithinDistance_C_ExecuteUbergraph_NotWithinDistance_Params Parms{};

	Parms.CallFunc_GetBlackboardValueAsFloat_ReturnValue = CallFunc_GetBlackboardValueAsFloat_ReturnValue;
	Parms.CallFunc_GetTamedFollowTarget_ReturnValue = CallFunc_GetTamedFollowTarget_ReturnValue;
	Parms.CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue = CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_OwnerActor != nullptr)
		*K2Node_Event_OwnerActor = Parms.K2Node_Event_OwnerActor;

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	if (CallFunc_K2_GetPawn_ReturnValue != nullptr)
		*CallFunc_K2_GetPawn_ReturnValue = Parms.CallFunc_K2_GetPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_CanFly_ReturnValue != nullptr)
		*CallFunc_CanFly_ReturnValue = Parms.CallFunc_CanFly_ReturnValue;

	if (CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue != nullptr)
		*CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue = Parms.CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_3;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Add_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


