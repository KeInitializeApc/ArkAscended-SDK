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
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)

class FName UBP_PrimalWindSourceComponent_Base_C::Get_Bubble_System_Tag(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Get Bubble System Tag");

	Params::UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BubbleSystemTag                                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (BlueprintVisible, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBP_PrimalWindSourceComponent_Base_C::Deactivate_bubble_system(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "deactivate bubble system");

	Params::UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Current_location                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     Delta                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// class FName                        BubbleSystemTag                                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, SubobjectReference)
// class UNiagaraComponent*           Local_bubble_system_ref                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               Has_Existing_Bubble_System                                       (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (BlueprintVisible, Net, ZeroConstructor, ReturnParm, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (BlueprintVisible, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue    (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (BlueprintVisible, OutParm, ReturnParm, SubobjectReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsActive_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)

float UBP_PrimalWindSourceComponent_Base_C::Creating_Bubbles_Code(const TArray<class AActor*>& Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Creating Bubbles Code");

	Params::UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, DisableEditOnTemplate, SubobjectReference)
// class USoundBase*                  Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
// int32                              CallFunc_Round_ReturnValue                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable_2                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
// class USoundBase*                  Temp_object_Variable_3                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
// class USoundBase*                  Temp_object_Variable_4                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_5                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_6                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp, NonTransactional)
// class USoundBase*                  Temp_object_Variable_7                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, EditorOnly)
// class USoundBase*                  Temp_object_Variable_8                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, EditorOnly)
// class USoundBase*                  Temp_object_Variable_9                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp, EditorOnly)
// class USoundBase*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_10                                          (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// class USoundBase*                  K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference, Interp)

double UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, const struct FVector& OwnerVelocity, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase** K2Node_Select_Default, class USoundBase* Temp_object_Variable_10, class USoundBase** K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffectSound");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;

	UObject::ProcessEvent(Func, &Parms);

	if (Exited != nullptr)
		*Exited = Parms.Exited;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ImpactLocation                                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Exited                                                           (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     OwnerVelocity                                                    (ConstParm, DisableEditOnTemplate, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_SetVariableVec3_InValue_ImplicitCast                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_A_ImplicitCast                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, const struct FVector& OwnerVelocity, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffect");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.OwnerVelocity = OwnerVelocity;

	UObject::ProcessEvent(Func, &Parms);

	if (Exited != nullptr)
		*Exited = Parms.Exited;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector3f                   K2Node_VariableSet_CurrentVelocity_ImplicitCast                  (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     K2Node_VariableSet_actor_velocity_prev_ImplicitCast              (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_A_ImplicitCast                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)

struct FVector UBP_PrimalWindSourceComponent_Base_C::Calc_velocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "calc_velocity");

	Params::UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// struct FVector                     ImpactLocation                                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector                     ImpactLocation                                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector                     ImpactLocation                                                   (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              PenetrationScalar                                                (ConstParm, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation_2                                    (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
// float                              K2Node_Event_penetrationScalar_2                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
// struct FVector                     K2Node_Event_impactLocation_1                                    (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// float                              K2Node_Event_penetrationScalar_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Fraction_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (Edit, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// struct FVector                     K2Node_Event_impactLocation                                      (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              K2Node_Event_penetrationScalar                                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)

float UBP_PrimalWindSourceComponent_Base_C::ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "ExecuteUbergraph_BP_PrimalWindSourceComponent_Base");

	Params::UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


