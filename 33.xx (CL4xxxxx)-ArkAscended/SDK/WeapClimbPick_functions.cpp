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
// struct FWeaponAnim                 Animation                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
// float                              InPlayRate                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPlayBothFirstAndThirdPerson                                     (BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicate                                                       (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicateToInstigator                                           (BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bPauseOnFinish1P                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseAndServerUpdateMesh                                (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseOnServer                                           (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(struct FWeaponAnim* Animation, float* InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};

	Parms.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
	Parms.bReplicate = bReplicate;
	Parms.bReplicateToInstigator = bReplicateToInstigator;
	Parms.bPauseOnFinish1P = bPauseOnFinish1P;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Animation != nullptr)
		*Animation = std::move(Parms.Animation);

	if (InPlayRate != nullptr)
		*InPlayRate = Parms.InPlayRate;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAuthority_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool AWeapClimbPick_C::StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "StartUnequipEvent");

	Params::AWeapClimbPick_C_StartUnequipEvent_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFOV                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float AWeapClimbPick_C::BPModifyFOV(float InFOV, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.InFOV = InFOV;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     NewSourcePoint                                                   (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 AWeapClimbPick_C::SetSourceLocation(const struct FVector& NewSourcePoint, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};

	Parms.NewSourcePoint = NewSourcePoint;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UParticleSystem*             New_Template                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool AWeapClimbPick_C::SetTemplateTo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetTemplateTo");

	Params::AWeapClimbPick_C_SetTemplateTo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bClimbing                                                        (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AnchorPosition                                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AnchorNormal                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanClimb                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanLand                                                         (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ClimbLocation                                                    (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ClimbNormal                                                      (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bHudVisible                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     SourceTangent                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ConstParm, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (ConstParm, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// uint8                              Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

float AWeapClimbPick_C::BPUpdateClimbTarget(float* DeltaSeconds, bool* bClimbing, struct FVector* AnchorPosition, struct FVector* AnchorNormal, bool* bCanClimb, bool* bCanLand, struct FVector* ClimbLocation, struct FVector* ClimbNormal, bool* bHudVisible, struct FVector* SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_VInterpTo_ReturnValue_1, uint8 Temp_byte_Variable, const struct FVector& K2Node_Select_Default, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.CallFunc_IsClimbingHanging_ReturnValue = CallFunc_IsClimbingHanging_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

	if (bClimbing != nullptr)
		*bClimbing = Parms.bClimbing;

	if (AnchorPosition != nullptr)
		*AnchorPosition = std::move(Parms.AnchorPosition);

	if (AnchorNormal != nullptr)
		*AnchorNormal = std::move(Parms.AnchorNormal);

	if (bCanClimb != nullptr)
		*bCanClimb = Parms.bCanClimb;

	if (bCanLand != nullptr)
		*bCanLand = Parms.bCanLand;

	if (ClimbLocation != nullptr)
		*ClimbLocation = std::move(Parms.ClimbLocation);

	if (ClimbNormal != nullptr)
		*ClimbNormal = std::move(Parms.ClimbNormal);

	if (bHudVisible != nullptr)
		*bHudVisible = Parms.bHudVisible;

	if (SourceTangent != nullptr)
		*SourceTangent = std::move(Parms.SourceTangent);

	if (CallFunc_VInterpTo_ReturnValue != nullptr)
		*CallFunc_VInterpTo_ReturnValue = std::move(Parms.CallFunc_VInterpTo_ReturnValue);

	if (CallFunc_K2_SetWorldLocation_SweepHitResult != nullptr)
		*CallFunc_K2_SetWorldLocation_SweepHitResult = std::move(Parms.CallFunc_K2_SetWorldLocation_SweepHitResult);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_VInterpTo_ReturnValue_1 != nullptr)
		*CallFunc_VInterpTo_ReturnValue_1 = std::move(Parms.CallFunc_VInterpTo_ReturnValue_1);

	if (CallFunc_K2_SetWorldLocation_SweepHitResult_1 != nullptr)
		*CallFunc_K2_SetWorldLocation_SweepHitResult_1 = std::move(Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	return Parms.ReturnValue;

}

}


