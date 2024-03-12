#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C
// (None)

class UClass* UBP_PrimalWindSourceComponent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PrimalWindSourceComponent_Base_C");

	return Clss;
}


// BP_PrimalWindSourceComponent_Base_C BP_PrimalWindSourceComponent_Base.Default__BP_PrimalWindSourceComponent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PrimalWindSourceComponent_Base_C* UBP_PrimalWindSourceComponent_Base_C::GetDefaultObj()
{
	static class UBP_PrimalWindSourceComponent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PrimalWindSourceComponent_Base_C*>(UBP_PrimalWindSourceComponent_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Get Bubble System Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

class FName UBP_PrimalWindSourceComponent_Base_C::Get_Bubble_System_Tag(class FString* CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Get Bubble System Tag");

	Params::UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BubbleSystemTag                                                  (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UBP_PrimalWindSourceComponent_Base_C::Deactivate_bubble_system(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "deactivate bubble system");

	Params::UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Current_location                                                 (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     Delta                                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class FName                        BubbleSystemTag                                                  (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           Local_bubble_system_ref                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Has_Existing_Bubble_System                                       (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue    (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsActive_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBP_PrimalWindSourceComponent_Base_C::Creating_Bubbles_Code(struct FVector* Current_location, class UNiagaraComponent* Local_bubble_system_ref, bool Has_Existing_Bubble_System, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>* Temp_object_Variable, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Creating Bubbles Code");

	Params::UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params Parms{};

	Parms.Local_bubble_system_ref = Local_bubble_system_ref;
	Parms.Has_Existing_Bubble_System = Has_Existing_Bubble_System;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_location != nullptr)
		*Current_location = std::move(Parms.Current_location);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_SphereTraceMulti_OutHits != nullptr)
		*CallFunc_SphereTraceMulti_OutHits = std::move(Parms.CallFunc_SphereTraceMulti_OutHits);

	if (CallFunc_SphereTraceMulti_ReturnValue != nullptr)
		*CallFunc_SphereTraceMulti_ReturnValue = Parms.CallFunc_SphereTraceMulti_ReturnValue;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable                                             (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Round_ReturnValue                                       (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue_1                                     (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_1                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_2                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class USoundBase*                  Temp_object_Variable_3                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class USoundBase*                  Temp_object_Variable_4                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_5                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_6                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_7                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class USoundBase*                  Temp_object_Variable_8                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class USoundBase*                  Temp_object_Variable_9                                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_10                                          (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

double UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, const struct FVector& OwnerVelocity, class USoundBase** Temp_object_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase** Temp_object_Variable_1, class USoundBase** Temp_object_Variable_2, class USoundBase** Temp_object_Variable_3, class USoundBase** Temp_object_Variable_4, int32* Temp_int_Variable, class USoundBase** Temp_object_Variable_5, class USoundBase** Temp_object_Variable_6, class USoundBase** Temp_object_Variable_7, class USoundBase** Temp_object_Variable_8, class USoundBase** Temp_object_Variable_9, class USoundBase* K2Node_Select_Default, class USoundBase** Temp_object_Variable_10, int32* Temp_int_Variable_1, class USoundBase* K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffectSound");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	if (Temp_object_Variable_2 != nullptr)
		*Temp_object_Variable_2 = Parms.Temp_object_Variable_2;

	if (Temp_object_Variable_3 != nullptr)
		*Temp_object_Variable_3 = Parms.Temp_object_Variable_3;

	if (Temp_object_Variable_4 != nullptr)
		*Temp_object_Variable_4 = Parms.Temp_object_Variable_4;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_object_Variable_5 != nullptr)
		*Temp_object_Variable_5 = Parms.Temp_object_Variable_5;

	if (Temp_object_Variable_6 != nullptr)
		*Temp_object_Variable_6 = Parms.Temp_object_Variable_6;

	if (Temp_object_Variable_7 != nullptr)
		*Temp_object_Variable_7 = Parms.Temp_object_Variable_7;

	if (Temp_object_Variable_8 != nullptr)
		*Temp_object_Variable_8 = Parms.Temp_object_Variable_8;

	if (Temp_object_Variable_9 != nullptr)
		*Temp_object_Variable_9 = Parms.Temp_object_Variable_9;

	if (Temp_object_Variable_10 != nullptr)
		*Temp_object_Variable_10 = Parms.Temp_object_Variable_10;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_SetVariableVec3_InValue_ImplicitCast                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_A_ImplicitCast                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, const struct FVector& OwnerVelocity, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffect");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_A_ImplicitCast = CallFunc_Multiply_VectorVector_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_VTraceSingleBP_OutHit != nullptr)
		*CallFunc_VTraceSingleBP_OutHit = std::move(Parms.CallFunc_VTraceSingleBP_OutHit);

	if (CallFunc_VTraceSingleBP_ReturnValue != nullptr)
		*CallFunc_VTraceSingleBP_ReturnValue = Parms.CallFunc_VTraceSingleBP_ReturnValue;

	if (CallFunc_SetVariableVec3_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableVec3_InValue_ImplicitCast = std::move(Parms.CallFunc_SetVariableVec3_InValue_ImplicitCast);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector3f                   K2Node_VariableSet_CurrentVelocity_ImplicitCast                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     K2Node_VariableSet_actor_velocity_prev_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_A_ImplicitCast                    (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

double UBP_PrimalWindSourceComponent_Base_C::Calc_velocity(bool CallFunc_Less_DoubleDouble_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "calc_velocity");

	Params::UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params Parms{};

	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_CurrentVelocity_ImplicitCast = K2Node_VariableSet_CurrentVelocity_ImplicitCast;
	Parms.K2Node_VariableSet_actor_velocity_prev_ImplicitCast = K2Node_VariableSet_actor_velocity_prev_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (CallFunc_Subtract_VectorVector_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_2 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_2);

	if (CallFunc_Subtract_VectorVector_A_ImplicitCast != nullptr)
		*CallFunc_Subtract_VectorVector_A_ImplicitCast = std::move(Parms.CallFunc_Subtract_VectorVector_A_ImplicitCast);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.event_loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::Event_loop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "event_loop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPExitedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPExitedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactingFluidSurfaceTick(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactingFluidSurfaceTick");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPHandleCreatingBubbles
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::BPHandleCreatingBubbles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPHandleCreatingBubbles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPDeactivateBubbleComponent
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::BPDeactivateBubbleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPDeactivateBubbleComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.ExecuteUbergraph_BP_PrimalWindSourceComponent_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation_2                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              K2Node_Event_penetrationScalar_2                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     K2Node_Event_impactLocation_1                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_Event_penetrationScalar_1                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Fraction_ReturnValue                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_penetrationScalar                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

double UBP_PrimalWindSourceComponent_Base_C::ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32* EntryPoint, const struct FVector& K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, const struct FVector& K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "ExecuteUbergraph_BP_PrimalWindSourceComponent_Base");

	Params::UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params Parms{};

	Parms.K2Node_Event_impactLocation_2 = K2Node_Event_impactLocation_2;
	Parms.K2Node_Event_penetrationScalar_2 = K2Node_Event_penetrationScalar_2;
	Parms.K2Node_Event_impactLocation_1 = K2Node_Event_impactLocation_1;
	Parms.K2Node_Event_penetrationScalar_1 = K2Node_Event_penetrationScalar_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.K2Node_Event_impactLocation = K2Node_Event_impactLocation;
	Parms.K2Node_Event_penetrationScalar = K2Node_Event_penetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


