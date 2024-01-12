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
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FName UBP_PrimalWindSourceComponent_Base_C::Get_Bubble_System_Tag(const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Get Bubble System Tag");

	Params::UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BubbleSystemTag                                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBP_PrimalWindSourceComponent_Base_C::Deactivate_bubble_system(int32 CallFunc_Add_IntInt_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UActorComponent** CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "deactivate bubble system");

	Params::UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Current_location                                                 (ConstParm, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Delta                                                            (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        BubbleSystemTag                                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           Local_bubble_system_ref                                          (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Has_Existing_Bubble_System                                       (ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (Edit, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue    (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsActive_ReturnValue                                    (BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)

bool UBP_PrimalWindSourceComponent_Base_C::Creating_Bubbles_Code(struct FVector* Current_location, const struct FVector& Delta, class UNiagaraComponent* Local_bubble_system_ref, bool Has_Existing_Bubble_System, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<class AActor*>* Temp_object_Variable, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UActorComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Creating Bubbles Code");

	Params::UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params Parms{};

	Parms.Delta = Delta;
	Parms.Local_bubble_system_ref = Local_bubble_system_ref;
	Parms.Has_Existing_Bubble_System = Has_Existing_Bubble_System;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_location != nullptr)
		*Current_location = std::move(Parms.Current_location);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_SphereTraceMulti_OutHits != nullptr)
		*CallFunc_SphereTraceMulti_OutHits = std::move(Parms.CallFunc_SphereTraceMulti_OutHits);

	if (CallFunc_SphereTraceMulti_ReturnValue != nullptr)
		*CallFunc_SphereTraceMulti_ReturnValue = Parms.CallFunc_SphereTraceMulti_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Round_ReturnValue                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue_1                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_2                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class USoundBase*                  Temp_object_Variable_3                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class USoundBase*                  Temp_object_Variable_4                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_5                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_6                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_7                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class USoundBase*                  Temp_object_Variable_8                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class USoundBase*                  Temp_object_Variable_9                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class USoundBase*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_10                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)

double UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffectSound(bool Exited, const struct FVector& OwnerVelocity, class USoundBase** Temp_object_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase** Temp_object_Variable_1, class USoundBase** Temp_object_Variable_2, class USoundBase** Temp_object_Variable_3, class USoundBase** Temp_object_Variable_4, int32* Temp_int_Variable, class USoundBase** Temp_object_Variable_5, class USoundBase** Temp_object_Variable_6, class USoundBase** Temp_object_Variable_7, class USoundBase** Temp_object_Variable_8, class USoundBase** Temp_object_Variable_9, class USoundBase** K2Node_Select_Default, class USoundBase** Temp_object_Variable_10, int32* Temp_int_Variable_1, class USoundBase** K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffectSound");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params Parms{};

	Parms.Exited = Exited;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
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

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (Temp_object_Variable_10 != nullptr)
		*Temp_object_Variable_10 = Parms.Temp_object_Variable_10;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_SetVariableVec3_InValue_ImplicitCast                    (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_A_ImplicitCast                    (ConstParm, Parm, Config, DisableEditOnInstance, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffect(bool Exited, const struct FVector& OwnerVelocity, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffect");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params Parms{};

	Parms.Exited = Exited;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_A_ImplicitCast = CallFunc_Multiply_VectorVector_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Edit, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector3f                   K2Node_VariableSet_CurrentVelocity_ImplicitCast                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_VariableSet_actor_velocity_prev_ImplicitCast              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_A_ImplicitCast                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "calc_velocity");

	Params::UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params Parms{};

	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.K2Node_VariableSet_CurrentVelocity_ImplicitCast = K2Node_VariableSet_CurrentVelocity_ImplicitCast;
	Parms.K2Node_VariableSet_actor_velocity_prev_ImplicitCast = K2Node_VariableSet_actor_velocity_prev_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

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
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

float UBP_PrimalWindSourceComponent_Base_C::BPImpactedFluidSurface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

float UBP_PrimalWindSourceComponent_Base_C::BPExitedFluidSurface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPExitedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

float UBP_PrimalWindSourceComponent_Base_C::BPImpactingFluidSurfaceTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactingFluidSurfaceTick");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation_2                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              K2Node_Event_penetrationScalar_2                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     K2Node_Event_impactLocation_1                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Event_penetrationScalar_1                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Fraction_ReturnValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation                                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_penetrationScalar                                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

double UBP_PrimalWindSourceComponent_Base_C::ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(const struct FVector& K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, const struct FVector& K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "ExecuteUbergraph_BP_PrimalWindSourceComponent_Base");

	Params::UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params Parms{};

	Parms.K2Node_Event_impactLocation_2 = K2Node_Event_impactLocation_2;
	Parms.K2Node_Event_penetrationScalar_2 = K2Node_Event_penetrationScalar_2;
	Parms.K2Node_Event_impactLocation_1 = K2Node_Event_impactLocation_1;
	Parms.K2Node_Event_penetrationScalar_1 = K2Node_Event_penetrationScalar_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.K2Node_Event_impactLocation = K2Node_Event_impactLocation;
	Parms.K2Node_Event_penetrationScalar = K2Node_Event_penetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}

}


