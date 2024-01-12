#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
// (Actor)

class UClass* AWeapClimbPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapClimbPick_C");

	return Clss;
}


// WeapClimbPick_C WeapClimbPick.Default__WeapClimbPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapClimbPick_C* AWeapClimbPick_C::GetDefaultObj()
{
	static class AWeapClimbPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapClimbPick_C*>(AWeapClimbPick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponAnim                 Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              InPlayRate                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPlayBothFirstAndThirdPerson                                     (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReplicate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicateToInstigator                                           (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bPauseOnFinish1P                                                 (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseAndServerUpdateMesh                                (ConstParm, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseOnServer                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};

	Parms.Animation = Animation;
	Parms.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	Parms.bForceTickPoseOnServer = bForceTickPoseOnServer;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAuthority_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool AWeapClimbPick_C::StartUnequipEvent(struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "StartUnequipEvent");

	Params::AWeapClimbPick_C_StartUnequipEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGroundLocation_theGroundLoc != nullptr)
		*CallFunc_GetGroundLocation_theGroundLoc = std::move(Parms.CallFunc_GetGroundLocation_theGroundLoc);

	if (CallFunc_GetGroundLocation_ReturnValue != nullptr)
		*CallFunc_GetGroundLocation_ReturnValue = Parms.CallFunc_GetGroundLocation_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFOV                                                            (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

double AWeapClimbPick_C::BPModifyFOV(double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     NewSourcePoint                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool AWeapClimbPick_C::SetSourceLocation(class UParticleSystemComponent** Particle_System, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Particle_System != nullptr)
		*Particle_System = Parms.Particle_System;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class UParticleSystem*             New_Template                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void AWeapClimbPick_C::SetTemplateTo(class UParticleSystemComponent** Particle_System, class UParticleSystem** New_Template, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetTemplateTo");

	Params::AWeapClimbPick_C_SetTemplateTo_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Particle_System != nullptr)
		*Particle_System = Parms.Particle_System;

	if (New_Template != nullptr)
		*New_Template = Parms.New_Template;

}


// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bClimbing                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorPosition                                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorNormal                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanClimb                                                        (ExportObject, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanLand                                                         (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbLocation                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbNormal                                                      (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bHudVisible                                                      (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     SourceTangent                                                    (BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (ExportObject, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (Edit, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference, Interp)
// uint8                              Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (Edit, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (ExportObject, Net, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)

bool AWeapClimbPick_C::BPUpdateClimbTarget(float DeltaSeconds, struct FVector* SourceTangent, struct FVector* CallFunc_GetViewDirection_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, struct FVector* CallFunc_GetViewLocation_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue_1, uint8 Temp_byte_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, struct FVector* K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue_1 = CallFunc_VInterpTo_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast = CallFunc_VInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast = CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast;
	Parms.CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast = CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceTangent != nullptr)
		*SourceTangent = std::move(Parms.SourceTangent);

	if (CallFunc_GetViewDirection_ReturnValue != nullptr)
		*CallFunc_GetViewDirection_ReturnValue = std::move(Parms.CallFunc_GetViewDirection_ReturnValue);

	if (CallFunc_K2_GetComponentLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue);

	if (CallFunc_K2_GetComponentRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentRotation_ReturnValue);

	if (CallFunc_GetViewLocation_ReturnValue != nullptr)
		*CallFunc_GetViewLocation_ReturnValue = std::move(Parms.CallFunc_GetViewLocation_ReturnValue);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_GetActorRightVector_ReturnValue != nullptr)
		*CallFunc_GetActorRightVector_ReturnValue = std::move(Parms.CallFunc_GetActorRightVector_ReturnValue);

	if (CallFunc_K2_GetComponentLocation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1);

	if (CallFunc_Dot_VectorVector_ReturnValue != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue = Parms.CallFunc_Dot_VectorVector_ReturnValue;

	if (CallFunc_GetActorUpVector_ReturnValue != nullptr)
		*CallFunc_GetActorUpVector_ReturnValue = std::move(Parms.CallFunc_GetActorUpVector_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_Dot_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue_1 = Parms.CallFunc_Dot_VectorVector_ReturnValue_1;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);

	if (CallFunc_GetActorUpVector_ReturnValue_1 != nullptr)
		*CallFunc_GetActorUpVector_ReturnValue_1 = std::move(Parms.CallFunc_GetActorUpVector_ReturnValue_1);

	if (CallFunc_K2_GetComponentRotation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetComponentRotation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_K2_GetComponentLocation_ReturnValue_2 != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue_2 = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2);

	return Parms.ReturnValue;

}

}


