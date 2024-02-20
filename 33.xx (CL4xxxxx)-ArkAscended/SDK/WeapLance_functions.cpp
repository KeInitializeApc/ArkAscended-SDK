#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapLance.WeapLance_C
// (Actor)

class UClass* AWeapLance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapLance_C");

	return Clss;
}


// WeapLance_C WeapLance.Default__WeapLance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapLance_C* AWeapLance_C::GetDefaultObj()
{
	static class AWeapLance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapLance_C*>(AWeapLance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapLance.WeapLance_C.DoTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Start                                                            (Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector                     End                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool AWeapLance_C::DoTrace(const TArray<class AActor*>& Temp_object_Variable, const TArray<class AActor*>& Temp_object_Variable_1, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoTrace");

	Params::AWeapLance_C_DoTrace_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakHitResult_bBlockingHit != nullptr)
		*CallFunc_BreakHitResult_bBlockingHit = Parms.CallFunc_BreakHitResult_bBlockingHit;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapLance.WeapLance_C.DamageActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FHitResult                  HitInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               bIsDino                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             Temp_real_Variable                                               (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsBroken_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_GetWeaponDamageMultiplier_ReturnValue                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (BlueprintVisible, EditFixedSize, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Option_0_ImplicitCast                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ApplyPointDamage_Impulse_ImplicitCast                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast                (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float AWeapLance_C::DamageActor(bool* Temp_bool_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, double Temp_real_Variable, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DamageActor");

	Params::AWeapLance_C_DamageActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;

	return Parms.ReturnValue;

}


// Function WeapLance.WeapLance_C.DoTraceAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

struct FVector AWeapLance_C::DoTraceAttacks(bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue_1, struct FVector* CallFunc_GetSocketLocation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoTraceAttacks");

	Params::AWeapLance_C_DoTraceAttacks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetSocketLocation_ReturnValue != nullptr)
		*CallFunc_GetSocketLocation_ReturnValue = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue);

	if (CallFunc_GetSocketLocation_ReturnValue_1 != nullptr)
		*CallFunc_GetSocketLocation_ReturnValue_1 = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue_1);

	if (CallFunc_GetSocketLocation_ReturnValue_2 != nullptr)
		*CallFunc_GetSocketLocation_ReturnValue_2 = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue_2);

	return Parms.ReturnValue;

}


// Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void AWeapLance_C::BPForceTPVTargetingAnimation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPForceTPVTargetingAnimation");

	Params::AWeapLance_C_BPForceTPVTargetingAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.ReceiveTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue                     (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_ModifyCurrentStatusValue_ReturnValue                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast            (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double AWeapLance_C::ReceiveTick(bool* CallFunc_IsFirstPerson_ReturnValue, bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, double* K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "ReceiveTick");

	Params::AWeapLance_C_ReceiveTick_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function WeapLance.WeapLance_C.BPHandleMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::BPHandleMeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPHandleMeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.BPStopMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::BPStopMeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPStopMeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DoPlayStartAttackingSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DoPlayStartAttackingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoPlayStartAttackingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DoPlayStopAttackingSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DoPlayStopAttackingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoPlayStopAttackingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DidDismountHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DidDismountHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DidDismountHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsLocallyOwned_ReturnValue                              (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FWeaponAnim                 K2Node_MakeStruct_WeaponAnim                                     (Edit, BlueprintVisible, Net, Parm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (BlueprintVisible, EditFixedSize, ReturnParm, Transient, SubobjectReference)

float AWeapLance_C::ExecuteUbergraph_WeapLance(const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "ExecuteUbergraph_WeapLance");

	Params::AWeapLance_C_ExecuteUbergraph_WeapLance_Params Parms{};

	Parms.K2Node_MakeStruct_WeaponAnim = K2Node_MakeStruct_WeaponAnim;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue = CallFunc_PlayWeaponAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


