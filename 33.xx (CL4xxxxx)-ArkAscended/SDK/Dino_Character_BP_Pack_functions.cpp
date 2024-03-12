#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C
// (Actor, Pawn)

class UClass* ADino_Character_BP_Pack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dino_Character_BP_Pack_C");

	return Clss;
}


// Dino_Character_BP_Pack_C Dino_Character_BP_Pack.Default__Dino_Character_BP_Pack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADino_Character_BP_Pack_C* ADino_Character_BP_Pack_C::GetDefaultObj()
{
	static class ADino_Character_BP_Pack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADino_Character_BP_Pack_C*>(ADino_Character_BP_Pack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADino_Character_BP_Pack_C*   DeadDino                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ADino_Character_BP_Pack_C::PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "PackMemberDied");

	Params::ADino_Character_BP_Pack_C_PackMemberDied_Params Parms{};

	Parms.DeadDino = DeadDino;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::BP_OnSetDeath(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BP_OnSetDeath");

	Params::ADino_Character_BP_Pack_C_BP_OnSetDeath_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               belongsToOldPack                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             FirstTimeRadius                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ADino_Character_BP_Pack_C::Get_RadiusToJoinPack(bool belongsToOldPack, double FirstTimeRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "Get RadiusToJoinPack");

	Params::ADino_Character_BP_Pack_C_Get_RadiusToJoinPack_Params Parms{};

	Parms.belongsToOldPack = belongsToOldPack;
	Parms.FirstTimeRadius = FirstTimeRadius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class AActor*>              OldPack                                                          (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CanBeAdded                                                       (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               FoundInOldPack                                                   (ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CanAddDino                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Get_RadiusToJoinPack_firstTimeRadius                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValidClassForPack_isValid                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Can_Join_Pack_Can_Join                                  (BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDead_ReturnValue                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack_1                    (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double ADino_Character_BP_Pack_C::CanDinoBeAddedToPack(TArray<class AActor*>* OldPack, bool CanBeAdded, bool FoundInOldPack, bool CanAddDino, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_Get_RadiusToJoinPack_firstTimeRadius, bool* CallFunc_IsValidClassForPack_isValid, bool* CallFunc_Can_Join_Pack_Can_Join, bool* CallFunc_IsDead_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "CanDinoBeAddedToPack");

	Params::ADino_Character_BP_Pack_C_CanDinoBeAddedToPack_Params Parms{};

	Parms.CanBeAdded = CanBeAdded;
	Parms.FoundInOldPack = FoundInOldPack;
	Parms.CanAddDino = CanAddDino;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OldPack != nullptr)
		*OldPack = std::move(Parms.OldPack);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Get_RadiusToJoinPack_firstTimeRadius != nullptr)
		*CallFunc_Get_RadiusToJoinPack_firstTimeRadius = Parms.CallFunc_Get_RadiusToJoinPack_firstTimeRadius;

	if (CallFunc_IsValidClassForPack_isValid != nullptr)
		*CallFunc_IsValidClassForPack_isValid = Parms.CallFunc_IsValidClassForPack_isValid;

	if (CallFunc_Can_Join_Pack_Can_Join != nullptr)
		*CallFunc_Can_Join_Pack_Can_Join = Parms.CallFunc_Can_Join_Pack_Can_Join;

	if (CallFunc_IsDead_ReturnValue != nullptr)
		*CallFunc_IsDead_ReturnValue = Parms.CallFunc_IsDead_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToAdd                                                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 ADino_Character_BP_Pack_C::Add_Dino_to_Pack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "Add Dino to Pack");

	Params::ADino_Character_BP_Pack_C_Add_Dino_to_Pack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      JoiningActor                                                     (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool ADino_Character_BP_Pack_C::IsValidClassForPack(class AActor* JoiningActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "IsValidClassForPack");

	Params::ADino_Character_BP_Pack_C_IsValidClassForPack_Params Parms{};

	Parms.JoiningActor = JoiningActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue                            (ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_StaticGetTimeSince_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double ADino_Character_BP_Pack_C::BPTimerServer(double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float* CallFunc_StaticGetTimeSince_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BPTimerServer");

	Params::ADino_Character_BP_Pack_C_BPTimerServer_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_StaticGetTimeSince_ReturnValue != nullptr)
		*CallFunc_StaticGetTimeSince_ReturnValue = Parms.CallFunc_StaticGetTimeSince_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DurationOfPackPrevention                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

double ADino_Character_BP_Pack_C::Put_Join_Pack_On_Cooldown(double DurationOfPackPrevention)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "Put Join Pack On Cooldown");

	Params::ADino_Character_BP_Pack_C_Put_Join_Pack_On_Cooldown_Params Parms{};

	Parms.DurationOfPackPrevention = DurationOfPackPrevention;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Join                                                         (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_StaticGetTimeSince_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool ADino_Character_BP_Pack_C::Can_Join_Pack(bool Can_Join, bool* RetVal, float* CallFunc_StaticGetTimeSince_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "Can Join Pack");

	Params::ADino_Character_BP_Pack_C_Can_Join_Pack_Params Parms{};

	Parms.Can_Join = Can_Join;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (CallFunc_StaticGetTimeSince_ReturnValue != nullptr)
		*CallFunc_StaticGetTimeSince_ReturnValue = Parms.CallFunc_StaticGetTimeSince_ReturnValue;

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool ADino_Character_BP_Pack_C::BPShouldForceFlee(bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BPShouldForceFlee");

	Params::ADino_Character_BP_Pack_C_BPShouldForceFlee_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::ClearPack(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "ClearPack");

	Params::ADino_Character_BP_Pack_C_ClearPack_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBeginPlay                                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

bool ADino_Character_BP_Pack_C::InitPackDino(bool IsBeginPlay, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "InitPackDino");

	Params::ADino_Character_BP_Pack_C_InitPackDino_Params Parms{};

	Parms.IsBeginPlay = IsBeginPlay;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = CallFunc_K2_SetTimer_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_DoAttack_ReturnValue                                    (ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::PackRoar(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_DoAttack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "PackRoar");

	Params::ADino_Character_BP_Pack_C_PackRoar_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_DoAttack_ReturnValue != nullptr)
		*CallFunc_DoAttack_ReturnValue = Parms.CallFunc_DoAttack_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfObj                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPackLeader_bIsLeader                                  (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::UpdatePack(bool* CallFunc_IsPackLeader_bIsLeader, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "UpdatePack");

	Params::ADino_Character_BP_Pack_C_UpdatePack_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsPackLeader_bIsLeader != nullptr)
		*CallFunc_IsPackLeader_bIsLeader = Parms.CallFunc_IsPackLeader_bIsLeader;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttackIndex                                                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::BPDoAttack(bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BPDoAttack");

	Params::ADino_Character_BP_Pack_C_BPDoAttack_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttackIndex                                                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ADino_Character_BP_Pack_C::BlueprintCanRiderAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BlueprintCanRiderAttack");

	Params::ADino_Character_BP_Pack_C_BlueprintCanRiderAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttackIndex                                                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              Distance                                                         (Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              AttackRangeOffset                                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      OtherTarget                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ADino_Character_BP_Pack_C::BlueprintCanAttack(bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BlueprintCanAttack");

	Params::ADino_Character_BP_Pack_C_BlueprintCanAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsLeader                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      SelfObj                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              MyArrayIndex                                                     (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              MyLevel                                                          (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetCharacterLevel_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetCharacterLevel_ReturnValue_1                         (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsTamed_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetCharacterLevel_ReturnValue_2                         (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

double ADino_Character_BP_Pack_C::IsPackLeader(bool bIsLeader, int32* MyArrayIndex, int32* MyLevel, bool* RetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32* CallFunc_GetCharacterLevel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_GetCharacterLevel_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetCharacterLevel_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "IsPackLeader");

	Params::ADino_Character_BP_Pack_C_IsPackLeader_Params Parms{};

	Parms.bIsLeader = bIsLeader;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (MyArrayIndex != nullptr)
		*MyArrayIndex = Parms.MyArrayIndex;

	if (MyLevel != nullptr)
		*MyLevel = Parms.MyLevel;

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (CallFunc_GetCharacterLevel_ReturnValue != nullptr)
		*CallFunc_GetCharacterLevel_ReturnValue = Parms.CallFunc_GetCharacterLevel_ReturnValue;

	if (CallFunc_GetCharacterLevel_ReturnValue_1 != nullptr)
		*CallFunc_GetCharacterLevel_ReturnValue_1 = Parms.CallFunc_GetCharacterLevel_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetCharacterLevel_ReturnValue_2 != nullptr)
		*CallFunc_GetCharacterLevel_ReturnValue_2 = Parms.CallFunc_GetCharacterLevel_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADino_Character_BP_Pack_C::BPUnstasis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "BPUnstasis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundInOldPack                                                   (ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              OldPack                                                          (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      SelfObj                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              DinoArrayCopy                                                    (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack                      (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Can_Join_Pack_Can_Join                                  (BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPackLeader_bIsLeader                                  (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_Conv_DoubleToFloat_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Conv_DoubleToFloat_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetClosestActorArray_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack_1                    (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// TArray<class AActor*>              CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue            (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class ADino_Character_BP_Pack_C*   K2Node_DynamicCast_AsDino_Character_BP_Pack_2                    (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Can_Join_Pack_Can_Join_1                                (BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_CanDinoBeAddedToPack_canBeAdded                         (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast    (Edit, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double ADino_Character_BP_Pack_C::GatherPack(bool FoundInOldPack, TArray<class AActor*>* OldPack, const TArray<class AActor*>& DinoArrayCopy, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Can_Join_Pack_Can_Join, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_IsPackLeader_bIsLeader, float CallFunc_Conv_DoubleToFloat_ReturnValue, float CallFunc_Conv_DoubleToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor** CallFunc_GetClosestActorArray_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Greater_IntInt_ReturnValue, TArray<class AActor*>* CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_Can_Join_Pack_Can_Join_1, bool* CallFunc_CanDinoBeAddedToPack_canBeAdded, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float* CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "GatherPack");

	Params::ADino_Character_BP_Pack_C_GatherPack_Params Parms{};

	Parms.FoundInOldPack = FoundInOldPack;
	Parms.DinoArrayCopy = DinoArrayCopy;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_DoubleToFloat_ReturnValue = CallFunc_Conv_DoubleToFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToFloat_ReturnValue_1 = CallFunc_Conv_DoubleToFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OldPack != nullptr)
		*OldPack = std::move(Parms.OldPack);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Can_Join_Pack_Can_Join != nullptr)
		*CallFunc_Can_Join_Pack_Can_Join = Parms.CallFunc_Can_Join_Pack_Can_Join;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_IsPackLeader_bIsLeader != nullptr)
		*CallFunc_IsPackLeader_bIsLeader = Parms.CallFunc_IsPackLeader_bIsLeader;

	if (CallFunc_GetClosestActorArray_ReturnValue != nullptr)
		*CallFunc_GetClosestActorArray_ReturnValue = Parms.CallFunc_GetClosestActorArray_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue != nullptr)
		*CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue = std::move(Parms.CallFunc_ServerOctreeOverlapActorsBitMask_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Can_Join_Pack_Can_Join_1 != nullptr)
		*CallFunc_Can_Join_Pack_Can_Join_1 = Parms.CallFunc_Can_Join_Pack_Can_Join_1;

	if (CallFunc_CanDinoBeAddedToPack_canBeAdded != nullptr)
		*CallFunc_CanDinoBeAddedToPack_canBeAdded = Parms.CallFunc_CanDinoBeAddedToPack_canBeAdded;

	if (CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast != nullptr)
		*CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast = Parms.CallFunc_ServerOctreeOverlapActorsBitMask_Radius_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OriginalDestination                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     InVec                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     OutVec                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

struct FVector ADino_Character_BP_Pack_C::OverrideRandomWanderLocation(struct FVector* InVec, struct FVector* OutVec, bool* CallFunc_Greater_IntInt_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "OverrideRandomWanderLocation");

	Params::ADino_Character_BP_Pack_C_OverrideRandomWanderLocation_Params Parms{};

	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InVec != nullptr)
		*InVec = std::move(Parms.InVec);

	if (OutVec != nullptr)
		*OutVec = std::move(Parms.OutVec);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_Character_BP_Pack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_RandomInteger_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ADino_Character_BP_Pack_C::ExecuteUbergraph_Dino_Character_BP_Pack(int32* EntryPoint, int32* CallFunc_RandomInteger_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_Pack_C", "ExecuteUbergraph_Dino_Character_BP_Pack");

	Params::ADino_Character_BP_Pack_C_ExecuteUbergraph_Dino_Character_BP_Pack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_RandomInteger_ReturnValue != nullptr)
		*CallFunc_RandomInteger_ReturnValue = Parms.CallFunc_RandomInteger_ReturnValue;

}

}


