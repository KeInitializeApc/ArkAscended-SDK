#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C
// (None)

class UClass* UShouldFleeFromAttack_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShouldFleeFromAttack_SRV_C");

	return Clss;
}


// ShouldFleeFromAttack_SRV_C ShouldFleeFromAttack_SRV.Default__ShouldFleeFromAttack_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShouldFleeFromAttack_SRV_C* UShouldFleeFromAttack_SRV_C::GetDefaultObj()
{
	static class UShouldFleeFromAttack_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShouldFleeFromAttack_SRV_C*>(UShouldFleeFromAttack_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void UShouldFleeFromAttack_SRV_C::ReceiveTick(class AActor** OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShouldFleeFromAttack_SRV_C", "ReceiveTick");

	Params::UShouldFleeFromAttack_SRV_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ExecuteUbergraph_ShouldFleeFromAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_1                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_2                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_3                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_4                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_5                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_6                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetHealthPercentage_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ShouldForceFlee_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsAWildFollowerKnownServerside_ReturnValue              (ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsBaby_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UShouldFleeFromAttack_SRV_C::ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_5, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_6, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, float* CallFunc_GetHealthPercentage_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor** CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AController** CallFunc_GetController_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_3, class AActor** CallFunc_GetTarget_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_Greater_DoubleDouble_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShouldFleeFromAttack_SRV_C", "ExecuteUbergraph_ShouldFleeFromAttack_SRV");

	Params::UShouldFleeFromAttack_SRV_C_ExecuteUbergraph_ShouldFleeFromAttack_SRV_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1 = K2Node_DynamicCast_AsPrimal_Dino_Character_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = K2Node_DynamicCast_AsPrimal_Dino_AIController_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_1 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_1 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_1;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_2 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_2 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_2;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_3 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_3 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_3;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_4 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_4 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_4;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_5 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_5 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_5;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetBlackboardValueAsBool_ReturnValue_6 != nullptr)
		*CallFunc_GetBlackboardValueAsBool_ReturnValue_6 = Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_6;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetHealthPercentage_ReturnValue != nullptr)
		*CallFunc_GetHealthPercentage_ReturnValue = Parms.CallFunc_GetHealthPercentage_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_BPIsTamed_ReturnValue != nullptr)
		*CallFunc_BPIsTamed_ReturnValue = Parms.CallFunc_BPIsTamed_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_GetTarget_ReturnValue != nullptr)
		*CallFunc_GetTarget_ReturnValue = Parms.CallFunc_GetTarget_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Greater_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_B_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_B_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast_1;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}

}


