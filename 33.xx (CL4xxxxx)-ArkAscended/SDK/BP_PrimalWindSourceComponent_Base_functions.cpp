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
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

class FString UBP_PrimalWindSourceComponent_Base_C::Get_Bubble_System_Tag(class FName ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Get Bubble System Tag");

	Params::UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BubbleSystemTag                                                  (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UBP_PrimalWindSourceComponent_Base_C::Deactivate_bubble_system(class FName BubbleSystemTag, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "deactivate bubble system");

	Params::UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params Parms{};

	Parms.BubbleSystemTag = BubbleSystemTag;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Get_Bubble_System_Tag_ReturnValue = CallFunc_Get_Bubble_System_Tag_ReturnValue;
	Parms.CallFunc_GetComponentsByCustomTag_ReturnValue = CallFunc_GetComponentsByCustomTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsNiagara_Particle_System_Component != nullptr)
		*K2Node_DynamicCast_AsNiagara_Particle_System_Component = Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Current_location                                                 (Edit, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     Delta                                                            (ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        BubbleSystemTag                                                  (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UNiagaraComponent*           Local_bubble_system_ref                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Has_Existing_Bubble_System                                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue    (EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsActive_ReturnValue                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

float UBP_PrimalWindSourceComponent_Base_C::Creating_Bubbles_Code(struct FVector* Current_location, class FName BubbleSystemTag, class UNiagaraComponent* Local_bubble_system_ref, bool* Has_Existing_Bubble_System, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector& CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Creating Bubbles Code");

	Params::UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params Parms{};

	Parms.BubbleSystemTag = BubbleSystemTag;
	Parms.Local_bubble_system_ref = Local_bubble_system_ref;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_Bubble_System_Tag_ReturnValue = CallFunc_Get_Bubble_System_Tag_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue = CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue;
	Parms.CallFunc_GetComponentsByCustomTag_ReturnValue = CallFunc_GetComponentsByCustomTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_location != nullptr)
		*Current_location = std::move(Parms.Current_location);

	if (Has_Existing_Bubble_System != nullptr)
		*Has_Existing_Bubble_System = Parms.Has_Existing_Bubble_System;

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_AsNiagara_Particle_System_Component != nullptr)
		*K2Node_DynamicCast_AsNiagara_Particle_System_Component = Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundBase*                  Temp_object_Variable                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Round_ReturnValue                                       (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue_1                                     (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_1                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_2                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class USoundBase*                  Temp_object_Variable_3                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class USoundBase*                  Temp_object_Variable_4                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_5                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_6                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_7                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class USoundBase*                  Temp_object_Variable_8                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class USoundBase*                  Temp_object_Variable_9                                           (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class USoundBase*                  K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_10                                          (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

double UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffectSound(float* PenetrationScalar, struct FVector* ImpactLocation, const struct FVector& OwnerVelocity, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffectSound");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params Parms{};

	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PenetrationScalar != nullptr)
		*PenetrationScalar = Parms.PenetrationScalar;

	if (ImpactLocation != nullptr)
		*ImpactLocation = std::move(Parms.ImpactLocation);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_SetVariableVec3_InValue_ImplicitCast                    (ConstParm, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_A_ImplicitCast                    (ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffect(float* PenetrationScalar, struct FVector* ImpactLocation, const struct FVector& OwnerVelocity, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, struct FVector* CallFunc_Multiply_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffect");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params Parms{};

	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PenetrationScalar != nullptr)
		*PenetrationScalar = Parms.PenetrationScalar;

	if (ImpactLocation != nullptr)
		*ImpactLocation = std::move(Parms.ImpactLocation);

	if (CallFunc_VTraceSingleBP_OutHit != nullptr)
		*CallFunc_VTraceSingleBP_OutHit = std::move(Parms.CallFunc_VTraceSingleBP_OutHit);

	if (CallFunc_VTraceSingleBP_ReturnValue != nullptr)
		*CallFunc_VTraceSingleBP_ReturnValue = Parms.CallFunc_VTraceSingleBP_ReturnValue;

	if (CallFunc_SetVariableVec3_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableVec3_InValue_ImplicitCast = std::move(Parms.CallFunc_SetVariableVec3_InValue_ImplicitCast);

	if (CallFunc_Multiply_VectorVector_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_VectorVector_A_ImplicitCast = std::move(Parms.CallFunc_Multiply_VectorVector_A_ImplicitCast);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector3f                   K2Node_VariableSet_CurrentVelocity_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     K2Node_VariableSet_actor_velocity_prev_ImplicitCast              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_A_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "calc_velocity");

	Params::UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params Parms{};

	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
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
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactLocation != nullptr)
		*ImpactLocation = std::move(Parms.ImpactLocation);

	if (PenetrationScalar != nullptr)
		*PenetrationScalar = Parms.PenetrationScalar;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPExitedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPExitedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactLocation != nullptr)
		*ImpactLocation = std::move(Parms.ImpactLocation);

	if (PenetrationScalar != nullptr)
		*PenetrationScalar = Parms.PenetrationScalar;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactingFluidSurfaceTick(struct FVector* ImpactLocation, float* PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactingFluidSurfaceTick");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactLocation != nullptr)
		*ImpactLocation = std::move(Parms.ImpactLocation);

	if (PenetrationScalar != nullptr)
		*PenetrationScalar = Parms.PenetrationScalar;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation_2                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// float                              K2Node_Event_penetrationScalar_2                                 (ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FVector                     K2Node_Event_impactLocation_1                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// float                              K2Node_Event_penetrationScalar_1                                 (ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Fraction_ReturnValue                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              K2Node_Event_penetrationScalar                                   (ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

double UBP_PrimalWindSourceComponent_Base_C::ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32 EntryPoint, struct FVector* K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, struct FVector* K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, double CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, struct FVector* K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "ExecuteUbergraph_BP_PrimalWindSourceComponent_Base");

	Params::UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_penetrationScalar_2 = K2Node_Event_penetrationScalar_2;
	Parms.K2Node_Event_penetrationScalar_1 = K2Node_Event_penetrationScalar_1;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.K2Node_Event_penetrationScalar = K2Node_Event_penetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_impactLocation_2 != nullptr)
		*K2Node_Event_impactLocation_2 = std::move(Parms.K2Node_Event_impactLocation_2);

	if (K2Node_Event_impactLocation_1 != nullptr)
		*K2Node_Event_impactLocation_1 = std::move(Parms.K2Node_Event_impactLocation_1);

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (K2Node_Event_impactLocation != nullptr)
		*K2Node_Event_impactLocation = std::move(Parms.K2Node_Event_impactLocation);

	return Parms.ReturnValue;

}

}


